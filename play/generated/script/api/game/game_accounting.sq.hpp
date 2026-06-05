/*
 * This file is part of OpenTTD.
 * OpenTTD is free software; you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, version 2.
 * OpenTTD is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 * See the GNU General Public License for more details. You should have received a copy of the GNU General Public License along with OpenTTD. If not, see <https://www.gnu.org/licenses/old-licenses/gpl-2.0>.
 */

/* THIS FILE IS AUTO-GENERATED; PLEASE DO NOT ALTER MANUALLY */

#include "../script_accounting.hpp"
#include "../template/template_accounting.sq.hpp"


template <> SQInteger PushClassName<ScriptAccounting, ScriptType::GS>(HSQUIRRELVM vm) { sq_pushstring(vm, "GSAccounting"); return 1; }

void SQGSAccounting_Register(Squirrel &engine)
{
	DefSQClass<ScriptAccounting, ScriptType::GS> SQGSAccounting("GSAccounting");
	SQGSAccounting.PreRegister(engine, "GSObject");
	SQGSAccounting.AddConstructor<void (ScriptAccounting::*)()>(engine, "x");

	SQGSAccounting.DefSQMethod(engine, &ScriptAccounting::GetCosts,   "GetCosts",   "x");
	SQGSAccounting.DefSQMethod(engine, &ScriptAccounting::ResetCosts, "ResetCosts", "x");

	SQGSAccounting.PostRegister(engine);
}
