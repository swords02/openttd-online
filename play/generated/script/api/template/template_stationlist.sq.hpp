/*
 * This file is part of OpenTTD.
 * OpenTTD is free software; you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, version 2.
 * OpenTTD is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 * See the GNU General Public License for more details. You should have received a copy of the GNU General Public License along with OpenTTD. If not, see <https://www.gnu.org/licenses/old-licenses/gpl-2.0>.
 */

/* THIS FILE IS AUTO-GENERATED; PLEASE DO NOT ALTER MANUALLY */

#include "../script_stationlist.hpp"

namespace SQConvert {
	/* Allow ScriptStationList to be used as Squirrel parameter */
	template <> struct Param<ScriptStationList *> { static inline ScriptStationList *Get(HSQUIRRELVM vm, int index) { return  static_cast<ScriptStationList *>(Squirrel::GetRealInstance(vm, index, "StationList")); } };
	template <> struct Param<ScriptStationList &> { static inline ScriptStationList &Get(HSQUIRRELVM vm, int index) { return *static_cast<ScriptStationList *>(Squirrel::GetRealInstance(vm, index, "StationList")); } };
	template <> struct Param<const ScriptStationList *> { static inline const ScriptStationList *Get(HSQUIRRELVM vm, int index) { return  static_cast<ScriptStationList *>(Squirrel::GetRealInstance(vm, index, "StationList")); } };
	template <> struct Param<const ScriptStationList &> { static inline const ScriptStationList &Get(HSQUIRRELVM vm, int index) { return *static_cast<ScriptStationList *>(Squirrel::GetRealInstance(vm, index, "StationList")); } };
	template <> struct Return<ScriptStationList *> { static inline int Set(HSQUIRRELVM vm, ScriptStationList *res) { if (res == nullptr) { sq_pushnull(vm); return 1; } res->AddRef(); Squirrel::CreateClassInstanceVM(vm, "StationList", res, nullptr, DefSQDestructorCallback<ScriptStationList>, true); return 1; } };
} // namespace SQConvert

namespace SQConvert {
	/* Allow ScriptStationList_Cargo to be used as Squirrel parameter */
	template <> struct Param<ScriptStationList_Cargo *> { static inline ScriptStationList_Cargo *Get(HSQUIRRELVM vm, int index) { return  static_cast<ScriptStationList_Cargo *>(Squirrel::GetRealInstance(vm, index, "StationList_Cargo")); } };
	template <> struct Param<ScriptStationList_Cargo &> { static inline ScriptStationList_Cargo &Get(HSQUIRRELVM vm, int index) { return *static_cast<ScriptStationList_Cargo *>(Squirrel::GetRealInstance(vm, index, "StationList_Cargo")); } };
	template <> struct Param<const ScriptStationList_Cargo *> { static inline const ScriptStationList_Cargo *Get(HSQUIRRELVM vm, int index) { return  static_cast<ScriptStationList_Cargo *>(Squirrel::GetRealInstance(vm, index, "StationList_Cargo")); } };
	template <> struct Param<const ScriptStationList_Cargo &> { static inline const ScriptStationList_Cargo &Get(HSQUIRRELVM vm, int index) { return *static_cast<ScriptStationList_Cargo *>(Squirrel::GetRealInstance(vm, index, "StationList_Cargo")); } };
	template <> struct Return<ScriptStationList_Cargo *> { static inline int Set(HSQUIRRELVM vm, ScriptStationList_Cargo *res) { if (res == nullptr) { sq_pushnull(vm); return 1; } res->AddRef(); Squirrel::CreateClassInstanceVM(vm, "StationList_Cargo", res, nullptr, DefSQDestructorCallback<ScriptStationList_Cargo>, true); return 1; } };
} // namespace SQConvert

