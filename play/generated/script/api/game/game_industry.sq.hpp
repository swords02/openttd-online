/*
 * This file is part of OpenTTD.
 * OpenTTD is free software; you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, version 2.
 * OpenTTD is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 * See the GNU General Public License for more details. You should have received a copy of the GNU General Public License along with OpenTTD. If not, see <https://www.gnu.org/licenses/old-licenses/gpl-2.0>.
 */

/* THIS FILE IS AUTO-GENERATED; PLEASE DO NOT ALTER MANUALLY */

#include "../script_industry.hpp"
#include "../template/template_industry.sq.hpp"


template <> SQInteger PushClassName<ScriptIndustry, ScriptType::GS>(HSQUIRRELVM vm) { sq_pushstring(vm, "GSIndustry"); return 1; }

void SQGSIndustry_Register(Squirrel &engine)
{
	DefSQClass<ScriptIndustry, ScriptType::GS> SQGSIndustry("GSIndustry");
	SQGSIndustry.PreRegister(engine, "GSObject");

	SQGSIndustry.DefSQConst(engine, ScriptIndustry::CAS_NOT_ACCEPTED,              "CAS_NOT_ACCEPTED");
	SQGSIndustry.DefSQConst(engine, ScriptIndustry::CAS_ACCEPTED,                  "CAS_ACCEPTED");
	SQGSIndustry.DefSQConst(engine, ScriptIndustry::CAS_TEMP_REFUSED,              "CAS_TEMP_REFUSED");
	SQGSIndustry.DefSQConst(engine, ScriptIndustry::INDCTL_NO_PRODUCTION_DECREASE, "INDCTL_NO_PRODUCTION_DECREASE");
	SQGSIndustry.DefSQConst(engine, ScriptIndustry::INDCTL_NO_PRODUCTION_INCREASE, "INDCTL_NO_PRODUCTION_INCREASE");
	SQGSIndustry.DefSQConst(engine, ScriptIndustry::INDCTL_NO_CLOSURE,             "INDCTL_NO_CLOSURE");
	SQGSIndustry.DefSQConst(engine, ScriptIndustry::INDCTL_EXTERNAL_PROD_LEVEL,    "INDCTL_EXTERNAL_PROD_LEVEL");

	SQGSIndustry.DefSQStaticMethod(engine, &ScriptIndustry::GetIndustryCount,                  "GetIndustryCount",                  ".");
	SQGSIndustry.DefSQStaticMethod(engine, &ScriptIndustry::IsValidIndustry,                   "IsValidIndustry",                   ".i");
	SQGSIndustry.DefSQStaticMethod(engine, &ScriptIndustry::GetIndustryID,                     "GetIndustryID",                     ".i");
	SQGSIndustry.DefSQStaticMethod(engine, &ScriptIndustry::GetName,                           "GetName",                           ".i");
	SQGSIndustry.DefSQStaticMethod(engine, &ScriptIndustry::GetConstructionDate,               "GetConstructionDate",               ".i");
	SQGSIndustry.DefSQStaticMethod(engine, &ScriptIndustry::SetText,                           "SetText",                           ".i.");
	SQGSIndustry.DefSQStaticMethod(engine, &ScriptIndustry::IsCargoAccepted,                   "IsCargoAccepted",                   ".ii");
	SQGSIndustry.DefSQStaticMethod(engine, &ScriptIndustry::GetStockpiledCargo,                "GetStockpiledCargo",                ".ii");
	SQGSIndustry.DefSQStaticMethod(engine, &ScriptIndustry::GetLastMonthProduction,            "GetLastMonthProduction",            ".ii");
	SQGSIndustry.DefSQStaticMethod(engine, &ScriptIndustry::GetLastMonthTransported,           "GetLastMonthTransported",           ".ii");
	SQGSIndustry.DefSQStaticMethod(engine, &ScriptIndustry::GetLastMonthTransportedPercentage, "GetLastMonthTransportedPercentage", ".ii");
	SQGSIndustry.DefSQStaticMethod(engine, &ScriptIndustry::GetLocation,                       "GetLocation",                       ".i");
	SQGSIndustry.DefSQStaticMethod(engine, &ScriptIndustry::GetAmountOfStationsAround,         "GetAmountOfStationsAround",         ".i");
	SQGSIndustry.DefSQStaticMethod(engine, &ScriptIndustry::GetDistanceManhattanToTile,        "GetDistanceManhattanToTile",        ".ii");
	SQGSIndustry.DefSQStaticMethod(engine, &ScriptIndustry::GetDistanceSquareToTile,           "GetDistanceSquareToTile",           ".ii");
	SQGSIndustry.DefSQStaticMethod(engine, &ScriptIndustry::IsBuiltOnWater,                    "IsBuiltOnWater",                    ".i");
	SQGSIndustry.DefSQStaticMethod(engine, &ScriptIndustry::HasHeliport,                       "HasHeliport",                       ".i");
	SQGSIndustry.DefSQStaticMethod(engine, &ScriptIndustry::GetHeliportLocation,               "GetHeliportLocation",               ".i");
	SQGSIndustry.DefSQStaticMethod(engine, &ScriptIndustry::HasDock,                           "HasDock",                           ".i");
	SQGSIndustry.DefSQStaticMethod(engine, &ScriptIndustry::GetDockLocation,                   "GetDockLocation",                   ".i");
	SQGSIndustry.DefSQStaticMethod(engine, &ScriptIndustry::GetIndustryType,                   "GetIndustryType",                   ".i");
	SQGSIndustry.DefSQStaticMethod(engine, &ScriptIndustry::GetLastProductionYear,             "GetLastProductionYear",             ".i");
	SQGSIndustry.DefSQStaticMethod(engine, &ScriptIndustry::GetCargoLastAcceptedDate,          "GetCargoLastAcceptedDate",          ".ii");
	SQGSIndustry.DefSQStaticMethod(engine, &ScriptIndustry::GetControlFlags,                   "GetControlFlags",                   ".i");
	SQGSIndustry.DefSQStaticMethod(engine, &ScriptIndustry::SetControlFlags,                   "SetControlFlags",                   ".ii");
	SQGSIndustry.DefSQStaticMethod(engine, &ScriptIndustry::GetExclusiveSupplier,              "GetExclusiveSupplier",              ".i");
	SQGSIndustry.DefSQStaticMethod(engine, &ScriptIndustry::SetExclusiveSupplier,              "SetExclusiveSupplier",              ".ii");
	SQGSIndustry.DefSQStaticMethod(engine, &ScriptIndustry::GetExclusiveConsumer,              "GetExclusiveConsumer",              ".i");
	SQGSIndustry.DefSQStaticMethod(engine, &ScriptIndustry::SetExclusiveConsumer,              "SetExclusiveConsumer",              ".ii");
	SQGSIndustry.DefSQStaticMethod(engine, &ScriptIndustry::GetProductionLevel,                "GetProductionLevel",                ".i");
	SQGSIndustry.DefSQStaticMethod(engine, &ScriptIndustry::SetProductionLevel,                "SetProductionLevel",                ".iib.");

	SQGSIndustry.PostRegister(engine);
}
