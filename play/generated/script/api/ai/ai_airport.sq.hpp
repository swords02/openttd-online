/*
 * This file is part of OpenTTD.
 * OpenTTD is free software; you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, version 2.
 * OpenTTD is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 * See the GNU General Public License for more details. You should have received a copy of the GNU General Public License along with OpenTTD. If not, see <https://www.gnu.org/licenses/old-licenses/gpl-2.0>.
 */

/* THIS FILE IS AUTO-GENERATED; PLEASE DO NOT ALTER MANUALLY */

#include "../script_airport.hpp"
#include "../template/template_airport.sq.hpp"


template <> SQInteger PushClassName<ScriptAirport, ScriptType::AI>(HSQUIRRELVM vm) { sq_pushstring(vm, "AIAirport"); return 1; }

void SQAIAirport_Register(Squirrel &engine)
{
	DefSQClass<ScriptAirport, ScriptType::AI> SQAIAirport("AIAirport");
	SQAIAirport.PreRegister(engine, "AIObject");

	SQAIAirport.DefSQConst(engine, ScriptAirport::AT_SMALL,         "AT_SMALL");
	SQAIAirport.DefSQConst(engine, ScriptAirport::AT_LARGE,         "AT_LARGE");
	SQAIAirport.DefSQConst(engine, ScriptAirport::AT_METROPOLITAN,  "AT_METROPOLITAN");
	SQAIAirport.DefSQConst(engine, ScriptAirport::AT_INTERNATIONAL, "AT_INTERNATIONAL");
	SQAIAirport.DefSQConst(engine, ScriptAirport::AT_COMMUTER,      "AT_COMMUTER");
	SQAIAirport.DefSQConst(engine, ScriptAirport::AT_INTERCON,      "AT_INTERCON");
	SQAIAirport.DefSQConst(engine, ScriptAirport::AT_HELIPORT,      "AT_HELIPORT");
	SQAIAirport.DefSQConst(engine, ScriptAirport::AT_HELISTATION,   "AT_HELISTATION");
	SQAIAirport.DefSQConst(engine, ScriptAirport::AT_HELIDEPOT,     "AT_HELIDEPOT");
	SQAIAirport.DefSQConst(engine, ScriptAirport::AT_INVALID,       "AT_INVALID");
	SQAIAirport.DefSQConst(engine, ScriptAirport::PT_HELICOPTER,    "PT_HELICOPTER");
	SQAIAirport.DefSQConst(engine, ScriptAirport::PT_SMALL_PLANE,   "PT_SMALL_PLANE");
	SQAIAirport.DefSQConst(engine, ScriptAirport::PT_BIG_PLANE,     "PT_BIG_PLANE");
	SQAIAirport.DefSQConst(engine, ScriptAirport::PT_INVALID,       "PT_INVALID");

	SQAIAirport.DefSQStaticMethod(engine, &ScriptAirport::IsValidAirportType,            "IsValidAirportType",            ".i");
	SQAIAirport.DefSQStaticMethod(engine, &ScriptAirport::IsAirportInformationAvailable, "IsAirportInformationAvailable", ".i");
	SQAIAirport.DefSQStaticMethod(engine, &ScriptAirport::GetPrice,                      "GetPrice",                      ".i");
	SQAIAirport.DefSQStaticMethod(engine, &ScriptAirport::IsHangarTile,                  "IsHangarTile",                  ".i");
	SQAIAirport.DefSQStaticMethod(engine, &ScriptAirport::IsAirportTile,                 "IsAirportTile",                 ".i");
	SQAIAirport.DefSQStaticMethod(engine, &ScriptAirport::GetAirportWidth,               "GetAirportWidth",               ".i");
	SQAIAirport.DefSQStaticMethod(engine, &ScriptAirport::GetAirportHeight,              "GetAirportHeight",              ".i");
	SQAIAirport.DefSQStaticMethod(engine, &ScriptAirport::GetAirportCoverageRadius,      "GetAirportCoverageRadius",      ".i");
	SQAIAirport.DefSQStaticMethod(engine, &ScriptAirport::GetNumHangars,                 "GetNumHangars",                 ".i");
	SQAIAirport.DefSQStaticMethod(engine, &ScriptAirport::GetHangarOfAirport,            "GetHangarOfAirport",            ".i");
	SQAIAirport.DefSQStaticMethod(engine, &ScriptAirport::BuildAirport,                  "BuildAirport",                  ".iii");
	SQAIAirport.DefSQStaticMethod(engine, &ScriptAirport::RemoveAirport,                 "RemoveAirport",                 ".i");
	SQAIAirport.DefSQStaticMethod(engine, &ScriptAirport::GetAirportType,                "GetAirportType",                ".i");
	SQAIAirport.DefSQStaticMethod(engine, &ScriptAirport::GetNoiseLevelIncrease,         "GetNoiseLevelIncrease",         ".ii");
	SQAIAirport.DefSQStaticMethod(engine, &ScriptAirport::GetNearestTown,                "GetNearestTown",                ".ii");
	SQAIAirport.DefSQStaticMethod(engine, &ScriptAirport::GetMaintenanceCostFactor,      "GetMaintenanceCostFactor",      ".i");
	SQAIAirport.DefSQStaticMethod(engine, &ScriptAirport::GetMonthlyMaintenanceCost,     "GetMonthlyMaintenanceCost",     ".i");
	SQAIAirport.DefSQStaticMethod(engine, &ScriptAirport::GetAirportNumHelipads,         "GetAirportNumHelipads",         ".i");

	SQAIAirport.PostRegister(engine);
}
