/*
 * This file is part of OpenTTD.
 * OpenTTD is free software; you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, version 2.
 * OpenTTD is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 * See the GNU General Public License for more details. You should have received a copy of the GNU General Public License along with OpenTTD. If not, see <https://www.gnu.org/licenses/old-licenses/gpl-2.0>.
 */

/* THIS FILE IS AUTO-GENERATED; PLEASE DO NOT ALTER MANUALLY */

#include "../script_accounting.hpp"
#include "../template/template_accounting.sq.hpp"


template <> SQInteger PushClassName<ScriptAccounting, ScriptType::AI>(HSQUIRRELVM vm) { sq_pushstring(vm, "AIAccounting"); return 1; }

void SQAIAccounting_Register(Squirrel &engine)
{
	DefSQClass<ScriptAccounting, ScriptType::AI> SQAIAccounting("AIAccounting");
	SQAIAccounting.PreRegister(engine, "AIObject");
	SQAIAccounting.AddConstructor<void (ScriptAccounting::*)()>(engine, "x");

	SQAIAccounting.DefSQMethod(engine, &ScriptAccounting::GetCosts,   "GetCosts",   "x");
	SQAIAccounting.DefSQMethod(engine, &ScriptAccounting::ResetCosts, "ResetCosts", "x");

	SQAIAccounting.PostRegister(engine);
}