namespace SQConvert {
	/* Allow ScriptStationList_CargoWaiting to be used as Squirrel parameter */
	template <> struct Param<ScriptStationList_CargoWaiting *> { static inline ScriptStationList_CargoWaiting *Get(HSQUIRRELVM vm, int index) { return  static_cast<ScriptStationList_CargoWaiting *>(Squirrel::GetRealInstance(vm, index, "StationList_CargoWaiting")); } };
	template <> struct Param<ScriptStationList_CargoWaiting &> { static inline ScriptStationList_CargoWaiting &Get(HSQUIRRELVM vm, int index) { return *static_cast<ScriptStationList_CargoWaiting *>(Squirrel::GetRealInstance(vm, index, "StationList_CargoWaiting")); } };
	template <> struct Param<const ScriptStationList_CargoWaiting *> { static inline const ScriptStationList_CargoWaiting *Get(HSQUIRRELVM vm, int index) { return  static_cast<ScriptStationList_CargoWaiting *>(Squirrel::GetRealInstance(vm, index, "StationList_CargoWaiting")); } };
	template <> struct Param<const ScriptStationList_CargoWaiting &> { static inline const ScriptStationList_CargoWaiting &Get(HSQUIRRELVM vm, int index) { return *static_cast<ScriptStationList_CargoWaiting *>(Squirrel::GetRealInstance(vm, index, "StationList_CargoWaiting")); } };
	template <> struct Return<ScriptStationList_CargoWaiting *> { static inline int Set(HSQUIRRELVM vm, ScriptStationList_CargoWaiting *res) { if (res == nullptr) { sq_pushnull(vm); return 1; } res->AddRef(); Squirrel::CreateClassInstanceVM(vm, "StationList_CargoWaiting", res, nullptr, DefSQDestructorCallback<ScriptStationList_CargoWaiting>, true); return 1; } };
} // namespace SQConvert

namespace SQConvert {
	/* Allow ScriptStationList_CargoPlanned to be used as Squirrel parameter */
	template <> struct Param<ScriptStationList_CargoPlanned *> { static inline ScriptStationList_CargoPlanned *Get(HSQUIRRELVM vm, int index) { return  static_cast<ScriptStationList_CargoPlanned *>(Squirrel::GetRealInstance(vm, index, "StationList_CargoPlanned")); } };
	template <> struct Param<ScriptStationList_CargoPlanned &> { static inline ScriptStationList_CargoPlanned &Get(HSQUIRRELVM vm, int index) { return *static_cast<ScriptStationList_CargoPlanned *>(Squirrel::GetRealInstance(vm, index, "StationList_CargoPlanned")); } };
	template <> struct Param<const ScriptStationList_CargoPlanned *> { static inline const ScriptStationList_CargoPlanned *Get(HSQUIRRELVM vm, int index) { return  static_cast<ScriptStationList_CargoPlanned *>(Squirrel::GetRealInstance(vm, index, "StationList_CargoPlanned")); } };
	template <> struct Param<const ScriptStationList_CargoPlanned &> { static inline const ScriptStationList_CargoPlanned &Get(HSQUIRRELVM vm, int index) { return *static_cast<ScriptStationList_CargoPlanned *>(Squirrel::GetRealInstance(vm, index, "StationList_CargoPlanned")); } };
	template <> struct Return<ScriptStationList_CargoPlanned *> { static inline int Set(HSQUIRRELVM vm, ScriptStationList_CargoPlanned *res) { if (res == nullptr) { sq_pushnull(vm); return 1; } res->AddRef(); Squirrel::CreateClassInstanceVM(vm, "StationList_CargoPlanned", res, nullptr, DefSQDestructorCallback<ScriptStationList_CargoPlanned>, true); return 1; } };
} // namespace SQConvert

namespace SQConvert {
	/* Allow ScriptStationList_CargoWaitingByFrom to be used as Squirrel parameter */
	template <> struct Param<ScriptStationList_CargoWaitingByFrom *> { static inline ScriptStationList_CargoWaitingByFrom *Get(HSQUIRRELVM vm, int index) { return  static_cast<ScriptStationList_CargoWaitingByFrom *>(Squirrel::GetRealInstance(vm, index, "StationList_CargoWaitingByFrom")); } };
	template <> struct Param<ScriptStationList_CargoWaitingByFrom &> { static inline ScriptStationList_CargoWaitingByFrom &Get(HSQUIRRELVM vm, int index) { return *static_cast<ScriptStationList_CargoWaitingByFrom *>(Squirrel::GetRealInstance(vm, index, "StationList_CargoWaitingByFrom")); } };
	template <> struct Param<const ScriptStationList_CargoWaitingByFrom *> { static inline const ScriptStationList_CargoWaitingByFrom *Get(HSQUIRRELVM vm, int index) { return  static_cast<ScriptStationList_CargoWaitingByFrom *>(Squirrel::GetRealInstance(vm, index, "StationList_CargoWaitingByFrom")); } };
	template <> struct Param<const ScriptStationList_CargoWaitingByFrom &> { static inline const ScriptStationList_CargoWaitingByFrom &Get(HSQUIRRELVM vm, int index) { return *static_cast<ScriptStationList_CargoWaitingByFrom *>(Squirrel::GetRealInstance(vm, index, "StationList_CargoWaitingByFrom")); } };
	template <> struct Return<ScriptStationList_CargoWaitingByFrom *> { static inline int Set(HSQUIRRELVM vm, ScriptStationList_CargoWaitingByFrom *res) { if (res == nullptr) { sq_pushnull(vm); return 1; } res->AddRef(); Squirrel::CreateClassInstanceVM(vm, "StationList_CargoWaitingByFrom", res, nullptr, DefSQDestructorCallback<ScriptStationList_CargoWaitingByFrom>, true); return 1; } };
} // namespace SQConvert

