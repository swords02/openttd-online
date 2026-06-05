/*
 * This file is part of OpenTTD.
 * OpenTTD is free software; you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, version 2.
 * OpenTTD is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 * See the GNU General Public License for more details. You should have received a copy of the GNU General Public License along with OpenTTD. If not, see <https://www.gnu.org/licenses/old-licenses/gpl-2.0>.
 */

/* THIS FILE IS AUTO-GENERATED; PLEASE DO NOT ALTER MANUALLY */

#include "../script_sign.hpp"
#include "../template/template_sign.sq.hpp"


template <> SQInteger PushClassName<ScriptSign, ScriptType::GS>(HSQUIRRELVM vm) { sq_pushstring(vm, "GSSign"); return 1; }

void SQGSSign_Register(Squirrel &engine)
{
	DefSQClass<ScriptSign, ScriptType::GS> SQGSSign("GSSign");
	SQGSSign.PreRegister(engine, "GSObject");

	SQGSSign.DefSQConst(engine, ScriptSign::ERR_SIGN_BASE,           "ERR_SIGN_BASE");
	SQGSSign.DefSQConst(engine, ScriptSign::ERR_SIGN_TOO_MANY_SIGNS, "ERR_SIGN_TOO_MANY_SIGNS");

	ScriptError::RegisterErrorMap(STR_ERROR_TOO_MANY_SIGNS, ScriptSign::ERR_SIGN_TOO_MANY_SIGNS);

	ScriptError::RegisterErrorMapString(ScriptSign::ERR_SIGN_TOO_MANY_SIGNS, "ERR_SIGN_TOO_MANY_SIGNS");

	SQGSSign.DefSQStaticMethod(engine, &ScriptSign::IsValidSign, "IsValidSign", ".i");
	SQGSSign.DefSQStaticMethod(engine, &ScriptSign::SetName,     "SetName",     ".i.");
	SQGSSign.DefSQStaticMethod(engine, &ScriptSign::GetName,     "GetName",     ".i");
	SQGSSign.DefSQStaticMethod(engine, &ScriptSign::GetOwner,    "GetOwner",    ".i");
	SQGSSign.DefSQStaticMethod(engine, &ScriptSign::GetLocation, "GetLocation", ".i");
	SQGSSign.DefSQStaticMethod(engine, &ScriptSign::BuildSign,   "BuildSign",   ".i.");
	SQGSSign.DefSQStaticMethod(engine, &ScriptSign::RemoveSign,  "RemoveSign",  ".i");

	SQGSSign.PostRegister(engine);
}
