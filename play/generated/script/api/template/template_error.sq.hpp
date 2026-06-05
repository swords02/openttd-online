/*
 * This file is part of OpenTTD.
 * OpenTTD is free software; you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, version 2.
 * OpenTTD is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 * See the GNU General Public License for more details. You should have received a copy of the GNU General Public License along with OpenTTD. If not, see <https://www.gnu.org/licenses/old-licenses/gpl-2.0>.
 */

/* THIS FILE IS AUTO-GENERATED; PLEASE DO NOT ALTER MANUALLY */

#include "../script_error.hpp"

namespace SQConvert {
	/* Allow ScriptError to be used as Squirrel parameter */
	template <> struct Param<ScriptError *> { static inline ScriptError *Get(HSQUIRRELVM vm, int index) { return  static_cast<ScriptError *>(Squirrel::GetRealInstance(vm, index, "Error")); } };
	template <> struct Param<ScriptError &> { static inline ScriptError &Get(HSQUIRRELVM vm, int index) { return *static_cast<ScriptError *>(Squirrel::GetRealInstance(vm, index, "Error")); } };
	template <> struct Param<const ScriptError *> { static inline const ScriptError *Get(HSQUIRRELVM vm, int index) { return  static_cast<ScriptError *>(Squirrel::GetRealInstance(vm, index, "Error")); } };
	template <> struct Param<const ScriptError &> { static inline const ScriptError &Get(HSQUIRRELVM vm, int index) { return *static_cast<ScriptError *>(Squirrel::GetRealInstance(vm, index, "Error")); } };
	template <> struct Return<ScriptError *> { static inline int Set(HSQUIRRELVM vm, ScriptError *res) { if (res == nullptr) { sq_pushnull(vm); return 1; } res->AddRef(); Squirrel::CreateClassInstanceVM(vm, "Error", res, nullptr, DefSQDestructorCallback<ScriptError>, true); return 1; } };
} // namespace SQConvert
