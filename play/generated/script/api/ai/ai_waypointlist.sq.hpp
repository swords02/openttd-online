/*
 * This file is part of OpenTTD.
 * OpenTTD is free software; you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, version 2.
 * OpenTTD is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 * See the GNU General Public License for more details. You should have received a copy of the GNU General Public License along with OpenTTD. If not, see <https://www.gnu.org/licenses/old-licenses/gpl-2.0>.
 */

/* THIS FILE IS AUTO-GENERATED; PLEASE DO NOT ALTER MANUALLY */

#include "../script_waypointlist.hpp"
#include "../template/template_waypointlist.sq.hpp"


template <> SQInteger PushClassName<ScriptWaypointList, ScriptType::AI>(HSQUIRRELVM vm) { sq_pushstring(vm, "AIWaypointList"); return 1; }

void SQAIWaypointList_Register(Squirrel &engine)
{
	DefSQClass<ScriptWaypointList, ScriptType::AI> SQAIWaypointList("AIWaypointList");
	SQAIWaypointList.PreRegister(engine, "AIList");
	SQAIWaypointList.AddConstructor<void (ScriptWaypointList::*)(ScriptWaypoint::WaypointType waypoint_type)>(engine, "xi");

	SQAIWaypointList.PostRegister(engine);
}


template <> SQInteger PushClassName<ScriptWaypointList_Vehicle, ScriptType::AI>(HSQUIRRELVM vm) { sq_pushstring(vm, "AIWaypointList_Vehicle"); return 1; }

void SQAIWaypointList_Vehicle_Register(Squirrel &engine)
{
	DefSQClass<ScriptWaypointList_Vehicle, ScriptType::AI> SQAIWaypointList_Vehicle("AIWaypointList_Vehicle");
	SQAIWaypointList_Vehicle.PreRegister(engine, "AIList");
	SQAIWaypointList_Vehicle.AddConstructor<void (ScriptWaypointList_Vehicle::*)(VehicleID vehicle_id)>(engine, "xi");

	SQAIWaypointList_Vehicle.PostRegister(engine);
}
