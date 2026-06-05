/*
 * This file is part of OpenTTD.
 * OpenTTD is free software; you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, version 2.
 * OpenTTD is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 * See the GNU General Public License for more details. You should have received a copy of the GNU General Public License along with OpenTTD. If not, see <https://www.gnu.org/licenses/old-licenses/gpl-2.0>.
 */

/* THIS FILE IS AUTO-GENERATED; PLEASE DO NOT ALTER MANUALLY */

#include "../script_depotlist.hpp"
#include "../template/template_depotlist.sq.hpp"


template <> SQInteger PushClassName<ScriptDepotList, ScriptType::GS>(HSQUIRRELVM vm) { sq_pushstring(vm, "GSDepotList"); return 1; }

void SQGSDepotList_Register(Squirrel &engine)
{
	DefSQClass<ScriptDepotList, ScriptType::GS> SQGSDepotList("GSDepotList");
	SQGSDepotList.PreRegister(engine, "GSList");
	SQGSDepotList.AddConstructor<void (ScriptDepotList::*)(ScriptTile::TransportType transport_type)>(engine, "xi");

	SQGSDepotList.PostRegister(engine);
}
