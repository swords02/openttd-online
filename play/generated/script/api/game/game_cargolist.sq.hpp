/*
 * This file is part of OpenTTD.
 * OpenTTD is free software; you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, version 2.
 * OpenTTD is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 * See the GNU General Public License for more details. You should have received a copy of the GNU General Public License along with OpenTTD. If not, see <https://www.gnu.org/licenses/old-licenses/gpl-2.0>.
 */

/* THIS FILE IS AUTO-GENERATED; PLEASE DO NOT ALTER MANUALLY */

#include "../script_cargolist.hpp"
#include "../template/template_cargolist.sq.hpp"


template <> SQInteger PushClassName<ScriptCargoList, ScriptType::GS>(HSQUIRRELVM vm) { sq_pushstring(vm, "GSCargoList"); return 1; }

void SQGSCargoList_Register(Squirrel &engine)
{
	DefSQClass<ScriptCargoList, ScriptType::GS> SQGSCargoList("GSCargoList");
	SQGSCargoList.PreRegister(engine, "GSList");
	SQGSCargoList.AddConstructor<void (ScriptCargoList::*)()>(engine, "x");

	SQGSCargoList.PostRegister(engine);
}


template <> SQInteger PushClassName<ScriptCargoList_IndustryAccepting, ScriptType::GS>(HSQUIRRELVM vm) { sq_pushstring(vm, "GSCargoList_IndustryAccepting"); return 1; }

void SQGSCargoList_IndustryAccepting_Register(Squirrel &engine)
{
	DefSQClass<ScriptCargoList_IndustryAccepting, ScriptType::GS> SQGSCargoList_IndustryAccepting("GSCargoList_IndustryAccepting");
	SQGSCargoList_IndustryAccepting.PreRegister(engine, "GSList");
	SQGSCargoList_IndustryAccepting.AddConstructor<void (ScriptCargoList_IndustryAccepting::*)(IndustryID industry_id)>(engine, "xi");

	SQGSCargoList_IndustryAccepting.PostRegister(engine);
}


template <> SQInteger PushClassName<ScriptCargoList_IndustryProducing, ScriptType::GS>(HSQUIRRELVM vm) { sq_pushstring(vm, "GSCargoList_IndustryProducing"); return 1; }

void SQGSCargoList_IndustryProducing_Register(Squirrel &engine)
{
	DefSQClass<ScriptCargoList_IndustryProducing, ScriptType::GS> SQGSCargoList_IndustryProducing("GSCargoList_IndustryProducing");
	SQGSCargoList_IndustryProducing.PreRegister(engine, "GSList");
	SQGSCargoList_IndustryProducing.AddConstructor<void (ScriptCargoList_IndustryProducing::*)(IndustryID industry_id)>(engine, "xi");

	SQGSCargoList_IndustryProducing.PostRegister(engine);
}


template <> SQInteger PushClassName<ScriptCargoList_StationAccepting, ScriptType::GS>(HSQUIRRELVM vm) { sq_pushstring(vm, "GSCargoList_StationAccepting"); return 1; }

void SQGSCargoList_StationAccepting_Register(Squirrel &engine)
{
	DefSQClass<ScriptCargoList_StationAccepting, ScriptType::GS> SQGSCargoList_StationAccepting("GSCargoList_StationAccepting");
	SQGSCargoList_StationAccepting.PreRegister(engine, "GSList");
	SQGSCargoList_StationAccepting.AddConstructor<void (ScriptCargoList_StationAccepting::*)(StationID station_id)>(engine, "xi");

	SQGSCargoList_StationAccepting.PostRegister(engine);
}
