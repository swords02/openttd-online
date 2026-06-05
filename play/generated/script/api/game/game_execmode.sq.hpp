/*
 * This file is part of OpenTTD.
 * OpenTTD is free software; you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, version 2.
 * OpenTTD is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 * See the GNU General Public License for more details. You should have received a copy of the GNU General Public License along with OpenTTD. If not, see <https://www.gnu.org/licenses/old-licenses/gpl-2.0>.
 */

/* THIS FILE IS AUTO-GENERATED; PLEASE DO NOT ALTER MANUALLY */

#include "../script_execmode.hpp"
#include "../template/template_execmode.sq.hpp"


template <> SQInteger PushClassName<ScriptExecMode, ScriptType::GS>(HSQUIRRELVM vm) { sq_pushstring(vm, "GSExecMode"); return 1; }

void SQGSExecMode_Register(Squirrel &engine)
{
	DefSQClass<ScriptExecMode, ScriptType::GS> SQGSExecMode("GSExecMode");
	SQGSExecMode.PreRegister(engine, "GSObject");
	SQGSExecMode.AddConstructor<void (ScriptExecMode::*)()>(engine, "x");

	SQGSExecMode.PostRegister(engine);
}
