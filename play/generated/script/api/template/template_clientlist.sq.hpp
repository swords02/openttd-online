/*
 * This file is part of OpenTTD.
 * OpenTTD is free software; you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, version 2.
 * OpenTTD is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 * See the GNU General Public License for more details. You should have received a copy of the GNU General Public License along with OpenTTD. If not, see <https://www.gnu.org/licenses/old-licenses/gpl-2.0>.
 */

/* THIS FILE IS AUTO-GENERATED; PLEASE DO NOT ALTER MANUALLY */

#include "../script_clientlist.hpp"

namespace SQConvert {
	/* Allow ScriptClientList to be used as Squirrel parameter */
	template <> struct Param<ScriptClientList *> { static inline ScriptClientList *Get(HSQUIRRELVM vm, int index) { return  static_cast<ScriptClientList *>(Squirrel::GetRealInstance(vm, index, "ClientList")); } };
	template <> struct Param<ScriptClientList &> { static inline ScriptClientList &Get(HSQUIRRELVM vm, int index) { return *static_cast<ScriptClientList *>(Squirrel::GetRealInstance(vm, index, "ClientList")); } };
	template <> struct Param<const ScriptClientList *> { static inline const ScriptClientList *Get(HSQUIRRELVM vm, int index) { return  static_cast<ScriptClientList *>(Squirrel::GetRealInstance(vm, index, "ClientList")); } };
	template <> struct Param<const ScriptClientList &> { static inline const ScriptClientList &Get(HSQUIRRELVM vm, int index) { return *static_cast<ScriptClientList *>(Squirrel::GetRealInstance(vm, index, "ClientList")); } };
	template <> struct Return<ScriptClientList *> { static inline int Set(HSQUIRRELVM vm, ScriptClientList *res) { if (res == nullptr) { sq_pushnull(vm); return 1; } res->AddRef(); Squirrel::CreateClassInstanceVM(vm, "ClientList", res, nullptr, DefSQDestructorCallback<ScriptClientList>, true); return 1; } };
} // namespace SQConvert

namespace SQConvert {
	/* Allow ScriptClientList_Company to be used as Squirrel parameter */
	template <> struct Param<ScriptClientList_Company *> { static inline ScriptClientList_Company *Get(HSQUIRRELVM vm, int index) { return  static_cast<ScriptClientList_Company *>(Squirrel::GetRealInstance(vm, index, "ClientList_Company")); } };
	template <> struct Param<ScriptClientList_Company &> { static inline ScriptClientList_Company &Get(HSQUIRRELVM vm, int index) { return *static_cast<ScriptClientList_Company *>(Squirrel::GetRealInstance(vm, index, "ClientList_Company")); } };
	template <> struct Param<const ScriptClientList_Company *> { static inline const ScriptClientList_Company *Get(HSQUIRRELVM vm, int index) { return  static_cast<ScriptClientList_Company *>(Squirrel::GetRealInstance(vm, index, "ClientList_Company")); } };
	template <> struct Param<const ScriptClientList_Company &> { static inline const ScriptClientList_Company &Get(HSQUIRRELVM vm, int index) { return *static_cast<ScriptClientList_Company *>(Squirrel::GetRealInstance(vm, index, "ClientList_Company")); } };
	template <> struct Return<ScriptClientList_Company *> { static inline int Set(HSQUIRRELVM vm, ScriptClientList_Company *res) { if (res == nullptr) { sq_pushnull(vm); return 1; } res->AddRef(); Squirrel::CreateClassInstanceVM(vm, "ClientList_Company", res, nullptr, DefSQDestructorCallback<ScriptClientList_Company>, true); return 1; } };
} // namespace SQConvert
