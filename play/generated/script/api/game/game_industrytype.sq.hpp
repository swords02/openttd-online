/*
 * This file is part of OpenTTD.
 * OpenTTD is free software; you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, version 2.
 * OpenTTD is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 * See the GNU General Public License for more details. You should have received a copy of the GNU General Public License along with OpenTTD. If not, see <https://www.gnu.org/licenses/old-licenses/gpl-2.0>.
 */

/* THIS FILE IS AUTO-GENERATED; PLEASE DO NOT ALTER MANUALLY */

#include "../script_industrytype.hpp"
#include "../template/template_industrytype.sq.hpp"


template <> SQInteger PushClassName<ScriptIndustryType, ScriptType::GS>(HSQUIRRELVM vm) { sq_pushstring(vm, "GSIndustryType"); return 1; }

void SQGSIndustryType_Register(Squirrel &engine)
{
	DefSQClass<ScriptIndustryType, ScriptType::GS> SQGSIndustryType("GSIndustryType");
	SQGSIndustryType.PreRegister(engine, "GSObject");

	SQGSIndustryType.DefSQConst(engine, ScriptIndustryType::INDUSTRYTYPE_UNKNOWN, "INDUSTRYTYPE_UNKNOWN");
	SQGSIndustryType.DefSQConst(engine, ScriptIndustryType::INDUSTRYTYPE_TOWN,    "INDUSTRYTYPE_TOWN");

	SQGSIndustryType.DefSQStaticMethod(engine, &ScriptIndustryType::IsValidIndustryType,   "IsValidIndustryType",   ".i");
	SQGSIndustryType.DefSQStaticMethod(engine, &ScriptIndustryType::GetName,               "GetName",               ".i");
	SQGSIndustryType.DefSQStaticMethod(engine, &ScriptIndustryType::GetProducedCargo,      "GetProducedCargo",      ".i");
	SQGSIndustryType.DefSQStaticMethod(engine, &ScriptIndustryType::GetAcceptedCargo,      "GetAcceptedCargo",      ".i");
	SQGSIndustryType.DefSQStaticMethod(engine, &ScriptIndustryType::IsRawIndustry,         "IsRawIndustry",         ".i");
	SQGSIndustryType.DefSQStaticMethod(engine, &ScriptIndustryType::IsProcessingIndustry,  "IsProcessingIndustry",  ".i");
	SQGSIndustryType.DefSQStaticMethod(engine, &ScriptIndustryType::ProductionCanIncrease, "ProductionCanIncrease", ".i");
	SQGSIndustryType.DefSQStaticMethod(engine, &ScriptIndustryType::GetConstructionCost,   "GetConstructionCost",   ".i");
	SQGSIndustryType.DefSQStaticMethod(engine, &ScriptIndustryType::CanBuildIndustry,      "CanBuildIndustry",      ".i");
	SQGSIndustryType.DefSQStaticMethod(engine, &ScriptIndustryType::CanProspectIndustry,   "CanProspectIndustry",   ".i");
	SQGSIndustryType.DefSQStaticMethod(engine, &ScriptIndustryType::BuildIndustry,         "BuildIndustry",         ".ii");
	SQGSIndustryType.DefSQStaticMethod(engine, &ScriptIndustryType::ProspectIndustry,      "ProspectIndustry",      ".i");
	SQGSIndustryType.DefSQStaticMethod(engine, &ScriptIndustryType::IsBuiltOnWater,        "IsBuiltOnWater",        ".i");
	SQGSIndustryType.DefSQStaticMethod(engine, &ScriptIndustryType::HasHeliport,           "HasHeliport",           ".i");
	SQGSIndustryType.DefSQStaticMethod(engine, &ScriptIndustryType::HasDock,               "HasDock",               ".i");
	SQGSIndustryType.DefSQStaticMethod(engine, &ScriptIndustryType::ResolveNewGRFID,       "ResolveNewGRFID",       ".ii");

	SQGSIndustryType.PostRegister(engine);
}
