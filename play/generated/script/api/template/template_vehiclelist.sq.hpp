/*
 * This file is part of OpenTTD.
 * OpenTTD is free software; you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, version 2.
 * OpenTTD is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 * See the GNU General Public License for more details. You should have received a copy of the GNU General Public License along with OpenTTD. If not, see <https://www.gnu.org/licenses/old-licenses/gpl-2.0>.
 */

/* THIS FILE IS AUTO-GENERATED; PLEASE DO NOT ALTER MANUALLY */

#include "../script_vehiclelist.hpp"

namespace SQConvert {
	/* Allow ScriptVehicleList to be used as Squirrel parameter */
	template <> struct Param<ScriptVehicleList *> { static inline ScriptVehicleList *Get(HSQUIRRELVM vm, int index) { return  static_cast<ScriptVehicleList *>(Squirrel::GetRealInstance(vm, index, "VehicleList")); } };
	template <> struct Param<ScriptVehicleList &> { static inline ScriptVehicleList &Get(HSQUIRRELVM vm, int index) { return *static_cast<ScriptVehicleList *>(Squirrel::GetRealInstance(vm, index, "VehicleList")); } };
	template <> struct Param<const ScriptVehicleList *> { static inline const ScriptVehicleList *Get(HSQUIRRELVM vm, int index) { return  static_cast<ScriptVehicleList *>(Squirrel::GetRealInstance(vm, index, "VehicleList")); } };
	template <> struct Param<const ScriptVehicleList &> { static inline const ScriptVehicleList &Get(HSQUIRRELVM vm, int index) { return *static_cast<ScriptVehicleList *>(Squirrel::GetRealInstance(vm, index, "VehicleList")); } };
	template <> struct Return<ScriptVehicleList *> { static inline int Set(HSQUIRRELVM vm, ScriptVehicleList *res) { if (res == nullptr) { sq_pushnull(vm); return 1; } res->AddRef(); Squirrel::CreateClassInstanceVM(vm, "VehicleList", res, nullptr, DefSQDestructorCallback<ScriptVehicleList>, true); return 1; } };
} // namespace SQConvert

namespace SQConvert {
	/* Allow ScriptVehicleList_Station to be used as Squirrel parameter */
	template <> struct Param<ScriptVehicleList_Station *> { static inline ScriptVehicleList_Station *Get(HSQUIRRELVM vm, int index) { return  static_cast<ScriptVehicleList_Station *>(Squirrel::GetRealInstance(vm, index, "VehicleList_Station")); } };
	template <> struct Param<ScriptVehicleList_Station &> { static inline ScriptVehicleList_Station &Get(HSQUIRRELVM vm, int index) { return *static_cast<ScriptVehicleList_Station *>(Squirrel::GetRealInstance(vm, index, "VehicleList_Station")); } };
	template <> struct Param<const ScriptVehicleList_Station *> { static inline const ScriptVehicleList_Station *Get(HSQUIRRELVM vm, int index) { return  static_cast<ScriptVehicleList_Station *>(Squirrel::GetRealInstance(vm, index, "VehicleList_Station")); } };
	template <> struct Param<const ScriptVehicleList_Station &> { static inline const ScriptVehicleList_Station &Get(HSQUIRRELVM vm, int index) { return *static_cast<ScriptVehicleList_Station *>(Squirrel::GetRealInstance(vm, index, "VehicleList_Station")); } };
	template <> struct Return<ScriptVehicleList_Station *> { static inline int Set(HSQUIRRELVM vm, ScriptVehicleList_Station *res) { if (res == nullptr) { sq_pushnull(vm); return 1; } res->AddRef(); Squirrel::CreateClassInstanceVM(vm, "VehicleList_Station", res, nullptr, DefSQDestructorCallback<ScriptVehicleList_Station>, true); return 1; } };
} // namespace SQConvert

