/*
 * This file is part of OpenTTD.
 * OpenTTD is free software; you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, version 2.
 * OpenTTD is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 * See the GNU General Public License for more details. You should have received a copy of the GNU General Public License along with OpenTTD. If not, see <https://www.gnu.org/licenses/old-licenses/gpl-2.0>.
 */

/* THIS FILE IS AUTO-GENERATED; PLEASE DO NOT ALTER MANUALLY */

#include "../script_game.hpp"

namespace SQConvert {
	/* Allow ScriptGame to be used as Squirrel parameter */
	template <> struct Param<ScriptGame *> { static inline ScriptGame *Get(HSQUIRRELVM vm, int index) { return  static_cast<ScriptGame *>(Squirrel::GetRealInstance(vm, index, "Game")); } };
	template <> struct Param<ScriptGame &> { static inline ScriptGame &Get(HSQUIRRELVM vm, int index) { return *static_cast<ScriptGame *>(Squirrel::GetRealInstance(vm, index, "Game")); } };
	template <> struct Param<const ScriptGame *> { static inline const ScriptGame *Get(HSQUIRRELVM vm, int index) { return  static_cast<ScriptGame *>(Squirrel::GetRealInstance(vm, index, "Game")); } };
	template <> struct Param<const ScriptGame &> { static inline const ScriptGame &Get(HSQUIRRELVM vm, int index) { return *static_cast<ScriptGame *>(Squirrel::GetRealInstance(vm, index, "Game")); } };
	template <> struct Return<ScriptGame *> { static inline int Set(HSQUIRRELVM vm, ScriptGame *res) { if (res == nullptr) { sq_pushnull(vm); return 1; } res->AddRef(); Squirrel::CreateClassInstanceVM(vm, "Game", res, nullptr, DefSQDestructorCallback<ScriptGame>, true); return 1; } };
} // namespace SQConvert
