/*
 * This file is part of OpenTTD.
 * OpenTTD is free software; you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, version 2.
 * OpenTTD is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 * See the GNU General Public License for more details. You should have received a copy of the GNU General Public License along with OpenTTD. If not, see <https://www.gnu.org/licenses/old-licenses/gpl-2.0>.
 */

/* THIS FILE IS AUTO-GENERATED; PLEASE DO NOT ALTER MANUALLY */

#include "../script_bridgelist.hpp"
#include "../template/template_bridgelist.sq.hpp"


template <> SQInteger PushClassName<ScriptBridgeList, ScriptType::AI>(HSQUIRRELVM vm) { sq_pushstring(vm, "AIBridgeList"); return 1; }

void SQAIBridgeList_Register(Squirrel &engine)
{
	DefSQClass<ScriptBridgeList, ScriptType::AI> SQAIBridgeList("AIBridgeList");
	SQAIBridgeList.PreRegister(engine, "AIList");
	SQAIBridgeList.AddConstructor<void (ScriptBridgeList::*)()>(engine, "x");

	SQAIBridgeList.PostRegister(engine);
}


template <> SQInteger PushClassName<ScriptBridgeList_Length, ScriptType::AI>(HSQUIRRELVM vm) { sq_pushstring(vm, "AIBridgeList_Length"); return 1; }

void SQAIBridgeList_Length_Register(Squirrel &engine)
{
	DefSQClass<ScriptBridgeList_Length, ScriptType::AI> SQAIBridgeList_Length("AIBridgeList_Length");
	SQAIBridgeList_Length.PreRegister(engine, "AIList");
	SQAIBridgeList_Length.AddConstructor<void (ScriptBridgeList_Length::*)(SQInteger length)>(engine, "xi");

	SQAIBridgeList_Length.PostRegister(engine);
}
