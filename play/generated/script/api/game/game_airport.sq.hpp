/*
 * This file is part of OpenTTD.
 * OpenTTD is free software; you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, version 2.
 * OpenTTD is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 * See the GNU General Public License for more details. You should have received a copy of the GNU General Public License along with OpenTTD. If not, see <https://www.gnu.org/licenses/old-licenses/gpl-2.0>.
 */

/* THIS FILE IS AUTO-GENERATED; PLEASE DO NOT ALTER MANUALLY */

#include "../script_airport.hpp"
#include "../template/template_airport.sq.hpp"


template <> SQInteger PushClassName<ScriptAirport, ScriptType::GS>(HSQUIRRELVM vm) { sq_pushstring(vm, "GSAirport"); return 1; }

void SQGSAirport_Register(Squirrel &engine)
{
	DefSQClass<ScriptAirport, ScriptType::GS> SQGSAirport("GSAirport");
	SQGSAirport.PreRegister(engine, "GSObject");

	SQGSAirport.DefSQConst(engine, ScriptAirport::AT_SMALL,         "AT_SMALL");
	SQGSAirport.DefSQConst(engine, ScriptAirport::AT_LARGE,         "AT_LARGE");
	SQGSAirport.DefSQConst(engine, ScriptAirport::AT_METROPOLITAN,  "AT_METROPOLITAN");
	SQGSAirport.DefSQConst(engine, ScriptAirport::AT_INTERNATIONAL, "AT_INTERNATIONAL");
	SQGSAirport.DefSQConst(engine, ScriptAirport::AT_COMMUTER,      "AT_COMMUTER");
	SQGSAirport.DefSQConst(engine, ScriptAirport::AT_INTERCON,      "AT_INTERCON");
	SQGSAirport.DefSQConst(engine, ScriptAirport::AT_HELIPORT,      "AT_HELIPORT");
	SQGSAirport.DefSQConst(engine, ScriptAirport::AT_HELISTATION,   "AT_HELISTATION");
	SQGSAirport.DefSQConst(engine, ScriptAirport::AT_HELIDEPOT,     "AT_HELIDEPOT");
	SQGSAirport.DefSQConst(engine, ScriptAirport::AT_INVALID,       "AT_INVALID");
	SQGSAirport.DefSQConst(engine, ScriptAirport::PT_HELICOPTER,    "PT_HELICOPTER");
	SQGSAirport.DefSQConst(engine, ScriptAirport::PT_SMALL_PLANE,   "PT_SMALL_PLANE");
	SQGSAirport.DefSQConst(engine, ScriptAirport::PT_BIG_PLANE,     "PT_BIG_PLANE");
	SQGSAirport.DefSQConst(engine, ScriptAirport::PT_INVALID,       "PT_INVALID");

	SQGSAirport.DefSQStaticMethod(engine, &ScriptAirport::IsValidAirportType,            "IsValidAirportType",            ".i");
	SQGSAirport.DefSQStaticMethod(engine, &ScriptAirport::IsAirportInformationAvailable, "IsAirportInformationAvailable", ".i");
	SQGSAirport.DefSQStaticMethod(engine, &ScriptAirport::GetPrice,                      "GetPrice",                      ".i");
	SQGSAirport.DefSQStaticMethod(engine, &ScriptAirport::IsHangarTile,                  "IsHangarTile",                  ".i");
	SQGSAirport.DefSQStaticMethod(engine, &ScriptAirport::IsAirportTile,                 "IsAirportTile",                 ".i");
	SQGSAirport.DefSQStaticMethod(engine, &ScriptAirport::GetAirportWidth,               "GetAirportWidth",               ".i");
	SQGSAirport.DefSQStaticMethod(engine, &ScriptAirport::GetAirportHeight,              "GetAirportHeight",              ".i");
	SQGSAirport.DefSQStaticMethod(engine, &ScriptAirport::GetAirportCoverageRadius,      "GetAirportCoverageRadius",      ".i");
	SQGSAirport.DefSQStaticMethod(engine, &ScriptAirport::GetNumHangars,                 "GetNumHangars",                 ".i");
	SQGSAirport.DefSQStaticMethod(engine, &ScriptAirport::GetHangarOfAirport,            "GetHangarOfAirport",            ".i");
	SQGSAirport.DefSQStaticMethod(engine, &ScriptAirport::BuildAirport,                  "BuildAirport",                  ".iii");
	SQGSAirport.DefSQStaticMethod(engine, &ScriptAirport::RemoveAirport,                 "RemoveAirport",                 ".i");
	SQGSAirport.DefSQStaticMethod(engine, &ScriptAirport::GetAirportType,                "GetAirportType",                ".i");
	SQGSAirport.DefSQStaticMethod(engine, &ScriptAirport::GetNoiseLevelIncrease,         "GetNoiseLevelIncrease",         ".ii");
	SQGSAirport.DefSQStaticMethod(engine, &ScriptAirport::GetNearestTown,                "GetNearestTown",                ".ii");
	SQGSAirport.DefSQStaticMethod(engine, &ScriptAirport::GetMaintenanceCostFactor,      "GetMaintenanceCostFactor",      ".i");
	SQGSAirport.DefSQStaticMethod(engine, &ScriptAirport::GetMonthlyMaintenanceCost,     "GetMonthlyMaintenanceCost",     ".i");
	SQGSAirport.DefSQStaticMethod(engine, &ScriptAirport::GetAirportNumHelipads,         "GetAirportNumHelipads",         ".i");

	SQGSAirport.PostRegister(engine);
}
