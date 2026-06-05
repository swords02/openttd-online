/*
 * This file is part of OpenTTD.
 * OpenTTD is free software; you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, version 2.
 * OpenTTD is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 * See the GNU General Public License for more details. You should have received a copy of the GNU General Public License along with OpenTTD. If not, see <https://www.gnu.org/licenses/old-licenses/gpl-2.0>.
 */

/* THIS FILE IS AUTO-GENERATED; PLEASE DO NOT ALTER MANUALLY */

#include "../script_roadtypelist.hpp"
#include "../template/template_roadtypelist.sq.hpp"


template <> SQInteger PushClassName<ScriptRoadTypeList, ScriptType::GS>(HSQUIRRELVM vm) { sq_pushstring(vm, "GSRoadTypeList"); return 1; }

void SQGSRoadTypeList_Register(Squirrel &engine)
{
	DefSQClass<ScriptRoadTypeList, ScriptType::GS> SQGSRoadTypeList("GSRoadTypeList");
	SQGSRoadTypeList.PreRegister(engine, "GSList");
	SQGSRoadTypeList.AddConstructor<void (ScriptRoadTypeList::*)(ScriptRoad::RoadTramTypes rtts)>(engine, "xi");

	SQGSRoadTypeList.PostRegister(engine);
}
