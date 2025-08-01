#include "icvar.h"
#include <map>
#include <string>
#include <sstream>
#include <fstream>
#include <vector>

CON_COMMAND(cvar_unhide, "")
{
	uint64 flagsToRemove = (FCVAR_HIDDEN | FCVAR_DEVELOPMENTONLY | FCVAR_DEFENSIVE);
	int unhiddenConCmds = 0;
	int unhiddenConVars = 0;

	ConCommandRef cmdHandle{};
	auto invalidConcmd = g_pCVar->GetConCommandData(cmdHandle);
	uint16 cmdIdx = 0;
	for (;;)
	{
		cmdHandle = ConCommandRef(cmdIdx++);
		auto concmd = g_pCVar->GetConCommandData(cmdHandle);
		if (concmd == invalidConcmd)
			break;

		if (concmd->GetFlags() & flagsToRemove)
		{
			Msg("- %s\n", concmd->GetName());
			concmd->RemoveFlags(flagsToRemove);
			unhiddenConCmds++;
		}
	}
	ConColorMsg(Color(255, 0, 255, 255), "Removed hidden flags from %d concommands\n", unhiddenConCmds);

	ConVarRef cvarHandle{};
	auto invalidCvar = g_pCVar->GetConVarData(cvarHandle);
	uint16 cvarIdx = 0;
	for (;;)
	{
		cvarHandle = ConVarRef(cvarIdx++);
		auto convar = g_pCVar->GetConVarData(cvarHandle);
		if (convar == invalidCvar)
			break;

		if (convar->GetFlags() & flagsToRemove)
		{
			Msg("- %s\n", convar->GetName());
			convar->RemoveFlags(flagsToRemove);
			unhiddenConVars++;
		}
	}
	ConColorMsg(Color(255, 0, 255, 255), "Removed hidden flags from %d cvars\n", unhiddenConVars);
}

void string_replace(std::string& data, std::string toSearch, std::string replaceStr)
{
	// Get the first occurrence
	size_t pos = data.find(toSearch);

	// Repeat till end is reached
	while (pos != std::string::npos)
	{
		// Replace this occurrence of Sub String
		data.replace(pos, toSearch.size(), replaceStr);
		// Get the next occurrence from the current position
		pos = data.find(toSearch, pos + replaceStr.size());
	}
}
struct ConEntry_t
{
	ConEntry_t() : pszName(nullptr), defaultValue(nullptr), conVarType(EConVarType_Invalid), flags(0), pszDescription(nullptr)
	{
	}

	ConEntry_t(const char* pszName, const CVValue_t* defaultValue, EConVarType conVarType, int flags, const char* pszDescription) : pszName(pszName), defaultValue(defaultValue), conVarType(conVarType), flags(flags), pszDescription(pszDescription)
	{
	}

	const char* pszName;
	const CVValue_t* defaultValue;
	EConVarType conVarType;
	int flags;
	const char* pszDescription;
};

std::string FormatCVValue(const CVValue_t& value, EConVarType type) {
	std::ostringstream oss;

	switch (type) {
	case EConVarType_Bool:
		return value.m_bValue ? "true" : "false";
	case EConVarType_Int16:
		oss << value.m_i16Value;
		break;
	case EConVarType_UInt16:
		oss << value.m_u16Value;
		break;
	case EConVarType_Int32:
		oss << value.m_i32Value;
		break;
	case EConVarType_UInt32:
		oss << value.m_u32Value;
		break;
	case EConVarType_Int64:
		oss << value.m_i64Value;
		break;
	case EConVarType_UInt64:
		oss << value.m_u64Value;
		break;
	case EConVarType_Float32:
		oss << value.m_fl32Value;
		break;
	case EConVarType_Float64:
		oss << value.m_fl64Value;
		break;
	case EConVarType_String:
		oss << (value.m_StringValue != nullptr ? value.m_StringValue.Get() : "");
		break;
	case EConVarType_Color:
		oss << value.m_clrValue.r() << " " << value.m_clrValue.g() << " "
			<< value.m_clrValue.b() << " " << value.m_clrValue.a();
		break;
	case EConVarType_Vector2:
		oss << value.m_vec2Value.x << " " << value.m_vec2Value.y;
		break;
	case EConVarType_Vector3:
		oss << value.m_vec3Value.x << " " << value.m_vec3Value.y << " " << value.m_vec3Value.z;
		break;
	case EConVarType_Vector4:
		oss << value.m_vec4Value.x << " " << value.m_vec4Value.y << " " << value.m_vec4Value.z
			<< " " << value.m_vec4Value.w;
		break;
	case EConVarType_Qangle:
		oss << value.m_angValue.x << " " << value.m_angValue.y << " " << value.m_angValue.z;
		break;
	default:
		return "(unknown type)";
	}

	return oss.str();
}

