/*
 * This file is part of OpenTTD.
 * OpenTTD is free software; you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, version 2.
 * OpenTTD is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 * See the GNU General Public License for more details. You should have received a copy of the GNU General Public License along with OpenTTD. If not, see <https://www.gnu.org/licenses/old-licenses/gpl-2.0>.
 */

/* THIS FILE IS AUTO-GENERATED; PLEASE DO NOT ALTER MANUALLY */

#include "../script_stationlist.hpp"
#include "../template/template_stationlist.sq.hpp"


template <> SQInteger PushClassName<ScriptStationList, ScriptType::GS>(HSQUIRRELVM vm) { sq_pushstring(vm, "GSStationList"); return 1; }

void SQGSStationList_Register(Squirrel &engine)
{
	DefSQClass<ScriptStationList, ScriptType::GS> SQGSStationList("GSStationList");
	SQGSStationList.PreRegister(engine, "GSList");
	SQGSStationList.AddConstructor<void (ScriptStationList::*)(ScriptStation::StationType station_type)>(engine, "xi");

	SQGSStationList.PostRegister(engine);
}


template <> SQInteger PushClassName<ScriptStationList_Cargo, ScriptType::GS>(HSQUIRRELVM vm) { sq_pushstring(vm, "GSStationList_Cargo"); return 1; }

void SQGSStationList_Cargo_Register(Squirrel &engine)
{
	DefSQClass<ScriptStationList_Cargo, ScriptType::GS> SQGSStationList_Cargo("GSStationList_Cargo");
	SQGSStationList_Cargo.PreRegister(engine, "GSList");
	SQGSStationList_Cargo.AddConstructor<void (ScriptStationList_Cargo::*)(ScriptStationList_Cargo::CargoMode mode, ScriptStationList_Cargo::CargoSelector selector, StationID station_id, CargoType cargo, StationID other_station)>(engine, "xiiiii");

	SQGSStationList_Cargo.DefSQConst(engine, ScriptStationList_Cargo::CS_BY_FROM,     "CS_BY_FROM");
	SQGSStationList_Cargo.DefSQConst(engine, ScriptStationList_Cargo::CS_VIA_BY_FROM, "CS_VIA_BY_FROM");
	SQGSStationList_Cargo.DefSQConst(engine, ScriptStationList_Cargo::CS_BY_VIA,      "CS_BY_VIA");
	SQGSStationList_Cargo.DefSQConst(engine, ScriptStationList_Cargo::CS_FROM_BY_VIA, "CS_FROM_BY_VIA");
	SQGSStationList_Cargo.DefSQConst(engine, ScriptStationList_Cargo::CM_WAITING,     "CM_WAITING");
	SQGSStationList_Cargo.DefSQConst(engine, ScriptStationList_Cargo::CM_PLANNED,     "CM_PLANNED");

	SQGSStationList_Cargo.PostRegister(engine);
}


template <> SQInteger PushClassName<ScriptStationList_CargoWaiting, ScriptType::GS>(HSQUIRRELVM vm) { sq_pushstring(vm, "GSStationList_CargoWaiting"); return 1; }

void SQGSStationList_CargoWaiting_Register(Squirrel &engine)
{
	DefSQClass<ScriptStationList_CargoWaiting, ScriptType::GS> SQGSStationList_CargoWaiting("GSStationList_CargoWaiting");
	SQGSStationList_CargoWaiting.PreRegister(engine, "GSStationList_Cargo");
	SQGSStationList_CargoWaiting.AddConstructor<void (ScriptStationList_CargoWaiting::*)(ScriptStationList_Cargo::CargoSelector selector, StationID station_id, CargoType cargo, StationID other_station)>(engine, "xiiii");

	SQGSStationList_CargoWaiting.PostRegister(engine);
}


template <> SQInteger PushClassName<ScriptStationList_CargoPlanned, ScriptType::GS>(HSQUIRRELVM vm) { sq_pushstring(vm, "GSStationList_CargoPlanned"); return 1; }

