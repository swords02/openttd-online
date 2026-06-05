/*
 * This file is part of OpenTTD.
 * OpenTTD is free software; you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, version 2.
 * OpenTTD is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 * See the GNU General Public License for more details. You should have received a copy of the GNU General Public License along with OpenTTD. If not, see <https://www.gnu.org/licenses/old-licenses/gpl-2.0>.
 */

/* THIS FILE IS AUTO-GENERATED; PLEASE DO NOT ALTER MANUALLY */

#include "../script_station.hpp"
#include "../template/template_station.sq.hpp"


template <> SQInteger PushClassName<ScriptStation, ScriptType::AI>(HSQUIRRELVM vm) { sq_pushstring(vm, "AIStation"); return 1; }

void SQAIStation_Register(Squirrel &engine)
{
	DefSQClass<ScriptStation, ScriptType::AI> SQAIStation("AIStation");
	SQAIStation.PreRegister(engine, "AIBaseStation");

	SQAIStation.DefSQConst(engine, ScriptStation::ERR_STATION_BASE,                         "ERR_STATION_BASE");
	SQAIStation.DefSQConst(engine, ScriptStation::ERR_STATION_TOO_CLOSE_TO_ANOTHER_STATION, "ERR_STATION_TOO_CLOSE_TO_ANOTHER_STATION");
	SQAIStation.DefSQConst(engine, ScriptStation::ERR_STATION_TOO_MANY_STATIONS,            "ERR_STATION_TOO_MANY_STATIONS");
	SQAIStation.DefSQConst(engine, ScriptStation::ERR_STATION_TOO_MANY_STATIONS_IN_TOWN,    "ERR_STATION_TOO_MANY_STATIONS_IN_TOWN");
	SQAIStation.DefSQConst(engine, ScriptStation::STATION_TRAIN,                            "STATION_TRAIN");
	SQAIStation.DefSQConst(engine, ScriptStation::STATION_TRUCK_STOP,                       "STATION_TRUCK_STOP");
	SQAIStation.DefSQConst(engine, ScriptStation::STATION_BUS_STOP,                         "STATION_BUS_STOP");
	SQAIStation.DefSQConst(engine, ScriptStation::STATION_AIRPORT,                          "STATION_AIRPORT");
	SQAIStation.DefSQConst(engine, ScriptStation::STATION_DOCK,                             "STATION_DOCK");
	SQAIStation.DefSQConst(engine, ScriptStation::STATION_ANY,                              "STATION_ANY");

	ScriptError::RegisterErrorMap(STR_ERROR_TOO_CLOSE_TO_ANOTHER_AIRPORT,    ScriptStation::ERR_STATION_TOO_CLOSE_TO_ANOTHER_STATION);
	ScriptError::RegisterErrorMap(STR_ERROR_TOO_CLOSE_TO_ANOTHER_DOCK,       ScriptStation::ERR_STATION_TOO_CLOSE_TO_ANOTHER_STATION);
	ScriptError::RegisterErrorMap(STR_ERROR_TOO_MANY_STATIONS_LOADING,       ScriptStation::ERR_STATION_TOO_MANY_STATIONS);
	ScriptError::RegisterErrorMap(STR_ERROR_TOO_MANY_TRUCK_STOPS,            ScriptStation::ERR_STATION_TOO_MANY_STATIONS);
	ScriptError::RegisterErrorMap(STR_ERROR_TOO_MANY_BUS_STOPS,              ScriptStation::ERR_STATION_TOO_MANY_STATIONS);
	ScriptError::RegisterErrorMap(STR_ERROR_LOCAL_AUTHORITY_REFUSES_AIRPORT, ScriptStation::ERR_STATION_TOO_MANY_STATIONS_IN_TOWN);

	ScriptError::RegisterErrorMapString(ScriptStation::ERR_STATION_TOO_CLOSE_TO_ANOTHER_STATION, "ERR_STATION_TOO_CLOSE_TO_ANOTHER_STATION");
	ScriptError::RegisterErrorMapString(ScriptStation::ERR_STATION_TOO_MANY_STATIONS,            "ERR_STATION_TOO_MANY_STATIONS");
	ScriptError::RegisterErrorMapString(ScriptStation::ERR_STATION_TOO_MANY_STATIONS_IN_TOWN,    "ERR_STATION_TOO_MANY_STATIONS_IN_TOWN");

	SQAIStation.DefSQStaticMethod(engine, &ScriptStation::IsValidStation,             "IsValidStation",             ".i");
	SQAIStation.DefSQStaticMethod(engine, &ScriptStation::GetStationID,               "GetStationID",               ".i");
	SQAIStation.DefSQStaticMethod(engine, &ScriptStation::GetCargoWaiting,            "GetCargoWaiting",            ".ii");
	SQAIStation.DefSQStaticMethod(engine, &ScriptStation::GetCargoWaitingFrom,        "GetCargoWaitingFrom",        ".iii");
	SQAIStation.DefSQStaticMethod(engine, &ScriptStation::GetCargoWaitingVia,         "GetCargoWaitingVia",         ".iii");
	SQAIStation.DefSQStaticMethod(engine, &ScriptStation::GetCargoWaitingFromVia,     "GetCargoWaitingFromVia",     ".iiii");
	SQAIStation.DefSQStaticMethod(engine, &ScriptStation::GetCargoPlanned,            "GetCargoPlanned",            ".ii");
	SQAIStation.DefSQStaticMethod(engine, &ScriptStation::GetCargoPlannedFrom,        "GetCargoPlannedFrom",        ".iii");
	SQAIStation.DefSQStaticMethod(engine, &ScriptStation::GetCargoPlannedVia,         "GetCargoPlannedVia",         ".iii");
	SQAIStation.DefSQStaticMethod(engine, &ScriptStation::GetCargoPlannedFromVia,     "GetCargoPlannedFromVia",     ".iiii");
	SQAIStation.DefSQStaticMethod(engine, &ScriptStation::HasCargoRating,             "HasCargoRating",             ".ii");
	SQAIStation.DefSQStaticMethod(engine, &ScriptStation::GetCargoRating,             "GetCargoRating",             ".ii");
	SQAIStation.DefSQStaticMethod(engine, &ScriptStation::GetCoverageRadius,          "GetCoverageRadius",          ".i");
	SQAIStation.DefSQStaticMethod(engine, &ScriptStation::GetStationCoverageRadius,   "GetStationCoverageRadius",   ".i");
	SQAIStation.DefSQStaticMethod(engine, &ScriptStation::GetDistanceManhattanToTile, "GetDistanceManhattanToTile", ".ii");
	SQAIStation.DefSQStaticMethod(engine, &ScriptStation::GetDistanceSquareToTile,    "GetDistanceSquareToTile",    ".ii");
	SQAIStation.DefSQStaticMethod(engine, &ScriptStation::IsWithinTownInfluence,      "IsWithinTownInfluence",      ".ii");
	SQAIStation.DefSQStaticMethod(engine, &ScriptStation::HasStationType,             "HasStationType",             ".ii");
	SQAIStation.DefSQStaticMethod(engine, &ScriptStation::HasRoadType,                "HasRoadType",                ".ii");
	SQAIStation.DefSQStaticMethod(engine, &ScriptStation::GetNearestTown,             "GetNearestTown",             ".i");
	SQAIStation.DefSQStaticMethod(engine, &ScriptStation::IsAirportClosed,            "IsAirportClosed",            ".i");
	SQAIStation.DefSQStaticMethod(engine, &ScriptStation::OpenCloseAirport,           "OpenCloseAirport",           ".i");

	SQAIStation.PostRegister(engine);
}
