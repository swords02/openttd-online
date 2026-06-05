/*
 * This file is part of OpenTTD.
 * OpenTTD is free software; you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, version 2.
 * OpenTTD is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 * See the GNU General Public License for more details. You should have received a copy of the GNU General Public License along with OpenTTD. If not, see <https://www.gnu.org/licenses/old-licenses/gpl-2.0>.
 */

/* THIS FILE IS AUTO-GENERATED; PLEASE DO NOT ALTER MANUALLY */

#include "../script_storypagelist.hpp"
#include "../template/template_storypagelist.sq.hpp"


template <> SQInteger PushClassName<ScriptStoryPageList, ScriptType::GS>(HSQUIRRELVM vm) { sq_pushstring(vm, "GSStoryPageList"); return 1; }

void SQGSStoryPageList_Register(Squirrel &engine)
{
	DefSQClass<ScriptStoryPageList, ScriptType::GS> SQGSStoryPageList("GSStoryPageList");
	SQGSStoryPageList.PreRegister(engine, "GSList");
	SQGSStoryPageList.AddConstructor<void (ScriptStoryPageList::*)(ScriptCompany::CompanyID company)>(engine, "xi");

	SQGSStoryPageList.PostRegister(engine);
}
