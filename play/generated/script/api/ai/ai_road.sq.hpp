/*
 * This file is part of OpenTTD.
 * OpenTTD is free software; you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, version 2.
 * OpenTTD is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 * See the GNU General Public License for more details. You should have received a copy of the GNU General Public License along with OpenTTD. If not, see <https://www.gnu.org/licenses/old-licenses/gpl-2.0>.
 */

/* THIS FILE IS AUTO-GENERATED; PLEASE DO NOT ALTER MANUALLY */

#include "../script_road.hpp"
#include "../template/template_road.sq.hpp"


template <> SQInteger PushClassName<ScriptRoad, ScriptType::AI>(HSQUIRRELVM vm) { sq_pushstring(vm, "AIRoad"); return 1; }

void SQAIRoad_Register(Squirrel &engine)
{
	DefSQClass<ScriptRoad, ScriptType::AI> SQAIRoad("AIRoad");
	SQAIRoad.PreRegister(engine, "AIObject");

	SQAIRoad.DefSQConst(engine, ScriptRoad::ERR_ROAD_BASE,                                "ERR_ROAD_BASE");
	SQAIRoad.DefSQConst(engine, ScriptRoad::ERR_ROAD_WORKS_IN_PROGRESS,                   "ERR_ROAD_WORKS_IN_PROGRESS");
	SQAIRoad.DefSQConst(engine, ScriptRoad::ERR_ROAD_DRIVE_THROUGH_WRONG_DIRECTION,       "ERR_ROAD_DRIVE_THROUGH_WRONG_DIRECTION");
	SQAIRoad.DefSQConst(engine, ScriptRoad::ERR_ROAD_CANNOT_BUILD_ON_TOWN_ROAD,           "ERR_ROAD_CANNOT_BUILD_ON_TOWN_ROAD");
	SQAIRoad.DefSQConst(engine, ScriptRoad::ERR_ROAD_ONE_WAY_ROADS_CANNOT_HAVE_JUNCTIONS, "ERR_ROAD_ONE_WAY_ROADS_CANNOT_HAVE_JUNCTIONS");
	SQAIRoad.DefSQConst(engine, ScriptRoad::ERR_ROADTYPE_DISALLOWS_CROSSING,              "ERR_ROADTYPE_DISALLOWS_CROSSING");
	SQAIRoad.DefSQConst(engine, ScriptRoad::ERR_UNSUITABLE_ROAD,                          "ERR_UNSUITABLE_ROAD");
	SQAIRoad.DefSQConst(engine, ScriptRoad::ROADTYPE_ROAD,                                "ROADTYPE_ROAD");
	SQAIRoad.DefSQConst(engine, ScriptRoad::ROADTYPE_TRAM,                                "ROADTYPE_TRAM");
	SQAIRoad.DefSQConst(engine, ScriptRoad::ROADTYPE_INVALID,                             "ROADTYPE_INVALID");
	SQAIRoad.DefSQConst(engine, ScriptRoad::ROADTRAMTYPES_ROAD,                           "ROADTRAMTYPES_ROAD");
	SQAIRoad.DefSQConst(engine, ScriptRoad::ROADTRAMTYPES_TRAM,                           "ROADTRAMTYPES_TRAM");
	SQAIRoad.DefSQConst(engine, ScriptRoad::ROADVEHTYPE_BUS,                              "ROADVEHTYPE_BUS");
	SQAIRoad.DefSQConst(engine, ScriptRoad::ROADVEHTYPE_TRUCK,                            "ROADVEHTYPE_TRUCK");
	SQAIRoad.DefSQConst(engine, ScriptRoad::BT_ROAD,                                      "BT_ROAD");
	SQAIRoad.DefSQConst(engine, ScriptRoad::BT_DEPOT,                                     "BT_DEPOT");
	SQAIRoad.DefSQConst(engine, ScriptRoad::BT_BUS_STOP,                                  "BT_BUS_STOP");
	SQAIRoad.DefSQConst(engine, ScriptRoad::BT_TRUCK_STOP,                                "BT_TRUCK_STOP");

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

	SQAIRoad.DefSQStaticMethod(engine, &ScriptRoad::GetName,                        "GetName",                        ".i");
	SQAIRoad.DefSQStaticMethod(engine, &ScriptRoad::GetRoadVehicleTypeForCargo,     "GetRoadVehicleTypeForCargo",     ".i");
	SQAIRoad.DefSQStaticMethod(engine, &ScriptRoad::IsRoadTile,                     "IsRoadTile",                     ".i");
	SQAIRoad.DefSQStaticMethod(engine, &ScriptRoad::IsRoadDepotTile,                "IsRoadDepotTile",                ".i");
	SQAIRoad.DefSQStaticMethod(engine, &ScriptRoad::IsRoadStationTile,              "IsRoadStationTile",              ".i");
	SQAIRoad.DefSQStaticMethod(engine, &ScriptRoad::IsDriveThroughRoadStationTile,  "IsDriveThroughRoadStationTile",  ".i");
	SQAIRoad.DefSQStaticMethod(engine, &ScriptRoad::IsRoadTypeAvailable,            "IsRoadTypeAvailable",            ".i");
	SQAIRoad.DefSQStaticMethod(engine, &ScriptRoad::GetCurrentRoadType,             "GetCurrentRoadType",             ".");
	SQAIRoad.DefSQStaticMethod(engine, &ScriptRoad::SetCurrentRoadType,             "SetCurrentRoadType",             ".i");
	SQAIRoad.DefSQStaticMethod(engine, &ScriptRoad::RoadVehCanRunOnRoad,            "RoadVehCanRunOnRoad",            ".ii");
	SQAIRoad.DefSQStaticMethod(engine, &ScriptRoad::RoadVehHasPowerOnRoad,          "RoadVehHasPowerOnRoad",          ".ii");
	SQAIRoad.DefSQStaticMethod(engine, &ScriptRoad::ConvertRoadType,                "ConvertRoadType",                ".iii");
	SQAIRoad.DefSQStaticMethod(engine, &ScriptRoad::HasRoadType,                    "HasRoadType",                    ".ii");
	SQAIRoad.DefSQStaticMethod(engine, &ScriptRoad::AreRoadTilesConnected,          "AreRoadTilesConnected",          ".ii");
	SQAIRoad.DefSQStaticMethod(engine, &ScriptRoad::CanBuildConnectedRoadParts,     "CanBuildConnectedRoadParts",     ".iaii");
	SQAIRoad.DefSQStaticMethod(engine, &ScriptRoad::CanBuildConnectedRoadPartsHere, "CanBuildConnectedRoadPartsHere", ".iii");
	SQAIRoad.DefSQStaticMethod(engine, &ScriptRoad::GetNeighbourRoadCount,          "GetNeighbourRoadCount",          ".i");
	SQAIRoad.DefSQStaticMethod(engine, &ScriptRoad::GetRoadDepotFrontTile,          "GetRoadDepotFrontTile",          ".i");
	SQAIRoad.DefSQStaticMethod(engine, &ScriptRoad::GetRoadStationFrontTile,        "GetRoadStationFrontTile",        ".i");
	SQAIRoad.DefSQStaticMethod(engine, &ScriptRoad::GetDriveThroughBackTile,        "GetDriveThroughBackTile",        ".i");
	SQAIRoad.DefSQStaticMethod(engine, &ScriptRoad::BuildRoad,                      "BuildRoad",                      ".ii");
	SQAIRoad.DefSQStaticMethod(engine, &ScriptRoad::BuildOneWayRoad,                "BuildOneWayRoad",                ".ii");
	SQAIRoad.DefSQStaticMethod(engine, &ScriptRoad::BuildRoadFull,                  "BuildRoadFull",                  ".ii");
	SQAIRoad.DefSQStaticMethod(engine, &ScriptRoad::BuildOneWayRoadFull,            "BuildOneWayRoadFull",            ".ii");
	SQAIRoad.DefSQStaticMethod(engine, &ScriptRoad::BuildRoadDepot,                 "BuildRoadDepot",                 ".ii");
	SQAIRoad.DefSQStaticMethod(engine, &ScriptRoad::BuildRoadStation,               "BuildRoadStation",               ".iiii");
	SQAIRoad.DefSQStaticMethod(engine, &ScriptRoad::BuildDriveThroughRoadStation,   "BuildDriveThroughRoadStation",   ".iiii");
	SQAIRoad.DefSQStaticMethod(engine, &ScriptRoad::RemoveRoad,                     "RemoveRoad",                     ".ii");
	SQAIRoad.DefSQStaticMethod(engine, &ScriptRoad::RemoveRoadFull,                 "RemoveRoadFull",                 ".ii");
	SQAIRoad.DefSQStaticMethod(engine, &ScriptRoad::RemoveRoadDepot,                "RemoveRoadDepot",                ".i");
	SQAIRoad.DefSQStaticMethod(engine, &ScriptRoad::RemoveRoadStation,              "RemoveRoadStation",              ".i");
	SQAIRoad.DefSQStaticMethod(engine, &ScriptRoad::GetBuildCost,                   "GetBuildCost",                   ".ii");
	SQAIRoad.DefSQStaticMethod(engine, &ScriptRoad::GetRoadTramType,                "GetRoadTramType",                ".i");
	SQAIRoad.DefSQStaticMethod(engine, &ScriptRoad::GetMaxSpeed,                    "GetMaxSpeed",                    ".i");
	SQAIRoad.DefSQStaticMethod(engine, &ScriptRoad::GetMaintenanceCostFactor,       "GetMaintenanceCostFactor",       ".i");

	SQAIRoad.PostRegister(engine);
}
