/*
 * This file is part of OpenTTD.
 * OpenTTD is free software; you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, version 2.
 * OpenTTD is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 * See the GNU General Public License for more details. You should have received a copy of the GNU General Public License along with OpenTTD. If not, see <https://www.gnu.org/licenses/old-licenses/gpl-2.0>.
 */

/* THIS FILE IS AUTO-GENERATED; PLEASE DO NOT ALTER MANUALLY */

#include "../script_clientlist.hpp"
#include "../template/template_clientlist.sq.hpp"


template <> SQInteger PushClassName<ScriptClientList, ScriptType::GS>(HSQUIRRELVM vm) { sq_pushstring(vm, "GSClientList"); return 1; }

void SQGSClientList_Register(Squirrel &engine)
{
	DefSQClass<ScriptClientList, ScriptType::GS> SQGSClientList("GSClientList");
	SQGSClientList.PreRegister(engine, "GSList");
	SQGSClientList.AddConstructor<void (ScriptClientList::*)()>(engine, "x");

	SQGSClientList.PostRegister(engine);
}


template <> SQInteger PushClassName<ScriptClientList_Company, ScriptType::GS>(HSQUIRRELVM vm) { sq_pushstring(vm, "GSClientList_Company"); return 1; }

void SQGSClientList_Company_Register(Squirrel &engine)
{
	DefSQClass<ScriptClientList_Company, ScriptType::GS> SQGSClientList_Company("GSClientList_Company");
	SQGSClientList_Company.PreRegister(engine, "GSList");
	SQGSClientList_Company.AddConstructor<void (ScriptClientList_Company::*)(ScriptCompany::CompanyID company)>(engine, "xi");

	SQGSClientList_Company.PostRegister(engine);
}
