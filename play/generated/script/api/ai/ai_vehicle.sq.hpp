/*
 * This file is part of OpenTTD.
 * OpenTTD is free software; you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, version 2.
 * OpenTTD is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 * See the GNU General Public License for more details. You should have received a copy of the GNU General Public License along with OpenTTD. If not, see <https://www.gnu.org/licenses/old-licenses/gpl-2.0>.
 */

/* THIS FILE IS AUTO-GENERATED; PLEASE DO NOT ALTER MANUALLY */

#include "../script_vehicle.hpp"
#include "../template/template_vehicle.sq.hpp"


template <> SQInteger PushClassName<ScriptVehicle, ScriptType::AI>(HSQUIRRELVM vm) { sq_pushstring(vm, "AIVehicle"); return 1; }

void SQAIVehicle_Register(Squirrel &engine)
{
	DefSQClass<ScriptVehicle, ScriptType::AI> SQAIVehicle("AIVehicle");
	SQAIVehicle.PreRegister(engine, "AIObject");

	SQAIVehicle.DefSQConst(engine, ScriptVehicle::ERR_VEHICLE_BASE,                 "ERR_VEHICLE_BASE");
	SQAIVehicle.DefSQConst(engine, ScriptVehicle::ERR_VEHICLE_TOO_MANY,             "ERR_VEHICLE_TOO_MANY");
	SQAIVehicle.DefSQConst(engine, ScriptVehicle::ERR_VEHICLE_NOT_AVAILABLE,        "ERR_VEHICLE_NOT_AVAILABLE");
	SQAIVehicle.DefSQConst(engine, ScriptVehicle::ERR_VEHICLE_BUILD_DISABLED,       "ERR_VEHICLE_BUILD_DISABLED");
	SQAIVehicle.DefSQConst(engine, ScriptVehicle::ERR_VEHICLE_WRONG_DEPOT,          "ERR_VEHICLE_WRONG_DEPOT");
	SQAIVehicle.DefSQConst(engine, ScriptVehicle::ERR_VEHICLE_CANNOT_SEND_TO_DEPOT, "ERR_VEHICLE_CANNOT_SEND_TO_DEPOT");
	SQAIVehicle.DefSQConst(engine, ScriptVehicle::ERR_VEHICLE_CANNOT_START_STOP,    "ERR_VEHICLE_CANNOT_START_STOP");
	SQAIVehicle.DefSQConst(engine, ScriptVehicle::ERR_VEHICLE_CANNOT_TURN,          "ERR_VEHICLE_CANNOT_TURN");
	SQAIVehicle.DefSQConst(engine, ScriptVehicle::ERR_VEHICLE_CANNOT_REFIT,         "ERR_VEHICLE_CANNOT_REFIT");
	SQAIVehicle.DefSQConst(engine, ScriptVehicle::ERR_VEHICLE_IS_DESTROYED,         "ERR_VEHICLE_IS_DESTROYED");
	SQAIVehicle.DefSQConst(engine, ScriptVehicle::ERR_VEHICLE_NOT_IN_DEPOT,         "ERR_VEHICLE_NOT_IN_DEPOT");
	SQAIVehicle.DefSQConst(engine, ScriptVehicle::ERR_VEHICLE_IN_FLIGHT,            "ERR_VEHICLE_IN_FLIGHT");
	SQAIVehicle.DefSQConst(engine, ScriptVehicle::ERR_VEHICLE_NO_POWER,             "ERR_VEHICLE_NO_POWER");
	SQAIVehicle.DefSQConst(engine, ScriptVehicle::ERR_VEHICLE_TOO_LONG,             "ERR_VEHICLE_TOO_LONG");
	SQAIVehicle.DefSQConst(engine, ScriptVehicle::VT_RAIL,                          "VT_RAIL");
	SQAIVehicle.DefSQConst(engine, ScriptVehicle::VT_ROAD,                          "VT_ROAD");
	SQAIVehicle.DefSQConst(engine, ScriptVehicle::VT_WATER,                         "VT_WATER");
	SQAIVehicle.DefSQConst(engine, ScriptVehicle::VT_AIR,                           "VT_AIR");
	SQAIVehicle.DefSQConst(engine, ScriptVehicle::VT_INVALID,                       "VT_INVALID");
	SQAIVehicle.DefSQConst(engine, ScriptVehicle::VS_RUNNING,                       "VS_RUNNING");
	SQAIVehicle.DefSQConst(engine, ScriptVehicle::VS_STOPPED,                       "VS_STOPPED");
	SQAIVehicle.DefSQConst(engine, ScriptVehicle::VS_IN_DEPOT,                      "VS_IN_DEPOT");
	SQAIVehicle.DefSQConst(engine, ScriptVehicle::VS_AT_STATION,                    "VS_AT_STATION");
	SQAIVehicle.DefSQConst(engine, ScriptVehicle::VS_BROKEN,                        "VS_BROKEN");
	SQAIVehicle.DefSQConst(engine, ScriptVehicle::VS_CRASHED,                       "VS_CRASHED");
	SQAIVehicle.DefSQConst(engine, ScriptVehicle::VS_INVALID,                       "VS_INVALID");

	SQAIVehicle.DefSQConst(engine, ScriptVehicle::VEHICLE_INVALID, "VEHICLE_INVALID");

	ScriptError::RegisterErrorMap(STR_ERROR_TOO_MANY_VEHICLES_IN_GAME,                           ScriptVehicle::ERR_VEHICLE_TOO_MANY);
	ScriptError::RegisterErrorMap(STR_ERROR_AIRCRAFT_NOT_AVAILABLE,                              ScriptVehicle::ERR_VEHICLE_NOT_AVAILABLE);
	ScriptError::RegisterErrorMap(STR_ERROR_ROAD_VEHICLE_NOT_AVAILABLE,                          ScriptVehicle::ERR_VEHICLE_NOT_AVAILABLE);
	ScriptError::RegisterErrorMap(STR_ERROR_SHIP_NOT_AVAILABLE,                                  ScriptVehicle::ERR_VEHICLE_NOT_AVAILABLE);
	ScriptError::RegisterErrorMap(STR_ERROR_RAIL_VEHICLE_NOT_AVAILABLE,                          ScriptVehicle::ERR_VEHICLE_NOT_AVAILABLE);
	ScriptError::RegisterErrorMap(STR_ERROR_CAN_T_BUY_TRAIN,                                     ScriptVehicle::ERR_VEHICLE_BUILD_DISABLED);
	ScriptError::RegisterErrorMap(STR_ERROR_CAN_T_BUY_ROAD_VEHICLE,                              ScriptVehicle::ERR_VEHICLE_BUILD_DISABLED);
	ScriptError::RegisterErrorMap(STR_ERROR_CAN_T_BUY_SHIP,                                      ScriptVehicle::ERR_VEHICLE_BUILD_DISABLED);
	ScriptError::RegisterErrorMap(STR_ERROR_CAN_T_BUY_AIRCRAFT,                                  ScriptVehicle::ERR_VEHICLE_BUILD_DISABLED);
	ScriptError::RegisterErrorMap(STR_ERROR_DEPOT_WRONG_DEPOT_TYPE,                              ScriptVehicle::ERR_VEHICLE_WRONG_DEPOT);
	ScriptError::RegisterErrorMap(STR_ERROR_CAN_T_SEND_TRAIN_TO_DEPOT,                           ScriptVehicle::ERR_VEHICLE_CANNOT_SEND_TO_DEPOT);
	ScriptError::RegisterErrorMap(STR_ERROR_CAN_T_SEND_ROAD_VEHICLE_TO_DEPOT,                    ScriptVehicle::ERR_VEHICLE_CANNOT_SEND_TO_DEPOT);
	ScriptError::RegisterErrorMap(STR_ERROR_CAN_T_SEND_SHIP_TO_DEPOT,                            ScriptVehicle::ERR_VEHICLE_CANNOT_SEND_TO_DEPOT);
	ScriptError::RegisterErrorMap(STR_ERROR_CAN_T_SEND_AIRCRAFT_TO_HANGAR,                       ScriptVehicle::ERR_VEHICLE_CANNOT_SEND_TO_DEPOT);
	ScriptError::RegisterErrorMap(STR_ERROR_CAN_T_STOP_START_TRAIN,                              ScriptVehicle::ERR_VEHICLE_CANNOT_START_STOP);
	ScriptError::RegisterErrorMap(STR_ERROR_CAN_T_STOP_START_ROAD_VEHICLE,                       ScriptVehicle::ERR_VEHICLE_CANNOT_START_STOP);
	ScriptError::RegisterErrorMap(STR_ERROR_CAN_T_STOP_START_SHIP,                               ScriptVehicle::ERR_VEHICLE_CANNOT_START_STOP);
	ScriptError::RegisterErrorMap(STR_ERROR_CAN_T_STOP_START_AIRCRAFT,                           ScriptVehicle::ERR_VEHICLE_CANNOT_START_STOP);
	ScriptError::RegisterErrorMap(STR_ERROR_CAN_T_MAKE_ROAD_VEHICLE_TURN,                        ScriptVehicle::ERR_VEHICLE_CANNOT_TURN);
	ScriptError::RegisterErrorMap(STR_ERROR_CAN_T_REVERSE_DIRECTION_TRAIN,                       ScriptVehicle::ERR_VEHICLE_CANNOT_TURN);
	ScriptError::RegisterErrorMap(STR_ERROR_CAN_T_REVERSE_DIRECTION_RAIL_VEHICLE,                ScriptVehicle::ERR_VEHICLE_CANNOT_TURN);
	ScriptError::RegisterErrorMap(STR_ERROR_CAN_T_REVERSE_DIRECTION_RAIL_VEHICLE_MULTIPLE_UNITS, ScriptVehicle::ERR_VEHICLE_CANNOT_TURN);
	ScriptError::RegisterErrorMap(STR_ERROR_CAN_T_REFIT_TRAIN,                                   ScriptVehicle::ERR_VEHICLE_CANNOT_REFIT);
	ScriptError::RegisterErrorMap(STR_ERROR_CAN_T_REFIT_ROAD_VEHICLE,                            ScriptVehicle::ERR_VEHICLE_CANNOT_REFIT);
	ScriptError::RegisterErrorMap(STR_ERROR_CAN_T_REFIT_SHIP,                                    ScriptVehicle::ERR_VEHICLE_CANNOT_REFIT);
	ScriptError::RegisterErrorMap(STR_ERROR_CAN_T_REFIT_AIRCRAFT,                                ScriptVehicle::ERR_VEHICLE_CANNOT_REFIT);
	ScriptError::RegisterErrorMap(STR_ERROR_VEHICLE_IS_DESTROYED,                                ScriptVehicle::ERR_VEHICLE_IS_DESTROYED);
	ScriptError::RegisterErrorMap(STR_ERROR_AIRCRAFT_MUST_BE_STOPPED_INSIDE_HANGAR,              ScriptVehicle::ERR_VEHICLE_NOT_IN_DEPOT);
	ScriptError::RegisterErrorMap(STR_ERROR_ROAD_VEHICLE_MUST_BE_STOPPED_INSIDE_DEPOT,           ScriptVehicle::ERR_VEHICLE_NOT_IN_DEPOT);
	ScriptError::RegisterErrorMap(STR_ERROR_TRAIN_MUST_BE_STOPPED_INSIDE_DEPOT,                  ScriptVehicle::ERR_VEHICLE_NOT_IN_DEPOT);
	ScriptError::RegisterErrorMap(STR_ERROR_SHIP_MUST_BE_STOPPED_INSIDE_DEPOT,                   ScriptVehicle::ERR_VEHICLE_NOT_IN_DEPOT);
	ScriptError::RegisterErrorMap(STR_ERROR_AIRCRAFT_IS_IN_FLIGHT,                               ScriptVehicle::ERR_VEHICLE_IN_FLIGHT);
	ScriptError::RegisterErrorMap(STR_ERROR_TRAIN_START_NO_POWER,                                ScriptVehicle::ERR_VEHICLE_NO_POWER);
	ScriptError::RegisterErrorMap(STR_ERROR_TRAIN_TOO_LONG,                                      ScriptVehicle::ERR_VEHICLE_TOO_LONG);

	ScriptError::RegisterErrorMapString(ScriptVehicle::ERR_VEHICLE_TOO_MANY,             "ERR_VEHICLE_TOO_MANY");
	ScriptError::RegisterErrorMapString(ScriptVehicle::ERR_VEHICLE_NOT_AVAILABLE,        "ERR_VEHICLE_NOT_AVAILABLE");
	ScriptError::RegisterErrorMapString(ScriptVehicle::ERR_VEHICLE_BUILD_DISABLED,       "ERR_VEHICLE_BUILD_DISABLED");
	ScriptError::RegisterErrorMapString(ScriptVehicle::ERR_VEHICLE_WRONG_DEPOT,          "ERR_VEHICLE_WRONG_DEPOT");
	ScriptError::RegisterErrorMapString(ScriptVehicle::ERR_VEHICLE_CANNOT_SEND_TO_DEPOT, "ERR_VEHICLE_CANNOT_SEND_TO_DEPOT");
	ScriptError::RegisterErrorMapString(ScriptVehicle::ERR_VEHICLE_CANNOT_START_STOP,    "ERR_VEHICLE_CANNOT_START_STOP");
	ScriptError::RegisterErrorMapString(ScriptVehicle::ERR_VEHICLE_CANNOT_TURN,          "ERR_VEHICLE_CANNOT_TURN");
	ScriptError::RegisterErrorMapString(ScriptVehicle::ERR_VEHICLE_CANNOT_REFIT,         "ERR_VEHICLE_CANNOT_REFIT");
	ScriptError::RegisterErrorMapString(ScriptVehicle::ERR_VEHICLE_IS_DESTROYED,         "ERR_VEHICLE_IS_DESTROYED");
	ScriptError::RegisterErrorMapString(ScriptVehicle::ERR_VEHICLE_NOT_IN_DEPOT,         "ERR_VEHICLE_NOT_IN_DEPOT");
	ScriptError::RegisterErrorMapString(ScriptVehicle::ERR_VEHICLE_IN_FLIGHT,            "ERR_VEHICLE_IN_FLIGHT");
	ScriptError::RegisterErrorMapString(ScriptVehicle::ERR_VEHICLE_NO_POWER,             "ERR_VEHICLE_NO_POWER");
	ScriptError::RegisterErrorMapString(ScriptVehicle::ERR_VEHICLE_TOO_LONG,             "ERR_VEHICLE_TOO_LONG");

	SQAIVehicle.DefSQStaticMethod(engine, &ScriptVehicle::IsValidVehicle,                 "IsValidVehicle",                 ".i");
	SQAIVehicle.DefSQStaticMethod(engine, &ScriptVehicle::IsPrimaryVehicle,               "IsPrimaryVehicle",               ".i");
	SQAIVehicle.DefSQStaticMethod(engine, &ScriptVehicle::GetNumWagons,                   "GetNumWagons",                   ".i");
	SQAIVehicle.DefSQStaticMethod(engine, &ScriptVehicle::SetName,                        "SetName",                        ".i.");
	SQAIVehicle.DefSQStaticMethod(engine, &ScriptVehicle::GetName,                        "GetName",                        ".i");
	SQAIVehicle.DefSQStaticMethod(engine, &ScriptVehicle::GetLocation,                    "GetLocation",                    ".i");
	SQAIVehicle.DefSQStaticMethod(engine, &ScriptVehicle::GetEngineType,                  "GetEngineType",                  ".i");
	SQAIVehicle.DefSQStaticMethod(engine, &ScriptVehicle::GetWagonEngineType,             "GetWagonEngineType",             ".ii");
	SQAIVehicle.DefSQStaticMethod(engine, &ScriptVehicle::GetUnitNumber,                  "GetUnitNumber",                  ".i");
	SQAIVehicle.DefSQStaticMethod(engine, &ScriptVehicle::GetAge,                         "GetAge",                         ".i");
	SQAIVehicle.DefSQStaticMethod(engine, &ScriptVehicle::GetWagonAge,                    "GetWagonAge",                    ".ii");
	SQAIVehicle.DefSQStaticMethod(engine, &ScriptVehicle::GetMaxAge,                      "GetMaxAge",                      ".i");
	SQAIVehicle.DefSQStaticMethod(engine, &ScriptVehicle::GetAgeLeft,                     "GetAgeLeft",                     ".i");
	SQAIVehicle.DefSQStaticMethod(engine, &ScriptVehicle::GetCurrentSpeed,                "GetCurrentSpeed",                ".i");
	SQAIVehicle.DefSQStaticMethod(engine, &ScriptVehicle::GetState,                       "GetState",                       ".i");
	SQAIVehicle.DefSQStaticMethod(engine, &ScriptVehicle::GetRunningCost,                 "GetRunningCost",                 ".i");
	SQAIVehicle.DefSQStaticMethod(engine, &ScriptVehicle::GetProfitThisYear,              "GetProfitThisYear",              ".i");
	SQAIVehicle.DefSQStaticMethod(engine, &ScriptVehicle::GetProfitLastYear,              "GetProfitLastYear",              ".i");
	SQAIVehicle.DefSQStaticMethod(engine, &ScriptVehicle::GetCurrentValue,                "GetCurrentValue",                ".i");
	SQAIVehicle.DefSQStaticMethod(engine, &ScriptVehicle::GetVehicleType,                 "GetVehicleType",                 ".i");
	SQAIVehicle.DefSQStaticMethod(engine, &ScriptVehicle::GetRoadType,                    "GetRoadType",                    ".i");
	SQAIVehicle.DefSQStaticMethod(engine, &ScriptVehicle::IsInDepot,                      "IsInDepot",                      ".i");
	SQAIVehicle.DefSQStaticMethod(engine, &ScriptVehicle::IsStoppedInDepot,               "IsStoppedInDepot",               ".i");
	SQAIVehicle.DefSQStaticMethod(engine, &ScriptVehicle::BuildVehicle,                   "BuildVehicle",                   ".ii");
	SQAIVehicle.DefSQStaticMethod(engine, &ScriptVehicle::BuildVehicleWithRefit,          "BuildVehicleWithRefit",          ".iii");
	SQAIVehicle.DefSQStaticMethod(engine, &ScriptVehicle::GetBuildWithRefitCapacity,      "GetBuildWithRefitCapacity",      ".iii");
	SQAIVehicle.DefSQStaticMethod(engine, &ScriptVehicle::CloneVehicle,                   "CloneVehicle",                   ".iib");
	SQAIVehicle.DefSQStaticMethod(engine, &ScriptVehicle::MoveWagon,                      "MoveWagon",                      ".iiii");
	SQAIVehicle.DefSQStaticMethod(engine, &ScriptVehicle::MoveWagonChain,                 "MoveWagonChain",                 ".iiii");
	SQAIVehicle.DefSQStaticMethod(engine, &ScriptVehicle::GetRefitCapacity,               "GetRefitCapacity",               ".ii");
	SQAIVehicle.DefSQStaticMethod(engine, &ScriptVehicle::RefitVehicle,                   "RefitVehicle",                   ".ii");
	SQAIVehicle.DefSQStaticMethod(engine, &ScriptVehicle::SellVehicle,                    "SellVehicle",                    ".i");
	SQAIVehicle.DefSQStaticMethod(engine, &ScriptVehicle::SellWagon,                      "SellWagon",                      ".ii");
	SQAIVehicle.DefSQStaticMethod(engine, &ScriptVehicle::SellWagonChain,                 "SellWagonChain",                 ".ii");
	SQAIVehicle.DefSQStaticMethod(engine, &ScriptVehicle::SendVehicleToDepot,             "SendVehicleToDepot",             ".i");
	SQAIVehicle.DefSQStaticMethod(engine, &ScriptVehicle::SendVehicleToDepotForServicing, "SendVehicleToDepotForServicing", ".i");
	SQAIVehicle.DefSQStaticMethod(engine, &ScriptVehicle::StartStopVehicle,               "StartStopVehicle",               ".i");
	SQAIVehicle.DefSQStaticMethod(engine, &ScriptVehicle::ReverseVehicle,                 "ReverseVehicle",                 ".i");
	SQAIVehicle.DefSQStaticMethod(engine, &ScriptVehicle::GetCapacity,                    "GetCapacity",                    ".ii");
	SQAIVehicle.DefSQStaticMethod(engine, &ScriptVehicle::GetLength,                      "GetLength",                      ".i");
	SQAIVehicle.DefSQStaticMethod(engine, &ScriptVehicle::GetCargoLoad,                   "GetCargoLoad",                   ".ii");
	SQAIVehicle.DefSQStaticMethod(engine, &ScriptVehicle::GetGroupID,                     "GetGroupID",                     ".i");
	SQAIVehicle.DefSQStaticMethod(engine, &ScriptVehicle::IsArticulated,                  "IsArticulated",                  ".i");
	SQAIVehicle.DefSQStaticMethod(engine, &ScriptVehicle::HasSharedOrders,                "HasSharedOrders",                ".i");
	SQAIVehicle.DefSQStaticMethod(engine, &ScriptVehicle::GetReliability,                 "GetReliability",                 ".i");
	SQAIVehicle.DefSQStaticMethod(engine, &ScriptVehicle::GetMaximumOrderDistance,        "GetMaximumOrderDistance",        ".i");

	SQAIVehicle.PostRegister(engine);
}
