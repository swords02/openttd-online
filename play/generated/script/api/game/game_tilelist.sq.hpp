/*
 * This file is part of OpenTTD.
 * OpenTTD is free software; you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, version 2.
 * OpenTTD is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 * See the GNU General Public License for more details. You should have received a copy of the GNU General Public License along with OpenTTD. If not, see <https://www.gnu.org/licenses/old-licenses/gpl-2.0>.
 */

/* THIS FILE IS AUTO-GENERATED; PLEASE DO NOT ALTER MANUALLY */

#include "../script_tilelist.hpp"
#include "../template/template_tilelist.sq.hpp"


template <> SQInteger PushClassName<ScriptTileList, ScriptType::GS>(HSQUIRRELVM vm) { sq_pushstring(vm, "GSTileList"); return 1; }

void SQGSTileList_Register(Squirrel &engine)
{
	DefSQClass<ScriptTileList, ScriptType::GS> SQGSTileList("GSTileList");
	SQGSTileList.PreRegister(engine, "GSList");
	SQGSTileList.AddConstructor<void (ScriptTileList::*)()>(engine, "x");

	SQGSTileList.DefSQMethod(engine, &ScriptTileList::AddRectangle,    "AddRectangle",    "xii");
	SQGSTileList.DefSQMethod(engine, &ScriptTileList::AddTile,         "AddTile",         "xi");
	SQGSTileList.DefSQMethod(engine, &ScriptTileList::RemoveRectangle, "RemoveRectangle", "xii");
	SQGSTileList.DefSQMethod(engine, &ScriptTileList::RemoveTile,      "RemoveTile",      "xi");

	SQGSTileList.PostRegister(engine);
}


template <> SQInteger PushClassName<ScriptTileList_IndustryAccepting, ScriptType::GS>(HSQUIRRELVM vm) { sq_pushstring(vm, "GSTileList_IndustryAccepting"); return 1; }

void SQGSTileList_IndustryAccepting_Register(Squirrel &engine)
{
	DefSQClass<ScriptTileList_IndustryAccepting, ScriptType::GS> SQGSTileList_IndustryAccepting("GSTileList_IndustryAccepting");
	SQGSTileList_IndustryAccepting.PreRegister(engine, "GSTileList");
	SQGSTileList_IndustryAccepting.AddConstructor<void (ScriptTileList_IndustryAccepting::*)(IndustryID industry_id, SQInteger radius)>(engine, "xii");

	SQGSTileList_IndustryAccepting.PostRegister(engine);
}


template <> SQInteger PushClassName<ScriptTileList_IndustryProducing, ScriptType::GS>(HSQUIRRELVM vm) { sq_pushstring(vm, "GSTileList_IndustryProducing"); return 1; }

void SQGSTileList_IndustryProducing_Register(Squirrel &engine)
{
	DefSQClass<ScriptTileList_IndustryProducing, ScriptType::GS> SQGSTileList_IndustryProducing("GSTileList_IndustryProducing");
	SQGSTileList_IndustryProducing.PreRegister(engine, "GSTileList");
	SQGSTileList_IndustryProducing.AddConstructor<void (ScriptTileList_IndustryProducing::*)(IndustryID industry_id, SQInteger radius)>(engine, "xii");

	SQGSTileList_IndustryProducing.PostRegister(engine);
}


template <> SQInteger PushClassName<ScriptTileList_StationType, ScriptType::GS>(HSQUIRRELVM vm) { sq_pushstring(vm, "GSTileList_StationType"); return 1; }

void SQGSTileList_StationType_Register(Squirrel &engine)
{
	DefSQClass<ScriptTileList_StationType, ScriptType::GS> SQGSTileList_StationType("GSTileList_StationType");
	SQGSTileList_StationType.PreRegister(engine, "GSTileList");
	SQGSTileList_StationType.AddConstructor<void (ScriptTileList_StationType::*)(StationID station_id, ScriptStation::StationType station_type)>(engine, "xii");

	SQGSTileList_StationType.PostRegister(engine);
}


template <> SQInteger PushClassName<ScriptTileList_StationCoverage, ScriptType::GS>(HSQUIRRELVM vm) { sq_pushstring(vm, "GSTileList_StationCoverage"); return 1; }

void SQGSTileList_StationCoverage_Register(Squirrel &engine)
{
	DefSQClass<ScriptTileList_StationCoverage, ScriptType::GS> SQGSTileList_StationCoverage("GSTileList_StationCoverage");
	SQGSTileList_StationCoverage.PreRegister(engine, "GSTileList");
	SQGSTileList_StationCoverage.AddConstructor<void (ScriptTileList_StationCoverage::*)(StationID station_id)>(engine, "xi");

	SQGSTileList_StationCoverage.PostRegister(engine);
}
