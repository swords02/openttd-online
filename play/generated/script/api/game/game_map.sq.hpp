/*
 * This file is part of OpenTTD.
 * OpenTTD is free software; you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, version 2.
 * OpenTTD is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 * See the GNU General Public License for more details. You should have received a copy of the GNU General Public License along with OpenTTD. If not, see <https://www.gnu.org/licenses/old-licenses/gpl-2.0>.
 */

/* THIS FILE IS AUTO-GENERATED; PLEASE DO NOT ALTER MANUALLY */

#include "../script_map.hpp"
#include "../template/template_map.sq.hpp"


template <> SQInteger PushClassName<ScriptMap, ScriptType::GS>(HSQUIRRELVM vm) { sq_pushstring(vm, "GSMap"); return 1; }

void SQGSMap_Register(Squirrel &engine)
{
	DefSQClass<ScriptMap, ScriptType::GS> SQGSMap("GSMap");
	SQGSMap.PreRegister(engine, "GSObject");

	SQGSMap.DefSQConst(engine, ScriptMap::TILE_INVALID, "TILE_INVALID");

	SQGSMap.DefSQStaticMethod(engine, &ScriptMap::IsValidTile,       "IsValidTile",       ".i");
	SQGSMap.DefSQStaticMethod(engine, &ScriptMap::GetMapSize,        "GetMapSize",        ".");
	SQGSMap.DefSQStaticMethod(engine, &ScriptMap::GetMapSizeX,       "GetMapSizeX",       ".");
	SQGSMap.DefSQStaticMethod(engine, &ScriptMap::GetMapSizeY,       "GetMapSizeY",       ".");
	SQGSMap.DefSQStaticMethod(engine, &ScriptMap::GetTileX,          "GetTileX",          ".i");
	SQGSMap.DefSQStaticMethod(engine, &ScriptMap::GetTileY,          "GetTileY",          ".i");
	SQGSMap.DefSQStaticMethod(engine, &ScriptMap::GetTileIndex,      "GetTileIndex",      ".ii");
	SQGSMap.DefSQStaticMethod(engine, &ScriptMap::DistanceManhattan, "DistanceManhattan", ".ii");
	SQGSMap.DefSQStaticMethod(engine, &ScriptMap::DistanceMax,       "DistanceMax",       ".ii");
	SQGSMap.DefSQStaticMethod(engine, &ScriptMap::DistanceSquare,    "DistanceSquare",    ".ii");
	SQGSMap.DefSQStaticMethod(engine, &ScriptMap::DistanceFromEdge,  "DistanceFromEdge",  ".i");

	SQGSMap.PostRegister(engine);
}
