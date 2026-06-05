/*
 * This file is part of OpenTTD.
 * OpenTTD is free software; you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, version 2.
 * OpenTTD is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 * See the GNU General Public License for more details. You should have received a copy of the GNU General Public License along with OpenTTD. If not, see <https://www.gnu.org/licenses/old-licenses/gpl-2.0>.
 */

/* THIS FILE IS AUTO-GENERATED; PLEASE DO NOT ALTER MANUALLY */

#include "../script_infrastructure.hpp"
#include "../template/template_infrastructure.sq.hpp"


template <> SQInteger PushClassName<ScriptInfrastructure, ScriptType::AI>(HSQUIRRELVM vm) { sq_pushstring(vm, "AIInfrastructure"); return 1; }

void SQAIInfrastructure_Register(Squirrel &engine)
{
	DefSQClass<ScriptInfrastructure, ScriptType::AI> SQAIInfrastructure("AIInfrastructure");
	SQAIInfrastructure.PreRegister(engine, "AIObject");

	SQAIInfrastructure.DefSQConst(engine, ScriptInfrastructure::INFRASTRUCTURE_RAIL,    "INFRASTRUCTURE_RAIL");
	SQAIInfrastructure.DefSQConst(engine, ScriptInfrastructure::INFRASTRUCTURE_SIGNALS, "INFRASTRUCTURE_SIGNALS");
	SQAIInfrastructure.DefSQConst(engine, ScriptInfrastructure::INFRASTRUCTURE_ROAD,    "INFRASTRUCTURE_ROAD");
	SQAIInfrastructure.DefSQConst(engine, ScriptInfrastructure::INFRASTRUCTURE_CANAL,   "INFRASTRUCTURE_CANAL");
	SQAIInfrastructure.DefSQConst(engine, ScriptInfrastructure::INFRASTRUCTURE_STATION, "INFRASTRUCTURE_STATION");
	SQAIInfrastructure.DefSQConst(engine, ScriptInfrastructure::INFRASTRUCTURE_AIRPORT, "INFRASTRUCTURE_AIRPORT");

	SQAIInfrastructure.DefSQStaticMethod(engine, &ScriptInfrastructure::GetRailPieceCount,             "GetRailPieceCount",             ".ii");
	SQAIInfrastructure.DefSQStaticMethod(engine, &ScriptInfrastructure::GetRoadPieceCount,             "GetRoadPieceCount",             ".ii");
	SQAIInfrastructure.DefSQStaticMethod(engine, &ScriptInfrastructure::GetInfrastructurePieceCount,   "GetInfrastructurePieceCount",   ".ii");
	SQAIInfrastructure.DefSQStaticMethod(engine, &ScriptInfrastructure::GetMonthlyRailCosts,           "GetMonthlyRailCosts",           ".ii");
	SQAIInfrastructure.DefSQStaticMethod(engine, &ScriptInfrastructure::GetMonthlyRoadCosts,           "GetMonthlyRoadCosts",           ".ii");
	SQAIInfrastructure.DefSQStaticMethod(engine, &ScriptInfrastructure::GetMonthlyInfrastructureCosts, "GetMonthlyInfrastructureCosts", ".ii");

	SQAIInfrastructure.PostRegister(engine);
}
