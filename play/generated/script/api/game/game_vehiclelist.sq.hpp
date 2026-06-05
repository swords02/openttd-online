/*
 * This file is part of OpenTTD.
 * OpenTTD is free software; you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, version 2.
 * OpenTTD is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 * See the GNU General Public License for more details. You should have received a copy of the GNU General Public License along with OpenTTD. If not, see <https://www.gnu.org/licenses/old-licenses/gpl-2.0>.
 */

/* THIS FILE IS AUTO-GENERATED; PLEASE DO NOT ALTER MANUALLY */

#include "../script_vehiclelist.hpp"
#include "../template/template_vehiclelist.sq.hpp"


template <> SQInteger PushClassName<ScriptVehicleList, ScriptType::GS>(HSQUIRRELVM vm) { sq_pushstring(vm, "GSVehicleList"); return 1; }

void SQGSVehicleList_Register(Squirrel &engine)
{
	DefSQClass<ScriptVehicleList, ScriptType::GS> SQGSVehicleList("GSVehicleList");
	SQGSVehicleList.PreRegister(engine, "GSList");
	SQGSVehicleList.AddSQAdvancedConstructor(engine);

	SQGSVehicleList.PostRegister(engine);
}


template <> SQInteger PushClassName<ScriptVehicleList_Station, ScriptType::GS>(HSQUIRRELVM vm) { sq_pushstring(vm, "GSVehicleList_Station"); return 1; }

void SQGSVehicleList_Station_Register(Squirrel &engine)
{
	DefSQClass<ScriptVehicleList_Station, ScriptType::GS> SQGSVehicleList_Station("GSVehicleList_Station");
	SQGSVehicleList_Station.PreRegister(engine, "GSList");
	SQGSVehicleList_Station.AddSQAdvancedConstructor(engine);

	SQGSVehicleList_Station.PostRegister(engine);
}


template <> SQInteger PushClassName<ScriptVehicleList_Waypoint, ScriptType::GS>(HSQUIRRELVM vm) { sq_pushstring(vm, "GSVehicleList_Waypoint"); return 1; }

void SQGSVehicleList_Waypoint_Register(Squirrel &engine)
{
	DefSQClass<ScriptVehicleList_Waypoint, ScriptType::GS> SQGSVehicleList_Waypoint("GSVehicleList_Waypoint");
	SQGSVehicleList_Waypoint.PreRegister(engine, "GSList");
	SQGSVehicleList_Waypoint.AddConstructor<void (ScriptVehicleList_Waypoint::*)(StationID waypoint_id)>(engine, "xi");

	SQGSVehicleList_Waypoint.PostRegister(engine);
}


template <> SQInteger PushClassName<ScriptVehicleList_Depot, ScriptType::GS>(HSQUIRRELVM vm) { sq_pushstring(vm, "GSVehicleList_Depot"); return 1; }

void SQGSVehicleList_Depot_Register(Squirrel &engine)
{
	DefSQClass<ScriptVehicleList_Depot, ScriptType::GS> SQGSVehicleList_Depot("GSVehicleList_Depot");
	SQGSVehicleList_Depot.PreRegister(engine, "GSList");
	SQGSVehicleList_Depot.AddConstructor<void (ScriptVehicleList_Depot::*)(TileIndex tile)>(engine, "xi");

	SQGSVehicleList_Depot.PostRegister(engine);
}


template <> SQInteger PushClassName<ScriptVehicleList_SharedOrders, ScriptType::GS>(HSQUIRRELVM vm) { sq_pushstring(vm, "GSVehicleList_SharedOrders"); return 1; }

void SQGSVehicleList_SharedOrders_Register(Squirrel &engine)
{
	DefSQClass<ScriptVehicleList_SharedOrders, ScriptType::GS> SQGSVehicleList_SharedOrders("GSVehicleList_SharedOrders");
	SQGSVehicleList_SharedOrders.PreRegister(engine, "GSList");
	SQGSVehicleList_SharedOrders.AddConstructor<void (ScriptVehicleList_SharedOrders::*)(VehicleID vehicle_id)>(engine, "xi");

	SQGSVehicleList_SharedOrders.PostRegister(engine);
}


template <> SQInteger PushClassName<ScriptVehicleList_Group, ScriptType::GS>(HSQUIRRELVM vm) { sq_pushstring(vm, "GSVehicleList_Group"); return 1; }

void SQGSVehicleList_Group_Register(Squirrel &engine)
{
	DefSQClass<ScriptVehicleList_Group, ScriptType::GS> SQGSVehicleList_Group("GSVehicleList_Group");
	SQGSVehicleList_Group.PreRegister(engine, "GSList");
	SQGSVehicleList_Group.AddConstructor<void (ScriptVehicleList_Group::*)(GroupID group_id)>(engine, "xi");

	SQGSVehicleList_Group.PostRegister(engine);
}


template <> SQInteger PushClassName<ScriptVehicleList_DefaultGroup, ScriptType::GS>(HSQUIRRELVM vm) { sq_pushstring(vm, "GSVehicleList_DefaultGroup"); return 1; }

void SQGSVehicleList_DefaultGroup_Register(Squirrel &engine)
{
	DefSQClass<ScriptVehicleList_DefaultGroup, ScriptType::GS> SQGSVehicleList_DefaultGroup("GSVehicleList_DefaultGroup");
	SQGSVehicleList_DefaultGroup.PreRegister(engine, "GSList");
	SQGSVehicleList_DefaultGroup.AddConstructor<void (ScriptVehicleList_DefaultGroup::*)(ScriptVehicle::VehicleType vehicle_type)>(engine, "xi");

	SQGSVehicleList_DefaultGroup.PostRegister(engine);
}
