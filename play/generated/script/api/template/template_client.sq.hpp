/*
 * This file is part of OpenTTD.
 * OpenTTD is free software; you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, version 2.
 * OpenTTD is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 * See the GNU General Public License for more details. You should have received a copy of the GNU General Public License along with OpenTTD. If not, see <https://www.gnu.org/licenses/old-licenses/gpl-2.0>.
 */

/* THIS FILE IS AUTO-GENERATED; PLEASE DO NOT ALTER MANUALLY */

#include "../script_client.hpp"

namespace SQConvert {
	/* Allow ScriptClient to be used as Squirrel parameter */
	template <> struct Param<ScriptClient *> { static inline ScriptClient *Get(HSQUIRRELVM vm, int index) { return  static_cast<ScriptClient *>(Squirrel::GetRealInstance(vm, index, "Client")); } };
	template <> struct Param<ScriptClient &> { static inline ScriptClient &Get(HSQUIRRELVM vm, int index) { return *static_cast<ScriptClient *>(Squirrel::GetRealInstance(vm, index, "Client")); } };
	template <> struct Param<const ScriptClient *> { static inline const ScriptClient *Get(HSQUIRRELVM vm, int index) { return  static_cast<ScriptClient *>(Squirrel::GetRealInstance(vm, index, "Client")); } };
	template <> struct Param<const ScriptClient &> { static inline const ScriptClient &Get(HSQUIRRELVM vm, int index) { return *static_cast<ScriptClient *>(Squirrel::GetRealInstance(vm, index, "Client")); } };
	template <> struct Return<ScriptClient *> { static inline int Set(HSQUIRRELVM vm, ScriptClient *res) { if (res == nullptr) { sq_pushnull(vm); return 1; } res->AddRef(); Squirrel::CreateClassInstanceVM(vm, "Client", res, nullptr, DefSQDestructorCallback<ScriptClient>, true); return 1; } };
} // namespace SQConvert
