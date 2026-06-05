/*
 * This file is part of OpenTTD.
 * OpenTTD is free software; you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, version 2.
 * OpenTTD is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 * See the GNU General Public License for more details. You should have received a copy of the GNU General Public License along with OpenTTD. If not, see <https://www.gnu.org/licenses/old-licenses/gpl-2.0>.
 */

/* THIS FILE IS AUTO-GENERATED; PLEASE DO NOT ALTER MANUALLY */

#include "../script_road.hpp"
#include "../template/template_road.sq.hpp"


template <> SQInteger PushClassName<ScriptRoad, ScriptType::GS>(HSQUIRRELVM vm) { sq_pushstring(vm, "GSRoad"); return 1; }

void SQGSRoad_Register(Squirrel &engine)
{
	DefSQClass<ScriptRoad, ScriptType::GS> SQGSRoad("GSRoad");
	SQGSRoad.PreRegister(engine, "GSObject");

	SQGSRoad.DefSQConst(engine, ScriptRoad::ERR_ROAD_BASE,                                "ERR_ROAD_BASE");
	SQGSRoad.DefSQConst(engine, ScriptRoad::ERR_ROAD_WORKS_IN_PROGRESS,                   "ERR_ROAD_WORKS_IN_PROGRESS");
	SQGSRoad.DefSQConst(engine, ScriptRoad::ERR_ROAD_DRIVE_THROUGH_WRONG_DIRECTION,       "ERR_ROAD_DRIVE_THROUGH_WRONG_DIRECTION");
	SQGSRoad.DefSQConst(engine, ScriptRoad::ERR_ROAD_CANNOT_BUILD_ON_TOWN_ROAD,           "ERR_ROAD_CANNOT_BUILD_ON_TOWN_ROAD");
	SQGSRoad.DefSQConst(engine, ScriptRoad::ERR_ROAD_ONE_WAY_ROADS_CANNOT_HAVE_JUNCTIONS, "ERR_ROAD_ONE_WAY_ROADS_CANNOT_HAVE_JUNCTIONS");
	SQGSRoad.DefSQConst(engine, ScriptRoad::ERR_ROADTYPE_DISALLOWS_CROSSING,              "ERR_ROADTYPE_DISALLOWS_CROSSING");
	SQGSRoad.DefSQConst(engine, ScriptRoad::ERR_UNSUITABLE_ROAD,                          "ERR_UNSUITABLE_ROAD");
	SQGSRoad.DefSQConst(engine, ScriptRoad::ROADTYPE_ROAD,                                "ROADTYPE_ROAD");
	SQGSRoad.DefSQConst(engine, ScriptRoad::ROADTYPE_TRAM,                                "ROADTYPE_TRAM");
	SQGSRoad.DefSQConst(engine, ScriptRoad::ROADTYPE_INVALID,                             "ROADTYPE_INVALID");
	SQGSRoad.DefSQConst(engine, ScriptRoad::ROADTRAMTYPES_ROAD,                           "ROADTRAMTYPES_ROAD");
	SQGSRoad.DefSQConst(engine, ScriptRoad::ROADTRAMTYPES_TRAM,                           "ROADTRAMTYPES_TRAM");
	SQGSRoad.DefSQConst(engine, ScriptRoad::ROADVEHTYPE_BUS,                              "ROADVEHTYPE_BUS");
	SQGSRoad.DefSQConst(engine, ScriptRoad::ROADVEHTYPE_TRUCK,                            "ROADVEHTYPE_TRUCK");
	SQGSRoad.DefSQConst(engine, ScriptRoad::BT_ROAD,                                      "BT_ROAD");
	SQGSRoad.DefSQConst(engine, ScriptRoad::BT_DEPOT,                                     "BT_DEPOT");
	SQGSRoad.DefSQConst(engine, ScriptRoad::BT_BUS_STOP,                                  "BT_BUS_STOP");
	SQGSRoad.DefSQConst(engine, ScriptRoad::BT_TRUCK_STOP,                                "BT_TRUCK_STOP");

	ScriptError::RegisterErrorMap(STR_ERROR_ROAD_WORKS_IN_PROGRESS,           ScriptRoad::ERR_ROAD_WORKS_IN_PROGRESS);
	ScriptError::RegisterErrorMap(STR_ERROR_DRIVE_THROUGH_DIRECTION,          ScriptRoad::ERR_ROAD_DRIVE_THROUGH_WRONG_DIRECTION);
	ScriptError::RegisterErrorMap(STR_ERROR_DRIVE_THROUGH_ON_TOWN_ROAD,       ScriptRoad::ERR_ROAD_CANNOT_BUILD_ON_TOWN_ROAD);
	ScriptError::RegisterErrorMap(STR_ERROR_ONEWAY_ROADS_CAN_T_HAVE_JUNCTION, ScriptRoad::ERR_ROAD_ONE_WAY_ROADS_CANNOT_HAVE_JUNCTIONS);
	ScriptError::RegisterErrorMap(STR_ERROR_CROSSING_DISALLOWED_ROAD,         ScriptRoad::ERR_ROADTYPE_DISALLOWS_CROSSING);
	ScriptError::RegisterErrorMap(STR_ERROR_NO_SUITABLE_ROAD,                 ScriptRoad::ERR_UNSUITABLE_ROAD);
	ScriptError::RegisterErrorMap(STR_ERROR_NO_SUITABLE_TRAMWAY,              ScriptRoad::ERR_UNSUITABLE_ROAD);

	ScriptError::RegisterErrorMapString(ScriptRoad::ERR_ROAD_WORKS_IN_PROGRESS,                   "ERR_ROAD_WORKS_IN_PROGRESS");
	ScriptError::RegisterErrorMapString(ScriptRoad::ERR_ROAD_DRIVE_THROUGH_WRONG_DIRECTION,       "ERR_ROAD_DRIVE_THROUGH_WRONG_DIRECTION");
	ScriptError::RegisterErrorMapString(ScriptRoad::ERR_ROAD_CANNOT_BUILD_ON_TOWN_ROAD,           "ERR_ROAD_CANNOT_BUILD_ON_TOWN_ROAD");
	ScriptError::RegisterErrorMapString(ScriptRoad::ERR_ROAD_ONE_WAY_ROADS_CANNOT_HAVE_JUNCTIONS, "ERR_ROAD_ONE_WAY_ROADS_CANNOT_HAVE_JUNCTIONS");
	ScriptError::RegisterErrorMapString(ScriptRoad::ERR_ROADTYPE_DISALLOWS_CROSSING,              "ERR_ROADTYPE_DISALLOWS_CROSSING");
	ScriptError::RegisterErrorMapString(ScriptRoad::ERR_UNSUITABLE_ROAD,                          "ERR_UNSUITABLE_ROAD");

	SQGSRoad.DefSQStaticMethod(engine, &ScriptRoad::GetName,                        "GetName",                        ".i");
	SQGSRoad.DefSQStaticMethod(engine, &ScriptRoad::GetRoadVehicleTypeForCargo,     "GetRoadVehicleTypeForCargo",     ".i");
	SQGSRoad.DefSQStaticMethod(engine, &ScriptRoad::IsRoadTile,                     "IsRoadTile",                     ".i");
	SQGSRoad.DefSQStaticMethod(engine, &ScriptRoad::IsRoadDepotTile,                "IsRoadDepotTile",                ".i");
	SQGSRoad.DefSQStaticMethod(engine, &ScriptRoad::IsRoadStationTile,              "IsRoadStationTile",              ".i");
	SQGSRoad.DefSQStaticMethod(engine, &ScriptRoad::IsDriveThroughRoadStationTile,  "IsDriveThroughRoadStationTile",  ".i");
	SQGSRoad.DefSQStaticMethod(engine, &ScriptRoad::IsRoadTypeAvailable,            "IsRoadTypeAvailable",            ".i");
	SQGSRoad.DefSQStaticMethod(engine, &ScriptRoad::GetCurrentRoadType,             "GetCurrentRoadType",             ".");
	SQGSRoad.DefSQStaticMethod(engine, &ScriptRoad::SetCurrentRoadType,             "SetCurrentRoadType",             ".i");
	SQGSRoad.DefSQStaticMethod(engine, &ScriptRoad::RoadVehCanRunOnRoad,            "RoadVehCanRunOnRoad",            ".ii");
	SQGSRoad.DefSQStaticMethod(engine, &ScriptRoad::RoadVehHasPowerOnRoad,          "RoadVehHasPowerOnRoad",          ".ii");
	SQGSRoad.DefSQStaticMethod(engine, &ScriptRoad::ConvertRoadType,                "ConvertRoadType",                ".iii");
	SQGSRoad.DefSQStaticMethod(engine, &ScriptRoad::HasRoadType,                    "HasRoadType",                    ".ii");
	SQGSRoad.DefSQStaticMethod(engine, &ScriptRoad::AreRoadTilesConnected,          "AreRoadTilesConnected",          ".ii");
	SQGSRoad.DefSQStaticMethod(engine, &ScriptRoad::CanBuildConnectedRoadParts,     "CanBuildConnectedRoadParts",     ".iaii");
	SQGSRoad.DefSQStaticMethod(engine, &ScriptRoad::CanBuildConnectedRoadPartsHere, "CanBuildConnectedRoadPartsHere", ".iii");
	SQGSRoad.DefSQStaticMethod(engine, &ScriptRoad::GetNeighbourRoadCount,          "GetNeighbourRoadCount",          ".i");
	SQGSRoad.DefSQStaticMethod(engine, &ScriptRoad::GetRoadDepotFrontTile,          "GetRoadDepotFrontTile",          ".i");
	SQGSRoad.DefSQStaticMethod(engine, &ScriptRoad::GetRoadStationFrontTile,        "GetRoadStationFrontTile",        ".i");
	SQGSRoad.DefSQStaticMethod(engine, &ScriptRoad::GetDriveThroughBackTile,        "GetDriveThroughBackTile",        ".i");
	SQGSRoad.DefSQStaticMethod(engine, &ScriptRoad::BuildRoad,                      "BuildRoad",                      ".ii");
	SQGSRoad.DefSQStaticMethod(engine, &ScriptRoad::BuildOneWayRoad,                "BuildOneWayRoad",                ".ii");
	SQGSRoad.DefSQStaticMethod(engine, &ScriptRoad::BuildRoadFull,                  "BuildRoadFull",                  ".ii");
	SQGSRoad.DefSQStaticMethod(engine, &ScriptRoad::BuildOneWayRoadFull,            "BuildOneWayRoadFull",            ".ii");
	SQGSRoad.DefSQStaticMethod(engine, &ScriptRoad::BuildRoadDepot,                 "BuildRoadDepot",                 ".ii");
	SQGSRoad.DefSQStaticMethod(engine, &ScriptRoad::BuildRoadStation,               "BuildRoadStation",               ".iiii");
	SQGSRoad.DefSQStaticMethod(engine, &ScriptRoad::BuildDriveThroughRoadStation,   "BuildDriveThroughRoadStation",   ".iiii");
	SQGSRoad.DefSQStaticMethod(engine, &ScriptRoad::RemoveRoad,                     "RemoveRoad",                     ".ii");
	SQGSRoad.DefSQStaticMethod(engine, &ScriptRoad::RemoveRoadFull,                 "RemoveRoadFull",                 ".ii");
	SQGSRoad.DefSQStaticMethod(engine, &ScriptRoad::RemoveRoadDepot,                "RemoveRoadDepot",                ".i");
	SQGSRoad.DefSQStaticMethod(engine, &ScriptRoad::RemoveRoadStation,              "RemoveRoadStation",              ".i");
	SQGSRoad.DefSQStaticMethod(engine, &ScriptRoad::GetBuildCost,                   "GetBuildCost",                   ".ii");
	SQGSRoad.DefSQStaticMethod(engine, &ScriptRoad::GetRoadTramType,                "GetRoadTramType",                ".i");
	SQGSRoad.DefSQStaticMethod(engine, &ScriptRoad::GetMaxSpeed,                    "GetMaxSpeed",                    ".i");
	SQGSRoad.DefSQStaticMethod(engine, &ScriptRoad::GetMaintenanceCostFactor,       "GetMaintenanceCostFactor",       ".i");

	SQGSRoad.PostRegister(engine);
}
