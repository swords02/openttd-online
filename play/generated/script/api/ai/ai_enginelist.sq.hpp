/*
 * This file is part of OpenTTD.
 * OpenTTD is free software; you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, version 2.
 * OpenTTD is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 * See the GNU General Public License for more details. You should have received a copy of the GNU General Public License along with OpenTTD. If not, see <https://www.gnu.org/licenses/old-licenses/gpl-2.0>.
 */

/* THIS FILE IS AUTO-GENERATED; PLEASE DO NOT ALTER MANUALLY */

#include "../script_enginelist.hpp"
#include "../template/template_enginelist.sq.hpp"


template <> SQInteger PushClassName<ScriptEngineList, ScriptType::AI>(HSQUIRRELVM vm) { sq_pushstring(vm, "AIEngineList"); return 1; }

void SQAIEngineList_Register(Squirrel &engine)
{
	DefSQClass<ScriptEngineList, ScriptType::AI> SQAIEngineList("AIEngineList");
	SQAIEngineList.PreRegister(engine, "AIList");
	SQAIEngineList.AddConstructor<void (ScriptEngineList::*)(ScriptVehicle::VehicleType vehicle_type)>(engine, "xi");

	SQAIEngineList.PostRegister(engine);
}
