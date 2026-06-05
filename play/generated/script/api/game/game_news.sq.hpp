/*
 * This file is part of OpenTTD.
 * OpenTTD is free software; you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, version 2.
 * OpenTTD is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 * See the GNU General Public License for more details. You should have received a copy of the GNU General Public License along with OpenTTD. If not, see <https://www.gnu.org/licenses/old-licenses/gpl-2.0>.
 */

/* THIS FILE IS AUTO-GENERATED; PLEASE DO NOT ALTER MANUALLY */

#include "../script_news.hpp"
#include "../template/template_news.sq.hpp"


template <> SQInteger PushClassName<ScriptNews, ScriptType::GS>(HSQUIRRELVM vm) { sq_pushstring(vm, "GSNews"); return 1; }

void SQGSNews_Register(Squirrel &engine)
{
	DefSQClass<ScriptNews, ScriptType::GS> SQGSNews("GSNews");
	SQGSNews.PreRegister(engine, "GSObject");

	SQGSNews.DefSQConst(engine, ScriptNews::NT_ACCIDENT,     "NT_ACCIDENT");
	SQGSNews.DefSQConst(engine, ScriptNews::NT_COMPANY_INFO, "NT_COMPANY_INFO");
	SQGSNews.DefSQConst(engine, ScriptNews::NT_ECONOMY,      "NT_ECONOMY");
	SQGSNews.DefSQConst(engine, ScriptNews::NT_ADVICE,       "NT_ADVICE");
	SQGSNews.DefSQConst(engine, ScriptNews::NT_ACCEPTANCE,   "NT_ACCEPTANCE");
	SQGSNews.DefSQConst(engine, ScriptNews::NT_SUBSIDIES,    "NT_SUBSIDIES");
	SQGSNews.DefSQConst(engine, ScriptNews::NT_GENERAL,      "NT_GENERAL");
	SQGSNews.DefSQConst(engine, ScriptNews::NR_NONE,         "NR_NONE");
	SQGSNews.DefSQConst(engine, ScriptNews::NR_TILE,         "NR_TILE");
	SQGSNews.DefSQConst(engine, ScriptNews::NR_STATION,      "NR_STATION");
	SQGSNews.DefSQConst(engine, ScriptNews::NR_INDUSTRY,     "NR_INDUSTRY");
	SQGSNews.DefSQConst(engine, ScriptNews::NR_TOWN,         "NR_TOWN");

	SQGSNews.DefSQStaticMethod(engine, &ScriptNews::Create, "Create", ".i.iii");

	SQGSNews.PostRegister(engine);
}
