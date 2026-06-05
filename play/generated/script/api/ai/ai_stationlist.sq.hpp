/*
 * This file is part of OpenTTD.
 * OpenTTD is free software; you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, version 2.
 * OpenTTD is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 * See the GNU General Public License for more details. You should have received a copy of the GNU General Public License along with OpenTTD. If not, see <https://www.gnu.org/licenses/old-licenses/gpl-2.0>.
 */

/* THIS FILE IS AUTO-GENERATED; PLEASE DO NOT ALTER MANUALLY */

#include "../script_stationlist.hpp"
#include "../template/template_stationlist.sq.hpp"


template <> SQInteger PushClassName<ScriptStationList, ScriptType::AI>(HSQUIRRELVM vm) { sq_pushstring(vm, "AIStationList"); return 1; }

void SQAIStationList_Register(Squirrel &engine)
{
	DefSQClass<ScriptStationList, ScriptType::AI> SQAIStationList("AIStationList");
	SQAIStationList.PreRegister(engine, "AIList");
	SQAIStationList.AddConstructor<void (ScriptStationList::*)(ScriptStation::StationType station_type)>(engine, "xi");

	SQAIStationList.PostRegister(engine);
}


template <> SQInteger PushClassName<ScriptStationList_Cargo, ScriptType::AI>(HSQUIRRELVM vm) { sq_pushstring(vm, "AIStationList_Cargo"); return 1; }

void SQAIStationList_Cargo_Register(Squirrel &engine)
{
	DefSQClass<ScriptStationList_Cargo, ScriptType::AI> SQAIStationList_Cargo("AIStationList_Cargo");
	SQAIStationList_Cargo.PreRegister(engine, "AIList");
	SQAIStationList_Cargo.AddConstructor<void (ScriptStationList_Cargo::*)(ScriptStationList_Cargo::CargoMode mode, ScriptStationList_Cargo::CargoSelector selector, StationID station_id, CargoType cargo, StationID other_station)>(engine, "xiiiii");

	SQAIStationList_Cargo.DefSQConst(engine, ScriptStationList_Cargo::CS_BY_FROM,     "CS_BY_FROM");
	SQAIStationList_Cargo.DefSQConst(engine, ScriptStationList_Cargo::CS_VIA_BY_FROM, "CS_VIA_BY_FROM");
	SQAIStationList_Cargo.DefSQConst(engine, ScriptStationList_Cargo::CS_BY_VIA,      "CS_BY_VIA");
	SQAIStationList_Cargo.DefSQConst(engine, ScriptStationList_Cargo::CS_FROM_BY_VIA, "CS_FROM_BY_VIA");
	SQAIStationList_Cargo.DefSQConst(engine, ScriptStationList_Cargo::CM_WAITING,     "CM_WAITING");
	SQAIStationList_Cargo.DefSQConst(engine, ScriptStationList_Cargo::CM_PLANNED,     "CM_PLANNED");

	SQAIStationList_Cargo.PostRegister(engine);
}


template <> SQInteger PushClassName<ScriptStationList_CargoWaiting, ScriptType::AI>(HSQUIRRELVM vm) { sq_pushstring(vm, "AIStationList_CargoWaiting"); return 1; }

void SQAIStationList_CargoWaiting_Register(Squirrel &engine)
{
	DefSQClass<ScriptStationList_CargoWaiting, ScriptType::AI> SQAIStationList_CargoWaiting("AIStationList_CargoWaiting");
	SQAIStationList_CargoWaiting.PreRegister(engine, "AIStationList_Cargo");
	SQAIStationList_CargoWaiting.AddConstructor<void (ScriptStationList_CargoWaiting::*)(ScriptStationList_Cargo::CargoSelector selector, StationID station_id, CargoType cargo, StationID other_station)>(engine, "xiiii");

	SQAIStationList_CargoWaiting.PostRegister(engine);
}


template <> SQInteger PushClassName<ScriptStationList_CargoPlanned, ScriptType::AI>(HSQUIRRELVM vm) { sq_pushstring(vm, "AIStationList_CargoPlanned"); return 1; }

