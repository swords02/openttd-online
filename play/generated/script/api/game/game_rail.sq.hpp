/*
 * This file is part of OpenTTD.
 * OpenTTD is free software; you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, version 2.
 * OpenTTD is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 * See the GNU General Public License for more details. You should have received a copy of the GNU General Public License along with OpenTTD. If not, see <https://www.gnu.org/licenses/old-licenses/gpl-2.0>.
 */

/* THIS FILE IS AUTO-GENERATED; PLEASE DO NOT ALTER MANUALLY */

#include "../script_rail.hpp"
#include "../template/template_rail.sq.hpp"


template <> SQInteger PushClassName<ScriptRail, ScriptType::GS>(HSQUIRRELVM vm) { sq_pushstring(vm, "GSRail"); return 1; }

void SQGSRail_Register(Squirrel &engine)
{
	DefSQClass<ScriptRail, ScriptType::GS> SQGSRail("GSRail");
	SQGSRail.PreRegister(engine, "GSObject");

	SQGSRail.DefSQConst(engine, ScriptRail::ERR_RAIL_BASE,                   "ERR_RAIL_BASE");
	SQGSRail.DefSQConst(engine, ScriptRail::ERR_CROSSING_ON_ONEWAY_ROAD,     "ERR_CROSSING_ON_ONEWAY_ROAD");
	SQGSRail.DefSQConst(engine, ScriptRail::ERR_UNSUITABLE_TRACK,            "ERR_UNSUITABLE_TRACK");
	SQGSRail.DefSQConst(engine, ScriptRail::ERR_RAILTYPE_DISALLOWS_CROSSING, "ERR_RAILTYPE_DISALLOWS_CROSSING");
	SQGSRail.DefSQConst(engine, ScriptRail::RAILTYPE_INVALID,                "RAILTYPE_INVALID");
	SQGSRail.DefSQConst(engine, ScriptRail::RAILTRACK_NE_SW,                 "RAILTRACK_NE_SW");
	SQGSRail.DefSQConst(engine, ScriptRail::RAILTRACK_NW_SE,                 "RAILTRACK_NW_SE");
	SQGSRail.DefSQConst(engine, ScriptRail::RAILTRACK_NW_NE,                 "RAILTRACK_NW_NE");
	SQGSRail.DefSQConst(engine, ScriptRail::RAILTRACK_SW_SE,                 "RAILTRACK_SW_SE");
	SQGSRail.DefSQConst(engine, ScriptRail::RAILTRACK_NW_SW,                 "RAILTRACK_NW_SW");
	SQGSRail.DefSQConst(engine, ScriptRail::RAILTRACK_NE_SE,                 "RAILTRACK_NE_SE");
	SQGSRail.DefSQConst(engine, ScriptRail::RAILTRACK_INVALID,               "RAILTRACK_INVALID");
	SQGSRail.DefSQConst(engine, ScriptRail::SIGNALTYPE_NORMAL,               "SIGNALTYPE_NORMAL");
	SQGSRail.DefSQConst(engine, ScriptRail::SIGNALTYPE_ENTRY,                "SIGNALTYPE_ENTRY");
	SQGSRail.DefSQConst(engine, ScriptRail::SIGNALTYPE_EXIT,                 "SIGNALTYPE_EXIT");
	SQGSRail.DefSQConst(engine, ScriptRail::SIGNALTYPE_COMBO,                "SIGNALTYPE_COMBO");
	SQGSRail.DefSQConst(engine, ScriptRail::SIGNALTYPE_PBS,                  "SIGNALTYPE_PBS");
	SQGSRail.DefSQConst(engine, ScriptRail::SIGNALTYPE_PBS_ONEWAY,           "SIGNALTYPE_PBS_ONEWAY");
	SQGSRail.DefSQConst(engine, ScriptRail::SIGNALTYPE_TWOWAY,               "SIGNALTYPE_TWOWAY");
	SQGSRail.DefSQConst(engine, ScriptRail::SIGNALTYPE_NORMAL_TWOWAY,        "SIGNALTYPE_NORMAL_TWOWAY");
	SQGSRail.DefSQConst(engine, ScriptRail::SIGNALTYPE_ENTRY_TWOWAY,         "SIGNALTYPE_ENTRY_TWOWAY");
	SQGSRail.DefSQConst(engine, ScriptRail::SIGNALTYPE_EXIT_TWOWAY,          "SIGNALTYPE_EXIT_TWOWAY");
	SQGSRail.DefSQConst(engine, ScriptRail::SIGNALTYPE_COMBO_TWOWAY,         "SIGNALTYPE_COMBO_TWOWAY");
	SQGSRail.DefSQConst(engine, ScriptRail::SIGNALTYPE_NONE,                 "SIGNALTYPE_NONE");
	SQGSRail.DefSQConst(engine, ScriptRail::BT_TRACK,                        "BT_TRACK");
	SQGSRail.DefSQConst(engine, ScriptRail::BT_SIGNAL,                       "BT_SIGNAL");
	SQGSRail.DefSQConst(engine, ScriptRail::BT_DEPOT,                        "BT_DEPOT");
	SQGSRail.DefSQConst(engine, ScriptRail::BT_STATION,                      "BT_STATION");
	SQGSRail.DefSQConst(engine, ScriptRail::BT_WAYPOINT,                     "BT_WAYPOINT");

	ScriptError::RegisterErrorMap(STR_ERROR_CROSSING_ON_ONEWAY_ROAD,    ScriptRail::ERR_CROSSING_ON_ONEWAY_ROAD);
	ScriptError::RegisterErrorMap(STR_ERROR_NO_SUITABLE_RAILROAD_TRACK, ScriptRail::ERR_UNSUITABLE_TRACK);
	ScriptError::RegisterErrorMap(STR_ERROR_THERE_IS_NO_RAILROAD_TRACK, ScriptRail::ERR_UNSUITABLE_TRACK);
	ScriptError::RegisterErrorMap(STR_ERROR_THERE_ARE_NO_SIGNALS,       ScriptRail::ERR_UNSUITABLE_TRACK);
	ScriptError::RegisterErrorMap(STR_ERROR_THERE_IS_NO_STATION,        ScriptRail::ERR_UNSUITABLE_TRACK);
	ScriptError::RegisterErrorMap(STR_ERROR_CROSSING_DISALLOWED_RAIL,   ScriptRail::ERR_RAILTYPE_DISALLOWS_CROSSING);

	ScriptError::RegisterErrorMapString(ScriptRail::ERR_CROSSING_ON_ONEWAY_ROAD,     "ERR_CROSSING_ON_ONEWAY_ROAD");
	ScriptError::RegisterErrorMapString(ScriptRail::ERR_UNSUITABLE_TRACK,            "ERR_UNSUITABLE_TRACK");
	ScriptError::RegisterErrorMapString(ScriptRail::ERR_RAILTYPE_DISALLOWS_CROSSING, "ERR_RAILTYPE_DISALLOWS_CROSSING");

	SQGSRail.DefSQStaticMethod(engine, &ScriptRail::GetName,                         "GetName",                         ".i");
	SQGSRail.DefSQStaticMethod(engine, &ScriptRail::IsRailTile,                      "IsRailTile",                      ".i");
	SQGSRail.DefSQStaticMethod(engine, &ScriptRail::IsLevelCrossingTile,             "IsLevelCrossingTile",             ".i");
	SQGSRail.DefSQStaticMethod(engine, &ScriptRail::IsRailDepotTile,                 "IsRailDepotTile",                 ".i");
	SQGSRail.DefSQStaticMethod(engine, &ScriptRail::IsRailStationTile,               "IsRailStationTile",               ".i");
	SQGSRail.DefSQStaticMethod(engine, &ScriptRail::IsRailWaypointTile,              "IsRailWaypointTile",              ".i");
	SQGSRail.DefSQStaticMethod(engine, &ScriptRail::IsRailTypeAvailable,             "IsRailTypeAvailable",             ".i");
	SQGSRail.DefSQStaticMethod(engine, &ScriptRail::GetCurrentRailType,              "GetCurrentRailType",              ".");
	SQGSRail.DefSQStaticMethod(engine, &ScriptRail::SetCurrentRailType,              "SetCurrentRailType",              ".i");
	SQGSRail.DefSQStaticMethod(engine, &ScriptRail::TrainCanRunOnRail,               "TrainCanRunOnRail",               ".ii");
	SQGSRail.DefSQStaticMethod(engine, &ScriptRail::TrainHasPowerOnRail,             "TrainHasPowerOnRail",             ".ii");
	SQGSRail.DefSQStaticMethod(engine, &ScriptRail::GetRailType,                     "GetRailType",                     ".i");
	SQGSRail.DefSQStaticMethod(engine, &ScriptRail::ConvertRailType,                 "ConvertRailType",                 ".iii");
	SQGSRail.DefSQStaticMethod(engine, &ScriptRail::GetRailDepotFrontTile,           "GetRailDepotFrontTile",           ".i");
	SQGSRail.DefSQStaticMethod(engine, &ScriptRail::GetRailStationDirection,         "GetRailStationDirection",         ".i");
	SQGSRail.DefSQStaticMethod(engine, &ScriptRail::BuildRailDepot,                  "BuildRailDepot",                  ".ii");
	SQGSRail.DefSQStaticMethod(engine, &ScriptRail::BuildRailStation,                "BuildRailStation",                ".iiiii");
	SQGSRail.DefSQStaticMethod(engine, &ScriptRail::BuildNewGRFRailStation,          "BuildNewGRFRailStation",          ".iiiiiiiiib");
	SQGSRail.DefSQStaticMethod(engine, &ScriptRail::BuildRailWaypoint,               "BuildRailWaypoint",               ".i");
	SQGSRail.DefSQStaticMethod(engine, &ScriptRail::RemoveRailWaypointTileRectangle, "RemoveRailWaypointTileRectangle", ".iib");
	SQGSRail.DefSQStaticMethod(engine, &ScriptRail::RemoveRailStationTileRectangle,  "RemoveRailStationTileRectangle",  ".iib");
	SQGSRail.DefSQStaticMethod(engine, &ScriptRail::GetRailTracks,                   "GetRailTracks",                   ".i");
	SQGSRail.DefSQStaticMethod(engine, &ScriptRail::BuildRailTrack,                  "BuildRailTrack",                  ".ii");
	SQGSRail.DefSQStaticMethod(engine, &ScriptRail::RemoveRailTrack,                 "RemoveRailTrack",                 ".ii");
	SQGSRail.DefSQStaticMethod(engine, &ScriptRail::AreTilesConnected,               "AreTilesConnected",               ".iii");
	SQGSRail.DefSQStaticMethod(engine, &ScriptRail::BuildRail,                       "BuildRail",                       ".iii");
	SQGSRail.DefSQStaticMethod(engine, &ScriptRail::RemoveRail,                      "RemoveRail",                      ".iii");
	SQGSRail.DefSQStaticMethod(engine, &ScriptRail::GetSignalType,                   "GetSignalType",                   ".ii");
	SQGSRail.DefSQStaticMethod(engine, &ScriptRail::BuildSignal,                     "BuildSignal",                     ".iii");
	SQGSRail.DefSQStaticMethod(engine, &ScriptRail::RemoveSignal,                    "RemoveSignal",                    ".ii");
	SQGSRail.DefSQStaticMethod(engine, &ScriptRail::GetBuildCost,                    "GetBuildCost",                    ".ii");
	SQGSRail.DefSQStaticMethod(engine, &ScriptRail::GetMaxSpeed,                     "GetMaxSpeed",                     ".i");
	SQGSRail.DefSQStaticMethod(engine, &ScriptRail::GetMaintenanceCostFactor,        "GetMaintenanceCostFactor",        ".i");

	SQGSRail.PostRegister(engine);
}
