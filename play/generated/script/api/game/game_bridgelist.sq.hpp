/*
 * This file is part of OpenTTD.
 * OpenTTD is free software; you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, version 2.
 * OpenTTD is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 * See the GNU General Public License for more details. You should have received a copy of the GNU General Public License along with OpenTTD. If not, see <https://www.gnu.org/licenses/old-licenses/gpl-2.0>.
 */

/* THIS FILE IS AUTO-GENERATED; PLEASE DO NOT ALTER MANUALLY */

#include "../script_bridgelist.hpp"
#include "../template/template_bridgelist.sq.hpp"


template <> SQInteger PushClassName<ScriptBridgeList, ScriptType::GS>(HSQUIRRELVM vm) { sq_pushstring(vm, "GSBridgeList"); return 1; }

void SQGSBridgeList_Register(Squirrel &engine)
{
	DefSQClass<ScriptBridgeList, ScriptType::GS> SQGSBridgeList("GSBridgeList");
	SQGSBridgeList.PreRegister(engine, "GSList");
	SQGSBridgeList.AddConstructor<void (ScriptBridgeList::*)()>(engine, "x");

	SQGSBridgeList.PostRegister(engine);
}


template <> SQInteger PushClassName<ScriptBridgeList_Length, ScriptType::GS>(HSQUIRRELVM vm) { sq_pushstring(vm, "GSBridgeList_Length"); return 1; }

void SQGSBridgeList_Length_Register(Squirrel &engine)
{
	DefSQClass<ScriptBridgeList_Length, ScriptType::GS> SQGSBridgeList_Length("GSBridgeList_Length");
	SQGSBridgeList_Length.PreRegister(engine, "GSList");
	SQGSBridgeList_Length.AddConstructor<void (ScriptBridgeList_Length::*)(SQInteger length)>(engine, "xi");

	SQGSBridgeList_Length.PostRegister(engine);
}
