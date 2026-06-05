/*
 * This file is part of OpenTTD.
 * OpenTTD is free software; you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, version 2.
 * OpenTTD is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 * See the GNU General Public License for more details. You should have received a copy of the GNU General Public License along with OpenTTD. If not, see <https://www.gnu.org/licenses/old-licenses/gpl-2.0>.
 */

/* THIS FILE IS AUTO-GENERATED; PLEASE DO NOT ALTER MANUALLY */

#include "../script_base.hpp"
#include "../template/template_base.sq.hpp"


template <> SQInteger PushClassName<ScriptBase, ScriptType::AI>(HSQUIRRELVM vm) { sq_pushstring(vm, "AIBase"); return 1; }

void SQAIBase_Register(Squirrel &engine)
{
	DefSQClass<ScriptBase, ScriptType::AI> SQAIBase("AIBase");
	SQAIBase.PreRegister(engine, "AIObject");

	SQAIBase.DefSQStaticMethod(engine, &ScriptBase::Rand,          "Rand",          ".");
	SQAIBase.DefSQStaticMethod(engine, &ScriptBase::RandItem,      "RandItem",      ".i");
	SQAIBase.DefSQStaticMethod(engine, &ScriptBase::RandRange,     "RandRange",     ".i");
	SQAIBase.DefSQStaticMethod(engine, &ScriptBase::RandRangeItem, "RandRangeItem", ".ii");
	SQAIBase.DefSQStaticMethod(engine, &ScriptBase::Chance,        "Chance",        ".ii");
	SQAIBase.DefSQStaticMethod(engine, &ScriptBase::ChanceItem,    "ChanceItem",    ".iii");

	SQAIBase.PostRegister(engine);
}
