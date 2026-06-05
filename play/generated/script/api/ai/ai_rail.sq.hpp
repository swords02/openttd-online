/*
 * This file is part of OpenTTD.
 * OpenTTD is free software; you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, version 2.
 * OpenTTD is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 * See the GNU General Public License for more details. You should have received a copy of the GNU General Public License along with OpenTTD. If not, see <https://www.gnu.org/licenses/old-licenses/gpl-2.0>.
 */

/* THIS FILE IS AUTO-GENERATED; PLEASE DO NOT ALTER MANUALLY */

#include "../script_rail.hpp"
#include "../template/template_rail.sq.hpp"


template <> SQInteger PushClassName<ScriptRail, ScriptType::AI>(HSQUIRRELVM vm) { sq_pushstring(vm, "AIRail"); return 1; }

void SQAIRail_Register(Squirrel &engine)
{
	DefSQClass<ScriptRail, ScriptType::AI> SQAIRail("AIRail");
	SQAIRail.PreRegister(engine, "AIObject");

	SQAIRail.DefSQConst(engine, ScriptRail::ERR_RAIL_BASE,                   "ERR_RAIL_BASE");
	SQAIRail.DefSQConst(engine, ScriptRail::ERR_CROSSING_ON_ONEWAY_ROAD,     "ERR_CROSSING_ON_ONEWAY_ROAD");
	SQAIRail.DefSQConst(engine, ScriptRail::ERR_UNSUITABLE_TRACK,            "ERR_UNSUITABLE_TRACK");
	SQAIRail.DefSQConst(engine, ScriptRail::ERR_RAILTYPE_DISALLOWS_CROSSING, "ERR_RAILTYPE_DISALLOWS_CROSSING");
	SQAIRail.DefSQConst(engine, ScriptRail::RAILTYPE_INVALID,                "RAILTYPE_INVALID");
	SQAIRail.DefSQConst(engine, ScriptRail::RAILTRACK_NE_SW,                 "RAILTRACK_NE_SW");
	SQAIRail.DefSQConst(engine, ScriptRail::RAILTRACK_NW_SE,                 "RAILTRACK_NW_SE");
	SQAIRail.DefSQConst(engine, ScriptRail::RAILTRACK_NW_NE,                 "RAILTRACK_NW_NE");
	SQAIRail.DefSQConst(engine, ScriptRail::RAILTRACK_SW_SE,                 "RAILTRACK_SW_SE");
	SQAIRail.DefSQConst(engine, ScriptRail::RAILTRACK_NW_SW,                 "RAILTRACK_NW_SW");
	SQAIRail.DefSQConst(engine, ScriptRail::RAILTRACK_NE_SE,                 "RAILTRACK_NE_SE");
	SQAIRail.DefSQConst(engine, ScriptRail::RAILTRACK_INVALID,               "RAILTRACK_INVALID");
	SQAIRail.DefSQConst(engine, ScriptRail::SIGNALTYPE_NORMAL,               "SIGNALTYPE_NORMAL");
	SQAIRail.DefSQConst(engine, ScriptRail::SIGNALTYPE_ENTRY,                "SIGNALTYPE_ENTRY");
	SQAIRail.DefSQConst(engine, ScriptRail::SIGNALTYPE_EXIT,                 "SIGNALTYPE_EXIT");
	SQAIRail.DefSQConst(engine, ScriptRail::SIGNALTYPE_COMBO,                "SIGNALTYPE_COMBO");
	SQAIRail.DefSQConst(engine, ScriptRail::SIGNALTYPE_PBS,                  "SIGNALTYPE_PBS");
	SQAIRail.DefSQConst(engine, ScriptRail::SIGNALTYPE_PBS_ONEWAY,           "SIGNALTYPE_PBS_ONEWAY");
	SQAIRail.DefSQConst(engine, ScriptRail::SIGNALTYPE_TWOWAY,               "SIGNALTYPE_TWOWAY");
	SQAIRail.DefSQConst(engine, ScriptRail::SIGNALTYPE_NORMAL_TWOWAY,        "SIGNALTYPE_NORMAL_TWOWAY");
	SQAIRail.DefSQConst(engine, ScriptRail::SIGNALTYPE_ENTRY_TWOWAY,         "SIGNALTYPE_ENTRY_TWOWAY");
	SQAIRail.DefSQConst(engine, ScriptRail::SIGNALTYPE_EXIT_TWOWAY,          "SIGNALTYPE_EXIT_TWOWAY");
	SQAIRail.DefSQConst(engine, ScriptRail::SIGNALTYPE_COMBO_TWOWAY,         "SIGNALTYPE_COMBO_TWOWAY");
	SQAIRail.DefSQConst(engine, ScriptRail::SIGNALTYPE_NONE,                 "SIGNALTYPE_NONE");
	SQAIRail.DefSQConst(engine, ScriptRail::BT_TRACK,                        "BT_TRACK");
	SQAIRail.DefSQConst(engine, ScriptRail::BT_SIGNAL,                       "BT_SIGNAL");
	SQAIRail.DefSQConst(engine, ScriptRail::BT_DEPOT,                        "BT_DEPOT");
	SQAIRail.DefSQConst(engine, ScriptRail::BT_STATION,                      "BT_STATION");
	SQAIRail.DefSQConst(engine, ScriptRail::BT_WAYPOINT,                     "BT_WAYPOINT");

	ScriptError::RegisterErrorMap(STR_ERROR_CROSSING_ON_ONEWAY_ROAD,    ScriptRail::ERR_CROSSING_ON_ONEWAY_ROAD);
	ScriptError::RegisterErrorMap(STR_ERROR_NO_SUITABLE_RAILROAD_TRACK, ScriptRail::ERR_UNSUITABLE_TRACK);
	ScriptError::RegisterErrorMap(STR_ERROR_THERE_IS_NO_RAILROAD_TRACK, ScriptRail::ERR_UNSUITABLE_TRACK);
	ScriptError::RegisterErrorMap(STR_ERROR_THERE_ARE_NO_SIGNALS,       ScriptRail::ERR_UNSUITABLE_TRACK);
	ScriptError::RegisterErrorMap(STR_ERROR_THERE_IS_NO_STATION,        ScriptRail::ERR_UNSUITABLE_TRACK);
	ScriptError::RegisterErrorMap(STR_ERROR_CROSSING_DISALLOWED_RAIL,   ScriptRail::ERR_RAILTYPE_DISALLOWS_CROSSING);

	ScriptError::RegisterErrorMapString(ScriptRail::ERR_CROSSING_ON_ONEWAY_ROAD,     "ERR_CROSSING_ON_ONEWAY_ROAD");
	ScriptError::RegisterErrorMapString(ScriptRail::ERR_UNSUITABLE_TRACK,            "ERR_UNSUITABLE_TRACK");
	ScriptError::RegisterErrorMapString(ScriptRail::ERR_RAILTYPE_DISALLOWS_CROSSING, "ERR_RAILTYPE_DISALLOWS_CROSSING");

	SQAIRail.DefSQStaticMethod(engine, &ScriptRail::GetName,                         "GetName",                         ".i");
	SQAIRail.DefSQStaticMethod(engine, &ScriptRail::IsRailTile,                      "IsRailTile",                      ".i");
	SQAIRail.DefSQStaticMethod(engine, &ScriptRail::IsLevelCrossingTile,             "IsLevelCrossingTile",             ".i");
	SQAIRail.DefSQStaticMethod(engine, &ScriptRail::IsRailDepotTile,                 "IsRailDepotTile",                 ".i");
	SQAIRail.DefSQStaticMethod(engine, &ScriptRail::IsRailStationTile,               "IsRailStationTile",               ".i");
	SQAIRail.DefSQStaticMethod(engine, &ScriptRail::IsRailWaypointTile,              "IsRailWaypointTile",              ".i");
	SQAIRail.DefSQStaticMethod(engine, &ScriptRail::IsRailTypeAvailable,             "IsRailTypeAvailable",             ".i");
	SQAIRail.DefSQStaticMethod(engine, &ScriptRail::GetCurrentRailType,              "GetCurrentRailType",              ".");
	SQAIRail.DefSQStaticMethod(engine, &ScriptRail::SetCurrentRailType,              "SetCurrentRailType",              ".i");
	SQAIRail.DefSQStaticMethod(engine, &ScriptRail::TrainCanRunOnRail,               "TrainCanRunOnRail",               ".ii");
	SQAIRail.DefSQStaticMethod(engine, &ScriptRail::TrainHasPowerOnRail,             "TrainHasPowerOnRail",             ".ii");
	SQAIRail.DefSQStaticMethod(engine, &ScriptRail::GetRailType,                     "GetRailType",                     ".i");
	SQAIRail.DefSQStaticMethod(engine, &ScriptRail::ConvertRailType,                 "ConvertRailType",                 ".iii");
	SQAIRail.DefSQStaticMethod(engine, &ScriptRail::GetRailDepotFrontTile,           "GetRailDepotFrontTile",           ".i");
	SQAIRail.DefSQStaticMethod(engine, &ScriptRail::GetRailStationDirection,         "GetRailStationDirection",         ".i");
	SQAIRail.DefSQStaticMethod(engine, &ScriptRail::BuildRailDepot,                  "BuildRailDepot",                  ".ii");
	SQAIRail.DefSQStaticMethod(engine, &ScriptRail::BuildRailStation,                "BuildRailStation",                ".iiiii");
	SQAIRail.DefSQStaticMethod(engine, &ScriptRail::BuildNewGRFRailStation,          "BuildNewGRFRailStation",          ".iiiiiiiiib");
	SQAIRail.DefSQStaticMethod(engine, &ScriptRail::BuildRailWaypoint,               "BuildRailWaypoint",               ".i");
	SQAIRail.DefSQStaticMethod(engine, &ScriptRail::RemoveRailWaypointTileRectangle, "RemoveRailWaypointTileRectangle", ".iib");
	SQAIRail.DefSQStaticMethod(engine, &ScriptRail::RemoveRailStationTileRectangle,  "RemoveRailStationTileRectangle",  ".iib");
	SQAIRail.DefSQStaticMethod(engine, &ScriptRail::GetRailTracks,                   "GetRailTracks",                   ".i");
	SQAIRail.DefSQStaticMethod(engine, &ScriptRail::BuildRailTrack,                  "BuildRailTrack",                  ".ii");
	SQAIRail.DefSQStaticMethod(engine, &ScriptRail::RemoveRailTrack,                 "RemoveRailTrack",                 ".ii");
	SQAIRail.DefSQStaticMethod(engine, &ScriptRail::AreTilesConnected,               "AreTilesConnected",               ".iii");
	SQAIRail.DefSQStaticMethod(engine, &ScriptRail::BuildRail,                       "BuildRail",                       ".iii");
	SQAIRail.DefSQStaticMethod(engine, &ScriptRail::RemoveRail,                      "RemoveRail",                      ".iii");
	SQAIRail.DefSQStaticMethod(engine, &ScriptRail::GetSignalType,                   "GetSignalType",                   ".ii");
	SQAIRail.DefSQStaticMethod(engine, &ScriptRail::BuildSignal,                     "BuildSignal",                     ".iii");
	SQAIRail.DefSQStaticMethod(engine, &ScriptRail::RemoveSignal,                    "RemoveSignal",                    ".ii");
	SQAIRail.DefSQStaticMethod(engine, &ScriptRail::GetBuildCost,                    "GetBuildCost",                    ".ii");
	SQAIRail.DefSQStaticMethod(engine, &ScriptRail::GetMaxSpeed,                     "GetMaxSpeed",                     ".i");
	SQAIRail.DefSQStaticMethod(engine, &ScriptRail::GetMaintenanceCostFactor,        "GetMaintenanceCostFactor",        ".i");

	SQAIRail.PostRegister(engine);
}
