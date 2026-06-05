/*
 * This file is part of OpenTTD.
 * OpenTTD is free software; you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, version 2.
 * OpenTTD is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 * See the GNU General Public License for more details. You should have received a copy of the GNU General Public License along with OpenTTD. If not, see <https://www.gnu.org/licenses/old-licenses/gpl-2.0>.
 */

/* THIS FILE IS AUTO-GENERATED; PLEASE DO NOT ALTER MANUALLY */

#include "../script_cargo.hpp"

namespace SQConvert {
	/* Allow ScriptCargo to be used as Squirrel parameter */
	template <> struct Param<ScriptCargo *> { static inline ScriptCargo *Get(HSQUIRRELVM vm, int index) { return  static_cast<ScriptCargo *>(Squirrel::GetRealInstance(vm, index, "Cargo")); } };
	template <> struct Param<ScriptCargo &> { static inline ScriptCargo &Get(HSQUIRRELVM vm, int index) { return *static_cast<ScriptCargo *>(Squirrel::GetRealInstance(vm, index, "Cargo")); } };
	template <> struct Param<const ScriptCargo *> { static inline const ScriptCargo *Get(HSQUIRRELVM vm, int index) { return  static_cast<ScriptCargo *>(Squirrel::GetRealInstance(vm, index, "Cargo")); } };
	template <> struct Param<const ScriptCargo &> { static inline const ScriptCargo &Get(HSQUIRRELVM vm, int index) { return *static_cast<ScriptCargo *>(Squirrel::GetRealInstance(vm, index, "Cargo")); } };
	template <> struct Return<ScriptCargo *> { static inline int Set(HSQUIRRELVM vm, ScriptCargo *res) { if (res == nullptr) { sq_pushnull(vm); return 1; } res->AddRef(); Squirrel::CreateClassInstanceVM(vm, "Cargo", res, nullptr, DefSQDestructorCallback<ScriptCargo>, true); return 1; } };
} // namespace SQConvert