namespace SQConvert {
	/* Allow ScriptVehicleList_Waypoint to be used as Squirrel parameter */
	template <> struct Param<ScriptVehicleList_Waypoint *> { static inline ScriptVehicleList_Waypoint *Get(HSQUIRRELVM vm, int index) { return  static_cast<ScriptVehicleList_Waypoint *>(Squirrel::GetRealInstance(vm, index, "VehicleList_Waypoint")); } };
	template <> struct Param<ScriptVehicleList_Waypoint &> { static inline ScriptVehicleList_Waypoint &Get(HSQUIRRELVM vm, int index) { return *static_cast<ScriptVehicleList_Waypoint *>(Squirrel::GetRealInstance(vm, index, "VehicleList_Waypoint")); } };
	template <> struct Param<const ScriptVehicleList_Waypoint *> { static inline const ScriptVehicleList_Waypoint *Get(HSQUIRRELVM vm, int index) { return  static_cast<ScriptVehicleList_Waypoint *>(Squirrel::GetRealInstance(vm, index, "VehicleList_Waypoint")); } };
	template <> struct Param<const ScriptVehicleList_Waypoint &> { static inline const ScriptVehicleList_Waypoint &Get(HSQUIRRELVM vm, int index) { return *static_cast<ScriptVehicleList_Waypoint *>(Squirrel::GetRealInstance(vm, index, "VehicleList_Waypoint")); } };
	template <> struct Return<ScriptVehicleList_Waypoint *> { static inline int Set(HSQUIRRELVM vm, ScriptVehicleList_Waypoint *res) { if (res == nullptr) { sq_pushnull(vm); return 1; } res->AddRef(); Squirrel::CreateClassInstanceVM(vm, "VehicleList_Waypoint", res, nullptr, DefSQDestructorCallback<ScriptVehicleList_Waypoint>, true); return 1; } };
} // namespace SQConvert

namespace SQConvert {
	/* Allow ScriptVehicleList_Depot to be used as Squirrel parameter */
	template <> struct Param<ScriptVehicleList_Depot *> { static inline ScriptVehicleList_Depot *Get(HSQUIRRELVM vm, int index) { return  static_cast<ScriptVehicleList_Depot *>(Squirrel::GetRealInstance(vm, index, "VehicleList_Depot")); } };
	template <> struct Param<ScriptVehicleList_Depot &> { static inline ScriptVehicleList_Depot &Get(HSQUIRRELVM vm, int index) { return *static_cast<ScriptVehicleList_Depot *>(Squirrel::GetRealInstance(vm, index, "VehicleList_Depot")); } };
	template <> struct Param<const ScriptVehicleList_Depot *> { static inline const ScriptVehicleList_Depot *Get(HSQUIRRELVM vm, int index) { return  static_cast<ScriptVehicleList_Depot *>(Squirrel::GetRealInstance(vm, index, "VehicleList_Depot")); } };
	template <> struct Param<const ScriptVehicleList_Depot &> { static inline const ScriptVehicleList_Depot &Get(HSQUIRRELVM vm, int index) { return *static_cast<ScriptVehicleList_Depot *>(Squirrel::GetRealInstance(vm, index, "VehicleList_Depot")); } };
	template <> struct Return<ScriptVehicleList_Depot *> { static inline int Set(HSQUIRRELVM vm, ScriptVehicleList_Depot *res) { if (res == nullptr) { sq_pushnull(vm); return 1; } res->AddRef(); Squirrel::CreateClassInstanceVM(vm, "VehicleList_Depot", res, nullptr, DefSQDestructorCallback<ScriptVehicleList_Depot>, true); return 1; } };
} // namespace SQConvert

namespace SQConvert {
	/* Allow ScriptVehicleList_SharedOrders to be used as Squirrel parameter */
	template <> struct Param<ScriptVehicleList_SharedOrders *> { static inline ScriptVehicleList_SharedOrders *Get(HSQUIRRELVM vm, int index) { return  static_cast<ScriptVehicleList_SharedOrders *>(Squirrel::GetRealInstance(vm, index, "VehicleList_SharedOrders")); } };
	template <> struct Param<ScriptVehicleList_SharedOrders &> { static inline ScriptVehicleList_SharedOrders &Get(HSQUIRRELVM vm, int index) { return *static_cast<ScriptVehicleList_SharedOrders *>(Squirrel::GetRealInstance(vm, index, "VehicleList_SharedOrders")); } };
	template <> struct Param<const ScriptVehicleList_SharedOrders *> { static inline const ScriptVehicleList_SharedOrders *Get(HSQUIRRELVM vm, int index) { return  static_cast<ScriptVehicleList_SharedOrders *>(Squirrel::GetRealInstance(vm, index, "VehicleList_SharedOrders")); } };
	template <> struct Param<const ScriptVehicleList_SharedOrders &> { static inline const ScriptVehicleList_SharedOrders &Get(HSQUIRRELVM vm, int index) { return *static_cast<ScriptVehicleList_SharedOrders *>(Squirrel::GetRealInstance(vm, index, "VehicleList_SharedOrders")); } };
	template <> struct Return<ScriptVehicleList_SharedOrders *> { static inline int Set(HSQUIRRELVM vm, ScriptVehicleList_SharedOrders *res) { if (res == nullptr) { sq_pushnull(vm); return 1; } res->AddRef(); Squirrel::CreateClassInstanceVM(vm, "VehicleList_SharedOrders", res, nullptr, DefSQDestructorCallback<ScriptVehicleList_SharedOrders>, true); return 1; } };
} // namespace SQConvert

