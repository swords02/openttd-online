/*
 * This file is part of OpenTTD.
 * OpenTTD is free software; you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, version 2.
 * OpenTTD is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 * See the GNU General Public License for more details. You should have received a copy of the GNU General Public License along with OpenTTD. If not, see <https://www.gnu.org/licenses/old-licenses/gpl-2.0>.
 */

/* THIS FILE IS AUTO-GENERATED; PLEASE DO NOT ALTER MANUALLY */

#include "../script_list.hpp"
#include "../template/template_list.sq.hpp"


template <> SQInteger PushClassName<ScriptList, ScriptType::AI>(HSQUIRRELVM vm) { sq_pushstring(vm, "AIList"); return 1; }

void SQAIList_Register(Squirrel &engine)
{
	DefSQClass<ScriptList, ScriptType::AI> SQAIList("AIList");
	SQAIList.PreRegister(engine, "AIObject");
	SQAIList.AddConstructor<void (ScriptList::*)()>(engine, "x");

	SQAIList.DefSQConst(engine, ScriptList::SORT_BY_VALUE, "SORT_BY_VALUE");
	SQAIList.DefSQConst(engine, ScriptList::SORT_BY_ITEM,  "SORT_BY_ITEM");

	SQAIList.DefSQConst(engine, ScriptList::SORT_ASCENDING,  "SORT_ASCENDING");
	SQAIList.DefSQConst(engine, ScriptList::SORT_DESCENDING, "SORT_DESCENDING");

	SQAIList.DefSQMethod(engine, &ScriptList::AddItem,            "AddItem",            "xii");
	SQAIList.DefSQMethod(engine, &ScriptList::RemoveItem,         "RemoveItem",         "xi");
	SQAIList.DefSQMethod(engine, &ScriptList::Clear,              "Clear",              "x");
	SQAIList.DefSQMethod(engine, &ScriptList::HasItem,            "HasItem",            "xi");
	SQAIList.DefSQMethod(engine, &ScriptList::Begin,              "Begin",              "x");
	SQAIList.DefSQMethod(engine, &ScriptList::Next,               "Next",               "x");
	SQAIList.DefSQMethod(engine, &ScriptList::IsEmpty,            "IsEmpty",            "x");
	SQAIList.DefSQMethod(engine, &ScriptList::IsEnd,              "IsEnd",              "x");
	SQAIList.DefSQMethod(engine, &ScriptList::Count,              "Count",              "x");
	SQAIList.DefSQMethod(engine, &ScriptList::GetValue,           "GetValue",           "xi");
	SQAIList.DefSQMethod(engine, &ScriptList::SetValue,           "SetValue",           "xii");
	SQAIList.DefSQMethod(engine, &ScriptList::Sort,               "Sort",               "xib");
	SQAIList.DefSQMethod(engine, &ScriptList::AddList,            "AddList",            "xx");
	SQAIList.DefSQMethod(engine, &ScriptList::SwapList,           "SwapList",           "xx");
	SQAIList.DefSQMethod(engine, &ScriptList::RemoveAboveValue,   "RemoveAboveValue",   "xi");
	SQAIList.DefSQMethod(engine, &ScriptList::RemoveBelowValue,   "RemoveBelowValue",   "xi");
	SQAIList.DefSQMethod(engine, &ScriptList::RemoveBetweenValue, "RemoveBetweenValue", "xii");
	SQAIList.DefSQMethod(engine, &ScriptList::RemoveValue,        "RemoveValue",        "xi");
	SQAIList.DefSQMethod(engine, &ScriptList::RemoveTop,          "RemoveTop",          "xi");
	SQAIList.DefSQMethod(engine, &ScriptList::RemoveBottom,       "RemoveBottom",       "xi");
	SQAIList.DefSQMethod(engine, &ScriptList::RemoveList,         "RemoveList",         "xx");
	SQAIList.DefSQMethod(engine, &ScriptList::KeepAboveValue,     "KeepAboveValue",     "xi");
	SQAIList.DefSQMethod(engine, &ScriptList::KeepBelowValue,     "KeepBelowValue",     "xi");
	SQAIList.DefSQMethod(engine, &ScriptList::KeepBetweenValue,   "KeepBetweenValue",   "xii");
	SQAIList.DefSQMethod(engine, &ScriptList::KeepValue,          "KeepValue",          "xi");
	SQAIList.DefSQMethod(engine, &ScriptList::KeepTop,            "KeepTop",            "xi");
	SQAIList.DefSQMethod(engine, &ScriptList::KeepBottom,         "KeepBottom",         "xi");
	SQAIList.DefSQMethod(engine, &ScriptList::KeepList,           "KeepList",           "xx");
	SQAIList.DefSQAdvancedMethod(engine, &ScriptList::_get,       "_get");
	SQAIList.DefSQAdvancedMethod(engine, &ScriptList::_set,       "_set");
	SQAIList.DefSQAdvancedMethod(engine, &ScriptList::_nexti,     "_nexti");
	SQAIList.DefSQAdvancedMethod(engine, &ScriptList::Valuate,    "Valuate");

	SQAIList.PostRegister(engine);
}
