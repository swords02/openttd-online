/*
 * This file is part of OpenTTD.
 * OpenTTD is free software; you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, version 2.
 * OpenTTD is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 * See the GNU General Public License for more details. You should have received a copy of the GNU General Public License along with OpenTTD. If not, see <https://www.gnu.org/licenses/old-licenses/gpl-2.0>.
 */

/* THIS FILE IS AUTO-GENERATED; PLEASE DO NOT ALTER MANUALLY */

#include "../script_tilelist.hpp"

namespace SQConvert {
	/* Allow ScriptTileList to be used as Squirrel parameter */
	template <> struct Param<ScriptTileList *> { static inline ScriptTileList *Get(HSQUIRRELVM vm, int index) { return  static_cast<ScriptTileList *>(Squirrel::GetRealInstance(vm, index, "TileList")); } };
	template <> struct Param<ScriptTileList &> { static inline ScriptTileList &Get(HSQUIRRELVM vm, int index) { return *static_cast<ScriptTileList *>(Squirrel::GetRealInstance(vm, index, "TileList")); } };
	template <> struct Param<const ScriptTileList *> { static inline const ScriptTileList *Get(HSQUIRRELVM vm, int index) { return  static_cast<ScriptTileList *>(Squirrel::GetRealInstance(vm, index, "TileList")); } };
	template <> struct Param<const ScriptTileList &> { static inline const ScriptTileList &Get(HSQUIRRELVM vm, int index) { return *static_cast<ScriptTileList *>(Squirrel::GetRealInstance(vm, index, "TileList")); } };
	template <> struct Return<ScriptTileList *> { static inline int Set(HSQUIRRELVM vm, ScriptTileList *res) { if (res == nullptr) { sq_pushnull(vm); return 1; } res->AddRef(); Squirrel::CreateClassInstanceVM(vm, "TileList", res, nullptr, DefSQDestructorCallback<ScriptTileList>, true); return 1; } };
} // namespace SQConvert

namespace SQConvert {
	/* Allow ScriptTileList_IndustryAccepting to be used as Squirrel parameter */
	template <> struct Param<ScriptTileList_IndustryAccepting *> { static inline ScriptTileList_IndustryAccepting *Get(HSQUIRRELVM vm, int index) { return  static_cast<ScriptTileList_IndustryAccepting *>(Squirrel::GetRealInstance(vm, index, "TileList_IndustryAccepting")); } };
	template <> struct Param<ScriptTileList_IndustryAccepting &> { static inline ScriptTileList_IndustryAccepting &Get(HSQUIRRELVM vm, int index) { return *static_cast<ScriptTileList_IndustryAccepting *>(Squirrel::GetRealInstance(vm, index, "TileList_IndustryAccepting")); } };
	template <> struct Param<const ScriptTileList_IndustryAccepting *> { static inline const ScriptTileList_IndustryAccepting *Get(HSQUIRRELVM vm, int index) { return  static_cast<ScriptTileList_IndustryAccepting *>(Squirrel::GetRealInstance(vm, index, "TileList_IndustryAccepting")); } };
	template <> struct Param<const ScriptTileList_IndustryAccepting &> { static inline const ScriptTileList_IndustryAccepting &Get(HSQUIRRELVM vm, int index) { return *static_cast<ScriptTileList_IndustryAccepting *>(Squirrel::GetRealInstance(vm, index, "TileList_IndustryAccepting")); } };
	template <> struct Return<ScriptTileList_IndustryAccepting *> { static inline int Set(HSQUIRRELVM vm, ScriptTileList_IndustryAccepting *res) { if (res == nullptr) { sq_pushnull(vm); return 1; } res->AddRef(); Squirrel::CreateClassInstanceVM(vm, "TileList_IndustryAccepting", res, nullptr, DefSQDestructorCallback<ScriptTileList_IndustryAccepting>, true); return 1; } };
} // namespace SQConvert

