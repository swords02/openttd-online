/*
 * This file is part of OpenTTD.
 * OpenTTD is free software; you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, version 2.
 * OpenTTD is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 * See the GNU General Public License for more details. You should have received a copy of the GNU General Public License along with OpenTTD. If not, see <https://www.gnu.org/licenses/old-licenses/gpl-2.0>.
 */

/* THIS FILE IS AUTO-GENERATED; PLEASE DO NOT ALTER MANUALLY */

#include "../script_group.hpp"
#include "../template/template_group.sq.hpp"


template <> SQInteger PushClassName<ScriptGroup, ScriptType::GS>(HSQUIRRELVM vm) { sq_pushstring(vm, "GSGroup"); return 1; }

void SQGSGroup_Register(Squirrel &engine)
{
	DefSQClass<ScriptGroup, ScriptType::GS> SQGSGroup("GSGroup");
	SQGSGroup.PreRegister(engine, "GSObject");

	SQGSGroup.DefSQConst(engine, ScriptGroup::GROUP_ALL,     "GROUP_ALL");
	SQGSGroup.DefSQConst(engine, ScriptGroup::GROUP_DEFAULT, "GROUP_DEFAULT");
	SQGSGroup.DefSQConst(engine, ScriptGroup::GROUP_INVALID, "GROUP_INVALID");

	SQGSGroup.DefSQStaticMethod(engine, &ScriptGroup::IsValidGroup,                "IsValidGroup",                ".i");
	SQGSGroup.DefSQStaticMethod(engine, &ScriptGroup::CreateGroup,                 "CreateGroup",                 ".ii");
	SQGSGroup.DefSQStaticMethod(engine, &ScriptGroup::DeleteGroup,                 "DeleteGroup",                 ".i");
	SQGSGroup.DefSQStaticMethod(engine, &ScriptGroup::GetVehicleType,              "GetVehicleType",              ".i");
	SQGSGroup.DefSQStaticMethod(engine, &ScriptGroup::SetName,                     "SetName",                     ".i.");
	SQGSGroup.DefSQStaticMethod(engine, &ScriptGroup::GetName,                     "GetName",                     ".i");
	SQGSGroup.DefSQStaticMethod(engine, &ScriptGroup::SetParent,                   "SetParent",                   ".ii");
	SQGSGroup.DefSQStaticMethod(engine, &ScriptGroup::GetParent,                   "GetParent",                   ".i");
	SQGSGroup.DefSQStaticMethod(engine, &ScriptGroup::EnableAutoReplaceProtection, "EnableAutoReplaceProtection", ".ib");
	SQGSGroup.DefSQStaticMethod(engine, &ScriptGroup::GetAutoReplaceProtection,    "GetAutoReplaceProtection",    ".i");
	SQGSGroup.DefSQStaticMethod(engine, &ScriptGroup::GetNumEngines,               "GetNumEngines",               ".ii");
	SQGSGroup.DefSQStaticMethod(engine, &ScriptGroup::GetNumVehicles,              "GetNumVehicles",              ".ii");
	SQGSGroup.DefSQStaticMethod(engine, &ScriptGroup::MoveVehicle,                 "MoveVehicle",                 ".ii");
	SQGSGroup.DefSQStaticMethod(engine, &ScriptGroup::EnableWagonRemoval,          "EnableWagonRemoval",          ".b");
	SQGSGroup.DefSQStaticMethod(engine, &ScriptGroup::HasWagonRemoval,             "HasWagonRemoval",             ".");
	SQGSGroup.DefSQStaticMethod(engine, &ScriptGroup::SetAutoReplace,              "SetAutoReplace",              ".iii");
	SQGSGroup.DefSQStaticMethod(engine, &ScriptGroup::GetEngineReplacement,        "GetEngineReplacement",        ".ii");
	SQGSGroup.DefSQStaticMethod(engine, &ScriptGroup::StopAutoReplace,             "StopAutoReplace",             ".ii");
	SQGSGroup.DefSQStaticMethod(engine, &ScriptGroup::GetProfitThisYear,           "GetProfitThisYear",           ".i");
	SQGSGroup.DefSQStaticMethod(engine, &ScriptGroup::GetProfitLastYear,           "GetProfitLastYear",           ".i");
	SQGSGroup.DefSQStaticMethod(engine, &ScriptGroup::GetCurrentUsage,             "GetCurrentUsage",             ".i");
	SQGSGroup.DefSQStaticMethod(engine, &ScriptGroup::SetPrimaryColour,            "SetPrimaryColour",            ".ii");
	SQGSGroup.DefSQStaticMethod(engine, &ScriptGroup::SetSecondaryColour,          "SetSecondaryColour",          ".ii");
	SQGSGroup.DefSQStaticMethod(engine, &ScriptGroup::GetPrimaryColour,            "GetPrimaryColour",            ".i");
	SQGSGroup.DefSQStaticMethod(engine, &ScriptGroup::GetSecondaryColour,          "GetSecondaryColour",          ".i");

	SQGSGroup.PostRegister(engine);
}
