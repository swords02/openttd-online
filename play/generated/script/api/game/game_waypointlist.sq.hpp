/*
 * This file is part of OpenTTD.
 * OpenTTD is free software; you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, version 2.
 * OpenTTD is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 * See the GNU General Public License for more details. You should have received a copy of the GNU General Public License along with OpenTTD. If not, see <https://www.gnu.org/licenses/old-licenses/gpl-2.0>.
 */

/* THIS FILE IS AUTO-GENERATED; PLEASE DO NOT ALTER MANUALLY */

#include "../script_waypointlist.hpp"
#include "../template/template_waypointlist.sq.hpp"


template <> SQInteger PushClassName<ScriptWaypointList, ScriptType::GS>(HSQUIRRELVM vm) { sq_pushstring(vm, "GSWaypointList"); return 1; }

void SQGSWaypointList_Register(Squirrel &engine)
{
	DefSQClass<ScriptWaypointList, ScriptType::GS> SQGSWaypointList("GSWaypointList");
	SQGSWaypointList.PreRegister(engine, "GSList");
	SQGSWaypointList.AddConstructor<void (ScriptWaypointList::*)(ScriptWaypoint::WaypointType waypoint_type)>(engine, "xi");

	SQGSWaypointList.PostRegister(engine);
}


template <> SQInteger PushClassName<ScriptWaypointList_Vehicle, ScriptType::GS>(HSQUIRRELVM vm) { sq_pushstring(vm, "GSWaypointList_Vehicle"); return 1; }

void SQGSWaypointList_Vehicle_Register(Squirrel &engine)
{
	DefSQClass<ScriptWaypointList_Vehicle, ScriptType::GS> SQGSWaypointList_Vehicle("GSWaypointList_Vehicle");
	SQGSWaypointList_Vehicle.PreRegister(engine, "GSList");
	SQGSWaypointList_Vehicle.AddConstructor<void (ScriptWaypointList_Vehicle::*)(VehicleID vehicle_id)>(engine, "xi");

	SQGSWaypointList_Vehicle.PostRegister(engine);
}
