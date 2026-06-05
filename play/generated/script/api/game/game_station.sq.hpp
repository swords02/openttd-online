/*
 * This file is part of OpenTTD.
 * OpenTTD is free software; you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, version 2.
 * OpenTTD is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 * See the GNU General Public License for more details. You should have received a copy of the GNU General Public License along with OpenTTD. If not, see <https://www.gnu.org/licenses/old-licenses/gpl-2.0>.
 */

/* THIS FILE IS AUTO-GENERATED; PLEASE DO NOT ALTER MANUALLY */

#include "../script_station.hpp"
#include "../template/template_station.sq.hpp"


template <> SQInteger PushClassName<ScriptStation, ScriptType::GS>(HSQUIRRELVM vm) { sq_pushstring(vm, "GSStation"); return 1; }

void SQGSStation_Register(Squirrel &engine)
{
	DefSQClass<ScriptStation, ScriptType::GS> SQGSStation("GSStation");
	SQGSStation.PreRegister(engine, "GSBaseStation");

	SQGSStation.DefSQConst(engine, ScriptStation::ERR_STATION_BASE,                         "ERR_STATION_BASE");
	SQGSStation.DefSQConst(engine, ScriptStation::ERR_STATION_TOO_CLOSE_TO_ANOTHER_STATION, "ERR_STATION_TOO_CLOSE_TO_ANOTHER_STATION");
	SQGSStation.DefSQConst(engine, ScriptStation::ERR_STATION_TOO_MANY_STATIONS,            "ERR_STATION_TOO_MANY_STATIONS");
	SQGSStation.DefSQConst(engine, ScriptStation::ERR_STATION_TOO_MANY_STATIONS_IN_TOWN,    "ERR_STATION_TOO_MANY_STATIONS_IN_TOWN");
	SQGSStation.DefSQConst(engine, ScriptStation::STATION_TRAIN,                            "STATION_TRAIN");
	SQGSStation.DefSQConst(engine, ScriptStation::STATION_TRUCK_STOP,                       "STATION_TRUCK_STOP");
	SQGSStation.DefSQConst(engine, ScriptStation::STATION_BUS_STOP,                         "STATION_BUS_STOP");
	SQGSStation.DefSQConst(engine, ScriptStation::STATION_AIRPORT,                          "STATION_AIRPORT");
	SQGSStation.DefSQConst(engine, ScriptStation::STATION_DOCK,                             "STATION_DOCK");
	SQGSStation.DefSQConst(engine, ScriptStation::STATION_ANY,                              "STATION_ANY");

	ScriptError::RegisterErrorMap(STR_ERROR_TOO_CLOSE_TO_ANOTHER_AIRPORT,    ScriptStation::ERR_STATION_TOO_CLOSE_TO_ANOTHER_STATION);
	ScriptError::RegisterErrorMap(STR_ERROR_TOO_CLOSE_TO_ANOTHER_DOCK,       ScriptStation::ERR_STATION_TOO_CLOSE_TO_ANOTHER_STATION);
	ScriptError::RegisterErrorMap(STR_ERROR_TOO_MANY_STATIONS_LOADING,       ScriptStation::ERR_STATION_TOO_MANY_STATIONS);
	ScriptError::RegisterErrorMap(STR_ERROR_TOO_MANY_TRUCK_STOPS,            ScriptStation::ERR_STATION_TOO_MANY_STATIONS);
	ScriptError::RegisterErrorMap(STR_ERROR_TOO_MANY_BUS_STOPS,              ScriptStation::ERR_STATION_TOO_MANY_STATIONS);
	ScriptError::RegisterErrorMap(STR_ERROR_LOCAL_AUTHORITY_REFUSES_AIRPORT, ScriptStation::ERR_STATION_TOO_MANY_STATIONS_IN_TOWN);

	ScriptError::RegisterErrorMapString(ScriptStation::ERR_STATION_TOO_CLOSE_TO_ANOTHER_STATION, "ERR_STATION_TOO_CLOSE_TO_ANOTHER_STATION");
	ScriptError::RegisterErrorMapString(ScriptStation::ERR_STATION_TOO_MANY_STATIONS,            "ERR_STATION_TOO_MANY_STATIONS");
	ScriptError::RegisterErrorMapString(ScriptStation::ERR_STATION_TOO_MANY_STATIONS_IN_TOWN,    "ERR_STATION_TOO_MANY_STATIONS_IN_TOWN");

	SQGSStation.DefSQStaticMethod(engine, &ScriptStation::IsValidStation,             "IsValidStation",             ".i");
	SQGSStation.DefSQStaticMethod(engine, &ScriptStation::GetStationID,               "GetStationID",               ".i");
	SQGSStation.DefSQStaticMethod(engine, &ScriptStation::GetCargoWaiting,            "GetCargoWaiting",            ".ii");
	SQGSStation.DefSQStaticMethod(engine, &ScriptStation::GetCargoWaitingFrom,        "GetCargoWaitingFrom",        ".iii");
	SQGSStation.DefSQStaticMethod(engine, &ScriptStation::GetCargoWaitingVia,         "GetCargoWaitingVia",         ".iii");
	SQGSStation.DefSQStaticMethod(engine, &ScriptStation::GetCargoWaitingFromVia,     "GetCargoWaitingFromVia",     ".iiii");
	SQGSStation.DefSQStaticMethod(engine, &ScriptStation::GetCargoPlanned,            "GetCargoPlanned",            ".ii");
	SQGSStation.DefSQStaticMethod(engine, &ScriptStation::GetCargoPlannedFrom,        "GetCargoPlannedFrom",        ".iii");
	SQGSStation.DefSQStaticMethod(engine, &ScriptStation::GetCargoPlannedVia,         "GetCargoPlannedVia",         ".iii");
	SQGSStation.DefSQStaticMethod(engine, &ScriptStation::GetCargoPlannedFromVia,     "GetCargoPlannedFromVia",     ".iiii");
	SQGSStation.DefSQStaticMethod(engine, &ScriptStation::HasCargoRating,             "HasCargoRating",             ".ii");
	SQGSStation.DefSQStaticMethod(engine, &ScriptStation::GetCargoRating,             "GetCargoRating",             ".ii");
	SQGSStation.DefSQStaticMethod(engine, &ScriptStation::GetCoverageRadius,          "GetCoverageRadius",          ".i");
	SQGSStation.DefSQStaticMethod(engine, &ScriptStation::GetStationCoverageRadius,   "GetStationCoverageRadius",   ".i");
	SQGSStation.DefSQStaticMethod(engine, &ScriptStation::GetDistanceManhattanToTile, "GetDistanceManhattanToTile", ".ii");
	SQGSStation.DefSQStaticMethod(engine, &ScriptStation::GetDistanceSquareToTile,    "GetDistanceSquareToTile",    ".ii");
	SQGSStation.DefSQStaticMethod(engine, &ScriptStation::IsWithinTownInfluence,      "IsWithinTownInfluence",      ".ii");
	SQGSStation.DefSQStaticMethod(engine, &ScriptStation::HasStationType,             "HasStationType",             ".ii");
	SQGSStation.DefSQStaticMethod(engine, &ScriptStation::HasRoadType,                "HasRoadType",                ".ii");
	SQGSStation.DefSQStaticMethod(engine, &ScriptStation::GetNearestTown,             "GetNearestTown",             ".i");
	SQGSStation.DefSQStaticMethod(engine, &ScriptStation::IsAirportClosed,            "IsAirportClosed",            ".i");
	SQGSStation.DefSQStaticMethod(engine, &ScriptStation::OpenCloseAirport,           "OpenCloseAirport",           ".i");

	SQGSStation.PostRegister(engine);
}
