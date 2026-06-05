/*
 * This file is part of OpenTTD.
 * OpenTTD is free software; you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, version 2.
 * OpenTTD is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 * See the GNU General Public License for more details. You should have received a copy of the GNU General Public License along with OpenTTD. If not, see <https://www.gnu.org/licenses/old-licenses/gpl-2.0>.
 */

/* THIS FILE IS AUTO-GENERATED; PLEASE DO NOT ALTER MANUALLY */

#include "../script_marine.hpp"
#include "../template/template_marine.sq.hpp"


template <> SQInteger PushClassName<ScriptMarine, ScriptType::AI>(HSQUIRRELVM vm) { sq_pushstring(vm, "AIMarine"); return 1; }

void SQAIMarine_Register(Squirrel &engine)
{
	DefSQClass<ScriptMarine, ScriptType::AI> SQAIMarine("AIMarine");
	SQAIMarine.PreRegister(engine, "AIObject");

	SQAIMarine.DefSQConst(engine, ScriptMarine::ERR_MARINE_BASE,                   "ERR_MARINE_BASE");
	SQAIMarine.DefSQConst(engine, ScriptMarine::ERR_MARINE_MUST_BE_BUILT_ON_WATER, "ERR_MARINE_MUST_BE_BUILT_ON_WATER");
	SQAIMarine.DefSQConst(engine, ScriptMarine::BT_DOCK,                           "BT_DOCK");
	SQAIMarine.DefSQConst(engine, ScriptMarine::BT_DEPOT,                          "BT_DEPOT");
	SQAIMarine.DefSQConst(engine, ScriptMarine::BT_BUOY,                           "BT_BUOY");
	SQAIMarine.DefSQConst(engine, ScriptMarine::BT_LOCK,                           "BT_LOCK");
	SQAIMarine.DefSQConst(engine, ScriptMarine::BT_CANAL,                          "BT_CANAL");

	ScriptError::RegisterErrorMap(STR_ERROR_MUST_BE_BUILT_ON_WATER, ScriptMarine::ERR_MARINE_MUST_BE_BUILT_ON_WATER);

	ScriptError::RegisterErrorMapString(ScriptMarine::ERR_MARINE_MUST_BE_BUILT_ON_WATER, "ERR_MARINE_MUST_BE_BUILT_ON_WATER");

	SQAIMarine.DefSQStaticMethod(engine, &ScriptMarine::IsWaterDepotTile,       "IsWaterDepotTile",       ".i");
	SQAIMarine.DefSQStaticMethod(engine, &ScriptMarine::IsDockTile,             "IsDockTile",             ".i");
	SQAIMarine.DefSQStaticMethod(engine, &ScriptMarine::IsBuoyTile,             "IsBuoyTile",             ".i");
	SQAIMarine.DefSQStaticMethod(engine, &ScriptMarine::IsLockTile,             "IsLockTile",             ".i");
	SQAIMarine.DefSQStaticMethod(engine, &ScriptMarine::IsCanalTile,            "IsCanalTile",            ".i");
	SQAIMarine.DefSQStaticMethod(engine, &ScriptMarine::AreWaterTilesConnected, "AreWaterTilesConnected", ".ii");
	SQAIMarine.DefSQStaticMethod(engine, &ScriptMarine::BuildWaterDepot,        "BuildWaterDepot",        ".ii");
	SQAIMarine.DefSQStaticMethod(engine, &ScriptMarine::BuildDock,              "BuildDock",              ".ii");
	SQAIMarine.DefSQStaticMethod(engine, &ScriptMarine::BuildBuoy,              "BuildBuoy",              ".i");
	SQAIMarine.DefSQStaticMethod(engine, &ScriptMarine::BuildLock,              "BuildLock",              ".i");
	SQAIMarine.DefSQStaticMethod(engine, &ScriptMarine::BuildCanal,             "BuildCanal",             ".i");
	SQAIMarine.DefSQStaticMethod(engine, &ScriptMarine::RemoveWaterDepot,       "RemoveWaterDepot",       ".i");
	SQAIMarine.DefSQStaticMethod(engine, &ScriptMarine::RemoveDock,             "RemoveDock",             ".i");
	SQAIMarine.DefSQStaticMethod(engine, &ScriptMarine::RemoveBuoy,             "RemoveBuoy",             ".i");
	SQAIMarine.DefSQStaticMethod(engine, &ScriptMarine::RemoveLock,             "RemoveLock",             ".i");
	SQAIMarine.DefSQStaticMethod(engine, &ScriptMarine::RemoveCanal,            "RemoveCanal",            ".i");
	SQAIMarine.DefSQStaticMethod(engine, &ScriptMarine::GetBuildCost,           "GetBuildCost",           ".i");

	SQAIMarine.PostRegister(engine);
}
