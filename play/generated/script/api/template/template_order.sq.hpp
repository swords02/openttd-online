/*
 * This file is part of OpenTTD.
 * OpenTTD is free software; you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, version 2.
 * OpenTTD is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 * See the GNU General Public License for more details. You should have received a copy of the GNU General Public License along with OpenTTD. If not, see <https://www.gnu.org/licenses/old-licenses/gpl-2.0>.
 */

/* THIS FILE IS AUTO-GENERATED; PLEASE DO NOT ALTER MANUALLY */

#include "../script_order.hpp"

namespace SQConvert {
	/* Allow ScriptOrder to be used as Squirrel parameter */
	template <> struct Param<ScriptOrder *> { static inline ScriptOrder *Get(HSQUIRRELVM vm, int index) { return  static_cast<ScriptOrder *>(Squirrel::GetRealInstance(vm, index, "Order")); } };
	template <> struct Param<ScriptOrder &> { static inline ScriptOrder &Get(HSQUIRRELVM vm, int index) { return *static_cast<ScriptOrder *>(Squirrel::GetRealInstance(vm, index, "Order")); } };
	template <> struct Param<const ScriptOrder *> { static inline const ScriptOrder *Get(HSQUIRRELVM vm, int index) { return  static_cast<ScriptOrder *>(Squirrel::GetRealInstance(vm, index, "Order")); } };
	template <> struct Param<const ScriptOrder &> { static inline const ScriptOrder &Get(HSQUIRRELVM vm, int index) { return *static_cast<ScriptOrder *>(Squirrel::GetRealInstance(vm, index, "Order")); } };
	template <> struct Return<ScriptOrder *> { static inline int Set(HSQUIRRELVM vm, ScriptOrder *res) { if (res == nullptr) { sq_pushnull(vm); return 1; } res->AddRef(); Squirrel::CreateClassInstanceVM(vm, "Order", res, nullptr, DefSQDestructorCallback<ScriptOrder>, true); return 1; } };
} // namespace SQConvert
