/*
 * This file is part of OpenTTD.
 * OpenTTD is free software; you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, version 2.
 * OpenTTD is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 * See the GNU General Public License for more details. You should have received a copy of the GNU General Public License along with OpenTTD. If not, see <https://www.gnu.org/licenses/old-licenses/gpl-2.0>.
 */

/* THIS FILE IS AUTO-GENERATED; PLEASE DO NOT ALTER MANUALLY */

#include "../script_tilelist.hpp"
#include "../template/template_tilelist.sq.hpp"


template <> SQInteger PushClassName<ScriptTileList, ScriptType::AI>(HSQUIRRELVM vm) { sq_pushstring(vm, "AITileList"); return 1; }

void SQAITileList_Register(Squirrel &engine)
{
	DefSQClass<ScriptTileList, ScriptType::AI> SQAITileList("AITileList");
	SQAITileList.PreRegister(engine, "AIList");
	SQAITileList.AddConstructor<void (ScriptTileList::*)()>(engine, "x");

	SQAITileList.DefSQMethod(engine, &ScriptTileList::AddRectangle,    "AddRectangle",    "xii");
	SQAITileList.DefSQMethod(engine, &ScriptTileList::AddTile,         "AddTile",         "xi");
	SQAITileList.DefSQMethod(engine, &ScriptTileList::RemoveRectangle, "RemoveRectangle", "xii");
	SQAITileList.DefSQMethod(engine, &ScriptTileList::RemoveTile,      "RemoveTile",      "xi");

	SQAITileList.PostRegister(engine);
}


template <> SQInteger PushClassName<ScriptTileList_IndustryAccepting, ScriptType::AI>(HSQUIRRELVM vm) { sq_pushstring(vm, "AITileList_IndustryAccepting"); return 1; }

void SQAITileList_IndustryAccepting_Register(Squirrel &engine)
{
	DefSQClass<ScriptTileList_IndustryAccepting, ScriptType::AI> SQAITileList_IndustryAccepting("AITileList_IndustryAccepting");
	SQAITileList_IndustryAccepting.PreRegister(engine, "AITileList");
	SQAITileList_IndustryAccepting.AddConstructor<void (ScriptTileList_IndustryAccepting::*)(IndustryID industry_id, SQInteger radius)>(engine, "xii");

	SQAITileList_IndustryAccepting.PostRegister(engine);
}


template <> SQInteger PushClassName<ScriptTileList_IndustryProducing, ScriptType::AI>(HSQUIRRELVM vm) { sq_pushstring(vm, "AITileList_IndustryProducing"); return 1; }

void SQAITileList_IndustryProducing_Register(Squirrel &engine)
{
	DefSQClass<ScriptTileList_IndustryProducing, ScriptType::AI> SQAITileList_IndustryProducing("AITileList_IndustryProducing");
	SQAITileList_IndustryProducing.PreRegister(engine, "AITileList");
	SQAITileList_IndustryProducing.AddConstructor<void (ScriptTileList_IndustryProducing::*)(IndustryID industry_id, SQInteger radius)>(engine, "xii");

	SQAITileList_IndustryProducing.PostRegister(engine);
}


template <> SQInteger PushClassName<ScriptTileList_StationType, ScriptType::AI>(HSQUIRRELVM vm) { sq_pushstring(vm, "AITileList_StationType"); return 1; }

void SQAITileList_StationType_Register(Squirrel &engine)
{
	DefSQClass<ScriptTileList_StationType, ScriptType::AI> SQAITileList_StationType("AITileList_StationType");
	SQAITileList_StationType.PreRegister(engine, "AITileList");
	SQAITileList_StationType.AddConstructor<void (ScriptTileList_StationType::*)(StationID station_id, ScriptStation::StationType station_type)>(engine, "xii");

	SQAITileList_StationType.PostRegister(engine);
}


template <> SQInteger PushClassName<ScriptTileList_StationCoverage, ScriptType::AI>(HSQUIRRELVM vm) { sq_pushstring(vm, "AITileList_StationCoverage"); return 1; }

void SQAITileList_StationCoverage_Register(Squirrel &engine)
{
	DefSQClass<ScriptTileList_StationCoverage, ScriptType::AI> SQAITileList_StationCoverage("AITileList_StationCoverage");
	SQAITileList_StationCoverage.PreRegister(engine, "AITileList");
	SQAITileList_StationCoverage.AddConstructor<void (ScriptTileList_StationCoverage::*)(StationID station_id)>(engine, "xi");

	SQAITileList_StationCoverage.PostRegister(engine);
}
