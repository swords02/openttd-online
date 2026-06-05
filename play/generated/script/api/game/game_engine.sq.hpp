/*
 * This file is part of OpenTTD.
 * OpenTTD is free software; you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, version 2.
 * OpenTTD is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 * See the GNU General Public License for more details. You should have received a copy of the GNU General Public License along with OpenTTD. If not, see <https://www.gnu.org/licenses/old-licenses/gpl-2.0>.
 */

/* THIS FILE IS AUTO-GENERATED; PLEASE DO NOT ALTER MANUALLY */

#include "../script_engine.hpp"
#include "../template/template_engine.sq.hpp"


template <> SQInteger PushClassName<ScriptEngine, ScriptType::GS>(HSQUIRRELVM vm) { sq_pushstring(vm, "GSEngine"); return 1; }

void SQGSEngine_Register(Squirrel &engine)
{
	DefSQClass<ScriptEngine, ScriptType::GS> SQGSEngine("GSEngine");
	SQGSEngine.PreRegister(engine, "GSObject");

	SQGSEngine.DefSQStaticMethod(engine, &ScriptEngine::IsValidEngine,           "IsValidEngine",           ".i");
	SQGSEngine.DefSQStaticMethod(engine, &ScriptEngine::IsBuildable,             "IsBuildable",             ".i");
	SQGSEngine.DefSQStaticMethod(engine, &ScriptEngine::GetName,                 "GetName",                 ".i");
	SQGSEngine.DefSQStaticMethod(engine, &ScriptEngine::GetCargoType,            "GetCargoType",            ".i");
	SQGSEngine.DefSQStaticMethod(engine, &ScriptEngine::CanRefitCargo,           "CanRefitCargo",           ".ii");
	SQGSEngine.DefSQStaticMethod(engine, &ScriptEngine::CanPullCargo,            "CanPullCargo",            ".ii");
	SQGSEngine.DefSQStaticMethod(engine, &ScriptEngine::GetCapacity,             "GetCapacity",             ".i");
	SQGSEngine.DefSQStaticMethod(engine, &ScriptEngine::GetReliability,          "GetReliability",          ".i");
	SQGSEngine.DefSQStaticMethod(engine, &ScriptEngine::GetMaxSpeed,             "GetMaxSpeed",             ".i");
	SQGSEngine.DefSQStaticMethod(engine, &ScriptEngine::GetPrice,                "GetPrice",                ".i");
	SQGSEngine.DefSQStaticMethod(engine, &ScriptEngine::GetMaxAge,               "GetMaxAge",               ".i");
	SQGSEngine.DefSQStaticMethod(engine, &ScriptEngine::GetRunningCost,          "GetRunningCost",          ".i");
	SQGSEngine.DefSQStaticMethod(engine, &ScriptEngine::GetPower,                "GetPower",                ".i");
	SQGSEngine.DefSQStaticMethod(engine, &ScriptEngine::GetWeight,               "GetWeight",               ".i");
	SQGSEngine.DefSQStaticMethod(engine, &ScriptEngine::GetMaxTractiveEffort,    "GetMaxTractiveEffort",    ".i");
	SQGSEngine.DefSQStaticMethod(engine, &ScriptEngine::GetDesignDate,           "GetDesignDate",           ".i");
	SQGSEngine.DefSQStaticMethod(engine, &ScriptEngine::GetVehicleType,          "GetVehicleType",          ".i");
	SQGSEngine.DefSQStaticMethod(engine, &ScriptEngine::IsWagon,                 "IsWagon",                 ".i");
	SQGSEngine.DefSQStaticMethod(engine, &ScriptEngine::CanRunOnRail,            "CanRunOnRail",            ".ii");
	SQGSEngine.DefSQStaticMethod(engine, &ScriptEngine::HasPowerOnRail,          "HasPowerOnRail",          ".ii");
	SQGSEngine.DefSQStaticMethod(engine, &ScriptEngine::CanRunOnRoad,            "CanRunOnRoad",            ".ii");
	SQGSEngine.DefSQStaticMethod(engine, &ScriptEngine::HasPowerOnRoad,          "HasPowerOnRoad",          ".ii");
	SQGSEngine.DefSQStaticMethod(engine, &ScriptEngine::GetRoadType,             "GetRoadType",             ".i");
	SQGSEngine.DefSQStaticMethod(engine, &ScriptEngine::GetRailType,             "GetRailType",             ".i");
	SQGSEngine.DefSQStaticMethod(engine, &ScriptEngine::GetAllRailTypes,         "GetAllRailTypes",         ".i");
	SQGSEngine.DefSQStaticMethod(engine, &ScriptEngine::IsArticulated,           "IsArticulated",           ".i");
	SQGSEngine.DefSQStaticMethod(engine, &ScriptEngine::GetPlaneType,            "GetPlaneType",            ".i");
	SQGSEngine.DefSQStaticMethod(engine, &ScriptEngine::GetMaximumOrderDistance, "GetMaximumOrderDistance", ".i");
	SQGSEngine.DefSQStaticMethod(engine, &ScriptEngine::EnableForCompany,        "EnableForCompany",        ".ii");
	SQGSEngine.DefSQStaticMethod(engine, &ScriptEngine::DisableForCompany,       "DisableForCompany",       ".ii");

	SQGSEngine.PostRegister(engine);
}