namespace SQConvert {
	/* Allow ScriptStationList_CargoWaitingViaByFrom to be used as Squirrel parameter */
	template <> struct Param<ScriptStationList_CargoWaitingViaByFrom *> { static inline ScriptStationList_CargoWaitingViaByFrom *Get(HSQUIRRELVM vm, int index) { return  static_cast<ScriptStationList_CargoWaitingViaByFrom *>(Squirrel::GetRealInstance(vm, index, "StationList_CargoWaitingViaByFrom")); } };
	template <> struct Param<ScriptStationList_CargoWaitingViaByFrom &> { static inline ScriptStationList_CargoWaitingViaByFrom &Get(HSQUIRRELVM vm, int index) { return *static_cast<ScriptStationList_CargoWaitingViaByFrom *>(Squirrel::GetRealInstance(vm, index, "StationList_CargoWaitingViaByFrom")); } };
	template <> struct Param<const ScriptStationList_CargoWaitingViaByFrom *> { static inline const ScriptStationList_CargoWaitingViaByFrom *Get(HSQUIRRELVM vm, int index) { return  static_cast<ScriptStationList_CargoWaitingViaByFrom *>(Squirrel::GetRealInstance(vm, index, "StationList_CargoWaitingViaByFrom")); } };
	template <> struct Param<const ScriptStationList_CargoWaitingViaByFrom &> { static inline const ScriptStationList_CargoWaitingViaByFrom &Get(HSQUIRRELVM vm, int index) { return *static_cast<ScriptStationList_CargoWaitingViaByFrom *>(Squirrel::GetRealInstance(vm, index, "StationList_CargoWaitingViaByFrom")); } };
	template <> struct Return<ScriptStationList_CargoWaitingViaByFrom *> { static inline int Set(HSQUIRRELVM vm, ScriptStationList_CargoWaitingViaByFrom *res) { if (res == nullptr) { sq_pushnull(vm); return 1; } res->AddRef(); Squirrel::CreateClassInstanceVM(vm, "StationList_CargoWaitingViaByFrom", res, nullptr, DefSQDestructorCallback<ScriptStationList_CargoWaitingViaByFrom>, true); return 1; } };
} // namespace SQConvert

namespace SQConvert {
	/* Allow ScriptStationList_CargoWaitingByVia to be used as Squirrel parameter */
	template <> struct Param<ScriptStationList_CargoWaitingByVia *> { static inline ScriptStationList_CargoWaitingByVia *Get(HSQUIRRELVM vm, int index) { return  static_cast<ScriptStationList_CargoWaitingByVia *>(Squirrel::GetRealInstance(vm, index, "StationList_CargoWaitingByVia")); } };
	template <> struct Param<ScriptStationList_CargoWaitingByVia &> { static inline ScriptStationList_CargoWaitingByVia &Get(HSQUIRRELVM vm, int index) { return *static_cast<ScriptStationList_CargoWaitingByVia *>(Squirrel::GetRealInstance(vm, index, "StationList_CargoWaitingByVia")); } };
	template <> struct Param<const ScriptStationList_CargoWaitingByVia *> { static inline const ScriptStationList_CargoWaitingByVia *Get(HSQUIRRELVM vm, int index) { return  static_cast<ScriptStationList_CargoWaitingByVia *>(Squirrel::GetRealInstance(vm, index, "StationList_CargoWaitingByVia")); } };
	template <> struct Param<const ScriptStationList_CargoWaitingByVia &> { static inline const ScriptStationList_CargoWaitingByVia &Get(HSQUIRRELVM vm, int index) { return *static_cast<ScriptStationList_CargoWaitingByVia *>(Squirrel::GetRealInstance(vm, index, "StationList_CargoWaitingByVia")); } };
	template <> struct Return<ScriptStationList_CargoWaitingByVia *> { static inline int Set(HSQUIRRELVM vm, ScriptStationList_CargoWaitingByVia *res) { if (res == nullptr) { sq_pushnull(vm); return 1; } res->AddRef(); Squirrel::CreateClassInstanceVM(vm, "StationList_CargoWaitingByVia", res, nullptr, DefSQDestructorCallback<ScriptStationList_CargoWaitingByVia>, true); return 1; } };
} // namespace SQConvert

