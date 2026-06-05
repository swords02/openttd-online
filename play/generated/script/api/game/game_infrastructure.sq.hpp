/*
 * This file is part of OpenTTD.
 * OpenTTD is free software; you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, version 2.
 * OpenTTD is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 * See the GNU General Public License for more details. You should have received a copy of the GNU General Public License along with OpenTTD. If not, see <https://www.gnu.org/licenses/old-licenses/gpl-2.0>.
 */

/* THIS FILE IS AUTO-GENERATED; PLEASE DO NOT ALTER MANUALLY */

#include "../script_infrastructure.hpp"
#include "../template/template_infrastructure.sq.hpp"


template <> SQInteger PushClassName<ScriptInfrastructure, ScriptType::GS>(HSQUIRRELVM vm) { sq_pushstring(vm, "GSInfrastructure"); return 1; }

void SQGSInfrastructure_Register(Squirrel &engine)
{
	DefSQClass<ScriptInfrastructure, ScriptType::GS> SQGSInfrastructure("GSInfrastructure");
	SQGSInfrastructure.PreRegister(engine, "GSObject");

	SQGSInfrastructure.DefSQConst(engine, ScriptInfrastructure::INFRASTRUCTURE_RAIL,    "INFRASTRUCTURE_RAIL");
	SQGSInfrastructure.DefSQConst(engine, ScriptInfrastructure::INFRASTRUCTURE_SIGNALS, "INFRASTRUCTURE_SIGNALS");
	SQGSInfrastructure.DefSQConst(engine, ScriptInfrastructure::INFRASTRUCTURE_ROAD,    "INFRASTRUCTURE_ROAD");
	SQGSInfrastructure.DefSQConst(engine, ScriptInfrastructure::INFRASTRUCTURE_CANAL,   "INFRASTRUCTURE_CANAL");
	SQGSInfrastructure.DefSQConst(engine, ScriptInfrastructure::INFRASTRUCTURE_STATION, "INFRASTRUCTURE_STATION");
	SQGSInfrastructure.DefSQConst(engine, ScriptInfrastructure::INFRASTRUCTURE_AIRPORT, "INFRASTRUCTURE_AIRPORT");

	SQGSInfrastructure.DefSQStaticMethod(engine, &ScriptInfrastructure::GetRailPieceCount,             "GetRailPieceCount",             ".ii");
	SQGSInfrastructure.DefSQStaticMethod(engine, &ScriptInfrastructure::GetRoadPieceCount,             "GetRoadPieceCount",             ".ii");
	SQGSInfrastructure.DefSQStaticMethod(engine, &ScriptInfrastructure::GetInfrastructurePieceCount,   "GetInfrastructurePieceCount",   ".ii");
	SQGSInfrastructure.DefSQStaticMethod(engine, &ScriptInfrastructure::GetMonthlyRailCosts,           "GetMonthlyRailCosts",           ".ii");
	SQGSInfrastructure.DefSQStaticMethod(engine, &ScriptInfrastructure::GetMonthlyRoadCosts,           "GetMonthlyRoadCosts",           ".ii");
	SQGSInfrastructure.DefSQStaticMethod(engine, &ScriptInfrastructure::GetMonthlyInfrastructureCosts, "GetMonthlyInfrastructureCosts", ".ii");

	SQGSInfrastructure.PostRegister(engine);
}
