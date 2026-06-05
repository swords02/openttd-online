/*
 * This file is part of OpenTTD.
 * OpenTTD is free software; you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, version 2.
 * OpenTTD is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 * See the GNU General Public License for more details. You should have received a copy of the GNU General Public License along with OpenTTD. If not, see <https://www.gnu.org/licenses/old-licenses/gpl-2.0>.
 */

/* THIS FILE IS AUTO-GENERATED; PLEASE DO NOT ALTER MANUALLY */

#include "../script_townlist.hpp"

namespace SQConvert {
	/* Allow ScriptTownList to be used as Squirrel parameter */
	template <> struct Param<ScriptTownList *> { static inline ScriptTownList *Get(HSQUIRRELVM vm, int index) { return  static_cast<ScriptTownList *>(Squirrel::GetRealInstance(vm, index, "TownList")); } };
	template <> struct Param<ScriptTownList &> { static inline ScriptTownList &Get(HSQUIRRELVM vm, int index) { return *static_cast<ScriptTownList *>(Squirrel::GetRealInstance(vm, index, "TownList")); } };
	template <> struct Param<const ScriptTownList *> { static inline const ScriptTownList *Get(HSQUIRRELVM vm, int index) { return  static_cast<ScriptTownList *>(Squirrel::GetRealInstance(vm, index, "TownList")); } };
	template <> struct Param<const ScriptTownList &> { static inline const ScriptTownList &Get(HSQUIRRELVM vm, int index) { return *static_cast<ScriptTownList *>(Squirrel::GetRealInstance(vm, index, "TownList")); } };
	template <> struct Return<ScriptTownList *> { static inline int Set(HSQUIRRELVM vm, ScriptTownList *res) { if (res == nullptr) { sq_pushnull(vm); return 1; } res->AddRef(); Squirrel::CreateClassInstanceVM(vm, "TownList", res, nullptr, DefSQDestructorCallback<ScriptTownList>, true); return 1; } };
} // namespace SQConvert

namespace SQConvert {
	/* Allow ScriptTownEffectList to be used as Squirrel parameter */
	template <> struct Param<ScriptTownEffectList *> { static inline ScriptTownEffectList *Get(HSQUIRRELVM vm, int index) { return  static_cast<ScriptTownEffectList *>(Squirrel::GetRealInstance(vm, index, "TownEffectList")); } };
	template <> struct Param<ScriptTownEffectList &> { static inline ScriptTownEffectList &Get(HSQUIRRELVM vm, int index) { return *static_cast<ScriptTownEffectList *>(Squirrel::GetRealInstance(vm, index, "TownEffectList")); } };
	template <> struct Param<const ScriptTownEffectList *> { static inline const ScriptTownEffectList *Get(HSQUIRRELVM vm, int index) { return  static_cast<ScriptTownEffectList *>(Squirrel::GetRealInstance(vm, index, "TownEffectList")); } };
	template <> struct Param<const ScriptTownEffectList &> { static inline const ScriptTownEffectList &Get(HSQUIRRELVM vm, int index) { return *static_cast<ScriptTownEffectList *>(Squirrel::GetRealInstance(vm, index, "TownEffectList")); } };
	template <> struct Return<ScriptTownEffectList *> { static inline int Set(HSQUIRRELVM vm, ScriptTownEffectList *res) { if (res == nullptr) { sq_pushnull(vm); return 1; } res->AddRef(); Squirrel::CreateClassInstanceVM(vm, "TownEffectList", res, nullptr, DefSQDestructorCallback<ScriptTownEffectList>, true); return 1; } };
} // namespace SQConvert
