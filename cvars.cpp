#include "icvar.h"

static_assert(sizeof(ConCommandHandle) == 8, "unexpected size for ConCommandHandle");
static_assert(sizeof(ConVarHandle) == 8, "unexpected size for ConVarHandle");

static ConCommandRefAbstract cvar_unhide_ref;
static void cvar_unhide_callback(const CCommand& args);
ConCommand cvar_unhide(&cvar_unhide_ref, "cvar_unhide", cvar_unhide_callback);
static void cvar_unhide_callback(const CCommand& args)
{
	int64 flagsToRemove = (FCVAR_HIDDEN | FCVAR_DEVELOPMENTONLY | FCVAR_MISSING3);
	int unhiddenConCmds = 0;
	int unhiddenConVars = 0;

	auto handle = g_pCVar->FindFirstCommand();
	while (handle.IsValid())
	{
		auto concmd = g_pCVar->GetCommand(handle);
		if (concmd->m_nFlags & flagsToRemove)
		{
			Msg("- %s\n", concmd->m_pszName);
			concmd->m_nFlags &= ~flagsToRemove;
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
			Msg("- %s\n", convar->m_pszName);
			convar->flags &= ~flagsToRemove;
			unhiddenConVars++;
		}
		cvarHandle = g_pCVar->FindNextConVar(cvarHandle);
	}
	ConColorMsg(Color(255, 0, 255, 255), "Removed hidden flags from %d cvars\n", unhiddenConVars);
}
