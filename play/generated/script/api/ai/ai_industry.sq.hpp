/*
 * This file is part of OpenTTD.
 * OpenTTD is free software; you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, version 2.
 * OpenTTD is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 * See the GNU General Public License for more details. You should have received a copy of the GNU General Public License along with OpenTTD. If not, see <https://www.gnu.org/licenses/old-licenses/gpl-2.0>.
 */

/* THIS FILE IS AUTO-GENERATED; PLEASE DO NOT ALTER MANUALLY */

#include "../script_industry.hpp"
#include "../template/template_industry.sq.hpp"


template <> SQInteger PushClassName<ScriptIndustry, ScriptType::AI>(HSQUIRRELVM vm) { sq_pushstring(vm, "AIIndustry"); return 1; }

void SQAIIndustry_Register(Squirrel &engine)
{
	DefSQClass<ScriptIndustry, ScriptType::AI> SQAIIndustry("AIIndustry");
	SQAIIndustry.PreRegister(engine, "AIObject");

	SQAIIndustry.DefSQConst(engine, ScriptIndustry::CAS_NOT_ACCEPTED, "CAS_NOT_ACCEPTED");
	SQAIIndustry.DefSQConst(engine, ScriptIndustry::CAS_ACCEPTED,     "CAS_ACCEPTED");
	SQAIIndustry.DefSQConst(engine, ScriptIndustry::CAS_TEMP_REFUSED, "CAS_TEMP_REFUSED");

	SQAIIndustry.DefSQStaticMethod(engine, &ScriptIndustry::GetIndustryCount,                  "GetIndustryCount",                  ".");
	SQAIIndustry.DefSQStaticMethod(engine, &ScriptIndustry::IsValidIndustry,                   "IsValidIndustry",                   ".i");
	SQAIIndustry.DefSQStaticMethod(engine, &ScriptIndustry::GetIndustryID,                     "GetIndustryID",                     ".i");
	SQAIIndustry.DefSQStaticMethod(engine, &ScriptIndustry::GetName,                           "GetName",                           ".i");
	SQAIIndustry.DefSQStaticMethod(engine, &ScriptIndustry::IsCargoAccepted,                   "IsCargoAccepted",                   ".ii");
	SQAIIndustry.DefSQStaticMethod(engine, &ScriptIndustry::GetStockpiledCargo,                "GetStockpiledCargo",                ".ii");
	SQAIIndustry.DefSQStaticMethod(engine, &ScriptIndustry::GetLastMonthProduction,            "GetLastMonthProduction",            ".ii");
	SQAIIndustry.DefSQStaticMethod(engine, &ScriptIndustry::GetLastMonthTransported,           "GetLastMonthTransported",           ".ii");
	SQAIIndustry.DefSQStaticMethod(engine, &ScriptIndustry::GetLastMonthTransportedPercentage, "GetLastMonthTransportedPercentage", ".ii");
	SQAIIndustry.DefSQStaticMethod(engine, &ScriptIndustry::GetLocation,                       "GetLocation",                       ".i");
	SQAIIndustry.DefSQStaticMethod(engine, &ScriptIndustry::GetAmountOfStationsAround,         "GetAmountOfStationsAround",         ".i");
	SQAIIndustry.DefSQStaticMethod(engine, &ScriptIndustry::GetDistanceManhattanToTile,        "GetDistanceManhattanToTile",        ".ii");
	SQAIIndustry.DefSQStaticMethod(engine, &ScriptIndustry::GetDistanceSquareToTile,           "GetDistanceSquareToTile",           ".ii");
	SQAIIndustry.DefSQStaticMethod(engine, &ScriptIndustry::IsBuiltOnWater,                    "IsBuiltOnWater",                    ".i");
	SQAIIndustry.DefSQStaticMethod(engine, &ScriptIndustry::HasHeliport,                       "HasHeliport",                       ".i");
	SQAIIndustry.DefSQStaticMethod(engine, &ScriptIndustry::GetHeliportLocation,               "GetHeliportLocation",               ".i");
	SQAIIndustry.DefSQStaticMethod(engine, &ScriptIndustry::HasDock,                           "HasDock",                           ".i");
	SQAIIndustry.DefSQStaticMethod(engine, &ScriptIndustry::GetDockLocation,                   "GetDockLocation",                   ".i");
	SQAIIndustry.DefSQStaticMethod(engine, &ScriptIndustry::GetIndustryType,                   "GetIndustryType",                   ".i");
	SQAIIndustry.DefSQStaticMethod(engine, &ScriptIndustry::GetExclusiveSupplier,              "GetExclusiveSupplier",              ".i");
	SQAIIndustry.DefSQStaticMethod(engine, &ScriptIndustry::GetExclusiveConsumer,              "GetExclusiveConsumer",              ".i");

	SQAIIndustry.PostRegister(engine);
}