namespace SQConvert {
	/* Allow ScriptStationList_CargoWaitingFromByVia to be used as Squirrel parameter */
	template <> struct Param<ScriptStationList_CargoWaitingFromByVia *> { static inline ScriptStationList_CargoWaitingFromByVia *Get(HSQUIRRELVM vm, int index) { return  static_cast<ScriptStationList_CargoWaitingFromByVia *>(Squirrel::GetRealInstance(vm, index, "StationList_CargoWaitingFromByVia")); } };
	template <> struct Param<ScriptStationList_CargoWaitingFromByVia &> { static inline ScriptStationList_CargoWaitingFromByVia &Get(HSQUIRRELVM vm, int index) { return *static_cast<ScriptStationList_CargoWaitingFromByVia *>(Squirrel::GetRealInstance(vm, index, "StationList_CargoWaitingFromByVia")); } };
	template <> struct Param<const ScriptStationList_CargoWaitingFromByVia *> { static inline const ScriptStationList_CargoWaitingFromByVia *Get(HSQUIRRELVM vm, int index) { return  static_cast<ScriptStationList_CargoWaitingFromByVia *>(Squirrel::GetRealInstance(vm, index, "StationList_CargoWaitingFromByVia")); } };
	template <> struct Param<const ScriptStationList_CargoWaitingFromByVia &> { static inline const ScriptStationList_CargoWaitingFromByVia &Get(HSQUIRRELVM vm, int index) { return *static_cast<ScriptStationList_CargoWaitingFromByVia *>(Squirrel::GetRealInstance(vm, index, "StationList_CargoWaitingFromByVia")); } };
	template <> struct Return<ScriptStationList_CargoWaitingFromByVia *> { static inline int Set(HSQUIRRELVM vm, ScriptStationList_CargoWaitingFromByVia *res) { if (res == nullptr) { sq_pushnull(vm); return 1; } res->AddRef(); Squirrel::CreateClassInstanceVM(vm, "StationList_CargoWaitingFromByVia", res, nullptr, DefSQDestructorCallback<ScriptStationList_CargoWaitingFromByVia>, true); return 1; } };
} // namespace SQConvert

namespace SQConvert {
	/* Allow ScriptStationList_CargoPlannedByFrom to be used as Squirrel parameter */
	template <> struct Param<ScriptStationList_CargoPlannedByFrom *> { static inline ScriptStationList_CargoPlannedByFrom *Get(HSQUIRRELVM vm, int index) { return  static_cast<ScriptStationList_CargoPlannedByFrom *>(Squirrel::GetRealInstance(vm, index, "StationList_CargoPlannedByFrom")); } };
	template <> struct Param<ScriptStationList_CargoPlannedByFrom &> { static inline ScriptStationList_CargoPlannedByFrom &Get(HSQUIRRELVM vm, int index) { return *static_cast<ScriptStationList_CargoPlannedByFrom *>(Squirrel::GetRealInstance(vm, index, "StationList_CargoPlannedByFrom")); } };
	template <> struct Param<const ScriptStationList_CargoPlannedByFrom *> { static inline const ScriptStationList_CargoPlannedByFrom *Get(HSQUIRRELVM vm, int index) { return  static_cast<ScriptStationList_CargoPlannedByFrom *>(Squirrel::GetRealInstance(vm, index, "StationList_CargoPlannedByFrom")); } };
	template <> struct Param<const ScriptStationList_CargoPlannedByFrom &> { static inline const ScriptStationList_CargoPlannedByFrom &Get(HSQUIRRELVM vm, int index) { return *static_cast<ScriptStationList_CargoPlannedByFrom *>(Squirrel::GetRealInstance(vm, index, "StationList_CargoPlannedByFrom")); } };
	template <> struct Return<ScriptStationList_CargoPlannedByFrom *> { static inline int Set(HSQUIRRELVM vm, ScriptStationList_CargoPlannedByFrom *res) { if (res == nullptr) { sq_pushnull(vm); return 1; } res->AddRef(); Squirrel::CreateClassInstanceVM(vm, "StationList_CargoPlannedByFrom", res, nullptr, DefSQDestructorCallback<ScriptStationList_CargoPlannedByFrom>, true); return 1; } };
} // namespace SQConvert