void SQAIStationList_CargoPlanned_Register(Squirrel &engine)
{
	DefSQClass<ScriptStationList_CargoPlanned, ScriptType::AI> SQAIStationList_CargoPlanned("AIStationList_CargoPlanned");
	SQAIStationList_CargoPlanned.PreRegister(engine, "AIStationList_Cargo");
	SQAIStationList_CargoPlanned.AddConstructor<void (ScriptStationList_CargoPlanned::*)(ScriptStationList_Cargo::CargoSelector selector, StationID station_id, CargoType cargo, StationID other_station)>(engine, "xiiii");

	SQAIStationList_CargoPlanned.PostRegister(engine);
}


template <> SQInteger PushClassName<ScriptStationList_CargoWaitingByFrom, ScriptType::AI>(HSQUIRRELVM vm) { sq_pushstring(vm, "AIStationList_CargoWaitingByFrom"); return 1; }

void SQAIStationList_CargoWaitingByFrom_Register(Squirrel &engine)
{
	DefSQClass<ScriptStationList_CargoWaitingByFrom, ScriptType::AI> SQAIStationList_CargoWaitingByFrom("AIStationList_CargoWaitingByFrom");
	SQAIStationList_CargoWaitingByFrom.PreRegister(engine, "AIStationList_CargoWaiting");
	SQAIStationList_CargoWaitingByFrom.AddConstructor<void (ScriptStationList_CargoWaitingByFrom::*)(StationID station_id, CargoType cargo)>(engine, "xii");

	SQAIStationList_CargoWaitingByFrom.PostRegister(engine);
}


template <> SQInteger PushClassName<ScriptStationList_CargoWaitingViaByFrom, ScriptType::AI>(HSQUIRRELVM vm) { sq_pushstring(vm, "AIStationList_CargoWaitingViaByFrom"); return 1; }

void SQAIStationList_CargoWaitingViaByFrom_Register(Squirrel &engine)
{
	DefSQClass<ScriptStationList_CargoWaitingViaByFrom, ScriptType::AI> SQAIStationList_CargoWaitingViaByFrom("AIStationList_CargoWaitingViaByFrom");
	SQAIStationList_CargoWaitingViaByFrom.PreRegister(engine, "AIStationList_CargoWaiting");
	SQAIStationList_CargoWaitingViaByFrom.AddConstructor<void (ScriptStationList_CargoWaitingViaByFrom::*)(StationID station_id, CargoType cargo, StationID via)>(engine, "xiii");

	SQAIStationList_CargoWaitingViaByFrom.PostRegister(engine);
}


template <> SQInteger PushClassName<ScriptStationList_CargoWaitingByVia, ScriptType::AI>(HSQUIRRELVM vm) { sq_pushstring(vm, "AIStationList_CargoWaitingByVia"); return 1; }

void SQAIStationList_CargoWaitingByVia_Register(Squirrel &engine)
{
	DefSQClass<ScriptStationList_CargoWaitingByVia, ScriptType::AI> SQAIStationList_CargoWaitingByVia("AIStationList_CargoWaitingByVia");
	SQAIStationList_CargoWaitingByVia.PreRegister(engine, "AIStationList_CargoWaiting");
	SQAIStationList_CargoWaitingByVia.AddConstructor<void (ScriptStationList_CargoWaitingByVia::*)(StationID station_id, CargoType cargo)>(engine, "xii");

	SQAIStationList_CargoWaitingByVia.PostRegister(engine);
}


template <> SQInteger PushClassName<ScriptStationList_CargoWaitingFromByVia, ScriptType::AI>(HSQUIRRELVM vm) { sq_pushstring(vm, "AIStationList_CargoWaitingFromByVia"); return 1; }

void SQAIStationList_CargoWaitingFromByVia_Register(Squirrel &engine)
{
	DefSQClass<ScriptStationList_CargoWaitingFromByVia, ScriptType::AI> SQAIStationList_CargoWaitingFromByVia("AIStationList_CargoWaitingFromByVia");
	SQAIStationList_CargoWaitingFromByVia.PreRegister(engine, "AIStationList_CargoWaiting");
	SQAIStationList_CargoWaitingFromByVia.AddConstructor<void (ScriptStationList_CargoWaitingFromByVia::*)(StationID station_id, CargoType cargo, StationID from)>(engine, "xiii");

	SQAIStationList_CargoWaitingFromByVia.PostRegister(engine);
}


template <> SQInteger PushClassName<ScriptStationList_CargoPlannedByFrom, ScriptType::AI>(HSQUIRRELVM vm) { sq_pushstring(vm, "AIStationList_CargoPlannedByFrom"); return 1; }

