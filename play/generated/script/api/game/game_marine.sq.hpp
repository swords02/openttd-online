/*
 * This file is part of OpenTTD.
 * OpenTTD is free software; you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, version 2.
 * OpenTTD is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 * See the GNU General Public License for more details. You should have received a copy of the GNU General Public License along with OpenTTD. If not, see <https://www.gnu.org/licenses/old-licenses/gpl-2.0>.
 */

/* THIS FILE IS AUTO-GENERATED; PLEASE DO NOT ALTER MANUALLY */

#include "../script_marine.hpp"
#include "../template/template_marine.sq.hpp"


template <> SQInteger PushClassName<ScriptMarine, ScriptType::GS>(HSQUIRRELVM vm) { sq_pushstring(vm, "GSMarine"); return 1; }

void SQGSMarine_Register(Squirrel &engine)
{
	DefSQClass<ScriptMarine, ScriptType::GS> SQGSMarine("GSMarine");
	SQGSMarine.PreRegister(engine, "GSObject");

	SQGSMarine.DefSQConst(engine, ScriptMarine::ERR_MARINE_BASE,                   "ERR_MARINE_BASE");
	SQGSMarine.DefSQConst(engine, ScriptMarine::ERR_MARINE_MUST_BE_BUILT_ON_WATER, "ERR_MARINE_MUST_BE_BUILT_ON_WATER");
	SQGSMarine.DefSQConst(engine, ScriptMarine::BT_DOCK,                           "BT_DOCK");
	SQGSMarine.DefSQConst(engine, ScriptMarine::BT_DEPOT,                          "BT_DEPOT");
	SQGSMarine.DefSQConst(engine, ScriptMarine::BT_BUOY,                           "BT_BUOY");
	SQGSMarine.DefSQConst(engine, ScriptMarine::BT_LOCK,                           "BT_LOCK");
	SQGSMarine.DefSQConst(engine, ScriptMarine::BT_CANAL,                          "BT_CANAL");

	ScriptError::RegisterErrorMap(STR_ERROR_MUST_BE_BUILT_ON_WATER, ScriptMarine::ERR_MARINE_MUST_BE_BUILT_ON_WATER);

	ScriptError::RegisterErrorMapString(ScriptMarine::ERR_MARINE_MUST_BE_BUILT_ON_WATER, "ERR_MARINE_MUST_BE_BUILT_ON_WATER");

	SQGSMarine.DefSQStaticMethod(engine, &ScriptMarine::IsWaterDepotTile,       "IsWaterDepotTile",       ".i");
	SQGSMarine.DefSQStaticMethod(engine, &ScriptMarine::IsDockTile,             "IsDockTile",             ".i");
	SQGSMarine.DefSQStaticMethod(engine, &ScriptMarine::IsBuoyTile,             "IsBuoyTile",             ".i");
	SQGSMarine.DefSQStaticMethod(engine, &ScriptMarine::IsLockTile,             "IsLockTile",             ".i");
	SQGSMarine.DefSQStaticMethod(engine, &ScriptMarine::IsCanalTile,            "IsCanalTile",            ".i");
	SQGSMarine.DefSQStaticMethod(engine, &ScriptMarine::AreWaterTilesConnected, "AreWaterTilesConnected", ".ii");
	SQGSMarine.DefSQStaticMethod(engine, &ScriptMarine::BuildWaterDepot,        "BuildWaterDepot",        ".ii");
	SQGSMarine.DefSQStaticMethod(engine, &ScriptMarine::BuildDock,              "BuildDock",              ".ii");
	SQGSMarine.DefSQStaticMethod(engine, &ScriptMarine::BuildBuoy,              "BuildBuoy",              ".i");
	SQGSMarine.DefSQStaticMethod(engine, &ScriptMarine::BuildLock,              "BuildLock",              ".i");
	SQGSMarine.DefSQStaticMethod(engine, &ScriptMarine::BuildCanal,             "BuildCanal",             ".i");
	SQGSMarine.DefSQStaticMethod(engine, &ScriptMarine::RemoveWaterDepot,       "RemoveWaterDepot",       ".i");
	SQGSMarine.DefSQStaticMethod(engine, &ScriptMarine::RemoveDock,             "RemoveDock",             ".i");
	SQGSMarine.DefSQStaticMethod(engine, &ScriptMarine::RemoveBuoy,             "RemoveBuoy",             ".i");
	SQGSMarine.DefSQStaticMethod(engine, &ScriptMarine::RemoveLock,             "RemoveLock",             ".i");
	SQGSMarine.DefSQStaticMethod(engine, &ScriptMarine::RemoveCanal,            "RemoveCanal",            ".i");
	SQGSMarine.DefSQStaticMethod(engine, &ScriptMarine::GetBuildCost,           "GetBuildCost",           ".i");

	SQGSMarine.PostRegister(engine);
}
