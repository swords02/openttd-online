/*
 * This file is part of OpenTTD.
 * OpenTTD is free software; you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, version 2.
 * OpenTTD is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 * See the GNU General Public License for more details. You should have received a copy of the GNU General Public License along with OpenTTD. If not, see <https://www.gnu.org/licenses/old-licenses/gpl-2.0>.
 */

/* THIS FILE IS AUTO-GENERATED; PLEASE DO NOT ALTER MANUALLY */

#include "../script_gamesettings.hpp"
#include "../template/template_gamesettings.sq.hpp"


template <> SQInteger PushClassName<ScriptGameSettings, ScriptType::AI>(HSQUIRRELVM vm) { sq_pushstring(vm, "AIGameSettings"); return 1; }

void SQAIGameSettings_Register(Squirrel &engine)
{
	DefSQClass<ScriptGameSettings, ScriptType::AI> SQAIGameSettings("AIGameSettings");
	SQAIGameSettings.PreRegister(engine, "AIObject");

	SQAIGameSettings.DefSQStaticMethod(engine, &ScriptGameSettings::IsValid,               "IsValid",               "..");
	SQAIGameSettings.DefSQStaticMethod(engine, &ScriptGameSettings::GetValue,              "GetValue",              "..");
	SQAIGameSettings.DefSQStaticMethod(engine, &ScriptGameSettings::IsDisabledVehicleType, "IsDisabledVehicleType", ".i");

	SQAIGameSettings.PostRegister(engine);
}
