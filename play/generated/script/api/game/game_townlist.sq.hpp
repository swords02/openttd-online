/*
 * This file is part of OpenTTD.
 * OpenTTD is free software; you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, version 2.
 * OpenTTD is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 * See the GNU General Public License for more details. You should have received a copy of the GNU General Public License along with OpenTTD. If not, see <https://www.gnu.org/licenses/old-licenses/gpl-2.0>.
 */

/* THIS FILE IS AUTO-GENERATED; PLEASE DO NOT ALTER MANUALLY */

#include "../script_townlist.hpp"
#include "../template/template_townlist.sq.hpp"


template <> SQInteger PushClassName<ScriptTownList, ScriptType::GS>(HSQUIRRELVM vm) { sq_pushstring(vm, "GSTownList"); return 1; }

void SQGSTownList_Register(Squirrel &engine)
{
	DefSQClass<ScriptTownList, ScriptType::GS> SQGSTownList("GSTownList");
	SQGSTownList.PreRegister(engine, "GSList");
	SQGSTownList.AddSQAdvancedConstructor(engine);

	SQGSTownList.PostRegister(engine);
}


template <> SQInteger PushClassName<ScriptTownEffectList, ScriptType::GS>(HSQUIRRELVM vm) { sq_pushstring(vm, "GSTownEffectList"); return 1; }

void SQGSTownEffectList_Register(Squirrel &engine)
{
	DefSQClass<ScriptTownEffectList, ScriptType::GS> SQGSTownEffectList("GSTownEffectList");
	SQGSTownEffectList.PreRegister(engine, "GSList");
	SQGSTownEffectList.AddConstructor<void (ScriptTownEffectList::*)()>(engine, "x");

	SQGSTownEffectList.PostRegister(engine);
}
