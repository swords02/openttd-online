/*
 * This file is part of OpenTTD.
 * OpenTTD is free software; you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, version 2.
 * OpenTTD is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 * See the GNU General Public License for more details. You should have received a copy of the GNU General Public License along with OpenTTD. If not, see <https://www.gnu.org/licenses/old-licenses/gpl-2.0>.
 */

/* THIS FILE IS AUTO-GENERATED; PLEASE DO NOT ALTER MANUALLY */

#include "../script_bridge.hpp"
#include "../template/template_bridge.sq.hpp"


template <> SQInteger PushClassName<ScriptBridge, ScriptType::GS>(HSQUIRRELVM vm) { sq_pushstring(vm, "GSBridge"); return 1; }

void SQGSBridge_Register(Squirrel &engine)
{
	DefSQClass<ScriptBridge, ScriptType::GS> SQGSBridge("GSBridge");
	SQGSBridge.PreRegister(engine, "GSObject");

	SQGSBridge.DefSQConst(engine, ScriptBridge::ERR_BRIDGE_BASE,                     "ERR_BRIDGE_BASE");
	SQGSBridge.DefSQConst(engine, ScriptBridge::ERR_BRIDGE_TYPE_UNAVAILABLE,         "ERR_BRIDGE_TYPE_UNAVAILABLE");
	SQGSBridge.DefSQConst(engine, ScriptBridge::ERR_BRIDGE_CANNOT_END_IN_WATER,      "ERR_BRIDGE_CANNOT_END_IN_WATER");
	SQGSBridge.DefSQConst(engine, ScriptBridge::ERR_BRIDGE_HEADS_NOT_ON_SAME_HEIGHT, "ERR_BRIDGE_HEADS_NOT_ON_SAME_HEIGHT");

	ScriptError::RegisterErrorMap(STR_ERROR_CAN_T_BUILD_BRIDGE_HERE,     ScriptBridge::ERR_BRIDGE_TYPE_UNAVAILABLE);
	ScriptError::RegisterErrorMap(STR_ERROR_ENDS_OF_BRIDGE_MUST_BOTH,    ScriptBridge::ERR_BRIDGE_CANNOT_END_IN_WATER);
	ScriptError::RegisterErrorMap(STR_ERROR_BRIDGEHEADS_NOT_SAME_HEIGHT, ScriptBridge::ERR_BRIDGE_HEADS_NOT_ON_SAME_HEIGHT);

	ScriptError::RegisterErrorMapString(ScriptBridge::ERR_BRIDGE_TYPE_UNAVAILABLE,         "ERR_BRIDGE_TYPE_UNAVAILABLE");
	ScriptError::RegisterErrorMapString(ScriptBridge::ERR_BRIDGE_CANNOT_END_IN_WATER,      "ERR_BRIDGE_CANNOT_END_IN_WATER");
	ScriptError::RegisterErrorMapString(ScriptBridge::ERR_BRIDGE_HEADS_NOT_ON_SAME_HEIGHT, "ERR_BRIDGE_HEADS_NOT_ON_SAME_HEIGHT");

	SQGSBridge.DefSQStaticMethod(engine, &ScriptBridge::IsValidBridge,     "IsValidBridge",     ".i");
	SQGSBridge.DefSQStaticMethod(engine, &ScriptBridge::IsBridgeTile,      "IsBridgeTile",      ".i");
	SQGSBridge.DefSQStaticMethod(engine, &ScriptBridge::GetBridgeType,     "GetBridgeType",     ".i");
	SQGSBridge.DefSQStaticMethod(engine, &ScriptBridge::GetName,           "GetName",           ".ii");
	SQGSBridge.DefSQStaticMethod(engine, &ScriptBridge::GetMaxSpeed,       "GetMaxSpeed",       ".i");
	SQGSBridge.DefSQStaticMethod(engine, &ScriptBridge::GetPrice,          "GetPrice",          ".ii");
	SQGSBridge.DefSQStaticMethod(engine, &ScriptBridge::GetMaxLength,      "GetMaxLength",      ".i");
	SQGSBridge.DefSQStaticMethod(engine, &ScriptBridge::GetMinLength,      "GetMinLength",      ".i");
	SQGSBridge.DefSQStaticMethod(engine, &ScriptBridge::BuildBridge,       "BuildBridge",       ".iiii");
	SQGSBridge.DefSQStaticMethod(engine, &ScriptBridge::RemoveBridge,      "RemoveBridge",      ".i");
	SQGSBridge.DefSQStaticMethod(engine, &ScriptBridge::GetOtherBridgeEnd, "GetOtherBridgeEnd", ".i");

	SQGSBridge.PostRegister(engine);
}
