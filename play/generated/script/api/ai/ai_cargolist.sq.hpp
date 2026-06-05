/*
 * This file is part of OpenTTD.
 * OpenTTD is free software; you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, version 2.
 * OpenTTD is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 * See the GNU General Public License for more details. You should have received a copy of the GNU General Public License along with OpenTTD. If not, see <https://www.gnu.org/licenses/old-licenses/gpl-2.0>.
 */

/* THIS FILE IS AUTO-GENERATED; PLEASE DO NOT ALTER MANUALLY */

#include "../script_cargolist.hpp"
#include "../template/template_cargolist.sq.hpp"


template <> SQInteger PushClassName<ScriptCargoList, ScriptType::AI>(HSQUIRRELVM vm) { sq_pushstring(vm, "AICargoList"); return 1; }

void SQAICargoList_Register(Squirrel &engine)
{
	DefSQClass<ScriptCargoList, ScriptType::AI> SQAICargoList("AICargoList");
	SQAICargoList.PreRegister(engine, "AIList");
	SQAICargoList.AddConstructor<void (ScriptCargoList::*)()>(engine, "x");

	SQAICargoList.PostRegister(engine);
}


template <> SQInteger PushClassName<ScriptCargoList_IndustryAccepting, ScriptType::AI>(HSQUIRRELVM vm) { sq_pushstring(vm, "AICargoList_IndustryAccepting"); return 1; }

void SQAICargoList_IndustryAccepting_Register(Squirrel &engine)
{
	DefSQClass<ScriptCargoList_IndustryAccepting, ScriptType::AI> SQAICargoList_IndustryAccepting("AICargoList_IndustryAccepting");
	SQAICargoList_IndustryAccepting.PreRegister(engine, "AIList");
	SQAICargoList_IndustryAccepting.AddConstructor<void (ScriptCargoList_IndustryAccepting::*)(IndustryID industry_id)>(engine, "xi");

	SQAICargoList_IndustryAccepting.PostRegister(engine);
}


template <> SQInteger PushClassName<ScriptCargoList_IndustryProducing, ScriptType::AI>(HSQUIRRELVM vm) { sq_pushstring(vm, "AICargoList_IndustryProducing"); return 1; }

void SQAICargoList_IndustryProducing_Register(Squirrel &engine)
{
	DefSQClass<ScriptCargoList_IndustryProducing, ScriptType::AI> SQAICargoList_IndustryProducing("AICargoList_IndustryProducing");
	SQAICargoList_IndustryProducing.PreRegister(engine, "AIList");
	SQAICargoList_IndustryProducing.AddConstructor<void (ScriptCargoList_IndustryProducing::*)(IndustryID industry_id)>(engine, "xi");

	SQAICargoList_IndustryProducing.PostRegister(engine);
}


template <> SQInteger PushClassName<ScriptCargoList_StationAccepting, ScriptType::AI>(HSQUIRRELVM vm) { sq_pushstring(vm, "AICargoList_StationAccepting"); return 1; }

void SQAICargoList_StationAccepting_Register(Squirrel &engine)
{
	DefSQClass<ScriptCargoList_StationAccepting, ScriptType::AI> SQAICargoList_StationAccepting("AICargoList_StationAccepting");
	SQAICargoList_StationAccepting.PreRegister(engine, "AIList");
	SQAICargoList_StationAccepting.AddConstructor<void (ScriptCargoList_StationAccepting::*)(StationID station_id)>(engine, "xi");

	SQAICargoList_StationAccepting.PostRegister(engine);
}
