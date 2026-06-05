/*
 * This file is part of OpenTTD.
 * OpenTTD is free software; you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, version 2.
 * OpenTTD is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 * See the GNU General Public License for more details. You should have received a copy of the GNU General Public License along with OpenTTD. If not, see <https://www.gnu.org/licenses/old-licenses/gpl-2.0>.
 */

/* THIS FILE IS AUTO-GENERATED; PLEASE DO NOT ALTER MANUALLY */

#include "../script_goal.hpp"

namespace SQConvert {
	/* Allow ScriptGoal to be used as Squirrel parameter */
	template <> struct Param<ScriptGoal *> { static inline ScriptGoal *Get(HSQUIRRELVM vm, int index) { return  static_cast<ScriptGoal *>(Squirrel::GetRealInstance(vm, index, "Goal")); } };
	template <> struct Param<ScriptGoal &> { static inline ScriptGoal &Get(HSQUIRRELVM vm, int index) { return *static_cast<ScriptGoal *>(Squirrel::GetRealInstance(vm, index, "Goal")); } };
	template <> struct Param<const ScriptGoal *> { static inline const ScriptGoal *Get(HSQUIRRELVM vm, int index) { return  static_cast<ScriptGoal *>(Squirrel::GetRealInstance(vm, index, "Goal")); } };
	template <> struct Param<const ScriptGoal &> { static inline const ScriptGoal &Get(HSQUIRRELVM vm, int index) { return *static_cast<ScriptGoal *>(Squirrel::GetRealInstance(vm, index, "Goal")); } };
	template <> struct Return<ScriptGoal *> { static inline int Set(HSQUIRRELVM vm, ScriptGoal *res) { if (res == nullptr) { sq_pushnull(vm); return 1; } res->AddRef(); Squirrel::CreateClassInstanceVM(vm, "Goal", res, nullptr, DefSQDestructorCallback<ScriptGoal>, true); return 1; } };
} // namespace SQConvert
