/*
 * This file is part of OpenTTD.
 * OpenTTD is free software; you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, version 2.
 * OpenTTD is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 * See the GNU General Public License for more details. You should have received a copy of the GNU General Public License along with OpenTTD. If not, see <https://www.gnu.org/licenses/old-licenses/gpl-2.0>.
 */

/* THIS FILE IS AUTO-GENERATED; PLEASE DO NOT ALTER MANUALLY */

#include "../script_story_page.hpp"

namespace SQConvert {
	/* Allow ScriptStoryPage to be used as Squirrel parameter */
	template <> struct Param<ScriptStoryPage *> { static inline ScriptStoryPage *Get(HSQUIRRELVM vm, int index) { return  static_cast<ScriptStoryPage *>(Squirrel::GetRealInstance(vm, index, "StoryPage")); } };
	template <> struct Param<ScriptStoryPage &> { static inline ScriptStoryPage &Get(HSQUIRRELVM vm, int index) { return *static_cast<ScriptStoryPage *>(Squirrel::GetRealInstance(vm, index, "StoryPage")); } };
	template <> struct Param<const ScriptStoryPage *> { static inline const ScriptStoryPage *Get(HSQUIRRELVM vm, int index) { return  static_cast<ScriptStoryPage *>(Squirrel::GetRealInstance(vm, index, "StoryPage")); } };
	template <> struct Param<const ScriptStoryPage &> { static inline const ScriptStoryPage &Get(HSQUIRRELVM vm, int index) { return *static_cast<ScriptStoryPage *>(Squirrel::GetRealInstance(vm, index, "StoryPage")); } };
	template <> struct Return<ScriptStoryPage *> { static inline int Set(HSQUIRRELVM vm, ScriptStoryPage *res) { if (res == nullptr) { sq_pushnull(vm); return 1; } res->AddRef(); Squirrel::CreateClassInstanceVM(vm, "StoryPage", res, nullptr, DefSQDestructorCallback<ScriptStoryPage>, true); return 1; } };
} // namespace SQConvert
