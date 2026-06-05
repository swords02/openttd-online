/*
 * This file is part of OpenTTD.
 * OpenTTD is free software; you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, version 2.
 * OpenTTD is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 * See the GNU General Public License for more details. You should have received a copy of the GNU General Public License along with OpenTTD. If not, see <https://www.gnu.org/licenses/old-licenses/gpl-2.0>.
 */

/* THIS FILE IS AUTO-GENERATED; PLEASE DO NOT ALTER MANUALLY */

#include "../script_storypageelementlist.hpp"

namespace SQConvert {
	/* Allow ScriptStoryPageElementList to be used as Squirrel parameter */
	template <> struct Param<ScriptStoryPageElementList *> { static inline ScriptStoryPageElementList *Get(HSQUIRRELVM vm, int index) { return  static_cast<ScriptStoryPageElementList *>(Squirrel::GetRealInstance(vm, index, "StoryPageElementList")); } };
	template <> struct Param<ScriptStoryPageElementList &> { static inline ScriptStoryPageElementList &Get(HSQUIRRELVM vm, int index) { return *static_cast<ScriptStoryPageElementList *>(Squirrel::GetRealInstance(vm, index, "StoryPageElementList")); } };
	template <> struct Param<const ScriptStoryPageElementList *> { static inline const ScriptStoryPageElementList *Get(HSQUIRRELVM vm, int index) { return  static_cast<ScriptStoryPageElementList *>(Squirrel::GetRealInstance(vm, index, "StoryPageElementList")); } };
	template <> struct Param<const ScriptStoryPageElementList &> { static inline const ScriptStoryPageElementList &Get(HSQUIRRELVM vm, int index) { return *static_cast<ScriptStoryPageElementList *>(Squirrel::GetRealInstance(vm, index, "StoryPageElementList")); } };
	template <> struct Return<ScriptStoryPageElementList *> { static inline int Set(HSQUIRRELVM vm, ScriptStoryPageElementList *res) { if (res == nullptr) { sq_pushnull(vm); return 1; } res->AddRef(); Squirrel::CreateClassInstanceVM(vm, "StoryPageElementList", res, nullptr, DefSQDestructorCallback<ScriptStoryPageElementList>, true); return 1; } };
} // namespace SQConvert
