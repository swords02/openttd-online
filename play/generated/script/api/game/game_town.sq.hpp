/*
 * This file is part of OpenTTD.
 * OpenTTD is free software; you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, version 2.
 * OpenTTD is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 * See the GNU General Public License for more details. You should have received a copy of the GNU General Public License along with OpenTTD. If not, see <https://www.gnu.org/licenses/old-licenses/gpl-2.0>.
 */

/* THIS FILE IS AUTO-GENERATED; PLEASE DO NOT ALTER MANUALLY */

#include "../script_town.hpp"
#include "../template/template_town.sq.hpp"


template <> SQInteger PushClassName<ScriptTown, ScriptType::GS>(HSQUIRRELVM vm) { sq_pushstring(vm, "GSTown"); return 1; }

void SQGSTown_Register(Squirrel &engine)
{
	DefSQClass<ScriptTown, ScriptType::GS> SQGSTown("GSTown");
	SQGSTown.PreRegister(engine, "GSObject");

	SQGSTown.DefSQConst(engine, ScriptTown::TOWN_ACTION_ADVERTISE_SMALL,  "TOWN_ACTION_ADVERTISE_SMALL");
	SQGSTown.DefSQConst(engine, ScriptTown::TOWN_ACTION_ADVERTISE_MEDIUM, "TOWN_ACTION_ADVERTISE_MEDIUM");
	SQGSTown.DefSQConst(engine, ScriptTown::TOWN_ACTION_ADVERTISE_LARGE,  "TOWN_ACTION_ADVERTISE_LARGE");
	SQGSTown.DefSQConst(engine, ScriptTown::TOWN_ACTION_ROAD_REBUILD,     "TOWN_ACTION_ROAD_REBUILD");
	SQGSTown.DefSQConst(engine, ScriptTown::TOWN_ACTION_BUILD_STATUE,     "TOWN_ACTION_BUILD_STATUE");
	SQGSTown.DefSQConst(engine, ScriptTown::TOWN_ACTION_FUND_BUILDINGS,   "TOWN_ACTION_FUND_BUILDINGS");
	SQGSTown.DefSQConst(engine, ScriptTown::TOWN_ACTION_BUY_RIGHTS,       "TOWN_ACTION_BUY_RIGHTS");
	SQGSTown.DefSQConst(engine, ScriptTown::TOWN_ACTION_BRIBE,            "TOWN_ACTION_BRIBE");
	SQGSTown.DefSQConst(engine, ScriptTown::TOWN_RATING_NONE,             "TOWN_RATING_NONE");
	SQGSTown.DefSQConst(engine, ScriptTown::TOWN_RATING_APPALLING,        "TOWN_RATING_APPALLING");
	SQGSTown.DefSQConst(engine, ScriptTown::TOWN_RATING_VERY_POOR,        "TOWN_RATING_VERY_POOR");
	SQGSTown.DefSQConst(engine, ScriptTown::TOWN_RATING_POOR,             "TOWN_RATING_POOR");
	SQGSTown.DefSQConst(engine, ScriptTown::TOWN_RATING_MEDIOCRE,         "TOWN_RATING_MEDIOCRE");
	SQGSTown.DefSQConst(engine, ScriptTown::TOWN_RATING_GOOD,             "TOWN_RATING_GOOD");
	SQGSTown.DefSQConst(engine, ScriptTown::TOWN_RATING_VERY_GOOD,        "TOWN_RATING_VERY_GOOD");
	SQGSTown.DefSQConst(engine, ScriptTown::TOWN_RATING_EXCELLENT,        "TOWN_RATING_EXCELLENT");
	SQGSTown.DefSQConst(engine, ScriptTown::TOWN_RATING_OUTSTANDING,      "TOWN_RATING_OUTSTANDING");
	SQGSTown.DefSQConst(engine, ScriptTown::TOWN_RATING_INVALID,          "TOWN_RATING_INVALID");
	SQGSTown.DefSQConst(engine, ScriptTown::ROAD_LAYOUT_ORIGINAL,         "ROAD_LAYOUT_ORIGINAL");
	SQGSTown.DefSQConst(engine, ScriptTown::ROAD_LAYOUT_BETTER_ROADS,     "ROAD_LAYOUT_BETTER_ROADS");
	SQGSTown.DefSQConst(engine, ScriptTown::ROAD_LAYOUT_2x2,              "ROAD_LAYOUT_2x2");
	SQGSTown.DefSQConst(engine, ScriptTown::ROAD_LAYOUT_3x3,              "ROAD_LAYOUT_3x3");
	SQGSTown.DefSQConst(engine, ScriptTown::ROAD_LAYOUT_RANDOM,           "ROAD_LAYOUT_RANDOM");
	SQGSTown.DefSQConst(engine, ScriptTown::ROAD_LAYOUT_INVALID,          "ROAD_LAYOUT_INVALID");
	SQGSTown.DefSQConst(engine, ScriptTown::TOWN_SIZE_SMALL,              "TOWN_SIZE_SMALL");
	SQGSTown.DefSQConst(engine, ScriptTown::TOWN_SIZE_MEDIUM,             "TOWN_SIZE_MEDIUM");
	SQGSTown.DefSQConst(engine, ScriptTown::TOWN_SIZE_LARGE,              "TOWN_SIZE_LARGE");
	SQGSTown.DefSQConst(engine, ScriptTown::TOWN_SIZE_INVALID,            "TOWN_SIZE_INVALID");
	SQGSTown.DefSQConst(engine, ScriptTown::TOWN_GROWTH_NONE,             "TOWN_GROWTH_NONE");
	SQGSTown.DefSQConst(engine, ScriptTown::TOWN_GROWTH_NORMAL,           "TOWN_GROWTH_NORMAL");

	SQGSTown.DefSQStaticMethod(engine, &ScriptTown::GetTownCount,                      "GetTownCount",                      ".");
	SQGSTown.DefSQStaticMethod(engine, &ScriptTown::IsValidTown,                       "IsValidTown",                       ".i");
	SQGSTown.DefSQStaticMethod(engine, &ScriptTown::GetName,                           "GetName",                           ".i");
	SQGSTown.DefSQStaticMethod(engine, &ScriptTown::SetName,                           "SetName",                           ".i.");
	SQGSTown.DefSQStaticMethod(engine, &ScriptTown::SetText,                           "SetText",                           ".i.");
	SQGSTown.DefSQStaticMethod(engine, &ScriptTown::GetPopulation,                     "GetPopulation",                     ".i");
	SQGSTown.DefSQStaticMethod(engine, &ScriptTown::GetHouseCount,                     "GetHouseCount",                     ".i");
	SQGSTown.DefSQStaticMethod(engine, &ScriptTown::GetLocation,                       "GetLocation",                       ".i");
	SQGSTown.DefSQStaticMethod(engine, &ScriptTown::GetLastMonthProduction,            "GetLastMonthProduction",            ".ii");
	SQGSTown.DefSQStaticMethod(engine, &ScriptTown::GetLastMonthSupplied,              "GetLastMonthSupplied",              ".ii");
	SQGSTown.DefSQStaticMethod(engine, &ScriptTown::GetLastMonthTransportedPercentage, "GetLastMonthTransportedPercentage", ".ii");
	SQGSTown.DefSQStaticMethod(engine, &ScriptTown::GetLastMonthReceived,              "GetLastMonthReceived",              ".ii");
	SQGSTown.DefSQStaticMethod(engine, &ScriptTown::SetCargoGoal,                      "SetCargoGoal",                      ".iii");
	SQGSTown.DefSQStaticMethod(engine, &ScriptTown::GetCargoGoal,                      "GetCargoGoal",                      ".ii");
	SQGSTown.DefSQStaticMethod(engine, &ScriptTown::SetGrowthRate,                     "SetGrowthRate",                     ".ii");
	SQGSTown.DefSQStaticMethod(engine, &ScriptTown::GetGrowthRate,                     "GetGrowthRate",                     ".i");
	SQGSTown.DefSQStaticMethod(engine, &ScriptTown::GetDistanceManhattanToTile,        "GetDistanceManhattanToTile",        ".ii");
	SQGSTown.DefSQStaticMethod(engine, &ScriptTown::GetDistanceSquareToTile,           "GetDistanceSquareToTile",           ".ii");
	SQGSTown.DefSQStaticMethod(engine, &ScriptTown::IsWithinTownInfluence,             "IsWithinTownInfluence",             ".ii");
	SQGSTown.DefSQStaticMethod(engine, &ScriptTown::HasStatue,                         "HasStatue",                         ".i");
	SQGSTown.DefSQStaticMethod(engine, &ScriptTown::IsCity,                            "IsCity",                            ".i");
	SQGSTown.DefSQStaticMethod(engine, &ScriptTown::GetRoadReworkDuration,             "GetRoadReworkDuration",             ".i");
	SQGSTown.DefSQStaticMethod(engine, &ScriptTown::GetFundBuildingsDuration,          "GetFundBuildingsDuration",          ".i");
	SQGSTown.DefSQStaticMethod(engine, &ScriptTown::GetExclusiveRightsCompany,         "GetExclusiveRightsCompany",         ".i");
	SQGSTown.DefSQStaticMethod(engine, &ScriptTown::GetExclusiveRightsDuration,        "GetExclusiveRightsDuration",        ".i");
	SQGSTown.DefSQStaticMethod(engine, &ScriptTown::IsActionAvailable,                 "IsActionAvailable",                 ".ii");
	SQGSTown.DefSQStaticMethod(engine, &ScriptTown::PerformTownAction,                 "PerformTownAction",                 ".ii");
	SQGSTown.DefSQStaticMethod(engine, &ScriptTown::ExpandTown,                        "ExpandTown",                        ".ii");
	SQGSTown.DefSQStaticMethod(engine, &ScriptTown::FoundTown,                         "FoundTown",                         ".iibi.");
	SQGSTown.DefSQStaticMethod(engine, &ScriptTown::GetRating,                         "GetRating",                         ".ii");
	SQGSTown.DefSQStaticMethod(engine, &ScriptTown::GetDetailedRating,                 "GetDetailedRating",                 ".ii");
	SQGSTown.DefSQStaticMethod(engine, &ScriptTown::ChangeRating,                      "ChangeRating",                      ".iii");
	SQGSTown.DefSQStaticMethod(engine, &ScriptTown::GetAllowedNoise,                   "GetAllowedNoise",                   ".i");
	SQGSTown.DefSQStaticMethod(engine, &ScriptTown::GetRoadLayout,                     "GetRoadLayout",                     ".i");

	SQGSTown.PostRegister(engine);
}
