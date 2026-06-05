/*
 * This file is part of OpenTTD.
 * OpenTTD is free software; you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, version 2.
 * OpenTTD is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 * See the GNU General Public License for more details. You should have received a copy of the GNU General Public License along with OpenTTD. If not, see <https://www.gnu.org/licenses/old-licenses/gpl-2.0>.
 */

/* THIS FILE IS AUTO-GENERATED; PLEASE DO NOT ALTER MANUALLY */

#include "../script_group.hpp"
#include "../template/template_group.sq.hpp"


template <> SQInteger PushClassName<ScriptGroup, ScriptType::AI>(HSQUIRRELVM vm) { sq_pushstring(vm, "AIGroup"); return 1; }

void SQAIGroup_Register(Squirrel &engine)
{
	DefSQClass<ScriptGroup, ScriptType::AI> SQAIGroup("AIGroup");
	SQAIGroup.PreRegister(engine, "AIObject");

	SQAIGroup.DefSQConst(engine, ScriptGroup::GROUP_ALL,     "GROUP_ALL");
	SQAIGroup.DefSQConst(engine, ScriptGroup::GROUP_DEFAULT, "GROUP_DEFAULT");
	SQAIGroup.DefSQConst(engine, ScriptGroup::GROUP_INVALID, "GROUP_INVALID");

	SQAIGroup.DefSQStaticMethod(engine, &ScriptGroup::IsValidGroup,                "IsValidGroup",                ".i");
	SQAIGroup.DefSQStaticMethod(engine, &ScriptGroup::CreateGroup,                 "CreateGroup",                 ".ii");
	SQAIGroup.DefSQStaticMethod(engine, &ScriptGroup::DeleteGroup,                 "DeleteGroup",                 ".i");
	SQAIGroup.DefSQStaticMethod(engine, &ScriptGroup::GetVehicleType,              "GetVehicleType",              ".i");
	SQAIGroup.DefSQStaticMethod(engine, &ScriptGroup::SetName,                     "SetName",                     ".i.");
	SQAIGroup.DefSQStaticMethod(engine, &ScriptGroup::GetName,                     "GetName",                     ".i");
	SQAIGroup.DefSQStaticMethod(engine, &ScriptGroup::SetParent,                   "SetParent",                   ".ii");
	SQAIGroup.DefSQStaticMethod(engine, &ScriptGroup::GetParent,                   "GetParent",                   ".i");
	SQAIGroup.DefSQStaticMethod(engine, &ScriptGroup::EnableAutoReplaceProtection, "EnableAutoReplaceProtection", ".ib");
	SQAIGroup.DefSQStaticMethod(engine, &ScriptGroup::GetAutoReplaceProtection,    "GetAutoReplaceProtection",    ".i");
	SQAIGroup.DefSQStaticMethod(engine, &ScriptGroup::GetNumEngines,               "GetNumEngines",               ".ii");
	SQAIGroup.DefSQStaticMethod(engine, &ScriptGroup::GetNumVehicles,              "GetNumVehicles",              ".ii");
	SQAIGroup.DefSQStaticMethod(engine, &ScriptGroup::MoveVehicle,                 "MoveVehicle",                 ".ii");
	SQAIGroup.DefSQStaticMethod(engine, &ScriptGroup::EnableWagonRemoval,          "EnableWagonRemoval",          ".b");
	SQAIGroup.DefSQStaticMethod(engine, &ScriptGroup::HasWagonRemoval,             "HasWagonRemoval",             ".");
	SQAIGroup.DefSQStaticMethod(engine, &ScriptGroup::SetAutoReplace,              "SetAutoReplace",              ".iii");
	SQAIGroup.DefSQStaticMethod(engine, &ScriptGroup::GetEngineReplacement,        "GetEngineReplacement",        ".ii");
	SQAIGroup.DefSQStaticMethod(engine, &ScriptGroup::StopAutoReplace,             "StopAutoReplace",             ".ii");
	SQAIGroup.DefSQStaticMethod(engine, &ScriptGroup::GetProfitThisYear,           "GetProfitThisYear",           ".i");
	SQAIGroup.DefSQStaticMethod(engine, &ScriptGroup::GetProfitLastYear,           "GetProfitLastYear",           ".i");
	SQAIGroup.DefSQStaticMethod(engine, &ScriptGroup::GetCurrentUsage,             "GetCurrentUsage",             ".i");
	SQAIGroup.DefSQStaticMethod(engine, &ScriptGroup::SetPrimaryColour,            "SetPrimaryColour",            ".ii");
	SQAIGroup.DefSQStaticMethod(engine, &ScriptGroup::SetSecondaryColour,          "SetSecondaryColour",          ".ii");
	SQAIGroup.DefSQStaticMethod(engine, &ScriptGroup::GetPrimaryColour,            "GetPrimaryColour",            ".i");
	SQAIGroup.DefSQStaticMethod(engine, &ScriptGroup::GetSecondaryColour,          "GetSecondaryColour",          ".i");

	SQAIGroup.PostRegister(engine);
}
