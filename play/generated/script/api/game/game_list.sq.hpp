/*
 * This file is part of OpenTTD.
 * OpenTTD is free software; you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, version 2.
 * OpenTTD is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 * See the GNU General Public License for more details. You should have received a copy of the GNU General Public License along with OpenTTD. If not, see <https://www.gnu.org/licenses/old-licenses/gpl-2.0>.
 */

/* THIS FILE IS AUTO-GENERATED; PLEASE DO NOT ALTER MANUALLY */

#include "../script_list.hpp"
#include "../template/template_list.sq.hpp"


template <> SQInteger PushClassName<ScriptList, ScriptType::GS>(HSQUIRRELVM vm) { sq_pushstring(vm, "GSList"); return 1; }

void SQGSList_Register(Squirrel &engine)
{
	DefSQClass<ScriptList, ScriptType::GS> SQGSList("GSList");
	SQGSList.PreRegister(engine, "GSObject");
	SQGSList.AddConstructor<void (ScriptList::*)()>(engine, "x");

	SQGSList.DefSQConst(engine, ScriptList::SORT_BY_VALUE, "SORT_BY_VALUE");
	SQGSList.DefSQConst(engine, ScriptList::SORT_BY_ITEM,  "SORT_BY_ITEM");

	SQGSList.DefSQConst(engine, ScriptList::SORT_ASCENDING,  "SORT_ASCENDING");
	SQGSList.DefSQConst(engine, ScriptList::SORT_DESCENDING, "SORT_DESCENDING");

	SQGSList.DefSQMethod(engine, &ScriptList::AddItem,            "AddItem",            "xii");
	SQGSList.DefSQMethod(engine, &ScriptList::RemoveItem,         "RemoveItem",         "xi");
	SQGSList.DefSQMethod(engine, &ScriptList::Clear,              "Clear",              "x");
	SQGSList.DefSQMethod(engine, &ScriptList::HasItem,            "HasItem",            "xi");
	SQGSList.DefSQMethod(engine, &ScriptList::Begin,              "Begin",              "x");
	SQGSList.DefSQMethod(engine, &ScriptList::Next,               "Next",               "x");
	SQGSList.DefSQMethod(engine, &ScriptList::IsEmpty,            "IsEmpty",            "x");
	SQGSList.DefSQMethod(engine, &ScriptList::IsEnd,              "IsEnd",              "x");
	SQGSList.DefSQMethod(engine, &ScriptList::Count,              "Count",              "x");
	SQGSList.DefSQMethod(engine, &ScriptList::GetValue,           "GetValue",           "xi");
	SQGSList.DefSQMethod(engine, &ScriptList::SetValue,           "SetValue",           "xii");
	SQGSList.DefSQMethod(engine, &ScriptList::Sort,               "Sort",               "xib");
	SQGSList.DefSQMethod(engine, &ScriptList::AddList,            "AddList",            "xx");
	SQGSList.DefSQMethod(engine, &ScriptList::SwapList,           "SwapList",           "xx");
	SQGSList.DefSQMethod(engine, &ScriptList::RemoveAboveValue,   "RemoveAboveValue",   "xi");
	SQGSList.DefSQMethod(engine, &ScriptList::RemoveBelowValue,   "RemoveBelowValue",   "xi");
	SQGSList.DefSQMethod(engine, &ScriptList::RemoveBetweenValue, "RemoveBetweenValue", "xii");
	SQGSList.DefSQMethod(engine, &ScriptList::RemoveValue,        "RemoveValue",        "xi");
	SQGSList.DefSQMethod(engine, &ScriptList::RemoveTop,          "RemoveTop",          "xi");
	SQGSList.DefSQMethod(engine, &ScriptList::RemoveBottom,       "RemoveBottom",       "xi");
	SQGSList.DefSQMethod(engine, &ScriptList::RemoveList,         "RemoveList",         "xx");
	SQGSList.DefSQMethod(engine, &ScriptList::KeepAboveValue,     "KeepAboveValue",     "xi");
	SQGSList.DefSQMethod(engine, &ScriptList::KeepBelowValue,     "KeepBelowValue",     "xi");
	SQGSList.DefSQMethod(engine, &ScriptList::KeepBetweenValue,   "KeepBetweenValue",   "xii");
	SQGSList.DefSQMethod(engine, &ScriptList::KeepValue,          "KeepValue",          "xi");
	SQGSList.DefSQMethod(engine, &ScriptList::KeepTop,            "KeepTop",            "xi");
	SQGSList.DefSQMethod(engine, &ScriptList::KeepBottom,         "KeepBottom",         "xi");
	SQGSList.DefSQMethod(engine, &ScriptList::KeepList,           "KeepList",           "xx");
	SQGSList.DefSQAdvancedMethod(engine, &ScriptList::_get,       "_get");
	SQGSList.DefSQAdvancedMethod(engine, &ScriptList::_set,       "_set");
	SQGSList.DefSQAdvancedMethod(engine, &ScriptList::_nexti,     "_nexti");
	SQGSList.DefSQAdvancedMethod(engine, &ScriptList::Valuate,    "Valuate");

	SQGSList.PostRegister(engine);
}
