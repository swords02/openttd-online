/*
 * This file is part of OpenTTD.
 * OpenTTD is free software; you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, version 2.
 * OpenTTD is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 * See the GNU General Public License for more details. You should have received a copy of the GNU General Public License along with OpenTTD. If not, see <https://www.gnu.org/licenses/old-licenses/gpl-2.0>.
 */

/* THIS FILE IS AUTO-GENERATED; PLEASE DO NOT ALTER MANUALLY */

#include "../script_league.hpp"
#include "../template/template_league.sq.hpp"


template <> SQInteger PushClassName<ScriptLeagueTable, ScriptType::GS>(HSQUIRRELVM vm) { sq_pushstring(vm, "GSLeagueTable"); return 1; }

void SQGSLeagueTable_Register(Squirrel &engine)
{
	DefSQClass<ScriptLeagueTable, ScriptType::GS> SQGSLeagueTable("GSLeagueTable");
	SQGSLeagueTable.PreRegister(engine, "GSObject");

	SQGSLeagueTable.DefSQConst(engine, ScriptLeagueTable::LINK_NONE,       "LINK_NONE");
	SQGSLeagueTable.DefSQConst(engine, ScriptLeagueTable::LINK_TILE,       "LINK_TILE");
	SQGSLeagueTable.DefSQConst(engine, ScriptLeagueTable::LINK_INDUSTRY,   "LINK_INDUSTRY");
	SQGSLeagueTable.DefSQConst(engine, ScriptLeagueTable::LINK_TOWN,       "LINK_TOWN");
	SQGSLeagueTable.DefSQConst(engine, ScriptLeagueTable::LINK_COMPANY,    "LINK_COMPANY");
	SQGSLeagueTable.DefSQConst(engine, ScriptLeagueTable::LINK_STORY_PAGE, "LINK_STORY_PAGE");

	SQGSLeagueTable.DefSQConst(engine, ScriptLeagueTable::LEAGUE_TABLE_INVALID,         "LEAGUE_TABLE_INVALID");
	SQGSLeagueTable.DefSQConst(engine, ScriptLeagueTable::LEAGUE_TABLE_ELEMENT_INVALID, "LEAGUE_TABLE_ELEMENT_INVALID");

	SQGSLeagueTable.DefSQStaticMethod(engine, &ScriptLeagueTable::IsValidLeagueTable,        "IsValidLeagueTable",        ".i");
	SQGSLeagueTable.DefSQStaticMethod(engine, &ScriptLeagueTable::IsValidLeagueTableElement, "IsValidLeagueTableElement", ".i");
	SQGSLeagueTable.DefSQStaticMethod(engine, &ScriptLeagueTable::New,                       "New",                       "....");
	SQGSLeagueTable.DefSQStaticMethod(engine, &ScriptLeagueTable::NewElement,                "NewElement",                ".iii..ii");
	SQGSLeagueTable.DefSQStaticMethod(engine, &ScriptLeagueTable::UpdateElementData,         "UpdateElementData",         ".ii.ii");
	SQGSLeagueTable.DefSQStaticMethod(engine, &ScriptLeagueTable::UpdateElementScore,        "UpdateElementScore",        ".ii.");
	SQGSLeagueTable.DefSQStaticMethod(engine, &ScriptLeagueTable::RemoveElement,             "RemoveElement",             ".i");

	SQGSLeagueTable.PostRegister(engine);
}
