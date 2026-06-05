/*
 * This file is part of OpenTTD.
 * OpenTTD is free software; you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, version 2.
 * OpenTTD is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 * See the GNU General Public License for more details. You should have received a copy of the GNU General Public License along with OpenTTD. If not, see <https://www.gnu.org/licenses/old-licenses/gpl-2.0>.
 */

/* THIS FILE IS AUTO-GENERATED; PLEASE DO NOT ALTER MANUALLY */

#include "../script_industrylist.hpp"

namespace SQConvert {
	/* Allow ScriptIndustryList to be used as Squirrel parameter */
	template <> struct Param<ScriptIndustryList *> { static inline ScriptIndustryList *Get(HSQUIRRELVM vm, int index) { return  static_cast<ScriptIndustryList *>(Squirrel::GetRealInstance(vm, index, "IndustryList")); } };
	template <> struct Param<ScriptIndustryList &> { static inline ScriptIndustryList &Get(HSQUIRRELVM vm, int index) { return *static_cast<ScriptIndustryList *>(Squirrel::GetRealInstance(vm, index, "IndustryList")); } };
	template <> struct Param<const ScriptIndustryList *> { static inline const ScriptIndustryList *Get(HSQUIRRELVM vm, int index) { return  static_cast<ScriptIndustryList *>(Squirrel::GetRealInstance(vm, index, "IndustryList")); } };
	template <> struct Param<const ScriptIndustryList &> { static inline const ScriptIndustryList &Get(HSQUIRRELVM vm, int index) { return *static_cast<ScriptIndustryList *>(Squirrel::GetRealInstance(vm, index, "IndustryList")); } };
	template <> struct Return<ScriptIndustryList *> { static inline int Set(HSQUIRRELVM vm, ScriptIndustryList *res) { if (res == nullptr) { sq_pushnull(vm); return 1; } res->AddRef(); Squirrel::CreateClassInstanceVM(vm, "IndustryList", res, nullptr, DefSQDestructorCallback<ScriptIndustryList>, true); return 1; } };
} // namespace SQConvert

namespace SQConvert {
	/* Allow ScriptIndustryList_CargoAccepting to be used as Squirrel parameter */
	template <> struct Param<ScriptIndustryList_CargoAccepting *> { static inline ScriptIndustryList_CargoAccepting *Get(HSQUIRRELVM vm, int index) { return  static_cast<ScriptIndustryList_CargoAccepting *>(Squirrel::GetRealInstance(vm, index, "IndustryList_CargoAccepting")); } };
	template <> struct Param<ScriptIndustryList_CargoAccepting &> { static inline ScriptIndustryList_CargoAccepting &Get(HSQUIRRELVM vm, int index) { return *static_cast<ScriptIndustryList_CargoAccepting *>(Squirrel::GetRealInstance(vm, index, "IndustryList_CargoAccepting")); } };
	template <> struct Param<const ScriptIndustryList_CargoAccepting *> { static inline const ScriptIndustryList_CargoAccepting *Get(HSQUIRRELVM vm, int index) { return  static_cast<ScriptIndustryList_CargoAccepting *>(Squirrel::GetRealInstance(vm, index, "IndustryList_CargoAccepting")); } };
	template <> struct Param<const ScriptIndustryList_CargoAccepting &> { static inline const ScriptIndustryList_CargoAccepting &Get(HSQUIRRELVM vm, int index) { return *static_cast<ScriptIndustryList_CargoAccepting *>(Squirrel::GetRealInstance(vm, index, "IndustryList_CargoAccepting")); } };
	template <> struct Return<ScriptIndustryList_CargoAccepting *> { static inline int Set(HSQUIRRELVM vm, ScriptIndustryList_CargoAccepting *res) { if (res == nullptr) { sq_pushnull(vm); return 1; } res->AddRef(); Squirrel::CreateClassInstanceVM(vm, "IndustryList_CargoAccepting", res, nullptr, DefSQDestructorCallback<ScriptIndustryList_CargoAccepting>, true); return 1; } };
} // namespace SQConvert

namespace SQConvert {
	/* Allow ScriptIndustryList_CargoProducing to be used as Squirrel parameter */
	template <> struct Param<ScriptIndustryList_CargoProducing *> { static inline ScriptIndustryList_CargoProducing *Get(HSQUIRRELVM vm, int index) { return  static_cast<ScriptIndustryList_CargoProducing *>(Squirrel::GetRealInstance(vm, index, "IndustryList_CargoProducing")); } };
	template <> struct Param<ScriptIndustryList_CargoProducing &> { static inline ScriptIndustryList_CargoProducing &Get(HSQUIRRELVM vm, int index) { return *static_cast<ScriptIndustryList_CargoProducing *>(Squirrel::GetRealInstance(vm, index, "IndustryList_CargoProducing")); } };
	template <> struct Param<const ScriptIndustryList_CargoProducing *> { static inline const ScriptIndustryList_CargoProducing *Get(HSQUIRRELVM vm, int index) { return  static_cast<ScriptIndustryList_CargoProducing *>(Squirrel::GetRealInstance(vm, index, "IndustryList_CargoProducing")); } };
	template <> struct Param<const ScriptIndustryList_CargoProducing &> { static inline const ScriptIndustryList_CargoProducing &Get(HSQUIRRELVM vm, int index) { return *static_cast<ScriptIndustryList_CargoProducing *>(Squirrel::GetRealInstance(vm, index, "IndustryList_CargoProducing")); } };
	template <> struct Return<ScriptIndustryList_CargoProducing *> { static inline int Set(HSQUIRRELVM vm, ScriptIndustryList_CargoProducing *res) { if (res == nullptr) { sq_pushnull(vm); return 1; } res->AddRef(); Squirrel::CreateClassInstanceVM(vm, "IndustryList_CargoProducing", res, nullptr, DefSQDestructorCallback<ScriptIndustryList_CargoProducing>, true); return 1; } };
} // namespace SQConvert
