/*
 * This file is part of OpenTTD.
 * OpenTTD is free software; you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, version 2.
 * OpenTTD is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 * See the GNU General Public License for more details. You should have received a copy of the GNU General Public License along with OpenTTD. If not, see <https://www.gnu.org/licenses/old-licenses/gpl-2.0>.
 */

/* THIS FILE IS AUTO-GENERATED; PLEASE DO NOT ALTER MANUALLY */

#include "../script_industrylist.hpp"
#include "../template/template_industrylist.sq.hpp"


template <> SQInteger PushClassName<ScriptIndustryList, ScriptType::AI>(HSQUIRRELVM vm) { sq_pushstring(vm, "AIIndustryList"); return 1; }

void SQAIIndustryList_Register(Squirrel &engine)
{
	DefSQClass<ScriptIndustryList, ScriptType::AI> SQAIIndustryList("AIIndustryList");
	SQAIIndustryList.PreRegister(engine, "AIList");
	SQAIIndustryList.AddSQAdvancedConstructor(engine);

	SQAIIndustryList.PostRegister(engine);
}


template <> SQInteger PushClassName<ScriptIndustryList_CargoAccepting, ScriptType::AI>(HSQUIRRELVM vm) { sq_pushstring(vm, "AIIndustryList_CargoAccepting"); return 1; }

void SQAIIndustryList_CargoAccepting_Register(Squirrel &engine)
{
	DefSQClass<ScriptIndustryList_CargoAccepting, ScriptType::AI> SQAIIndustryList_CargoAccepting("AIIndustryList_CargoAccepting");
	SQAIIndustryList_CargoAccepting.PreRegister(engine, "AIList");
	SQAIIndustryList_CargoAccepting.AddConstructor<void (ScriptIndustryList_CargoAccepting::*)(CargoType cargo_type)>(engine, "xi");

	SQAIIndustryList_CargoAccepting.PostRegister(engine);
}


template <> SQInteger PushClassName<ScriptIndustryList_CargoProducing, ScriptType::AI>(HSQUIRRELVM vm) { sq_pushstring(vm, "AIIndustryList_CargoProducing"); return 1; }

void SQAIIndustryList_CargoProducing_Register(Squirrel &engine)
{
	DefSQClass<ScriptIndustryList_CargoProducing, ScriptType::AI> SQAIIndustryList_CargoProducing("AIIndustryList_CargoProducing");
	SQAIIndustryList_CargoProducing.PreRegister(engine, "AIList");
	SQAIIndustryList_CargoProducing.AddConstructor<void (ScriptIndustryList_CargoProducing::*)(CargoType cargo_type)>(engine, "xi");

	SQAIIndustryList_CargoProducing.PostRegister(engine);
}
