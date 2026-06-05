/*
 * This file is part of OpenTTD.
 * OpenTTD is free software; you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, version 2.
 * OpenTTD is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 * See the GNU General Public License for more details. You should have received a copy of the GNU General Public License along with OpenTTD. If not, see <https://www.gnu.org/licenses/old-licenses/gpl-2.0>.
 */

/* THIS FILE IS AUTO-GENERATED; PLEASE DO NOT ALTER MANUALLY */

#include "../script_basestation.hpp"
#include "../template/template_basestation.sq.hpp"


template <> SQInteger PushClassName<ScriptBaseStation, ScriptType::AI>(HSQUIRRELVM vm) { sq_pushstring(vm, "AIBaseStation"); return 1; }

void SQAIBaseStation_Register(Squirrel &engine)
{
	DefSQClass<ScriptBaseStation, ScriptType::AI> SQAIBaseStation("AIBaseStation");
	SQAIBaseStation.PreRegister(engine, "AIObject");

	SQAIBaseStation.DefSQConst(engine, ScriptBaseStation::STATION_NEW,           "STATION_NEW");
	SQAIBaseStation.DefSQConst(engine, ScriptBaseStation::STATION_JOIN_ADJACENT, "STATION_JOIN_ADJACENT");
	SQAIBaseStation.DefSQConst(engine, ScriptBaseStation::STATION_INVALID,       "STATION_INVALID");

	SQAIBaseStation.DefSQStaticMethod(engine, &ScriptBaseStation::IsValidBaseStation,  "IsValidBaseStation",  ".i");
	SQAIBaseStation.DefSQStaticMethod(engine, &ScriptBaseStation::GetName,             "GetName",             ".i");
	SQAIBaseStation.DefSQStaticMethod(engine, &ScriptBaseStation::SetName,             "SetName",             ".i.");
	SQAIBaseStation.DefSQStaticMethod(engine, &ScriptBaseStation::GetLocation,         "GetLocation",         ".i");
	SQAIBaseStation.DefSQStaticMethod(engine, &ScriptBaseStation::GetConstructionDate, "GetConstructionDate", ".i");

	SQAIBaseStation.PostRegister(engine);
}