namespace SQConvert {
	/* Allow ScriptVehicleList_Group to be used as Squirrel parameter */
	template <> struct Param<ScriptVehicleList_Group *> { static inline ScriptVehicleList_Group *Get(HSQUIRRELVM vm, int index) { return  static_cast<ScriptVehicleList_Group *>(Squirrel::GetRealInstance(vm, index, "VehicleList_Group")); } };
	template <> struct Param<ScriptVehicleList_Group &> { static inline ScriptVehicleList_Group &Get(HSQUIRRELVM vm, int index) { return *static_cast<ScriptVehicleList_Group *>(Squirrel::GetRealInstance(vm, index, "VehicleList_Group")); } };
	template <> struct Param<const ScriptVehicleList_Group *> { static inline const ScriptVehicleList_Group *Get(HSQUIRRELVM vm, int index) { return  static_cast<ScriptVehicleList_Group *>(Squirrel::GetRealInstance(vm, index, "VehicleList_Group")); } };
	template <> struct Param<const ScriptVehicleList_Group &> { static inline const ScriptVehicleList_Group &Get(HSQUIRRELVM vm, int index) { return *static_cast<ScriptVehicleList_Group *>(Squirrel::GetRealInstance(vm, index, "VehicleList_Group")); } };
	template <> struct Return<ScriptVehicleList_Group *> { static inline int Set(HSQUIRRELVM vm, ScriptVehicleList_Group *res) { if (res == nullptr) { sq_pushnull(vm); return 1; } res->AddRef(); Squirrel::CreateClassInstanceVM(vm, "VehicleList_Group", res, nullptr, DefSQDestructorCallback<ScriptVehicleList_Group>, true); return 1; } };
} // namespace SQConvert

namespace SQConvert {
	/* Allow ScriptVehicleList_DefaultGroup to be used as Squirrel parameter */
	template <> struct Param<ScriptVehicleList_DefaultGroup *> { static inline ScriptVehicleList_DefaultGroup *Get(HSQUIRRELVM vm, int index) { return  static_cast<ScriptVehicleList_DefaultGroup *>(Squirrel::GetRealInstance(vm, index, "VehicleList_DefaultGroup")); } };
	template <> struct Param<ScriptVehicleList_DefaultGroup &> { static inline ScriptVehicleList_DefaultGroup &Get(HSQUIRRELVM vm, int index) { return *static_cast<ScriptVehicleList_DefaultGroup *>(Squirrel::GetRealInstance(vm, index, "VehicleList_DefaultGroup")); } };
	template <> struct Param<const ScriptVehicleList_DefaultGroup *> { static inline const ScriptVehicleList_DefaultGroup *Get(HSQUIRRELVM vm, int index) { return  static_cast<ScriptVehicleList_DefaultGroup *>(Squirrel::GetRealInstance(vm, index, "VehicleList_DefaultGroup")); } };
	template <> struct Param<const ScriptVehicleList_DefaultGroup &> { static inline const ScriptVehicleList_DefaultGroup &Get(HSQUIRRELVM vm, int index) { return *static_cast<ScriptVehicleList_DefaultGroup *>(Squirrel::GetRealInstance(vm, index, "VehicleList_DefaultGroup")); } };
	template <> struct Return<ScriptVehicleList_DefaultGroup *> { static inline int Set(HSQUIRRELVM vm, ScriptVehicleList_DefaultGroup *res) { if (res == nullptr) { sq_pushnull(vm); return 1; } res->AddRef(); Squirrel::CreateClassInstanceVM(vm, "VehicleList_DefaultGroup", res, nullptr, DefSQDestructorCallback<ScriptVehicleList_DefaultGroup>, true); return 1; } };
} // namespace SQConvert