void SQGSStationList_CargoPlanned_Register(Squirrel &engine)
{
	DefSQClass<ScriptStationList_CargoPlanned, ScriptType::GS> SQGSStationList_CargoPlanned("GSStationList_CargoPlanned");
	SQGSStationList_CargoPlanned.PreRegister(engine, "GSStationList_Cargo");
	SQGSStationList_CargoPlanned.AddConstructor<void (ScriptStationList_CargoPlanned::*)(ScriptStationList_Cargo::CargoSelector selector, StationID station_id, CargoType cargo, StationID other_station)>(engine, "xiiii");

	SQGSStationList_CargoPlanned.PostRegister(engine);
}


template <> SQInteger PushClassName<ScriptStationList_CargoWaitingByFrom, ScriptType::GS>(HSQUIRRELVM vm) { sq_pushstring(vm, "GSStationList_CargoWaitingByFrom"); return 1; }

void SQGSStationList_CargoWaitingByFrom_Register(Squirrel &engine)
{
	DefSQClass<ScriptStationList_CargoWaitingByFrom, ScriptType::GS> SQGSStationList_CargoWaitingByFrom("GSStationList_CargoWaitingByFrom");
	SQGSStationList_CargoWaitingByFrom.PreRegister(engine, "GSStationList_CargoWaiting");
	SQGSStationList_CargoWaitingByFrom.AddConstructor<void (ScriptStationList_CargoWaitingByFrom::*)(StationID station_id, CargoType cargo)>(engine, "xii");

	SQGSStationList_CargoWaitingByFrom.PostRegister(engine);
}


template <> SQInteger PushClassName<ScriptStationList_CargoWaitingViaByFrom, ScriptType::GS>(HSQUIRRELVM vm) { sq_pushstring(vm, "GSStationList_CargoWaitingViaByFrom"); return 1; }

void SQGSStationList_CargoWaitingViaByFrom_Register(Squirrel &engine)
{
	DefSQClass<ScriptStationList_CargoWaitingViaByFrom, ScriptType::GS> SQGSStationList_CargoWaitingViaByFrom("GSStationList_CargoWaitingViaByFrom");
	SQGSStationList_CargoWaitingViaByFrom.PreRegister(engine, "GSStationList_CargoWaiting");
	SQGSStationList_CargoWaitingViaByFrom.AddConstructor<void (ScriptStationList_CargoWaitingViaByFrom::*)(StationID station_id, CargoType cargo, StationID via)>(engine, "xiii");

	SQGSStationList_CargoWaitingViaByFrom.PostRegister(engine);
}


template <> SQInteger PushClassName<ScriptStationList_CargoWaitingByVia, ScriptType::GS>(HSQUIRRELVM vm) { sq_pushstring(vm, "GSStationList_CargoWaitingByVia"); return 1; }

void SQGSStationList_CargoWaitingByVia_Register(Squirrel &engine)
{
	DefSQClass<ScriptStationList_CargoWaitingByVia, ScriptType::GS> SQGSStationList_CargoWaitingByVia("GSStationList_CargoWaitingByVia");
	SQGSStationList_CargoWaitingByVia.PreRegister(engine, "GSStationList_CargoWaiting");
	SQGSStationList_CargoWaitingByVia.AddConstructor<void (ScriptStationList_CargoWaitingByVia::*)(StationID station_id, CargoType cargo)>(engine, "xii");

	SQGSStationList_CargoWaitingByVia.PostRegister(engine);
}


template <> SQInteger PushClassName<ScriptStationList_CargoWaitingFromByVia, ScriptType::GS>(HSQUIRRELVM vm) { sq_pushstring(vm, "GSStationList_CargoWaitingFromByVia"); return 1; }

void SQGSStationList_CargoWaitingFromByVia_Register(Squirrel &engine)
{
	DefSQClass<ScriptStationList_CargoWaitingFromByVia, ScriptType::GS> SQGSStationList_CargoWaitingFromByVia("GSStationList_CargoWaitingFromByVia");
	SQGSStationList_CargoWaitingFromByVia.PreRegister(engine, "GSStationList_CargoWaiting");
	SQGSStationList_CargoWaitingFromByVia.AddConstructor<void (ScriptStationList_CargoWaitingFromByVia::*)(StationID station_id, CargoType cargo, StationID from)>(engine, "xiii");

	SQGSStationList_CargoWaitingFromByVia.PostRegister(engine);
}


template <> SQInteger PushClassName<ScriptStationList_CargoPlannedByFrom, ScriptType::GS>(HSQUIRRELVM vm) { sq_pushstring(vm, "GSStationList_CargoPlannedByFrom"); return 1; }

