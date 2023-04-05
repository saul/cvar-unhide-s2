#include "icvar.h"
#include "ihltvdirector.h"

static_assert(sizeof(ConCommandHandle) == 8, "unexpected size for ConCommandHandle");
static_assert(sizeof(ConVarHandle) == 8, "unexpected size for ConVarHandle");

ConCommandDesc_t cvar_unhide("cvar_unhide", [](const CCommandContext& context)
{
	int64 flagsToRemove = (FCVAR_HIDDEN | FCVAR_DEVELOPMENTONLY | FCVAR_MISSING3);
	int unhiddenConCmds = 0;
	int unhiddenConVars = 0;

	auto handle = g_pCVar->FindFirstCommand();
	while (handle.IsValid())
	{
		auto concmd = g_pCVar->GetConCommand(handle);
		if (concmd->flags & flagsToRemove)
		{
			Msg("- %s\n", concmd->name);
			concmd->flags &= ~flagsToRemove;
			unhiddenConCmds++;
		}
		handle = g_pCVar->FindNextCommand(handle);
	}
	ConColorMsg(Color(255, 0, 255, 255), "Removed hidden flags from %d concommands\n", unhiddenConCmds);

	auto cvarHandle = g_pCVar->FindFirstConVar();
	while (cvarHandle.IsValid())
	{
		auto convar = g_pCVar->GetConVar(cvarHandle);
		if (convar->flags & flagsToRemove)
		{
			Msg("- %s\n", convar->name);
			convar->flags &= ~flagsToRemove;
			unhiddenConVars++;
		}
		cvarHandle = g_pCVar->FindNextConVar(cvarHandle);
	}
	ConColorMsg(Color(255, 0, 255, 255), "Removed hidden flags from %d cvars\n", unhiddenConVars);
});