static std::string ConvarFlagsString(int unFlags)
{
	std::vector<std::string> flags;

	if (unFlags & FCVAR_DEVELOPMENTONLY)
		flags.push_back("devonly");
	if (unFlags & FCVAR_GAMEDLL)
		flags.push_back("sv");
	if (unFlags & FCVAR_CLIENTDLL)
		flags.push_back("cl");
	if (unFlags & FCVAR_HIDDEN)
		flags.push_back("hidden");
	if (unFlags & FCVAR_PROTECTED)
		flags.push_back("prot");
	if (unFlags & FCVAR_SPONLY)
		flags.push_back("sp");
	if (unFlags & FCVAR_ARCHIVE)
		flags.push_back("a");
	if (unFlags & FCVAR_NOTIFY)
		flags.push_back("nf");
	if (unFlags & FCVAR_USERINFO)
		flags.push_back("user");
	//if (unFlags & FCVAR_REFERENCE)
	if (unFlags & FCVAR_UNLOGGED)
		flags.push_back("unlogged");
	//if (unFlags & FCVAR_INITIAL_SETVALUE)
	if (unFlags & FCVAR_REPLICATED)
		flags.push_back("rep");
	if (unFlags & FCVAR_CHEAT)
		flags.push_back("cheat");
	if (unFlags & FCVAR_PER_USER)
		flags.push_back("per_user");
	if (unFlags & FCVAR_DEMO)
		flags.push_back("demo");
	if (unFlags & FCVAR_DONTRECORD)
		flags.push_back("norecord");
	//if (unFlags & FCVAR_PERFORMING_CALLBACKS)
	if (unFlags & FCVAR_RELEASE)
		flags.push_back("release");
	//if (unFlags & FCVAR_MENUBAR_ITEM)
	//if (unFlags & FCVAR_COMMANDLINE_ENFORCED)
	if (unFlags & FCVAR_NOT_CONNECTED)
		flags.push_back("notconnected");
	//if (unFlags & FCVAR_VCONSOLE_FUZZY_MATCHING)
	if (unFlags & FCVAR_SERVER_CAN_EXECUTE)
		flags.push_back("server_can_execute");
	//if (unFlags & FCVAR_CLIENT_CAN_EXECUTE)
	if (unFlags & FCVAR_SERVER_CANNOT_QUERY)
		flags.push_back("server_cannot_query");
	if (unFlags & FCVAR_CLIENTCMD_CAN_EXECUTE)
		flags.push_back("clientcmd_can_execute");
	if (unFlags & FCVAR_EXECUTE_PER_TICK)
		flags.push_back("per_tick");

	std::string result;
	bool bFirst = true;

	for (auto flag : flags)
	{
		if (bFirst)
			bFirst = false;
		else
			result += ", ";

		result += flag;
	}

	return result;
}

std::string MarkdownEscape(const std::string& str)
{
	std::string escaped{ str };

	string_replace(escaped, "\\", "\\\\");
	string_replace(escaped, "<", "&lt;");
	string_replace(escaped, ">", "&gt;");
	string_replace(escaped, "[", "\\[");
	string_replace(escaped, "]", "\\]");
	string_replace(escaped, "\n", "<br>");
	string_replace(escaped, "|", "\\|");

	return escaped;
}

CON_COMMAND(cvarlist_md, "List all convars/concmds in Markdown format. Format: [hidden]")
{
	std::map<std::string, ConEntry_t> allEntries;

	ConCommandRef cmdHandle{};
	auto invalidConcmd = g_pCVar->GetConCommandData(cmdHandle);
	uint16 cmdIdx = 0;
	for (;;)
	{
		cmdHandle = ConCommandRef(cmdIdx++);
		auto concmd = g_pCVar->GetConCommandData(cmdHandle);
		if (concmd == invalidConcmd)
			break;

		allEntries[concmd->GetName()] = ConEntry_t(concmd->GetName(), nullptr, EConVarType_Invalid, concmd->GetFlags(), concmd->GetHelpText());
	}

	ConVarRef cvarHandle{};
	auto invalidCvar = g_pCVar->GetConVarData(cvarHandle);
	uint16 cvarIdx = 0;
	for (;;)
	{
		cvarHandle = ConVarRef(cvarIdx++);
		auto convar = g_pCVar->GetConVarData(cvarHandle);
		if (convar == invalidCvar)
			break;

		allEntries[convar->GetName()] = ConEntry_t(convar->GetName(), convar->DefaultValue(), convar->GetType(), convar->GetFlags(), convar->GetHelpText());
	}

	auto bShowHidden = !V_stricmp(args.Arg(1), "hidden");

	CUtlString outputPath(Plat_GetGameDirectory());
	outputPath.Append("\\csgo\\cvarlist.md");
	outputPath.FixSlashes();

	std::ofstream file(outputPath.GetForModify());

	file << "Name | Flags | Description\n";
	file << "---- | ----- | -----------\n";

	int nWritten = 0;
	for (auto& pair : allEntries)
	{
		const std::string& name = pair.first;
		auto cmd = pair.second;

		if (!bShowHidden && (cmd.flags & (FCVAR_DEVELOPMENTONLY | FCVAR_HIDDEN | FCVAR_DEFENSIVE)))
			continue;

		auto flagsStr = ConvarFlagsString(cmd.flags);
		auto helpText = MarkdownEscape(cmd.pszDescription);

		file << name << " | " << flagsStr << " | ";
		
		if (cmd.defaultValue != nullptr)
		{
			auto defaultValue = MarkdownEscape(FormatCVValue(*cmd.defaultValue, cmd.conVarType));
			file << "Default: " << defaultValue << "<br>";
		}
		
		file << helpText << "\n";
		nWritten++;
	}

	file.close();

	Msg("Wrote %d entries to %s\n", nWritten, outputPath.GetForModify());
}