namespace SQConvert {
	/* Allow ScriptTileList_IndustryProducing to be used as Squirrel parameter */
	template <> struct Param<ScriptTileList_IndustryProducing *> { static inline ScriptTileList_IndustryProducing *Get(HSQUIRRELVM vm, int index) { return  static_cast<ScriptTileList_IndustryProducing *>(Squirrel::GetRealInstance(vm, index, "TileList_IndustryProducing")); } };
	template <> struct Param<ScriptTileList_IndustryProducing &> { static inline ScriptTileList_IndustryProducing &Get(HSQUIRRELVM vm, int index) { return *static_cast<ScriptTileList_IndustryProducing *>(Squirrel::GetRealInstance(vm, index, "TileList_IndustryProducing")); } };
	template <> struct Param<const ScriptTileList_IndustryProducing *> { static inline const ScriptTileList_IndustryProducing *Get(HSQUIRRELVM vm, int index) { return  static_cast<ScriptTileList_IndustryProducing *>(Squirrel::GetRealInstance(vm, index, "TileList_IndustryProducing")); } };
	template <> struct Param<const ScriptTileList_IndustryProducing &> { static inline const ScriptTileList_IndustryProducing &Get(HSQUIRRELVM vm, int index) { return *static_cast<ScriptTileList_IndustryProducing *>(Squirrel::GetRealInstance(vm, index, "TileList_IndustryProducing")); } };
	template <> struct Return<ScriptTileList_IndustryProducing *> { static inline int Set(HSQUIRRELVM vm, ScriptTileList_IndustryProducing *res) { if (res == nullptr) { sq_pushnull(vm); return 1; } res->AddRef(); Squirrel::CreateClassInstanceVM(vm, "TileList_IndustryProducing", res, nullptr, DefSQDestructorCallback<ScriptTileList_IndustryProducing>, true); return 1; } };
} // namespace SQConvert

namespace SQConvert {
	/* Allow ScriptTileList_StationType to be used as Squirrel parameter */
	template <> struct Param<ScriptTileList_StationType *> { static inline ScriptTileList_StationType *Get(HSQUIRRELVM vm, int index) { return  static_cast<ScriptTileList_StationType *>(Squirrel::GetRealInstance(vm, index, "TileList_StationType")); } };
	template <> struct Param<ScriptTileList_StationType &> { static inline ScriptTileList_StationType &Get(HSQUIRRELVM vm, int index) { return *static_cast<ScriptTileList_StationType *>(Squirrel::GetRealInstance(vm, index, "TileList_StationType")); } };
	template <> struct Param<const ScriptTileList_StationType *> { static inline const ScriptTileList_StationType *Get(HSQUIRRELVM vm, int index) { return  static_cast<ScriptTileList_StationType *>(Squirrel::GetRealInstance(vm, index, "TileList_StationType")); } };
	template <> struct Param<const ScriptTileList_StationType &> { static inline const ScriptTileList_StationType &Get(HSQUIRRELVM vm, int index) { return *static_cast<ScriptTileList_StationType *>(Squirrel::GetRealInstance(vm, index, "TileList_StationType")); } };
	template <> struct Return<ScriptTileList_StationType *> { static inline int Set(HSQUIRRELVM vm, ScriptTileList_StationType *res) { if (res == nullptr) { sq_pushnull(vm); return 1; } res->AddRef(); Squirrel::CreateClassInstanceVM(vm, "TileList_StationType", res, nullptr, DefSQDestructorCallback<ScriptTileList_StationType>, true); return 1; } };
} // namespace SQConvert

namespace SQConvert {
	/* Allow ScriptTileList_StationCoverage to be used as Squirrel parameter */
	template <> struct Param<ScriptTileList_StationCoverage *> { static inline ScriptTileList_StationCoverage *Get(HSQUIRRELVM vm, int index) { return  static_cast<ScriptTileList_StationCoverage *>(Squirrel::GetRealInstance(vm, index, "TileList_StationCoverage")); } };
	template <> struct Param<ScriptTileList_StationCoverage &> { static inline ScriptTileList_StationCoverage &Get(HSQUIRRELVM vm, int index) { return *static_cast<ScriptTileList_StationCoverage *>(Squirrel::GetRealInstance(vm, index, "TileList_StationCoverage")); } };
	template <> struct Param<const ScriptTileList_StationCoverage *> { static inline const ScriptTileList_StationCoverage *Get(HSQUIRRELVM vm, int index) { return  static_cast<ScriptTileList_StationCoverage *>(Squirrel::GetRealInstance(vm, index, "TileList_StationCoverage")); } };
	template <> struct Param<const ScriptTileList_StationCoverage &> { static inline const ScriptTileList_StationCoverage &Get(HSQUIRRELVM vm, int index) { return *static_cast<ScriptTileList_StationCoverage *>(Squirrel::GetRealInstance(vm, index, "TileList_StationCoverage")); } };
	template <> struct Return<ScriptTileList_StationCoverage *> { static inline int Set(HSQUIRRELVM vm, ScriptTileList_StationCoverage *res) { if (res == nullptr) { sq_pushnull(vm); return 1; } res->AddRef(); Squirrel::CreateClassInstanceVM(vm, "TileList_StationCoverage", res, nullptr, DefSQDestructorCallback<ScriptTileList_StationCoverage>, true); return 1; } };
} // namespace SQConvert
