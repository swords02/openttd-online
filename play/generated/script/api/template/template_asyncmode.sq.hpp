/*
 * This file is part of OpenTTD.
 * OpenTTD is free software; you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, version 2.
 * OpenTTD is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 * See the GNU General Public License for more details. You should have received a copy of the GNU General Public License along with OpenTTD. If not, see <https://www.gnu.org/licenses/old-licenses/gpl-2.0>.
 */

/* THIS FILE IS AUTO-GENERATED; PLEASE DO NOT ALTER MANUALLY */

#include "../script_asyncmode.hpp"

namespace SQConvert {
	/* Allow ScriptAsyncMode to be used as Squirrel parameter */
	template <> struct Param<ScriptAsyncMode *> { static inline ScriptAsyncMode *Get(HSQUIRRELVM vm, int index) { return  static_cast<ScriptAsyncMode *>(Squirrel::GetRealInstance(vm, index, "AsyncMode")); } };
	template <> struct Param<ScriptAsyncMode &> { static inline ScriptAsyncMode &Get(HSQUIRRELVM vm, int index) { return *static_cast<ScriptAsyncMode *>(Squirrel::GetRealInstance(vm, index, "AsyncMode")); } };
	template <> struct Param<const ScriptAsyncMode *> { static inline const ScriptAsyncMode *Get(HSQUIRRELVM vm, int index) { return  static_cast<ScriptAsyncMode *>(Squirrel::GetRealInstance(vm, index, "AsyncMode")); } };
	template <> struct Param<const ScriptAsyncMode &> { static inline const ScriptAsyncMode &Get(HSQUIRRELVM vm, int index) { return *static_cast<ScriptAsyncMode *>(Squirrel::GetRealInstance(vm, index, "AsyncMode")); } };
	template <> struct Return<ScriptAsyncMode *> { static inline int Set(HSQUIRRELVM vm, ScriptAsyncMode *res) { if (res == nullptr) { sq_pushnull(vm); return 1; } res->AddRef(); Squirrel::CreateClassInstanceVM(vm, "AsyncMode", res, nullptr, DefSQDestructorCallback<ScriptAsyncMode>, true); return 1; } };
} // namespace SQConvert
