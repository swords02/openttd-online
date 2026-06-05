/*
 * This file is part of OpenTTD.
 * OpenTTD is free software; you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, version 2.
 * OpenTTD is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 * See the GNU General Public License for more details. You should have received a copy of the GNU General Public License along with OpenTTD. If not, see <https://www.gnu.org/licenses/old-licenses/gpl-2.0>.
 */

/* THIS FILE IS AUTO-GENERATED; PLEASE DO NOT ALTER MANUALLY */

#include "../script_subsidy.hpp"
#include "../template/template_subsidy.sq.hpp"


template <> SQInteger PushClassName<ScriptSubsidy, ScriptType::AI>(HSQUIRRELVM vm) { sq_pushstring(vm, "AISubsidy"); return 1; }

void SQAISubsidy_Register(Squirrel &engine)
{
	DefSQClass<ScriptSubsidy, ScriptType::AI> SQAISubsidy("AISubsidy");
	SQAISubsidy.PreRegister(engine, "AIObject");

	SQAISubsidy.DefSQConst(engine, ScriptSubsidy::SPT_INDUSTRY, "SPT_INDUSTRY");
	SQAISubsidy.DefSQConst(engine, ScriptSubsidy::SPT_TOWN,     "SPT_TOWN");
	SQAISubsidy.DefSQConst(engine, ScriptSubsidy::SPT_INVALID,  "SPT_INVALID");

	SQAISubsidy.DefSQStaticMethod(engine, &ScriptSubsidy::IsValidSubsidy,      "IsValidSubsidy",      ".i");
	SQAISubsidy.DefSQStaticMethod(engine, &ScriptSubsidy::IsAwarded,           "IsAwarded",           ".i");
	SQAISubsidy.DefSQStaticMethod(engine, &ScriptSubsidy::GetAwardedTo,        "GetAwardedTo",        ".i");
	SQAISubsidy.DefSQStaticMethod(engine, &ScriptSubsidy::GetExpireDate,       "GetExpireDate",       ".i");
	SQAISubsidy.DefSQStaticMethod(engine, &ScriptSubsidy::GetCargoType,        "GetCargoType",        ".i");
	SQAISubsidy.DefSQStaticMethod(engine, &ScriptSubsidy::GetSourceType,       "GetSourceType",       ".i");
	SQAISubsidy.DefSQStaticMethod(engine, &ScriptSubsidy::GetSourceIndex,      "GetSourceIndex",      ".i");
	SQAISubsidy.DefSQStaticMethod(engine, &ScriptSubsidy::GetDestinationType,  "GetDestinationType",  ".i");
	SQAISubsidy.DefSQStaticMethod(engine, &ScriptSubsidy::GetDestinationIndex, "GetDestinationIndex", ".i");

	SQAISubsidy.PostRegister(engine);
}
