/*
 * This file is part of OpenTTD.
 * OpenTTD is free software; you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, version 2.
 * OpenTTD is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 * See the GNU General Public License for more details. You should have received a copy of the GNU General Public License along with OpenTTD. If not, see <https://www.gnu.org/licenses/old-licenses/gpl-2.0>.
 */

/* THIS FILE IS AUTO-GENERATED; PLEASE DO NOT ALTER MANUALLY */

#include "../script_industrylist.hpp"
#include "../template/template_industrylist.sq.hpp"


template <> SQInteger PushClassName<ScriptIndustryList, ScriptType::GS>(HSQUIRRELVM vm) { sq_pushstring(vm, "GSIndustryList"); return 1; }

void SQGSIndustryList_Register(Squirrel &engine)
{
	DefSQClass<ScriptIndustryList, ScriptType::GS> SQGSIndustryList("GSIndustryList");
	SQGSIndustryList.PreRegister(engine, "GSList");
	SQGSIndustryList.AddSQAdvancedConstructor(engine);

	SQGSIndustryList.PostRegister(engine);
}


template <> SQInteger PushClassName<ScriptIndustryList_CargoAccepting, ScriptType::GS>(HSQUIRRELVM vm) { sq_pushstring(vm, "GSIndustryList_CargoAccepting"); return 1; }

void SQGSIndustryList_CargoAccepting_Register(Squirrel &engine)
{
	DefSQClass<ScriptIndustryList_CargoAccepting, ScriptType::GS> SQGSIndustryList_CargoAccepting("GSIndustryList_CargoAccepting");
	SQGSIndustryList_CargoAccepting.PreRegister(engine, "GSList");
	SQGSIndustryList_CargoAccepting.AddConstructor<void (ScriptIndustryList_CargoAccepting::*)(CargoType cargo_type)>(engine, "xi");

	SQGSIndustryList_CargoAccepting.PostRegister(engine);
}


template <> SQInteger PushClassName<ScriptIndustryList_CargoProducing, ScriptType::GS>(HSQUIRRELVM vm) { sq_pushstring(vm, "GSIndustryList_CargoProducing"); return 1; }

void SQGSIndustryList_CargoProducing_Register(Squirrel &engine)
{
	DefSQClass<ScriptIndustryList_CargoProducing, ScriptType::GS> SQGSIndustryList_CargoProducing("GSIndustryList_CargoProducing");
	SQGSIndustryList_CargoProducing.PreRegister(engine, "GSList");
	SQGSIndustryList_CargoProducing.AddConstructor<void (ScriptIndustryList_CargoProducing::*)(CargoType cargo_type)>(engine, "xi");

	SQGSIndustryList_CargoProducing.PostRegister(engine);
}
