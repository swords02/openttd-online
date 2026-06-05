/*
 * This file is part of OpenTTD.
 * OpenTTD is free software; you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, version 2.
 * OpenTTD is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 * See the GNU General Public License for more details. You should have received a copy of the GNU General Public License along with OpenTTD. If not, see <https://www.gnu.org/licenses/old-licenses/gpl-2.0>.
 */

/* THIS FILE IS AUTO-GENERATED; PLEASE DO NOT ALTER MANUALLY */

#include "../script_newgrf.hpp"
#include "../template/template_newgrf.sq.hpp"


template <> SQInteger PushClassName<ScriptNewGRFList, ScriptType::AI>(HSQUIRRELVM vm) { sq_pushstring(vm, "AINewGRFList"); return 1; }

void SQAINewGRFList_Register(Squirrel &engine)
{
	DefSQClass<ScriptNewGRFList, ScriptType::AI> SQAINewGRFList("AINewGRFList");
	SQAINewGRFList.PreRegister(engine, "AIList");
	SQAINewGRFList.AddConstructor<void (ScriptNewGRFList::*)()>(engine, "x");

	SQAINewGRFList.PostRegister(engine);
}


template <> SQInteger PushClassName<ScriptNewGRF, ScriptType::AI>(HSQUIRRELVM vm) { sq_pushstring(vm, "AINewGRF"); return 1; }

void SQAINewGRF_Register(Squirrel &engine)
{
	DefSQClass<ScriptNewGRF, ScriptType::AI> SQAINewGRF("AINewGRF");
	SQAINewGRF.PreRegister(engine, "AIObject");

	SQAINewGRF.DefSQStaticMethod(engine, &ScriptNewGRF::IsLoaded,   "IsLoaded",   ".i");
	SQAINewGRF.DefSQStaticMethod(engine, &ScriptNewGRF::GetVersion, "GetVersion", ".i");
	SQAINewGRF.DefSQStaticMethod(engine, &ScriptNewGRF::GetName,    "GetName",    ".i");

	SQAINewGRF.PostRegister(engine);
}
