/*
 * This file is part of OpenTTD.
 * OpenTTD is free software; you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, version 2.
 * OpenTTD is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 * See the GNU General Public License for more details. You should have received a copy of the GNU General Public License along with OpenTTD. If not, see <https://www.gnu.org/licenses/old-licenses/gpl-2.0>.
 */

/* THIS FILE IS AUTO-GENERATED; PLEASE DO NOT ALTER MANUALLY */

#include "../script_map.hpp"
#include "../template/template_map.sq.hpp"


template <> SQInteger PushClassName<ScriptMap, ScriptType::AI>(HSQUIRRELVM vm) { sq_pushstring(vm, "AIMap"); return 1; }

void SQAIMap_Register(Squirrel &engine)
{
	DefSQClass<ScriptMap, ScriptType::AI> SQAIMap("AIMap");
	SQAIMap.PreRegister(engine, "AIObject");

	SQAIMap.DefSQConst(engine, ScriptMap::TILE_INVALID, "TILE_INVALID");

	SQAIMap.DefSQStaticMethod(engine, &ScriptMap::IsValidTile,       "IsValidTile",       ".i");
	SQAIMap.DefSQStaticMethod(engine, &ScriptMap::GetMapSize,        "GetMapSize",        ".");
	SQAIMap.DefSQStaticMethod(engine, &ScriptMap::GetMapSizeX,       "GetMapSizeX",       ".");
	SQAIMap.DefSQStaticMethod(engine, &ScriptMap::GetMapSizeY,       "GetMapSizeY",       ".");
	SQAIMap.DefSQStaticMethod(engine, &ScriptMap::GetTileX,          "GetTileX",          ".i");
	SQAIMap.DefSQStaticMethod(engine, &ScriptMap::GetTileY,          "GetTileY",          ".i");
	SQAIMap.DefSQStaticMethod(engine, &ScriptMap::GetTileIndex,      "GetTileIndex",      ".ii");
	SQAIMap.DefSQStaticMethod(engine, &ScriptMap::DistanceManhattan, "DistanceManhattan", ".ii");
	SQAIMap.DefSQStaticMethod(engine, &ScriptMap::DistanceMax,       "DistanceMax",       ".ii");
	SQAIMap.DefSQStaticMethod(engine, &ScriptMap::DistanceSquare,    "DistanceSquare",    ".ii");
	SQAIMap.DefSQStaticMethod(engine, &ScriptMap::DistanceFromEdge,  "DistanceFromEdge",  ".i");

	SQAIMap.PostRegister(engine);
}