namespace SQConvert {
	/* Allow ScriptStationList_CargoPlannedViaByFrom to be used as Squirrel parameter */
	template <> struct Param<ScriptStationList_CargoPlannedViaByFrom *> { static inline ScriptStationList_CargoPlannedViaByFrom *Get(HSQUIRRELVM vm, int index) { return  static_cast<ScriptStationList_CargoPlannedViaByFrom *>(Squirrel::GetRealInstance(vm, index, "StationList_CargoPlannedViaByFrom")); } };
	template <> struct Param<ScriptStationList_CargoPlannedViaByFrom &> { static inline ScriptStationList_CargoPlannedViaByFrom &Get(HSQUIRRELVM vm, int index) { return *static_cast<ScriptStationList_CargoPlannedViaByFrom *>(Squirrel::GetRealInstance(vm, index, "StationList_CargoPlannedViaByFrom")); } };
	template <> struct Param<const ScriptStationList_CargoPlannedViaByFrom *> { static inline const ScriptStationList_CargoPlannedViaByFrom *Get(HSQUIRRELVM vm, int index) { return  static_cast<ScriptStationList_CargoPlannedViaByFrom *>(Squirrel::GetRealInstance(vm, index, "StationList_CargoPlannedViaByFrom")); } };
	template <> struct Param<const ScriptStationList_CargoPlannedViaByFrom &> { static inline const ScriptStationList_CargoPlannedViaByFrom &Get(HSQUIRRELVM vm, int index) { return *static_cast<ScriptStationList_CargoPlannedViaByFrom *>(Squirrel::GetRealInstance(vm, index, "StationList_CargoPlannedViaByFrom")); } };
	template <> struct Return<ScriptStationList_CargoPlannedViaByFrom *> { static inline int Set(HSQUIRRELVM vm, ScriptStationList_CargoPlannedViaByFrom *res) { if (res == nullptr) { sq_pushnull(vm); return 1; } res->AddRef(); Squirrel::CreateClassInstanceVM(vm, "StationList_CargoPlannedViaByFrom", res, nullptr, DefSQDestructorCallback<ScriptStationList_CargoPlannedViaByFrom>, true); return 1; } };
} // namespace SQConvert

namespace SQConvert {
	/* Allow ScriptStationList_CargoPlannedByVia to be used as Squirrel parameter */
	template <> struct Param<ScriptStationList_CargoPlannedByVia *> { static inline ScriptStationList_CargoPlannedByVia *Get(HSQUIRRELVM vm, int index) { return  static_cast<ScriptStationList_CargoPlannedByVia *>(Squirrel::GetRealInstance(vm, index, "StationList_CargoPlannedByVia")); } };
	template <> struct Param<ScriptStationList_CargoPlannedByVia &> { static inline ScriptStationList_CargoPlannedByVia &Get(HSQUIRRELVM vm, int index) { return *static_cast<ScriptStationList_CargoPlannedByVia *>(Squirrel::GetRealInstance(vm, index, "StationList_CargoPlannedByVia")); } };
	template <> struct Param<const ScriptStationList_CargoPlannedByVia *> { static inline const ScriptStationList_CargoPlannedByVia *Get(HSQUIRRELVM vm, int index) { return  static_cast<ScriptStationList_CargoPlannedByVia *>(Squirrel::GetRealInstance(vm, index, "StationList_CargoPlannedByVia")); } };
	template <> struct Param<const ScriptStationList_CargoPlannedByVia &> { static inline const ScriptStationList_CargoPlannedByVia &Get(HSQUIRRELVM vm, int index) { return *static_cast<ScriptStationList_CargoPlannedByVia *>(Squirrel::GetRealInstance(vm, index, "StationList_CargoPlannedByVia")); } };
	template <> struct Return<ScriptStationList_CargoPlannedByVia *> { static inline int Set(HSQUIRRELVM vm, ScriptStationList_CargoPlannedByVia *res) { if (res == nullptr) { sq_pushnull(vm); return 1; } res->AddRef(); Squirrel::CreateClassInstanceVM(vm, "StationList_CargoPlannedByVia", res, nullptr, DefSQDestructorCallback<ScriptStationList_CargoPlannedByVia>, true); return 1; } };
} // namespace SQConvert

