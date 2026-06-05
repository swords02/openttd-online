/*
 * This file is part of OpenTTD.
 * OpenTTD is free software; you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, version 2.
 * OpenTTD is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 * See the GNU General Public License for more details. You should have received a copy of the GNU General Public License along with OpenTTD. If not, see <https://www.gnu.org/licenses/old-licenses/gpl-2.0>.
 */

/* THIS FILE IS AUTO-GENERATED; PLEASE DO NOT ALTER MANUALLY */

#include "../script_date.hpp"
#include "../template/template_date.sq.hpp"


template <> SQInteger PushClassName<ScriptDate, ScriptType::AI>(HSQUIRRELVM vm) { sq_pushstring(vm, "AIDate"); return 1; }

void SQAIDate_Register(Squirrel &engine)
{
	DefSQClass<ScriptDate, ScriptType::AI> SQAIDate("AIDate");
	SQAIDate.PreRegister(engine, "AIObject");

	SQAIDate.DefSQConst(engine, ScriptDate::DATE_INVALID, "DATE_INVALID");

	SQAIDate.DefSQStaticMethod(engine, &ScriptDate::IsValidDate,    "IsValidDate",    ".i");
	SQAIDate.DefSQStaticMethod(engine, &ScriptDate::GetCurrentDate, "GetCurrentDate", ".");
	SQAIDate.DefSQStaticMethod(engine, &ScriptDate::GetYear,        "GetYear",        ".i");
	SQAIDate.DefSQStaticMethod(engine, &ScriptDate::GetMonth,       "GetMonth",       ".i");
	SQAIDate.DefSQStaticMethod(engine, &ScriptDate::GetDayOfMonth,  "GetDayOfMonth",  ".i");
	SQAIDate.DefSQStaticMethod(engine, &ScriptDate::GetDate,        "GetDate",        ".iii");

	SQAIDate.PostRegister(engine);
}
