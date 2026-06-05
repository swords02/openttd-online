/*
 * This file is part of OpenTTD.
 * OpenTTD is free software; you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, version 2.
 * OpenTTD is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 * See the GNU General Public License for more details. You should have received a copy of the GNU General Public License along with OpenTTD. If not, see <https://www.gnu.org/licenses/old-licenses/gpl-2.0>.
 */

/* THIS FILE IS AUTO-GENERATED; PLEASE DO NOT ALTER MANUALLY */

#include "../script_industrytype.hpp"
#include "../template/template_industrytype.sq.hpp"


template <> SQInteger PushClassName<ScriptIndustryType, ScriptType::AI>(HSQUIRRELVM vm) { sq_pushstring(vm, "AIIndustryType"); return 1; }

void SQAIIndustryType_Register(Squirrel &engine)
{
	DefSQClass<ScriptIndustryType, ScriptType::AI> SQAIIndustryType("AIIndustryType");
	SQAIIndustryType.PreRegister(engine, "AIObject");

	SQAIIndustryType.DefSQConst(engine, ScriptIndustryType::INDUSTRYTYPE_UNKNOWN, "INDUSTRYTYPE_UNKNOWN");
	SQAIIndustryType.DefSQConst(engine, ScriptIndustryType::INDUSTRYTYPE_TOWN,    "INDUSTRYTYPE_TOWN");

	SQAIIndustryType.DefSQStaticMethod(engine, &ScriptIndustryType::IsValidIndustryType,   "IsValidIndustryType",   ".i");
	SQAIIndustryType.DefSQStaticMethod(engine, &ScriptIndustryType::GetName,               "GetName",               ".i");
	SQAIIndustryType.DefSQStaticMethod(engine, &ScriptIndustryType::GetProducedCargo,      "GetProducedCargo",      ".i");
	SQAIIndustryType.DefSQStaticMethod(engine, &ScriptIndustryType::GetAcceptedCargo,      "GetAcceptedCargo",      ".i");
	SQAIIndustryType.DefSQStaticMethod(engine, &ScriptIndustryType::IsRawIndustry,         "IsRawIndustry",         ".i");
	SQAIIndustryType.DefSQStaticMethod(engine, &ScriptIndustryType::IsProcessingIndustry,  "IsProcessingIndustry",  ".i");
	SQAIIndustryType.DefSQStaticMethod(engine, &ScriptIndustryType::ProductionCanIncrease, "ProductionCanIncrease", ".i");
	SQAIIndustryType.DefSQStaticMethod(engine, &ScriptIndustryType::GetConstructionCost,   "GetConstructionCost",   ".i");
	SQAIIndustryType.DefSQStaticMethod(engine, &ScriptIndustryType::CanBuildIndustry,      "CanBuildIndustry",      ".i");
	SQAIIndustryType.DefSQStaticMethod(engine, &ScriptIndustryType::CanProspectIndustry,   "CanProspectIndustry",   ".i");
	SQAIIndustryType.DefSQStaticMethod(engine, &ScriptIndustryType::BuildIndustry,         "BuildIndustry",         ".ii");
	SQAIIndustryType.DefSQStaticMethod(engine, &ScriptIndustryType::ProspectIndustry,      "ProspectIndustry",      ".i");
	SQAIIndustryType.DefSQStaticMethod(engine, &ScriptIndustryType::IsBuiltOnWater,        "IsBuiltOnWater",        ".i");
	SQAIIndustryType.DefSQStaticMethod(engine, &ScriptIndustryType::HasHeliport,           "HasHeliport",           ".i");
	SQAIIndustryType.DefSQStaticMethod(engine, &ScriptIndustryType::HasDock,               "HasDock",               ".i");
	SQAIIndustryType.DefSQStaticMethod(engine, &ScriptIndustryType::ResolveNewGRFID,       "ResolveNewGRFID",       ".ii");

	SQAIIndustryType.PostRegister(engine);
}
