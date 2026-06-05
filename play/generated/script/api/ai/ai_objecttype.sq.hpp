/*
 * This file is part of OpenTTD.
 * OpenTTD is free software; you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, version 2.
 * OpenTTD is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 * See the GNU General Public License for more details. You should have received a copy of the GNU General Public License along with OpenTTD. If not, see <https://www.gnu.org/licenses/old-licenses/gpl-2.0>.
 */

/* THIS FILE IS AUTO-GENERATED; PLEASE DO NOT ALTER MANUALLY */

#include "../script_objecttype.hpp"
#include "../template/template_objecttype.sq.hpp"


template <> SQInteger PushClassName<ScriptObjectType, ScriptType::AI>(HSQUIRRELVM vm) { sq_pushstring(vm, "AIObjectType"); return 1; }

void SQAIObjectType_Register(Squirrel &engine)
{
	DefSQClass<ScriptObjectType, ScriptType::AI> SQAIObjectType("AIObjectType");
	SQAIObjectType.PreRegister(engine, "AIObject");

	SQAIObjectType.DefSQStaticMethod(engine, &ScriptObjectType::IsValidObjectType, "IsValidObjectType", ".i");
	SQAIObjectType.DefSQStaticMethod(engine, &ScriptObjectType::GetName,           "GetName",           ".i");
	SQAIObjectType.DefSQStaticMethod(engine, &ScriptObjectType::GetViews,          "GetViews",          ".i");
	SQAIObjectType.DefSQStaticMethod(engine, &ScriptObjectType::BuildObject,       "BuildObject",       ".iii");
	SQAIObjectType.DefSQStaticMethod(engine, &ScriptObjectType::ResolveNewGRFID,   "ResolveNewGRFID",   ".ii");

	SQAIObjectType.PostRegister(engine);
}
