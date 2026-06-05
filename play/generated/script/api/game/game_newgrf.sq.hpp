/*
 * This file is part of OpenTTD.
 * OpenTTD is free software; you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, version 2.
 * OpenTTD is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 * See the GNU General Public License for more details. You should have received a copy of the GNU General Public License along with OpenTTD. If not, see <https://www.gnu.org/licenses/old-licenses/gpl-2.0>.
 */

/* THIS FILE IS AUTO-GENERATED; PLEASE DO NOT ALTER MANUALLY */

#include "../script_newgrf.hpp"
#include "../template/template_newgrf.sq.hpp"


template <> SQInteger PushClassName<ScriptNewGRFList, ScriptType::GS>(HSQUIRRELVM vm) { sq_pushstring(vm, "GSNewGRFList"); return 1; }

void SQGSNewGRFList_Register(Squirrel &engine)
{
	DefSQClass<ScriptNewGRFList, ScriptType::GS> SQGSNewGRFList("GSNewGRFList");
	SQGSNewGRFList.PreRegister(engine, "GSList");
	SQGSNewGRFList.AddConstructor<void (ScriptNewGRFList::*)()>(engine, "x");

	SQGSNewGRFList.PostRegister(engine);
}


template <> SQInteger PushClassName<ScriptNewGRF, ScriptType::GS>(HSQUIRRELVM vm) { sq_pushstring(vm, "GSNewGRF"); return 1; }

void SQGSNewGRF_Register(Squirrel &engine)
{
	DefSQClass<ScriptNewGRF, ScriptType::GS> SQGSNewGRF("GSNewGRF");
	SQGSNewGRF.PreRegister(engine, "GSObject");

	SQGSNewGRF.DefSQStaticMethod(engine, &ScriptNewGRF::IsLoaded,   "IsLoaded",   ".i");
	SQGSNewGRF.DefSQStaticMethod(engine, &ScriptNewGRF::GetVersion, "GetVersion", ".i");
	SQGSNewGRF.DefSQStaticMethod(engine, &ScriptNewGRF::GetName,    "GetName",    ".i");

	SQGSNewGRF.PostRegister(engine);
}
