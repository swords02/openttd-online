/*
 * This file is part of OpenTTD.
 * OpenTTD is free software; you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, version 2.
 * OpenTTD is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 * See the GNU General Public License for more details. You should have received a copy of the GNU General Public License along with OpenTTD. If not, see <https://www.gnu.org/licenses/old-licenses/gpl-2.0>.
 */

/* THIS FILE IS AUTO-GENERATED; PLEASE DO NOT ALTER MANUALLY */

#include "../script_enginelist.hpp"
#include "../template/template_enginelist.sq.hpp"


template <> SQInteger PushClassName<ScriptEngineList, ScriptType::GS>(HSQUIRRELVM vm) { sq_pushstring(vm, "GSEngineList"); return 1; }

void SQGSEngineList_Register(Squirrel &engine)
{
	DefSQClass<ScriptEngineList, ScriptType::GS> SQGSEngineList("GSEngineList");
	SQGSEngineList.PreRegister(engine, "GSList");
	SQGSEngineList.AddConstructor<void (ScriptEngineList::*)(ScriptVehicle::VehicleType vehicle_type)>(engine, "xi");

	SQGSEngineList.PostRegister(engine);
}
