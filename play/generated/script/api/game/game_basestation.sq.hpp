/*
 * This file is part of OpenTTD.
 * OpenTTD is free software; you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, version 2.
 * OpenTTD is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 * See the GNU General Public License for more details. You should have received a copy of the GNU General Public License along with OpenTTD. If not, see <https://www.gnu.org/licenses/old-licenses/gpl-2.0>.
 */

/* THIS FILE IS AUTO-GENERATED; PLEASE DO NOT ALTER MANUALLY */

#include "../script_basestation.hpp"
#include "../template/template_basestation.sq.hpp"


template <> SQInteger PushClassName<ScriptBaseStation, ScriptType::GS>(HSQUIRRELVM vm) { sq_pushstring(vm, "GSBaseStation"); return 1; }

void SQGSBaseStation_Register(Squirrel &engine)
{
	DefSQClass<ScriptBaseStation, ScriptType::GS> SQGSBaseStation("GSBaseStation");
	SQGSBaseStation.PreRegister(engine, "GSObject");

	SQGSBaseStation.DefSQConst(engine, ScriptBaseStation::STATION_NEW,           "STATION_NEW");
	SQGSBaseStation.DefSQConst(engine, ScriptBaseStation::STATION_JOIN_ADJACENT, "STATION_JOIN_ADJACENT");
	SQGSBaseStation.DefSQConst(engine, ScriptBaseStation::STATION_INVALID,       "STATION_INVALID");

	SQGSBaseStation.DefSQStaticMethod(engine, &ScriptBaseStation::IsValidBaseStation,  "IsValidBaseStation",  ".i");
	SQGSBaseStation.DefSQStaticMethod(engine, &ScriptBaseStation::GetOwner,            "GetOwner",            ".i");
	SQGSBaseStation.DefSQStaticMethod(engine, &ScriptBaseStation::GetName,             "GetName",             ".i");
	SQGSBaseStation.DefSQStaticMethod(engine, &ScriptBaseStation::SetName,             "SetName",             ".i.");
	SQGSBaseStation.DefSQStaticMethod(engine, &ScriptBaseStation::GetLocation,         "GetLocation",         ".i");
	SQGSBaseStation.DefSQStaticMethod(engine, &ScriptBaseStation::GetConstructionDate, "GetConstructionDate", ".i");

	SQGSBaseStation.PostRegister(engine);
}
