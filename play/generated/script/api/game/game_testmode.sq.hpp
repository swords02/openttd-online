/*
 * This file is part of OpenTTD.
 * OpenTTD is free software; you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, version 2.
 * OpenTTD is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 * See the GNU General Public License for more details. You should have received a copy of the GNU General Public License along with OpenTTD. If not, see <https://www.gnu.org/licenses/old-licenses/gpl-2.0>.
 */

/* THIS FILE IS AUTO-GENERATED; PLEASE DO NOT ALTER MANUALLY */

#include "../script_testmode.hpp"
#include "../template/template_testmode.sq.hpp"


template <> SQInteger PushClassName<ScriptTestMode, ScriptType::GS>(HSQUIRRELVM vm) { sq_pushstring(vm, "GSTestMode"); return 1; }

void SQGSTestMode_Register(Squirrel &engine)
{
	DefSQClass<ScriptTestMode, ScriptType::GS> SQGSTestMode("GSTestMode");
	SQGSTestMode.PreRegister(engine, "GSObject");
	SQGSTestMode.AddConstructor<void (ScriptTestMode::*)()>(engine, "x");

	SQGSTestMode.PostRegister(engine);
}
