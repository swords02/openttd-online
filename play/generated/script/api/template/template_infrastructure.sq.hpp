/*
 * This file is part of OpenTTD.
 * OpenTTD is free software; you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, version 2.
 * OpenTTD is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 * See the GNU General Public License for more details. You should have received a copy of the GNU General Public License along with OpenTTD. If not, see <https://www.gnu.org/licenses/old-licenses/gpl-2.0>.
 */

/* THIS FILE IS AUTO-GENERATED; PLEASE DO NOT ALTER MANUALLY */

#include "../script_infrastructure.hpp"

namespace SQConvert {
	/* Allow ScriptInfrastructure to be used as Squirrel parameter */
	template <> struct Param<ScriptInfrastructure *> { static inline ScriptInfrastructure *Get(HSQUIRRELVM vm, int index) { return  static_cast<ScriptInfrastructure *>(Squirrel::GetRealInstance(vm, index, "Infrastructure")); } };
	template <> struct Param<ScriptInfrastructure &> { static inline ScriptInfrastructure &Get(HSQUIRRELVM vm, int index) { return *static_cast<ScriptInfrastructure *>(Squirrel::GetRealInstance(vm, index, "Infrastructure")); } };
	template <> struct Param<const ScriptInfrastructure *> { static inline const ScriptInfrastructure *Get(HSQUIRRELVM vm, int index) { return  static_cast<ScriptInfrastructure *>(Squirrel::GetRealInstance(vm, index, "Infrastructure")); } };
	template <> struct Param<const ScriptInfrastructure &> { static inline const ScriptInfrastructure &Get(HSQUIRRELVM vm, int index) { return *static_cast<ScriptInfrastructure *>(Squirrel::GetRealInstance(vm, index, "Infrastructure")); } };
	template <> struct Return<ScriptInfrastructure *> { static inline int Set(HSQUIRRELVM vm, ScriptInfrastructure *res) { if (res == nullptr) { sq_pushnull(vm); return 1; } res->AddRef(); Squirrel::CreateClassInstanceVM(vm, "Infrastructure", res, nullptr, DefSQDestructorCallback<ScriptInfrastructure>, true); return 1; } };
} // namespace SQConvert
