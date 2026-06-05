/*
 * This file is part of OpenTTD.
 * OpenTTD is free software; you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, version 2.
 * OpenTTD is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 * See the GNU General Public License for more details. You should have received a copy of the GNU General Public License along with OpenTTD. If not, see <https://www.gnu.org/licenses/old-licenses/gpl-2.0>.
 */

/* THIS FILE IS AUTO-GENERATED; PLEASE DO NOT ALTER MANUALLY */

#include "../script_storypagelist.hpp"

namespace SQConvert {
	/* Allow ScriptStoryPageList to be used as Squirrel parameter */
	template <> struct Param<ScriptStoryPageList *> { static inline ScriptStoryPageList *Get(HSQUIRRELVM vm, int index) { return  static_cast<ScriptStoryPageList *>(Squirrel::GetRealInstance(vm, index, "StoryPageList")); } };
	template <> struct Param<ScriptStoryPageList &> { static inline ScriptStoryPageList &Get(HSQUIRRELVM vm, int index) { return *static_cast<ScriptStoryPageList *>(Squirrel::GetRealInstance(vm, index, "StoryPageList")); } };
	template <> struct Param<const ScriptStoryPageList *> { static inline const ScriptStoryPageList *Get(HSQUIRRELVM vm, int index) { return  static_cast<ScriptStoryPageList *>(Squirrel::GetRealInstance(vm, index, "StoryPageList")); } };
	template <> struct Param<const ScriptStoryPageList &> { static inline const ScriptStoryPageList &Get(HSQUIRRELVM vm, int index) { return *static_cast<ScriptStoryPageList *>(Squirrel::GetRealInstance(vm, index, "StoryPageList")); } };
	template <> struct Return<ScriptStoryPageList *> { static inline int Set(HSQUIRRELVM vm, ScriptStoryPageList *res) { if (res == nullptr) { sq_pushnull(vm); return 1; } res->AddRef(); Squirrel::CreateClassInstanceVM(vm, "StoryPageList", res, nullptr, DefSQDestructorCallback<ScriptStoryPageList>, true); return 1; } };
} // namespace SQConvert