namespace SQConvert {
	/* Allow ScriptStationList_CargoPlannedFromByVia to be used as Squirrel parameter */
	template <> struct Param<ScriptStationList_CargoPlannedFromByVia *> { static inline ScriptStationList_CargoPlannedFromByVia *Get(HSQUIRRELVM vm, int index) { return  static_cast<ScriptStationList_CargoPlannedFromByVia *>(Squirrel::GetRealInstance(vm, index, "StationList_CargoPlannedFromByVia")); } };
	template <> struct Param<ScriptStationList_CargoPlannedFromByVia &> { static inline ScriptStationList_CargoPlannedFromByVia &Get(HSQUIRRELVM vm, int index) { return *static_cast<ScriptStationList_CargoPlannedFromByVia *>(Squirrel::GetRealInstance(vm, index, "StationList_CargoPlannedFromByVia")); } };
	template <> struct Param<const ScriptStationList_CargoPlannedFromByVia *> { static inline const ScriptStationList_CargoPlannedFromByVia *Get(HSQUIRRELVM vm, int index) { return  static_cast<ScriptStationList_CargoPlannedFromByVia *>(Squirrel::GetRealInstance(vm, index, "StationList_CargoPlannedFromByVia")); } };
	template <> struct Param<const ScriptStationList_CargoPlannedFromByVia &> { static inline const ScriptStationList_CargoPlannedFromByVia &Get(HSQUIRRELVM vm, int index) { return *static_cast<ScriptStationList_CargoPlannedFromByVia *>(Squirrel::GetRealInstance(vm, index, "StationList_CargoPlannedFromByVia")); } };
	template <> struct Return<ScriptStationList_CargoPlannedFromByVia *> { static inline int Set(HSQUIRRELVM vm, ScriptStationList_CargoPlannedFromByVia *res) { if (res == nullptr) { sq_pushnull(vm); return 1; } res->AddRef(); Squirrel::CreateClassInstanceVM(vm, "StationList_CargoPlannedFromByVia", res, nullptr, DefSQDestructorCallback<ScriptStationList_CargoPlannedFromByVia>, true); return 1; } };
} // namespace SQConvert

namespace SQConvert {
	/* Allow ScriptStationList_Vehicle to be used as Squirrel parameter */
	template <> struct Param<ScriptStationList_Vehicle *> { static inline ScriptStationList_Vehicle *Get(HSQUIRRELVM vm, int index) { return  static_cast<ScriptStationList_Vehicle *>(Squirrel::GetRealInstance(vm, index, "StationList_Vehicle")); } };
	template <> struct Param<ScriptStationList_Vehicle &> { static inline ScriptStationList_Vehicle &Get(HSQUIRRELVM vm, int index) { return *static_cast<ScriptStationList_Vehicle *>(Squirrel::GetRealInstance(vm, index, "StationList_Vehicle")); } };
	template <> struct Param<const ScriptStationList_Vehicle *> { static inline const ScriptStationList_Vehicle *Get(HSQUIRRELVM vm, int index) { return  static_cast<ScriptStationList_Vehicle *>(Squirrel::GetRealInstance(vm, index, "StationList_Vehicle")); } };
	template <> struct Param<const ScriptStationList_Vehicle &> { static inline const ScriptStationList_Vehicle &Get(HSQUIRRELVM vm, int index) { return *static_cast<ScriptStationList_Vehicle *>(Squirrel::GetRealInstance(vm, index, "StationList_Vehicle")); } };
	template <> struct Return<ScriptStationList_Vehicle *> { static inline int Set(HSQUIRRELVM vm, ScriptStationList_Vehicle *res) { if (res == nullptr) { sq_pushnull(vm); return 1; } res->AddRef(); Squirrel::CreateClassInstanceVM(vm, "StationList_Vehicle", res, nullptr, DefSQDestructorCallback<ScriptStationList_Vehicle>, true); return 1; } };
} // namespace SQConvert