void SQGSStationList_CargoPlannedByFrom_Register(Squirrel &engine)
{
	DefSQClass<ScriptStationList_CargoPlannedByFrom, ScriptType::GS> SQGSStationList_CargoPlannedByFrom("GSStationList_CargoPlannedByFrom");
	SQGSStationList_CargoPlannedByFrom.PreRegister(engine, "GSStationList_CargoPlanned");
	SQGSStationList_CargoPlannedByFrom.AddConstructor<void (ScriptStationList_CargoPlannedByFrom::*)(StationID station_id, CargoType cargo)>(engine, "xii");

	SQGSStationList_CargoPlannedByFrom.PostRegister(engine);
}


template <> SQInteger PushClassName<ScriptStationList_CargoPlannedViaByFrom, ScriptType::GS>(HSQUIRRELVM vm) { sq_pushstring(vm, "GSStationList_CargoPlannedViaByFrom"); return 1; }

void SQGSStationList_CargoPlannedViaByFrom_Register(Squirrel &engine)
{
	DefSQClass<ScriptStationList_CargoPlannedViaByFrom, ScriptType::GS> SQGSStationList_CargoPlannedViaByFrom("GSStationList_CargoPlannedViaByFrom");
	SQGSStationList_CargoPlannedViaByFrom.PreRegister(engine, "GSStationList_CargoPlanned");
	SQGSStationList_CargoPlannedViaByFrom.AddConstructor<void (ScriptStationList_CargoPlannedViaByFrom::*)(StationID station_id, CargoType cargo, StationID via)>(engine, "xiii");

	SQGSStationList_CargoPlannedViaByFrom.PostRegister(engine);
}


template <> SQInteger PushClassName<ScriptStationList_CargoPlannedByVia, ScriptType::GS>(HSQUIRRELVM vm) { sq_pushstring(vm, "GSStationList_CargoPlannedByVia"); return 1; }

void SQGSStationList_CargoPlannedByVia_Register(Squirrel &engine)
{
	DefSQClass<ScriptStationList_CargoPlannedByVia, ScriptType::GS> SQGSStationList_CargoPlannedByVia("GSStationList_CargoPlannedByVia");
	SQGSStationList_CargoPlannedByVia.PreRegister(engine, "GSStationList_CargoPlanned");
	SQGSStationList_CargoPlannedByVia.AddConstructor<void (ScriptStationList_CargoPlannedByVia::*)(StationID station_id, CargoType cargo)>(engine, "xii");

	SQGSStationList_CargoPlannedByVia.PostRegister(engine);
}


template <> SQInteger PushClassName<ScriptStationList_CargoPlannedFromByVia, ScriptType::GS>(HSQUIRRELVM vm) { sq_pushstring(vm, "GSStationList_CargoPlannedFromByVia"); return 1; }

void SQGSStationList_CargoPlannedFromByVia_Register(Squirrel &engine)
{
	DefSQClass<ScriptStationList_CargoPlannedFromByVia, ScriptType::GS> SQGSStationList_CargoPlannedFromByVia("GSStationList_CargoPlannedFromByVia");
	SQGSStationList_CargoPlannedFromByVia.PreRegister(engine, "GSStationList_CargoPlanned");
	SQGSStationList_CargoPlannedFromByVia.AddConstructor<void (ScriptStationList_CargoPlannedFromByVia::*)(StationID station_id, CargoType cargo, StationID from)>(engine, "xiii");

	SQGSStationList_CargoPlannedFromByVia.PostRegister(engine);
}


template <> SQInteger PushClassName<ScriptStationList_Vehicle, ScriptType::GS>(HSQUIRRELVM vm) { sq_pushstring(vm, "GSStationList_Vehicle"); return 1; }

void SQGSStationList_Vehicle_Register(Squirrel &engine)
{
	DefSQClass<ScriptStationList_Vehicle, ScriptType::GS> SQGSStationList_Vehicle("GSStationList_Vehicle");
	SQGSStationList_Vehicle.PreRegister(engine, "GSList");
	SQGSStationList_Vehicle.AddConstructor<void (ScriptStationList_Vehicle::*)(VehicleID vehicle_id)>(engine, "xi");

	SQGSStationList_Vehicle.PostRegister(engine);
}
