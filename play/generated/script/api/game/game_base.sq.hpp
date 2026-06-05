/*
 * This file is part of OpenTTD.
 * OpenTTD is free software; you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, version 2.
 * OpenTTD is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 * See the GNU General Public License for more details. You should have received a copy of the GNU General Public License along with OpenTTD. If not, see <https://www.gnu.org/licenses/old-licenses/gpl-2.0>.
 */

/* THIS FILE IS AUTO-GENERATED; PLEASE DO NOT ALTER MANUALLY */

#include "../script_base.hpp"
#include "../template/template_base.sq.hpp"


template <> SQInteger PushClassName<ScriptBase, ScriptType::GS>(HSQUIRRELVM vm) { sq_pushstring(vm, "GSBase"); return 1; }

void SQGSBase_Register(Squirrel &engine)
{
	DefSQClass<ScriptBase, ScriptType::GS> SQGSBase("GSBase");
	SQGSBase.PreRegister(engine, "GSObject");

	SQGSBase.DefSQStaticMethod(engine, &ScriptBase::Rand,          "Rand",          ".");
	SQGSBase.DefSQStaticMethod(engine, &ScriptBase::RandItem,      "RandItem",      ".i");
	SQGSBase.DefSQStaticMethod(engine, &ScriptBase::RandRange,     "RandRange",     ".i");
	SQGSBase.DefSQStaticMethod(engine, &ScriptBase::RandRangeItem, "RandRangeItem", ".ii");
	SQGSBase.DefSQStaticMethod(engine, &ScriptBase::Chance,        "Chance",        ".ii");
	SQGSBase.DefSQStaticMethod(engine, &ScriptBase::ChanceItem,    "ChanceItem",    ".iii");

	SQGSBase.PostRegister(engine);
}
