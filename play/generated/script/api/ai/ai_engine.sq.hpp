/*
 * This file is part of OpenTTD.
 * OpenTTD is free software; you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, version 2.
 * OpenTTD is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 * See the GNU General Public License for more details. You should have received a copy of the GNU General Public License along with OpenTTD. If not, see <https://www.gnu.org/licenses/old-licenses/gpl-2.0>.
 */

/* THIS FILE IS AUTO-GENERATED; PLEASE DO NOT ALTER MANUALLY */

#include "../script_engine.hpp"
#include "../template/template_engine.sq.hpp"


template <> SQInteger PushClassName<ScriptEngine, ScriptType::AI>(HSQUIRRELVM vm) { sq_pushstring(vm, "AIEngine"); return 1; }

void SQAIEngine_Register(Squirrel &engine)
{
	DefSQClass<ScriptEngine, ScriptType::AI> SQAIEngine("AIEngine");
	SQAIEngine.PreRegister(engine, "AIObject");

	SQAIEngine.DefSQStaticMethod(engine, &ScriptEngine::IsValidEngine,           "IsValidEngine",           ".i");
	SQAIEngine.DefSQStaticMethod(engine, &ScriptEngine::IsBuildable,             "IsBuildable",             ".i");
	SQAIEngine.DefSQStaticMethod(engine, &ScriptEngine::GetName,                 "GetName",                 ".i");
	SQAIEngine.DefSQStaticMethod(engine, &ScriptEngine::GetCargoType,            "GetCargoType",            ".i");
	SQAIEngine.DefSQStaticMethod(engine, &ScriptEngine::CanRefitCargo,           "CanRefitCargo",           ".ii");
	SQAIEngine.DefSQStaticMethod(engine, &ScriptEngine::CanPullCargo,            "CanPullCargo",            ".ii");
	SQAIEngine.DefSQStaticMethod(engine, &ScriptEngine::GetCapacity,             "GetCapacity",             ".i");
	SQAIEngine.DefSQStaticMethod(engine, &ScriptEngine::GetReliability,          "GetReliability",          ".i");
	SQAIEngine.DefSQStaticMethod(engine, &ScriptEngine::GetMaxSpeed,             "GetMaxSpeed",             ".i");
	SQAIEngine.DefSQStaticMethod(engine, &ScriptEngine::GetPrice,                "GetPrice",                ".i");
	SQAIEngine.DefSQStaticMethod(engine, &ScriptEngine::GetMaxAge,               "GetMaxAge",               ".i");
	SQAIEngine.DefSQStaticMethod(engine, &ScriptEngine::GetRunningCost,          "GetRunningCost",          ".i");
	SQAIEngine.DefSQStaticMethod(engine, &ScriptEngine::GetPower,                "GetPower",                ".i");
	SQAIEngine.DefSQStaticMethod(engine, &ScriptEngine::GetWeight,               "GetWeight",               ".i");
	SQAIEngine.DefSQStaticMethod(engine, &ScriptEngine::GetMaxTractiveEffort,    "GetMaxTractiveEffort",    ".i");
	SQAIEngine.DefSQStaticMethod(engine, &ScriptEngine::GetDesignDate,           "GetDesignDate",           ".i");
	SQAIEngine.DefSQStaticMethod(engine, &ScriptEngine::GetVehicleType,          "GetVehicleType",          ".i");
	SQAIEngine.DefSQStaticMethod(engine, &ScriptEngine::IsWagon,                 "IsWagon",                 ".i");
	SQAIEngine.DefSQStaticMethod(engine, &ScriptEngine::CanRunOnRail,            "CanRunOnRail",            ".ii");
	SQAIEngine.DefSQStaticMethod(engine, &ScriptEngine::HasPowerOnRail,          "HasPowerOnRail",          ".ii");
	SQAIEngine.DefSQStaticMethod(engine, &ScriptEngine::CanRunOnRoad,            "CanRunOnRoad",            ".ii");
	SQAIEngine.DefSQStaticMethod(engine, &ScriptEngine::HasPowerOnRoad,          "HasPowerOnRoad",          ".ii");
	SQAIEngine.DefSQStaticMethod(engine, &ScriptEngine::GetRoadType,             "GetRoadType",             ".i");
	SQAIEngine.DefSQStaticMethod(engine, &ScriptEngine::GetRailType,             "GetRailType",             ".i");
	SQAIEngine.DefSQStaticMethod(engine, &ScriptEngine::GetAllRailTypes,         "GetAllRailTypes",         ".i");
	SQAIEngine.DefSQStaticMethod(engine, &ScriptEngine::IsArticulated,           "IsArticulated",           ".i");
	SQAIEngine.DefSQStaticMethod(engine, &ScriptEngine::GetPlaneType,            "GetPlaneType",            ".i");
	SQAIEngine.DefSQStaticMethod(engine, &ScriptEngine::GetMaximumOrderDistance, "GetMaximumOrderDistance", ".i");

	SQAIEngine.PostRegister(engine);
}
