/*
 * This file is part of OpenTTD.
 * OpenTTD is free software; you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, version 2.
 * OpenTTD is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 * See the GNU General Public License for more details. You should have received a copy of the GNU General Public License along with OpenTTD. If not, see <https://www.gnu.org/licenses/old-licenses/gpl-2.0>.
 */

/* THIS FILE IS AUTO-GENERATED; PLEASE DO NOT ALTER MANUALLY */

#include "../script_vehiclelist.hpp"
#include "../template/template_vehiclelist.sq.hpp"


template <> SQInteger PushClassName<ScriptVehicleList, ScriptType::AI>(HSQUIRRELVM vm) { sq_pushstring(vm, "AIVehicleList"); return 1; }

void SQAIVehicleList_Register(Squirrel &engine)
{
	DefSQClass<ScriptVehicleList, ScriptType::AI> SQAIVehicleList("AIVehicleList");
	SQAIVehicleList.PreRegister(engine, "AIList");
	SQAIVehicleList.AddSQAdvancedConstructor(engine);

	SQAIVehicleList.PostRegister(engine);
}


template <> SQInteger PushClassName<ScriptVehicleList_Station, ScriptType::AI>(HSQUIRRELVM vm) { sq_pushstring(vm, "AIVehicleList_Station"); return 1; }

void SQAIVehicleList_Station_Register(Squirrel &engine)
{
	DefSQClass<ScriptVehicleList_Station, ScriptType::AI> SQAIVehicleList_Station("AIVehicleList_Station");
	SQAIVehicleList_Station.PreRegister(engine, "AIList");
	SQAIVehicleList_Station.AddSQAdvancedConstructor(engine);

	SQAIVehicleList_Station.PostRegister(engine);
}


template <> SQInteger PushClassName<ScriptVehicleList_Waypoint, ScriptType::AI>(HSQUIRRELVM vm) { sq_pushstring(vm, "AIVehicleList_Waypoint"); return 1; }

void SQAIVehicleList_Waypoint_Register(Squirrel &engine)
{
	DefSQClass<ScriptVehicleList_Waypoint, ScriptType::AI> SQAIVehicleList_Waypoint("AIVehicleList_Waypoint");
	SQAIVehicleList_Waypoint.PreRegister(engine, "AIList");
	SQAIVehicleList_Waypoint.AddConstructor<void (ScriptVehicleList_Waypoint::*)(StationID waypoint_id)>(engine, "xi");

	SQAIVehicleList_Waypoint.PostRegister(engine);
}


template <> SQInteger PushClassName<ScriptVehicleList_Depot, ScriptType::AI>(HSQUIRRELVM vm) { sq_pushstring(vm, "AIVehicleList_Depot"); return 1; }

void SQAIVehicleList_Depot_Register(Squirrel &engine)
{
	DefSQClass<ScriptVehicleList_Depot, ScriptType::AI> SQAIVehicleList_Depot("AIVehicleList_Depot");
	SQAIVehicleList_Depot.PreRegister(engine, "AIList");
	SQAIVehicleList_Depot.AddConstructor<void (ScriptVehicleList_Depot::*)(TileIndex tile)>(engine, "xi");

	SQAIVehicleList_Depot.PostRegister(engine);
}


template <> SQInteger PushClassName<ScriptVehicleList_SharedOrders, ScriptType::AI>(HSQUIRRELVM vm) { sq_pushstring(vm, "AIVehicleList_SharedOrders"); return 1; }

void SQAIVehicleList_SharedOrders_Register(Squirrel &engine)
{
	DefSQClass<ScriptVehicleList_SharedOrders, ScriptType::AI> SQAIVehicleList_SharedOrders("AIVehicleList_SharedOrders");
	SQAIVehicleList_SharedOrders.PreRegister(engine, "AIList");
	SQAIVehicleList_SharedOrders.AddConstructor<void (ScriptVehicleList_SharedOrders::*)(VehicleID vehicle_id)>(engine, "xi");

	SQAIVehicleList_SharedOrders.PostRegister(engine);
}


template <> SQInteger PushClassName<ScriptVehicleList_Group, ScriptType::AI>(HSQUIRRELVM vm) { sq_pushstring(vm, "AIVehicleList_Group"); return 1; }

void SQAIVehicleList_Group_Register(Squirrel &engine)
{
	DefSQClass<ScriptVehicleList_Group, ScriptType::AI> SQAIVehicleList_Group("AIVehicleList_Group");
	SQAIVehicleList_Group.PreRegister(engine, "AIList");
	SQAIVehicleList_Group.AddConstructor<void (ScriptVehicleList_Group::*)(GroupID group_id)>(engine, "xi");

	SQAIVehicleList_Group.PostRegister(engine);
}


template <> SQInteger PushClassName<ScriptVehicleList_DefaultGroup, ScriptType::AI>(HSQUIRRELVM vm) { sq_pushstring(vm, "AIVehicleList_DefaultGroup"); return 1; }

void SQAIVehicleList_DefaultGroup_Register(Squirrel &engine)
{
	DefSQClass<ScriptVehicleList_DefaultGroup, ScriptType::AI> SQAIVehicleList_DefaultGroup("AIVehicleList_DefaultGroup");
	SQAIVehicleList_DefaultGroup.PreRegister(engine, "AIList");
	SQAIVehicleList_DefaultGroup.AddConstructor<void (ScriptVehicleList_DefaultGroup::*)(ScriptVehicle::VehicleType vehicle_type)>(engine, "xi");

	SQAIVehicleList_DefaultGroup.PostRegister(engine);
}
