/*
 * This file is part of OpenTTD.
 * OpenTTD is free software; you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, version 2.
 * OpenTTD is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 * See the GNU General Public License for more details. You should have received a copy of the GNU General Public License along with OpenTTD. If not, see <https://www.gnu.org/licenses/old-licenses/gpl-2.0>.
 */

/* THIS FILE IS AUTO-GENERATED; PLEASE DO NOT ALTER MANUALLY */

#include "../script_league.hpp"

namespace SQConvert {
	/* Allow ScriptLeagueTable to be used as Squirrel parameter */
	template <> struct Param<ScriptLeagueTable *> { static inline ScriptLeagueTable *Get(HSQUIRRELVM vm, int index) { return  static_cast<ScriptLeagueTable *>(Squirrel::GetRealInstance(vm, index, "LeagueTable")); } };
	template <> struct Param<ScriptLeagueTable &> { static inline ScriptLeagueTable &Get(HSQUIRRELVM vm, int index) { return *static_cast<ScriptLeagueTable *>(Squirrel::GetRealInstance(vm, index, "LeagueTable")); } };
	template <> struct Param<const ScriptLeagueTable *> { static inline const ScriptLeagueTable *Get(HSQUIRRELVM vm, int index) { return  static_cast<ScriptLeagueTable *>(Squirrel::GetRealInstance(vm, index, "LeagueTable")); } };
	template <> struct Param<const ScriptLeagueTable &> { static inline const ScriptLeagueTable &Get(HSQUIRRELVM vm, int index) { return *static_cast<ScriptLeagueTable *>(Squirrel::GetRealInstance(vm, index, "LeagueTable")); } };
	template <> struct Return<ScriptLeagueTable *> { static inline int Set(HSQUIRRELVM vm, ScriptLeagueTable *res) { if (res == nullptr) { sq_pushnull(vm); return 1; } res->AddRef(); Squirrel::CreateClassInstanceVM(vm, "LeagueTable", res, nullptr, DefSQDestructorCallback<ScriptLeagueTable>, true); return 1; } };
} // namespace SQConvert
