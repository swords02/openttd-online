/*
 * This file is part of OpenTTD.
 * OpenTTD is free software; you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, version 2.
 * OpenTTD is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 * See the GNU General Public License for more details. You should have received a copy of the GNU General Public License along with OpenTTD. If not, see <https://www.gnu.org/licenses/old-licenses/gpl-2.0>.
 */

/* THIS FILE IS AUTO-GENERATED; PLEASE DO NOT ALTER MANUALLY */

#include "../script_townlist.hpp"
#include "../template/template_townlist.sq.hpp"


template <> SQInteger PushClassName<ScriptTownList, ScriptType::AI>(HSQUIRRELVM vm) { sq_pushstring(vm, "AITownList"); return 1; }

void SQAITownList_Register(Squirrel &engine)
{
	DefSQClass<ScriptTownList, ScriptType::AI> SQAITownList("AITownList");
	SQAITownList.PreRegister(engine, "AIList");
	SQAITownList.AddSQAdvancedConstructor(engine);

	SQAITownList.PostRegister(engine);
}


template <> SQInteger PushClassName<ScriptTownEffectList, ScriptType::AI>(HSQUIRRELVM vm) { sq_pushstring(vm, "AITownEffectList"); return 1; }

void SQAITownEffectList_Register(Squirrel &engine)
{
	DefSQClass<ScriptTownEffectList, ScriptType::AI> SQAITownEffectList("AITownEffectList");
	SQAITownEffectList.PreRegister(engine, "AIList");
	SQAITownEffectList.AddConstructor<void (ScriptTownEffectList::*)()>(engine, "x");

	SQAITownEffectList.PostRegister(engine);
}