void SQAIStationList_CargoPlannedByFrom_Register(Squirrel &engine)
{
	DefSQClass<ScriptStationList_CargoPlannedByFrom, ScriptType::AI> SQAIStationList_CargoPlannedByFrom("AIStationList_CargoPlannedByFrom");
	SQAIStationList_CargoPlannedByFrom.PreRegister(engine, "AIStationList_CargoPlanned");
	SQAIStationList_CargoPlannedByFrom.AddConstructor<void (ScriptStationList_CargoPlannedByFrom::*)(StationID station_id, CargoType cargo)>(engine, "xii");

	SQAIStationList_CargoPlannedByFrom.PostRegister(engine);
}


template <> SQInteger PushClassName<ScriptStationList_CargoPlannedViaByFrom, ScriptType::AI>(HSQUIRRELVM vm) { sq_pushstring(vm, "AIStationList_CargoPlannedViaByFrom"); return 1; }

void SQAIStationList_CargoPlannedViaByFrom_Register(Squirrel &engine)
{
	DefSQClass<ScriptStationList_CargoPlannedViaByFrom, ScriptType::AI> SQAIStationList_CargoPlannedViaByFrom("AIStationList_CargoPlannedViaByFrom");
	SQAIStationList_CargoPlannedViaByFrom.PreRegister(engine, "AIStationList_CargoPlanned");
	SQAIStationList_CargoPlannedViaByFrom.AddConstructor<void (ScriptStationList_CargoPlannedViaByFrom::*)(StationID station_id, CargoType cargo, StationID via)>(engine, "xiii");

	SQAIStationList_CargoPlannedViaByFrom.PostRegister(engine);
}


template <> SQInteger PushClassName<ScriptStationList_CargoPlannedByVia, ScriptType::AI>(HSQUIRRELVM vm) { sq_pushstring(vm, "AIStationList_CargoPlannedByVia"); return 1; }

void SQAIStationList_CargoPlannedByVia_Register(Squirrel &engine)
{
	DefSQClass<ScriptStationList_CargoPlannedByVia, ScriptType::AI> SQAIStationList_CargoPlannedByVia("AIStationList_CargoPlannedByVia");
	SQAIStationList_CargoPlannedByVia.PreRegister(engine, "AIStationList_CargoPlanned");
	SQAIStationList_CargoPlannedByVia.AddConstructor<void (ScriptStationList_CargoPlannedByVia::*)(StationID station_id, CargoType cargo)>(engine, "xii");

	SQAIStationList_CargoPlannedByVia.PostRegister(engine);
}


template <> SQInteger PushClassName<ScriptStationList_CargoPlannedFromByVia, ScriptType::AI>(HSQUIRRELVM vm) { sq_pushstring(vm, "AIStationList_CargoPlannedFromByVia"); return 1; }

void SQAIStationList_CargoPlannedFromByVia_Register(Squirrel &engine)
{
	DefSQClass<ScriptStationList_CargoPlannedFromByVia, ScriptType::AI> SQAIStationList_CargoPlannedFromByVia("AIStationList_CargoPlannedFromByVia");
	SQAIStationList_CargoPlannedFromByVia.PreRegister(engine, "AIStationList_CargoPlanned");
	SQAIStationList_CargoPlannedFromByVia.AddConstructor<void (ScriptStationList_CargoPlannedFromByVia::*)(StationID station_id, CargoType cargo, StationID from)>(engine, "xiii");

	SQAIStationList_CargoPlannedFromByVia.PostRegister(engine);
}


template <> SQInteger PushClassName<ScriptStationList_Vehicle, ScriptType::AI>(HSQUIRRELVM vm) { sq_pushstring(vm, "AIStationList_Vehicle"); return 1; }

void SQAIStationList_Vehicle_Register(Squirrel &engine)
{
	DefSQClass<ScriptStationList_Vehicle, ScriptType::AI> SQAIStationList_Vehicle("AIStationList_Vehicle");
	SQAIStationList_Vehicle.PreRegister(engine, "AIList");
	SQAIStationList_Vehicle.AddConstructor<void (ScriptStationList_Vehicle::*)(VehicleID vehicle_id)>(engine, "xi");

	SQAIStationList_Vehicle.PostRegister(engine);
}
