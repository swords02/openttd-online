/*
 * This file is part of OpenTTD.
 * OpenTTD is free software; you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, version 2.
 * OpenTTD is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 * See the GNU General Public License for more details. You should have received a copy of the GNU General Public License along with OpenTTD. If not, see <https://www.gnu.org/licenses/old-licenses/gpl-2.0>.
 */

/* THIS FILE IS AUTO-GENERATED; PLEASE DO NOT ALTER MANUALLY */

#include "../script_subsidy.hpp"
#include "../template/template_subsidy.sq.hpp"


template <> SQInteger PushClassName<ScriptSubsidy, ScriptType::GS>(HSQUIRRELVM vm) { sq_pushstring(vm, "GSSubsidy"); return 1; }

void SQGSSubsidy_Register(Squirrel &engine)
{
	DefSQClass<ScriptSubsidy, ScriptType::GS> SQGSSubsidy("GSSubsidy");
	SQGSSubsidy.PreRegister(engine, "GSObject");

	SQGSSubsidy.DefSQConst(engine, ScriptSubsidy::SPT_INDUSTRY, "SPT_INDUSTRY");
	SQGSSubsidy.DefSQConst(engine, ScriptSubsidy::SPT_TOWN,     "SPT_TOWN");
	SQGSSubsidy.DefSQConst(engine, ScriptSubsidy::SPT_INVALID,  "SPT_INVALID");

	SQGSSubsidy.DefSQStaticMethod(engine, &ScriptSubsidy::IsValidSubsidy,      "IsValidSubsidy",      ".i");
	SQGSSubsidy.DefSQStaticMethod(engine, &ScriptSubsidy::IsAwarded,           "IsAwarded",           ".i");
	SQGSSubsidy.DefSQStaticMethod(engine, &ScriptSubsidy::Create,              "Create",              ".iiiii");
	SQGSSubsidy.DefSQStaticMethod(engine, &ScriptSubsidy::GetAwardedTo,        "GetAwardedTo",        ".i");
	SQGSSubsidy.DefSQStaticMethod(engine, &ScriptSubsidy::GetExpireDate,       "GetExpireDate",       ".i");
	SQGSSubsidy.DefSQStaticMethod(engine, &ScriptSubsidy::GetCargoType,        "GetCargoType",        ".i");
	SQGSSubsidy.DefSQStaticMethod(engine, &ScriptSubsidy::GetSourceType,       "GetSourceType",       ".i");
	SQGSSubsidy.DefSQStaticMethod(engine, &ScriptSubsidy::GetSourceIndex,      "GetSourceIndex",      ".i");
	SQGSSubsidy.DefSQStaticMethod(engine, &ScriptSubsidy::GetDestinationType,  "GetDestinationType",  ".i");
	SQGSSubsidy.DefSQStaticMethod(engine, &ScriptSubsidy::GetDestinationIndex, "GetDestinationIndex", ".i");

	SQGSSubsidy.PostRegister(engine);
}
