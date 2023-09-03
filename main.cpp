#include "interface.h"
#include "appframework/IAppSystem.h"
#include "icvar.h"

ICvar* g_pCVar = NULL;
CreateInterfaceFn g_pfnServerCreateInterface = NULL;

extern ConCommand cvar_unhide;

typedef bool (*AppSystemConnectFn)(IAppSystem* appSystem, CreateInterfaceFn factory);
static AppSystemConnectFn g_pfnServerConfigConnect = NULL;

bool Connect(IAppSystem* appSystem, CreateInterfaceFn factory)
{
	auto result = g_pfnServerConfigConnect(appSystem, factory);

	g_pCVar = (ICvar*)factory("VEngineCvar007", NULL);
	g_pCVar->RegisterConCommand(&cvar_unhide);

	return result;
}

DLL_EXPORT void* CreateInterface(const char* pName, int* pReturnCode)
{
	if (g_pfnServerCreateInterface == NULL)
	{
		// Engine should stop joining VAC-secured servers with a modified gameinfo,
		// this is to be extra cautious.
		auto insecure = CommandLine()->HasParm("-insecure");
		if (!insecure)
		{
			Plat_FatalErrorFunc("Refusing to load in secure mode.\n\nAdd -insecure to Counter-Strike's launch options and restart the game.");
		}

		// Generate the path to the real server.dll
		CUtlString realServerPath(Plat_GetGameDirectory());
		realServerPath.Append("\\csgo\\bin\\win64\\server.dll");
		realServerPath.FixSlashes();

		HMODULE serverModule = LoadLibrary(realServerPath.GetForModify());
		g_pfnServerCreateInterface = (CreateInterfaceFn)GetProcAddress(serverModule, "CreateInterface");

		if (g_pfnServerCreateInterface == NULL)
		{
			Plat_FatalErrorFunc("Could not find CreateInterface entrypoint in server.dll: %d", GetLastError());
		}
	}

	auto original = g_pfnServerCreateInterface(pName, pReturnCode);

	// Intercept the first interface requested by the engine
	if (strcmp(pName, "Source2ServerConfig001") == 0)
	{
		auto vtable = *(void***)original;

		DWORD oldProtect = 0;
		if (!VirtualProtect(vtable, sizeof(void**), PAGE_EXECUTE_READWRITE, &oldProtect))
		{
			Plat_FatalErrorFunc("VirtualProtect PAGE_EXECUTE_READWRITE failed: %d", GetLastError());
		}

		// Intercept the Connect virtual method
		g_pfnServerConfigConnect = (AppSystemConnectFn)vtable[0];
		vtable[0] = &Connect;

		DWORD ignore = 0;
		if (!VirtualProtect(vtable, sizeof(void**), oldProtect, &ignore))
		{
			Plat_FatalErrorFunc("VirtualProtect restore failed: %d", GetLastError());
		}
	}

	return original;
}
