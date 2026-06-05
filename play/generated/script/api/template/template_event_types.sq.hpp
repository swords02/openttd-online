/*
 * This file is part of OpenTTD.
 * OpenTTD is free software; you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, version 2.
 * OpenTTD is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 * See the GNU General Public License for more details. You should have received a copy of the GNU General Public License along with OpenTTD. If not, see <https://www.gnu.org/licenses/old-licenses/gpl-2.0>.
 */

/* THIS FILE IS AUTO-GENERATED; PLEASE DO NOT ALTER MANUALLY */

#include "../script_event_types.hpp"

namespace SQConvert {
	/* Allow ScriptEventVehicleCrashed to be used as Squirrel parameter */
	template <> struct Param<ScriptEventVehicleCrashed *> { static inline ScriptEventVehicleCrashed *Get(HSQUIRRELVM vm, int index) { return  static_cast<ScriptEventVehicleCrashed *>(Squirrel::GetRealInstance(vm, index, "EventVehicleCrashed")); } };
	template <> struct Param<ScriptEventVehicleCrashed &> { static inline ScriptEventVehicleCrashed &Get(HSQUIRRELVM vm, int index) { return *static_cast<ScriptEventVehicleCrashed *>(Squirrel::GetRealInstance(vm, index, "EventVehicleCrashed")); } };
	template <> struct Param<const ScriptEventVehicleCrashed *> { static inline const ScriptEventVehicleCrashed *Get(HSQUIRRELVM vm, int index) { return  static_cast<ScriptEventVehicleCrashed *>(Squirrel::GetRealInstance(vm, index, "EventVehicleCrashed")); } };
	template <> struct Param<const ScriptEventVehicleCrashed &> { static inline const ScriptEventVehicleCrashed &Get(HSQUIRRELVM vm, int index) { return *static_cast<ScriptEventVehicleCrashed *>(Squirrel::GetRealInstance(vm, index, "EventVehicleCrashed")); } };
	template <> struct Return<ScriptEventVehicleCrashed *> { static inline int Set(HSQUIRRELVM vm, ScriptEventVehicleCrashed *res) { if (res == nullptr) { sq_pushnull(vm); return 1; } res->AddRef(); Squirrel::CreateClassInstanceVM(vm, "EventVehicleCrashed", res, nullptr, DefSQDestructorCallback<ScriptEventVehicleCrashed>, true); return 1; } };
} // namespace SQConvert

namespace SQConvert {
	/* Allow ScriptEventSubsidyOffer to be used as Squirrel parameter */
	template <> struct Param<ScriptEventSubsidyOffer *> { static inline ScriptEventSubsidyOffer *Get(HSQUIRRELVM vm, int index) { return  static_cast<ScriptEventSubsidyOffer *>(Squirrel::GetRealInstance(vm, index, "EventSubsidyOffer")); } };
	template <> struct Param<ScriptEventSubsidyOffer &> { static inline ScriptEventSubsidyOffer &Get(HSQUIRRELVM vm, int index) { return *static_cast<ScriptEventSubsidyOffer *>(Squirrel::GetRealInstance(vm, index, "EventSubsidyOffer")); } };
	template <> struct Param<const ScriptEventSubsidyOffer *> { static inline const ScriptEventSubsidyOffer *Get(HSQUIRRELVM vm, int index) { return  static_cast<ScriptEventSubsidyOffer *>(Squirrel::GetRealInstance(vm, index, "EventSubsidyOffer")); } };
	template <> struct Param<const ScriptEventSubsidyOffer &> { static inline const ScriptEventSubsidyOffer &Get(HSQUIRRELVM vm, int index) { return *static_cast<ScriptEventSubsidyOffer *>(Squirrel::GetRealInstance(vm, index, "EventSubsidyOffer")); } };
	template <> struct Return<ScriptEventSubsidyOffer *> { static inline int Set(HSQUIRRELVM vm, ScriptEventSubsidyOffer *res) { if (res == nullptr) { sq_pushnull(vm); return 1; } res->AddRef(); Squirrel::CreateClassInstanceVM(vm, "EventSubsidyOffer", res, nullptr, DefSQDestructorCallback<ScriptEventSubsidyOffer>, true); return 1; } };
} // namespace SQConvert

namespace SQConvert {
	/* Allow ScriptEventSubsidyOfferExpired to be used as Squirrel parameter */
	template <> struct Param<ScriptEventSubsidyOfferExpired *> { static inline ScriptEventSubsidyOfferExpired *Get(HSQUIRRELVM vm, int index) { return  static_cast<ScriptEventSubsidyOfferExpired *>(Squirrel::GetRealInstance(vm, index, "EventSubsidyOfferExpired")); } };
	template <> struct Param<ScriptEventSubsidyOfferExpired &> { static inline ScriptEventSubsidyOfferExpired &Get(HSQUIRRELVM vm, int index) { return *static_cast<ScriptEventSubsidyOfferExpired *>(Squirrel::GetRealInstance(vm, index, "EventSubsidyOfferExpired")); } };
	template <> struct Param<const ScriptEventSubsidyOfferExpired *> { static inline const ScriptEventSubsidyOfferExpired *Get(HSQUIRRELVM vm, int index) { return  static_cast<ScriptEventSubsidyOfferExpired *>(Squirrel::GetRealInstance(vm, index, "EventSubsidyOfferExpired")); } };
	template <> struct Param<const ScriptEventSubsidyOfferExpired &> { static inline const ScriptEventSubsidyOfferExpired &Get(HSQUIRRELVM vm, int index) { return *static_cast<ScriptEventSubsidyOfferExpired *>(Squirrel::GetRealInstance(vm, index, "EventSubsidyOfferExpired")); } };
	template <> struct Return<ScriptEventSubsidyOfferExpired *> { static inline int Set(HSQUIRRELVM vm, ScriptEventSubsidyOfferExpired *res) { if (res == nullptr) { sq_pushnull(vm); return 1; } res->AddRef(); Squirrel::CreateClassInstanceVM(vm, "EventSubsidyOfferExpired", res, nullptr, DefSQDestructorCallback<ScriptEventSubsidyOfferExpired>, true); return 1; } };
} // namespace SQConvert

namespace SQConvert {
	/* Allow ScriptEventSubsidyAwarded to be used as Squirrel parameter */
	template <> struct Param<ScriptEventSubsidyAwarded *> { static inline ScriptEventSubsidyAwarded *Get(HSQUIRRELVM vm, int index) { return  static_cast<ScriptEventSubsidyAwarded *>(Squirrel::GetRealInstance(vm, index, "EventSubsidyAwarded")); } };
	template <> struct Param<ScriptEventSubsidyAwarded &> { static inline ScriptEventSubsidyAwarded &Get(HSQUIRRELVM vm, int index) { return *static_cast<ScriptEventSubsidyAwarded *>(Squirrel::GetRealInstance(vm, index, "EventSubsidyAwarded")); } };
	template <> struct Param<const ScriptEventSubsidyAwarded *> { static inline const ScriptEventSubsidyAwarded *Get(HSQUIRRELVM vm, int index) { return  static_cast<ScriptEventSubsidyAwarded *>(Squirrel::GetRealInstance(vm, index, "EventSubsidyAwarded")); } };
	template <> struct Param<const ScriptEventSubsidyAwarded &> { static inline const ScriptEventSubsidyAwarded &Get(HSQUIRRELVM vm, int index) { return *static_cast<ScriptEventSubsidyAwarded *>(Squirrel::GetRealInstance(vm, index, "EventSubsidyAwarded")); } };
	template <> struct Return<ScriptEventSubsidyAwarded *> { static inline int Set(HSQUIRRELVM vm, ScriptEventSubsidyAwarded *res) { if (res == nullptr) { sq_pushnull(vm); return 1; } res->AddRef(); Squirrel::CreateClassInstanceVM(vm, "EventSubsidyAwarded", res, nullptr, DefSQDestructorCallback<ScriptEventSubsidyAwarded>, true); return 1; } };
} // namespace SQConvert

namespace SQConvert {
	/* Allow ScriptEventSubsidyExpired to be used as Squirrel parameter */
	template <> struct Param<ScriptEventSubsidyExpired *> { static inline ScriptEventSubsidyExpired *Get(HSQUIRRELVM vm, int index) { return  static_cast<ScriptEventSubsidyExpired *>(Squirrel::GetRealInstance(vm, index, "EventSubsidyExpired")); } };
	template <> struct Param<ScriptEventSubsidyExpired &> { static inline ScriptEventSubsidyExpired &Get(HSQUIRRELVM vm, int index) { return *static_cast<ScriptEventSubsidyExpired *>(Squirrel::GetRealInstance(vm, index, "EventSubsidyExpired")); } };
	template <> struct Param<const ScriptEventSubsidyExpired *> { static inline const ScriptEventSubsidyExpired *Get(HSQUIRRELVM vm, int index) { return  static_cast<ScriptEventSubsidyExpired *>(Squirrel::GetRealInstance(vm, index, "EventSubsidyExpired")); } };
	template <> struct Param<const ScriptEventSubsidyExpired &> { static inline const ScriptEventSubsidyExpired &Get(HSQUIRRELVM vm, int index) { return *static_cast<ScriptEventSubsidyExpired *>(Squirrel::GetRealInstance(vm, index, "EventSubsidyExpired")); } };
	template <> struct Return<ScriptEventSubsidyExpired *> { static inline int Set(HSQUIRRELVM vm, ScriptEventSubsidyExpired *res) { if (res == nullptr) { sq_pushnull(vm); return 1; } res->AddRef(); Squirrel::CreateClassInstanceVM(vm, "EventSubsidyExpired", res, nullptr, DefSQDestructorCallback<ScriptEventSubsidyExpired>, true); return 1; } };
} // namespace SQConvert

namespace SQConvert {
	/* Allow ScriptEventEnginePreview to be used as Squirrel parameter */
	template <> struct Param<ScriptEventEnginePreview *> { static inline ScriptEventEnginePreview *Get(HSQUIRRELVM vm, int index) { return  static_cast<ScriptEventEnginePreview *>(Squirrel::GetRealInstance(vm, index, "EventEnginePreview")); } };
	template <> struct Param<ScriptEventEnginePreview &> { static inline ScriptEventEnginePreview &Get(HSQUIRRELVM vm, int index) { return *static_cast<ScriptEventEnginePreview *>(Squirrel::GetRealInstance(vm, index, "EventEnginePreview")); } };
	template <> struct Param<const ScriptEventEnginePreview *> { static inline const ScriptEventEnginePreview *Get(HSQUIRRELVM vm, int index) { return  static_cast<ScriptEventEnginePreview *>(Squirrel::GetRealInstance(vm, index, "EventEnginePreview")); } };
	template <> struct Param<const ScriptEventEnginePreview &> { static inline const ScriptEventEnginePreview &Get(HSQUIRRELVM vm, int index) { return *static_cast<ScriptEventEnginePreview *>(Squirrel::GetRealInstance(vm, index, "EventEnginePreview")); } };
	template <> struct Return<ScriptEventEnginePreview *> { static inline int Set(HSQUIRRELVM vm, ScriptEventEnginePreview *res) { if (res == nullptr) { sq_pushnull(vm); return 1; } res->AddRef(); Squirrel::CreateClassInstanceVM(vm, "EventEnginePreview", res, nullptr, DefSQDestructorCallback<ScriptEventEnginePreview>, true); return 1; } };
} // namespace SQConvert

namespace SQConvert {
	/* Allow ScriptEventCompanyNew to be used as Squirrel parameter */
	template <> struct Param<ScriptEventCompanyNew *> { static inline ScriptEventCompanyNew *Get(HSQUIRRELVM vm, int index) { return  static_cast<ScriptEventCompanyNew *>(Squirrel::GetRealInstance(vm, index, "EventCompanyNew")); } };
	template <> struct Param<ScriptEventCompanyNew &> { static inline ScriptEventCompanyNew &Get(HSQUIRRELVM vm, int index) { return *static_cast<ScriptEventCompanyNew *>(Squirrel::GetRealInstance(vm, index, "EventCompanyNew")); } };
	template <> struct Param<const ScriptEventCompanyNew *> { static inline const ScriptEventCompanyNew *Get(HSQUIRRELVM vm, int index) { return  static_cast<ScriptEventCompanyNew *>(Squirrel::GetRealInstance(vm, index, "EventCompanyNew")); } };
	template <> struct Param<const ScriptEventCompanyNew &> { static inline const ScriptEventCompanyNew &Get(HSQUIRRELVM vm, int index) { return *static_cast<ScriptEventCompanyNew *>(Squirrel::GetRealInstance(vm, index, "EventCompanyNew")); } };
	template <> struct Return<ScriptEventCompanyNew *> { static inline int Set(HSQUIRRELVM vm, ScriptEventCompanyNew *res) { if (res == nullptr) { sq_pushnull(vm); return 1; } res->AddRef(); Squirrel::CreateClassInstanceVM(vm, "EventCompanyNew", res, nullptr, DefSQDestructorCallback<ScriptEventCompanyNew>, true); return 1; } };
} // namespace SQConvert

namespace SQConvert {
	/* Allow ScriptEventCompanyRenamed to be used as Squirrel parameter */
	template <> struct Param<ScriptEventCompanyRenamed *> { static inline ScriptEventCompanyRenamed *Get(HSQUIRRELVM vm, int index) { return  static_cast<ScriptEventCompanyRenamed *>(Squirrel::GetRealInstance(vm, index, "EventCompanyRenamed")); } };
	template <> struct Param<ScriptEventCompanyRenamed &> { static inline ScriptEventCompanyRenamed &Get(HSQUIRRELVM vm, int index) { return *static_cast<ScriptEventCompanyRenamed *>(Squirrel::GetRealInstance(vm, index, "EventCompanyRenamed")); } };
	template <> struct Param<const ScriptEventCompanyRenamed *> { static inline const ScriptEventCompanyRenamed *Get(HSQUIRRELVM vm, int index) { return  static_cast<ScriptEventCompanyRenamed *>(Squirrel::GetRealInstance(vm, index, "EventCompanyRenamed")); } };
	template <> struct Param<const ScriptEventCompanyRenamed &> { static inline const ScriptEventCompanyRenamed &Get(HSQUIRRELVM vm, int index) { return *static_cast<ScriptEventCompanyRenamed *>(Squirrel::GetRealInstance(vm, index, "EventCompanyRenamed")); } };
	template <> struct Return<ScriptEventCompanyRenamed *> { static inline int Set(HSQUIRRELVM vm, ScriptEventCompanyRenamed *res) { if (res == nullptr) { sq_pushnull(vm); return 1; } res->AddRef(); Squirrel::CreateClassInstanceVM(vm, "EventCompanyRenamed", res, nullptr, DefSQDestructorCallback<ScriptEventCompanyRenamed>, true); return 1; } };
} // namespace SQConvert

namespace SQConvert {
	/* Allow ScriptEventCompanyInTrouble to be used as Squirrel parameter */
	template <> struct Param<ScriptEventCompanyInTrouble *> { static inline ScriptEventCompanyInTrouble *Get(HSQUIRRELVM vm, int index) { return  static_cast<ScriptEventCompanyInTrouble *>(Squirrel::GetRealInstance(vm, index, "EventCompanyInTrouble")); } };
	template <> struct Param<ScriptEventCompanyInTrouble &> { static inline ScriptEventCompanyInTrouble &Get(HSQUIRRELVM vm, int index) { return *static_cast<ScriptEventCompanyInTrouble *>(Squirrel::GetRealInstance(vm, index, "EventCompanyInTrouble")); } };
	template <> struct Param<const ScriptEventCompanyInTrouble *> { static inline const ScriptEventCompanyInTrouble *Get(HSQUIRRELVM vm, int index) { return  static_cast<ScriptEventCompanyInTrouble *>(Squirrel::GetRealInstance(vm, index, "EventCompanyInTrouble")); } };
	template <> struct Param<const ScriptEventCompanyInTrouble &> { static inline const ScriptEventCompanyInTrouble &Get(HSQUIRRELVM vm, int index) { return *static_cast<ScriptEventCompanyInTrouble *>(Squirrel::GetRealInstance(vm, index, "EventCompanyInTrouble")); } };
	template <> struct Return<ScriptEventCompanyInTrouble *> { static inline int Set(HSQUIRRELVM vm, ScriptEventCompanyInTrouble *res) { if (res == nullptr) { sq_pushnull(vm); return 1; } res->AddRef(); Squirrel::CreateClassInstanceVM(vm, "EventCompanyInTrouble", res, nullptr, DefSQDestructorCallback<ScriptEventCompanyInTrouble>, true); return 1; } };
} // namespace SQConvert

namespace SQConvert {
	/* Allow ScriptEventCompanyAskMerger to be used as Squirrel parameter */
	template <> struct Param<ScriptEventCompanyAskMerger *> { static inline ScriptEventCompanyAskMerger *Get(HSQUIRRELVM vm, int index) { return  static_cast<ScriptEventCompanyAskMerger *>(Squirrel::GetRealInstance(vm, index, "EventCompanyAskMerger")); } };
	template <> struct Param<ScriptEventCompanyAskMerger &> { static inline ScriptEventCompanyAskMerger &Get(HSQUIRRELVM vm, int index) { return *static_cast<ScriptEventCompanyAskMerger *>(Squirrel::GetRealInstance(vm, index, "EventCompanyAskMerger")); } };
	template <> struct Param<const ScriptEventCompanyAskMerger *> { static inline const ScriptEventCompanyAskMerger *Get(HSQUIRRELVM vm, int index) { return  static_cast<ScriptEventCompanyAskMerger *>(Squirrel::GetRealInstance(vm, index, "EventCompanyAskMerger")); } };
	template <> struct Param<const ScriptEventCompanyAskMerger &> { static inline const ScriptEventCompanyAskMerger &Get(HSQUIRRELVM vm, int index) { return *static_cast<ScriptEventCompanyAskMerger *>(Squirrel::GetRealInstance(vm, index, "EventCompanyAskMerger")); } };
	template <> struct Return<ScriptEventCompanyAskMerger *> { static inline int Set(HSQUIRRELVM vm, ScriptEventCompanyAskMerger *res) { if (res == nullptr) { sq_pushnull(vm); return 1; } res->AddRef(); Squirrel::CreateClassInstanceVM(vm, "EventCompanyAskMerger", res, nullptr, DefSQDestructorCallback<ScriptEventCompanyAskMerger>, true); return 1; } };
} // namespace SQConvert

namespace SQConvert {
	/* Allow ScriptEventCompanyMerger to be used as Squirrel parameter */
	template <> struct Param<ScriptEventCompanyMerger *> { static inline ScriptEventCompanyMerger *Get(HSQUIRRELVM vm, int index) { return  static_cast<ScriptEventCompanyMerger *>(Squirrel::GetRealInstance(vm, index, "EventCompanyMerger")); } };
	template <> struct Param<ScriptEventCompanyMerger &> { static inline ScriptEventCompanyMerger &Get(HSQUIRRELVM vm, int index) { return *static_cast<ScriptEventCompanyMerger *>(Squirrel::GetRealInstance(vm, index, "EventCompanyMerger")); } };
	template <> struct Param<const ScriptEventCompanyMerger *> { static inline const ScriptEventCompanyMerger *Get(HSQUIRRELVM vm, int index) { return  static_cast<ScriptEventCompanyMerger *>(Squirrel::GetRealInstance(vm, index, "EventCompanyMerger")); } };
	template <> struct Param<const ScriptEventCompanyMerger &> { static inline const ScriptEventCompanyMerger &Get(HSQUIRRELVM vm, int index) { return *static_cast<ScriptEventCompanyMerger *>(Squirrel::GetRealInstance(vm, index, "EventCompanyMerger")); } };
	template <> struct Return<ScriptEventCompanyMerger *> { static inline int Set(HSQUIRRELVM vm, ScriptEventCompanyMerger *res) { if (res == nullptr) { sq_pushnull(vm); return 1; } res->AddRef(); Squirrel::CreateClassInstanceVM(vm, "EventCompanyMerger", res, nullptr, DefSQDestructorCallback<ScriptEventCompanyMerger>, true); return 1; } };
} // namespace SQConvert

namespace SQConvert {
	/* Allow ScriptEventCompanyBankrupt to be used as Squirrel parameter */
	template <> struct Param<ScriptEventCompanyBankrupt *> { static inline ScriptEventCompanyBankrupt *Get(HSQUIRRELVM vm, int index) { return  static_cast<ScriptEventCompanyBankrupt *>(Squirrel::GetRealInstance(vm, index, "EventCompanyBankrupt")); } };
	template <> struct Param<ScriptEventCompanyBankrupt &> { static inline ScriptEventCompanyBankrupt &Get(HSQUIRRELVM vm, int index) { return *static_cast<ScriptEventCompanyBankrupt *>(Squirrel::GetRealInstance(vm, index, "EventCompanyBankrupt")); } };
	template <> struct Param<const ScriptEventCompanyBankrupt *> { static inline const ScriptEventCompanyBankrupt *Get(HSQUIRRELVM vm, int index) { return  static_cast<ScriptEventCompanyBankrupt *>(Squirrel::GetRealInstance(vm, index, "EventCompanyBankrupt")); } };
	template <> struct Param<const ScriptEventCompanyBankrupt &> { static inline const ScriptEventCompanyBankrupt &Get(HSQUIRRELVM vm, int index) { return *static_cast<ScriptEventCompanyBankrupt *>(Squirrel::GetRealInstance(vm, index, "EventCompanyBankrupt")); } };
	template <> struct Return<ScriptEventCompanyBankrupt *> { static inline int Set(HSQUIRRELVM vm, ScriptEventCompanyBankrupt *res) { if (res == nullptr) { sq_pushnull(vm); return 1; } res->AddRef(); Squirrel::CreateClassInstanceVM(vm, "EventCompanyBankrupt", res, nullptr, DefSQDestructorCallback<ScriptEventCompanyBankrupt>, true); return 1; } };
} // namespace SQConvert

namespace SQConvert {
	/* Allow ScriptEventVehicleLost to be used as Squirrel parameter */
	template <> struct Param<ScriptEventVehicleLost *> { static inline ScriptEventVehicleLost *Get(HSQUIRRELVM vm, int index) { return  static_cast<ScriptEventVehicleLost *>(Squirrel::GetRealInstance(vm, index, "EventVehicleLost")); } };
	template <> struct Param<ScriptEventVehicleLost &> { static inline ScriptEventVehicleLost &Get(HSQUIRRELVM vm, int index) { return *static_cast<ScriptEventVehicleLost *>(Squirrel::GetRealInstance(vm, index, "EventVehicleLost")); } };
	template <> struct Param<const ScriptEventVehicleLost *> { static inline const ScriptEventVehicleLost *Get(HSQUIRRELVM vm, int index) { return  static_cast<ScriptEventVehicleLost *>(Squirrel::GetRealInstance(vm, index, "EventVehicleLost")); } };
	template <> struct Param<const ScriptEventVehicleLost &> { static inline const ScriptEventVehicleLost &Get(HSQUIRRELVM vm, int index) { return *static_cast<ScriptEventVehicleLost *>(Squirrel::GetRealInstance(vm, index, "EventVehicleLost")); } };
	template <> struct Return<ScriptEventVehicleLost *> { static inline int Set(HSQUIRRELVM vm, ScriptEventVehicleLost *res) { if (res == nullptr) { sq_pushnull(vm); return 1; } res->AddRef(); Squirrel::CreateClassInstanceVM(vm, "EventVehicleLost", res, nullptr, DefSQDestructorCallback<ScriptEventVehicleLost>, true); return 1; } };
} // namespace SQConvert

namespace SQConvert {
	/* Allow ScriptEventVehicleWaitingInDepot to be used as Squirrel parameter */
	template <> struct Param<ScriptEventVehicleWaitingInDepot *> { static inline ScriptEventVehicleWaitingInDepot *Get(HSQUIRRELVM vm, int index) { return  static_cast<ScriptEventVehicleWaitingInDepot *>(Squirrel::GetRealInstance(vm, index, "EventVehicleWaitingInDepot")); } };
	template <> struct Param<ScriptEventVehicleWaitingInDepot &> { static inline ScriptEventVehicleWaitingInDepot &Get(HSQUIRRELVM vm, int index) { return *static_cast<ScriptEventVehicleWaitingInDepot *>(Squirrel::GetRealInstance(vm, index, "EventVehicleWaitingInDepot")); } };
	template <> struct Param<const ScriptEventVehicleWaitingInDepot *> { static inline const ScriptEventVehicleWaitingInDepot *Get(HSQUIRRELVM vm, int index) { return  static_cast<ScriptEventVehicleWaitingInDepot *>(Squirrel::GetRealInstance(vm, index, "EventVehicleWaitingInDepot")); } };
	template <> struct Param<const ScriptEventVehicleWaitingInDepot &> { static inline const ScriptEventVehicleWaitingInDepot &Get(HSQUIRRELVM vm, int index) { return *static_cast<ScriptEventVehicleWaitingInDepot *>(Squirrel::GetRealInstance(vm, index, "EventVehicleWaitingInDepot")); } };
	template <> struct Return<ScriptEventVehicleWaitingInDepot *> { static inline int Set(HSQUIRRELVM vm, ScriptEventVehicleWaitingInDepot *res) { if (res == nullptr) { sq_pushnull(vm); return 1; } res->AddRef(); Squirrel::CreateClassInstanceVM(vm, "EventVehicleWaitingInDepot", res, nullptr, DefSQDestructorCallback<ScriptEventVehicleWaitingInDepot>, true); return 1; } };
} // namespace SQConvert

namespace SQConvert {
	/* Allow ScriptEventVehicleUnprofitable to be used as Squirrel parameter */
	template <> struct Param<ScriptEventVehicleUnprofitable *> { static inline ScriptEventVehicleUnprofitable *Get(HSQUIRRELVM vm, int index) { return  static_cast<ScriptEventVehicleUnprofitable *>(Squirrel::GetRealInstance(vm, index, "EventVehicleUnprofitable")); } };
	template <> struct Param<ScriptEventVehicleUnprofitable &> { static inline ScriptEventVehicleUnprofitable &Get(HSQUIRRELVM vm, int index) { return *static_cast<ScriptEventVehicleUnprofitable *>(Squirrel::GetRealInstance(vm, index, "EventVehicleUnprofitable")); } };
	template <> struct Param<const ScriptEventVehicleUnprofitable *> { static inline const ScriptEventVehicleUnprofitable *Get(HSQUIRRELVM vm, int index) { return  static_cast<ScriptEventVehicleUnprofitable *>(Squirrel::GetRealInstance(vm, index, "EventVehicleUnprofitable")); } };
	template <> struct Param<const ScriptEventVehicleUnprofitable &> { static inline const ScriptEventVehicleUnprofitable &Get(HSQUIRRELVM vm, int index) { return *static_cast<ScriptEventVehicleUnprofitable *>(Squirrel::GetRealInstance(vm, index, "EventVehicleUnprofitable")); } };
	template <> struct Return<ScriptEventVehicleUnprofitable *> { static inline int Set(HSQUIRRELVM vm, ScriptEventVehicleUnprofitable *res) { if (res == nullptr) { sq_pushnull(vm); return 1; } res->AddRef(); Squirrel::CreateClassInstanceVM(vm, "EventVehicleUnprofitable", res, nullptr, DefSQDestructorCallback<ScriptEventVehicleUnprofitable>, true); return 1; } };
} // namespace SQConvert

namespace SQConvert {
	/* Allow ScriptEventIndustryOpen to be used as Squirrel parameter */
	template <> struct Param<ScriptEventIndustryOpen *> { static inline ScriptEventIndustryOpen *Get(HSQUIRRELVM vm, int index) { return  static_cast<ScriptEventIndustryOpen *>(Squirrel::GetRealInstance(vm, index, "EventIndustryOpen")); } };
	template <> struct Param<ScriptEventIndustryOpen &> { static inline ScriptEventIndustryOpen &Get(HSQUIRRELVM vm, int index) { return *static_cast<ScriptEventIndustryOpen *>(Squirrel::GetRealInstance(vm, index, "EventIndustryOpen")); } };
	template <> struct Param<const ScriptEventIndustryOpen *> { static inline const ScriptEventIndustryOpen *Get(HSQUIRRELVM vm, int index) { return  static_cast<ScriptEventIndustryOpen *>(Squirrel::GetRealInstance(vm, index, "EventIndustryOpen")); } };
	template <> struct Param<const ScriptEventIndustryOpen &> { static inline const ScriptEventIndustryOpen &Get(HSQUIRRELVM vm, int index) { return *static_cast<ScriptEventIndustryOpen *>(Squirrel::GetRealInstance(vm, index, "EventIndustryOpen")); } };
	template <> struct Return<ScriptEventIndustryOpen *> { static inline int Set(HSQUIRRELVM vm, ScriptEventIndustryOpen *res) { if (res == nullptr) { sq_pushnull(vm); return 1; } res->AddRef(); Squirrel::CreateClassInstanceVM(vm, "EventIndustryOpen", res, nullptr, DefSQDestructorCallback<ScriptEventIndustryOpen>, true); return 1; } };
} // namespace SQConvert

namespace SQConvert {
	/* Allow ScriptEventIndustryClose to be used as Squirrel parameter */
	template <> struct Param<ScriptEventIndustryClose *> { static inline ScriptEventIndustryClose *Get(HSQUIRRELVM vm, int index) { return  static_cast<ScriptEventIndustryClose *>(Squirrel::GetRealInstance(vm, index, "EventIndustryClose")); } };
	template <> struct Param<ScriptEventIndustryClose &> { static inline ScriptEventIndustryClose &Get(HSQUIRRELVM vm, int index) { return *static_cast<ScriptEventIndustryClose *>(Squirrel::GetRealInstance(vm, index, "EventIndustryClose")); } };
	template <> struct Param<const ScriptEventIndustryClose *> { static inline const ScriptEventIndustryClose *Get(HSQUIRRELVM vm, int index) { return  static_cast<ScriptEventIndustryClose *>(Squirrel::GetRealInstance(vm, index, "EventIndustryClose")); } };
	template <> struct Param<const ScriptEventIndustryClose &> { static inline const ScriptEventIndustryClose &Get(HSQUIRRELVM vm, int index) { return *static_cast<ScriptEventIndustryClose *>(Squirrel::GetRealInstance(vm, index, "EventIndustryClose")); } };
	template <> struct Return<ScriptEventIndustryClose *> { static inline int Set(HSQUIRRELVM vm, ScriptEventIndustryClose *res) { if (res == nullptr) { sq_pushnull(vm); return 1; } res->AddRef(); Squirrel::CreateClassInstanceVM(vm, "EventIndustryClose", res, nullptr, DefSQDestructorCallback<ScriptEventIndustryClose>, true); return 1; } };
} // namespace SQConvert

namespace SQConvert {
	/* Allow ScriptEventEngineAvailable to be used as Squirrel parameter */
	template <> struct Param<ScriptEventEngineAvailable *> { static inline ScriptEventEngineAvailable *Get(HSQUIRRELVM vm, int index) { return  static_cast<ScriptEventEngineAvailable *>(Squirrel::GetRealInstance(vm, index, "EventEngineAvailable")); } };
	template <> struct Param<ScriptEventEngineAvailable &> { static inline ScriptEventEngineAvailable &Get(HSQUIRRELVM vm, int index) { return *static_cast<ScriptEventEngineAvailable *>(Squirrel::GetRealInstance(vm, index, "EventEngineAvailable")); } };
	template <> struct Param<const ScriptEventEngineAvailable *> { static inline const ScriptEventEngineAvailable *Get(HSQUIRRELVM vm, int index) { return  static_cast<ScriptEventEngineAvailable *>(Squirrel::GetRealInstance(vm, index, "EventEngineAvailable")); } };
	template <> struct Param<const ScriptEventEngineAvailable &> { static inline const ScriptEventEngineAvailable &Get(HSQUIRRELVM vm, int index) { return *static_cast<ScriptEventEngineAvailable *>(Squirrel::GetRealInstance(vm, index, "EventEngineAvailable")); } };
	template <> struct Return<ScriptEventEngineAvailable *> { static inline int Set(HSQUIRRELVM vm, ScriptEventEngineAvailable *res) { if (res == nullptr) { sq_pushnull(vm); return 1; } res->AddRef(); Squirrel::CreateClassInstanceVM(vm, "EventEngineAvailable", res, nullptr, DefSQDestructorCallback<ScriptEventEngineAvailable>, true); return 1; } };
} // namespace SQConvert

namespace SQConvert {
	/* Allow ScriptEventStationFirstVehicle to be used as Squirrel parameter */
	template <> struct Param<ScriptEventStationFirstVehicle *> { static inline ScriptEventStationFirstVehicle *Get(HSQUIRRELVM vm, int index) { return  static_cast<ScriptEventStationFirstVehicle *>(Squirrel::GetRealInstance(vm, index, "EventStationFirstVehicle")); } };
	template <> struct Param<ScriptEventStationFirstVehicle &> { static inline ScriptEventStationFirstVehicle &Get(HSQUIRRELVM vm, int index) { return *static_cast<ScriptEventStationFirstVehicle *>(Squirrel::GetRealInstance(vm, index, "EventStationFirstVehicle")); } };
	template <> struct Param<const ScriptEventStationFirstVehicle *> { static inline const ScriptEventStationFirstVehicle *Get(HSQUIRRELVM vm, int index) { return  static_cast<ScriptEventStationFirstVehicle *>(Squirrel::GetRealInstance(vm, index, "EventStationFirstVehicle")); } };
	template <> struct Param<const ScriptEventStationFirstVehicle &> { static inline const ScriptEventStationFirstVehicle &Get(HSQUIRRELVM vm, int index) { return *static_cast<ScriptEventStationFirstVehicle *>(Squirrel::GetRealInstance(vm, index, "EventStationFirstVehicle")); } };
	template <> struct Return<ScriptEventStationFirstVehicle *> { static inline int Set(HSQUIRRELVM vm, ScriptEventStationFirstVehicle *res) { if (res == nullptr) { sq_pushnull(vm); return 1; } res->AddRef(); Squirrel::CreateClassInstanceVM(vm, "EventStationFirstVehicle", res, nullptr, DefSQDestructorCallback<ScriptEventStationFirstVehicle>, true); return 1; } };
} // namespace SQConvert

namespace SQConvert {
	/* Allow ScriptEventDisasterZeppelinerCrashed to be used as Squirrel parameter */
	template <> struct Param<ScriptEventDisasterZeppelinerCrashed *> { static inline ScriptEventDisasterZeppelinerCrashed *Get(HSQUIRRELVM vm, int index) { return  static_cast<ScriptEventDisasterZeppelinerCrashed *>(Squirrel::GetRealInstance(vm, index, "EventDisasterZeppelinerCrashed")); } };
	template <> struct Param<ScriptEventDisasterZeppelinerCrashed &> { static inline ScriptEventDisasterZeppelinerCrashed &Get(HSQUIRRELVM vm, int index) { return *static_cast<ScriptEventDisasterZeppelinerCrashed *>(Squirrel::GetRealInstance(vm, index, "EventDisasterZeppelinerCrashed")); } };
	template <> struct Param<const ScriptEventDisasterZeppelinerCrashed *> { static inline const ScriptEventDisasterZeppelinerCrashed *Get(HSQUIRRELVM vm, int index) { return  static_cast<ScriptEventDisasterZeppelinerCrashed *>(Squirrel::GetRealInstance(vm, index, "EventDisasterZeppelinerCrashed")); } };
	template <> struct Param<const ScriptEventDisasterZeppelinerCrashed &> { static inline const ScriptEventDisasterZeppelinerCrashed &Get(HSQUIRRELVM vm, int index) { return *static_cast<ScriptEventDisasterZeppelinerCrashed *>(Squirrel::GetRealInstance(vm, index, "EventDisasterZeppelinerCrashed")); } };
	template <> struct Return<ScriptEventDisasterZeppelinerCrashed *> { static inline int Set(HSQUIRRELVM vm, ScriptEventDisasterZeppelinerCrashed *res) { if (res == nullptr) { sq_pushnull(vm); return 1; } res->AddRef(); Squirrel::CreateClassInstanceVM(vm, "EventDisasterZeppelinerCrashed", res, nullptr, DefSQDestructorCallback<ScriptEventDisasterZeppelinerCrashed>, true); return 1; } };
} // namespace SQConvert

namespace SQConvert {
	/* Allow ScriptEventDisasterZeppelinerCleared to be used as Squirrel parameter */
	template <> struct Param<ScriptEventDisasterZeppelinerCleared *> { static inline ScriptEventDisasterZeppelinerCleared *Get(HSQUIRRELVM vm, int index) { return  static_cast<ScriptEventDisasterZeppelinerCleared *>(Squirrel::GetRealInstance(vm, index, "EventDisasterZeppelinerCleared")); } };
	template <> struct Param<ScriptEventDisasterZeppelinerCleared &> { static inline ScriptEventDisasterZeppelinerCleared &Get(HSQUIRRELVM vm, int index) { return *static_cast<ScriptEventDisasterZeppelinerCleared *>(Squirrel::GetRealInstance(vm, index, "EventDisasterZeppelinerCleared")); } };
	template <> struct Param<const ScriptEventDisasterZeppelinerCleared *> { static inline const ScriptEventDisasterZeppelinerCleared *Get(HSQUIRRELVM vm, int index) { return  static_cast<ScriptEventDisasterZeppelinerCleared *>(Squirrel::GetRealInstance(vm, index, "EventDisasterZeppelinerCleared")); } };
	template <> struct Param<const ScriptEventDisasterZeppelinerCleared &> { static inline const ScriptEventDisasterZeppelinerCleared &Get(HSQUIRRELVM vm, int index) { return *static_cast<ScriptEventDisasterZeppelinerCleared *>(Squirrel::GetRealInstance(vm, index, "EventDisasterZeppelinerCleared")); } };
	template <> struct Return<ScriptEventDisasterZeppelinerCleared *> { static inline int Set(HSQUIRRELVM vm, ScriptEventDisasterZeppelinerCleared *res) { if (res == nullptr) { sq_pushnull(vm); return 1; } res->AddRef(); Squirrel::CreateClassInstanceVM(vm, "EventDisasterZeppelinerCleared", res, nullptr, DefSQDestructorCallback<ScriptEventDisasterZeppelinerCleared>, true); return 1; } };
} // namespace SQConvert

namespace SQConvert {
	/* Allow ScriptEventTownFounded to be used as Squirrel parameter */
	template <> struct Param<ScriptEventTownFounded *> { static inline ScriptEventTownFounded *Get(HSQUIRRELVM vm, int index) { return  static_cast<ScriptEventTownFounded *>(Squirrel::GetRealInstance(vm, index, "EventTownFounded")); } };
	template <> struct Param<ScriptEventTownFounded &> { static inline ScriptEventTownFounded &Get(HSQUIRRELVM vm, int index) { return *static_cast<ScriptEventTownFounded *>(Squirrel::GetRealInstance(vm, index, "EventTownFounded")); } };
	template <> struct Param<const ScriptEventTownFounded *> { static inline const ScriptEventTownFounded *Get(HSQUIRRELVM vm, int index) { return  static_cast<ScriptEventTownFounded *>(Squirrel::GetRealInstance(vm, index, "EventTownFounded")); } };
	template <> struct Param<const ScriptEventTownFounded &> { static inline const ScriptEventTownFounded &Get(HSQUIRRELVM vm, int index) { return *static_cast<ScriptEventTownFounded *>(Squirrel::GetRealInstance(vm, index, "EventTownFounded")); } };
	template <> struct Return<ScriptEventTownFounded *> { static inline int Set(HSQUIRRELVM vm, ScriptEventTownFounded *res) { if (res == nullptr) { sq_pushnull(vm); return 1; } res->AddRef(); Squirrel::CreateClassInstanceVM(vm, "EventTownFounded", res, nullptr, DefSQDestructorCallback<ScriptEventTownFounded>, true); return 1; } };
} // namespace SQConvert

namespace SQConvert {
	/* Allow ScriptEventAircraftDestTooFar to be used as Squirrel parameter */
	template <> struct Param<ScriptEventAircraftDestTooFar *> { static inline ScriptEventAircraftDestTooFar *Get(HSQUIRRELVM vm, int index) { return  static_cast<ScriptEventAircraftDestTooFar *>(Squirrel::GetRealInstance(vm, index, "EventAircraftDestTooFar")); } };
	template <> struct Param<ScriptEventAircraftDestTooFar &> { static inline ScriptEventAircraftDestTooFar &Get(HSQUIRRELVM vm, int index) { return *static_cast<ScriptEventAircraftDestTooFar *>(Squirrel::GetRealInstance(vm, index, "EventAircraftDestTooFar")); } };
	template <> struct Param<const ScriptEventAircraftDestTooFar *> { static inline const ScriptEventAircraftDestTooFar *Get(HSQUIRRELVM vm, int index) { return  static_cast<ScriptEventAircraftDestTooFar *>(Squirrel::GetRealInstance(vm, index, "EventAircraftDestTooFar")); } };
	template <> struct Param<const ScriptEventAircraftDestTooFar &> { static inline const ScriptEventAircraftDestTooFar &Get(HSQUIRRELVM vm, int index) { return *static_cast<ScriptEventAircraftDestTooFar *>(Squirrel::GetRealInstance(vm, index, "EventAircraftDestTooFar")); } };
	template <> struct Return<ScriptEventAircraftDestTooFar *> { static inline int Set(HSQUIRRELVM vm, ScriptEventAircraftDestTooFar *res) { if (res == nullptr) { sq_pushnull(vm); return 1; } res->AddRef(); Squirrel::CreateClassInstanceVM(vm, "EventAircraftDestTooFar", res, nullptr, DefSQDestructorCallback<ScriptEventAircraftDestTooFar>, true); return 1; } };
} // namespace SQConvert

namespace SQConvert {
	/* Allow ScriptEventAdminPort to be used as Squirrel parameter */
	template <> struct Param<ScriptEventAdminPort *> { static inline ScriptEventAdminPort *Get(HSQUIRRELVM vm, int index) { return  static_cast<ScriptEventAdminPort *>(Squirrel::GetRealInstance(vm, index, "EventAdminPort")); } };
	template <> struct Param<ScriptEventAdminPort &> { static inline ScriptEventAdminPort &Get(HSQUIRRELVM vm, int index) { return *static_cast<ScriptEventAdminPort *>(Squirrel::GetRealInstance(vm, index, "EventAdminPort")); } };
	template <> struct Param<const ScriptEventAdminPort *> { static inline const ScriptEventAdminPort *Get(HSQUIRRELVM vm, int index) { return  static_cast<ScriptEventAdminPort *>(Squirrel::GetRealInstance(vm, index, "EventAdminPort")); } };
	template <> struct Param<const ScriptEventAdminPort &> { static inline const ScriptEventAdminPort &Get(HSQUIRRELVM vm, int index) { return *static_cast<ScriptEventAdminPort *>(Squirrel::GetRealInstance(vm, index, "EventAdminPort")); } };
	template <> struct Return<ScriptEventAdminPort *> { static inline int Set(HSQUIRRELVM vm, ScriptEventAdminPort *res) { if (res == nullptr) { sq_pushnull(vm); return 1; } res->AddRef(); Squirrel::CreateClassInstanceVM(vm, "EventAdminPort", res, nullptr, DefSQDestructorCallback<ScriptEventAdminPort>, true); return 1; } };
} // namespace SQConvert

namespace SQConvert {
	/* Allow ScriptEventWindowWidgetClick to be used as Squirrel parameter */
	template <> struct Param<ScriptEventWindowWidgetClick *> { static inline ScriptEventWindowWidgetClick *Get(HSQUIRRELVM vm, int index) { return  static_cast<ScriptEventWindowWidgetClick *>(Squirrel::GetRealInstance(vm, index, "EventWindowWidgetClick")); } };
	template <> struct Param<ScriptEventWindowWidgetClick &> { static inline ScriptEventWindowWidgetClick &Get(HSQUIRRELVM vm, int index) { return *static_cast<ScriptEventWindowWidgetClick *>(Squirrel::GetRealInstance(vm, index, "EventWindowWidgetClick")); } };
	template <> struct Param<const ScriptEventWindowWidgetClick *> { static inline const ScriptEventWindowWidgetClick *Get(HSQUIRRELVM vm, int index) { return  static_cast<ScriptEventWindowWidgetClick *>(Squirrel::GetRealInstance(vm, index, "EventWindowWidgetClick")); } };
	template <> struct Param<const ScriptEventWindowWidgetClick &> { static inline const ScriptEventWindowWidgetClick &Get(HSQUIRRELVM vm, int index) { return *static_cast<ScriptEventWindowWidgetClick *>(Squirrel::GetRealInstance(vm, index, "EventWindowWidgetClick")); } };
	template <> struct Return<ScriptEventWindowWidgetClick *> { static inline int Set(HSQUIRRELVM vm, ScriptEventWindowWidgetClick *res) { if (res == nullptr) { sq_pushnull(vm); return 1; } res->AddRef(); Squirrel::CreateClassInstanceVM(vm, "EventWindowWidgetClick", res, nullptr, DefSQDestructorCallback<ScriptEventWindowWidgetClick>, true); return 1; } };
} // namespace SQConvert

namespace SQConvert {
	/* Allow ScriptEventGoalQuestionAnswer to be used as Squirrel parameter */
	template <> struct Param<ScriptEventGoalQuestionAnswer *> { static inline ScriptEventGoalQuestionAnswer *Get(HSQUIRRELVM vm, int index) { return  static_cast<ScriptEventGoalQuestionAnswer *>(Squirrel::GetRealInstance(vm, index, "EventGoalQuestionAnswer")); } };
	template <> struct Param<ScriptEventGoalQuestionAnswer &> { static inline ScriptEventGoalQuestionAnswer &Get(HSQUIRRELVM vm, int index) { return *static_cast<ScriptEventGoalQuestionAnswer *>(Squirrel::GetRealInstance(vm, index, "EventGoalQuestionAnswer")); } };
	template <> struct Param<const ScriptEventGoalQuestionAnswer *> { static inline const ScriptEventGoalQuestionAnswer *Get(HSQUIRRELVM vm, int index) { return  static_cast<ScriptEventGoalQuestionAnswer *>(Squirrel::GetRealInstance(vm, index, "EventGoalQuestionAnswer")); } };
	template <> struct Param<const ScriptEventGoalQuestionAnswer &> { static inline const ScriptEventGoalQuestionAnswer &Get(HSQUIRRELVM vm, int index) { return *static_cast<ScriptEventGoalQuestionAnswer *>(Squirrel::GetRealInstance(vm, index, "EventGoalQuestionAnswer")); } };
	template <> struct Return<ScriptEventGoalQuestionAnswer *> { static inline int Set(HSQUIRRELVM vm, ScriptEventGoalQuestionAnswer *res) { if (res == nullptr) { sq_pushnull(vm); return 1; } res->AddRef(); Squirrel::CreateClassInstanceVM(vm, "EventGoalQuestionAnswer", res, nullptr, DefSQDestructorCallback<ScriptEventGoalQuestionAnswer>, true); return 1; } };
} // namespace SQConvert

namespace SQConvert {
	/* Allow ScriptEventCompanyTown to be used as Squirrel parameter */
	template <> struct Param<ScriptEventCompanyTown *> { static inline ScriptEventCompanyTown *Get(HSQUIRRELVM vm, int index) { return  static_cast<ScriptEventCompanyTown *>(Squirrel::GetRealInstance(vm, index, "EventCompanyTown")); } };
	template <> struct Param<ScriptEventCompanyTown &> { static inline ScriptEventCompanyTown &Get(HSQUIRRELVM vm, int index) { return *static_cast<ScriptEventCompanyTown *>(Squirrel::GetRealInstance(vm, index, "EventCompanyTown")); } };
	template <> struct Param<const ScriptEventCompanyTown *> { static inline const ScriptEventCompanyTown *Get(HSQUIRRELVM vm, int index) { return  static_cast<ScriptEventCompanyTown *>(Squirrel::GetRealInstance(vm, index, "EventCompanyTown")); } };
	template <> struct Param<const ScriptEventCompanyTown &> { static inline const ScriptEventCompanyTown &Get(HSQUIRRELVM vm, int index) { return *static_cast<ScriptEventCompanyTown *>(Squirrel::GetRealInstance(vm, index, "EventCompanyTown")); } };
	template <> struct Return<ScriptEventCompanyTown *> { static inline int Set(HSQUIRRELVM vm, ScriptEventCompanyTown *res) { if (res == nullptr) { sq_pushnull(vm); return 1; } res->AddRef(); Squirrel::CreateClassInstanceVM(vm, "EventCompanyTown", res, nullptr, DefSQDestructorCallback<ScriptEventCompanyTown>, true); return 1; } };
} // namespace SQConvert

namespace SQConvert {
	/* Allow ScriptEventExclusiveTransportRights to be used as Squirrel parameter */
	template <> struct Param<ScriptEventExclusiveTransportRights *> { static inline ScriptEventExclusiveTransportRights *Get(HSQUIRRELVM vm, int index) { return  static_cast<ScriptEventExclusiveTransportRights *>(Squirrel::GetRealInstance(vm, index, "EventExclusiveTransportRights")); } };
	template <> struct Param<ScriptEventExclusiveTransportRights &> { static inline ScriptEventExclusiveTransportRights &Get(HSQUIRRELVM vm, int index) { return *static_cast<ScriptEventExclusiveTransportRights *>(Squirrel::GetRealInstance(vm, index, "EventExclusiveTransportRights")); } };
	template <> struct Param<const ScriptEventExclusiveTransportRights *> { static inline const ScriptEventExclusiveTransportRights *Get(HSQUIRRELVM vm, int index) { return  static_cast<ScriptEventExclusiveTransportRights *>(Squirrel::GetRealInstance(vm, index, "EventExclusiveTransportRights")); } };
	template <> struct Param<const ScriptEventExclusiveTransportRights &> { static inline const ScriptEventExclusiveTransportRights &Get(HSQUIRRELVM vm, int index) { return *static_cast<ScriptEventExclusiveTransportRights *>(Squirrel::GetRealInstance(vm, index, "EventExclusiveTransportRights")); } };
	template <> struct Return<ScriptEventExclusiveTransportRights *> { static inline int Set(HSQUIRRELVM vm, ScriptEventExclusiveTransportRights *res) { if (res == nullptr) { sq_pushnull(vm); return 1; } res->AddRef(); Squirrel::CreateClassInstanceVM(vm, "EventExclusiveTransportRights", res, nullptr, DefSQDestructorCallback<ScriptEventExclusiveTransportRights>, true); return 1; } };
} // namespace SQConvert

namespace SQConvert {
	/* Allow ScriptEventRoadReconstruction to be used as Squirrel parameter */
	template <> struct Param<ScriptEventRoadReconstruction *> { static inline ScriptEventRoadReconstruction *Get(HSQUIRRELVM vm, int index) { return  static_cast<ScriptEventRoadReconstruction *>(Squirrel::GetRealInstance(vm, index, "EventRoadReconstruction")); } };
	template <> struct Param<ScriptEventRoadReconstruction &> { static inline ScriptEventRoadReconstruction &Get(HSQUIRRELVM vm, int index) { return *static_cast<ScriptEventRoadReconstruction *>(Squirrel::GetRealInstance(vm, index, "EventRoadReconstruction")); } };
	template <> struct Param<const ScriptEventRoadReconstruction *> { static inline const ScriptEventRoadReconstruction *Get(HSQUIRRELVM vm, int index) { return  static_cast<ScriptEventRoadReconstruction *>(Squirrel::GetRealInstance(vm, index, "EventRoadReconstruction")); } };
	template <> struct Param<const ScriptEventRoadReconstruction &> { static inline const ScriptEventRoadReconstruction &Get(HSQUIRRELVM vm, int index) { return *static_cast<ScriptEventRoadReconstruction *>(Squirrel::GetRealInstance(vm, index, "EventRoadReconstruction")); } };
	template <> struct Return<ScriptEventRoadReconstruction *> { static inline int Set(HSQUIRRELVM vm, ScriptEventRoadReconstruction *res) { if (res == nullptr) { sq_pushnull(vm); return 1; } res->AddRef(); Squirrel::CreateClassInstanceVM(vm, "EventRoadReconstruction", res, nullptr, DefSQDestructorCallback<ScriptEventRoadReconstruction>, true); return 1; } };
} // namespace SQConvert

namespace SQConvert {
	/* Allow ScriptEventVehicleAutoReplaced to be used as Squirrel parameter */
	template <> struct Param<ScriptEventVehicleAutoReplaced *> { static inline ScriptEventVehicleAutoReplaced *Get(HSQUIRRELVM vm, int index) { return  static_cast<ScriptEventVehicleAutoReplaced *>(Squirrel::GetRealInstance(vm, index, "EventVehicleAutoReplaced")); } };
	template <> struct Param<ScriptEventVehicleAutoReplaced &> { static inline ScriptEventVehicleAutoReplaced &Get(HSQUIRRELVM vm, int index) { return *static_cast<ScriptEventVehicleAutoReplaced *>(Squirrel::GetRealInstance(vm, index, "EventVehicleAutoReplaced")); } };
	template <> struct Param<const ScriptEventVehicleAutoReplaced *> { static inline const ScriptEventVehicleAutoReplaced *Get(HSQUIRRELVM vm, int index) { return  static_cast<ScriptEventVehicleAutoReplaced *>(Squirrel::GetRealInstance(vm, index, "EventVehicleAutoReplaced")); } };
	template <> struct Param<const ScriptEventVehicleAutoReplaced &> { static inline const ScriptEventVehicleAutoReplaced &Get(HSQUIRRELVM vm, int index) { return *static_cast<ScriptEventVehicleAutoReplaced *>(Squirrel::GetRealInstance(vm, index, "EventVehicleAutoReplaced")); } };
	template <> struct Return<ScriptEventVehicleAutoReplaced *> { static inline int Set(HSQUIRRELVM vm, ScriptEventVehicleAutoReplaced *res) { if (res == nullptr) { sq_pushnull(vm); return 1; } res->AddRef(); Squirrel::CreateClassInstanceVM(vm, "EventVehicleAutoReplaced", res, nullptr, DefSQDestructorCallback<ScriptEventVehicleAutoReplaced>, true); return 1; } };
} // namespace SQConvert

namespace SQConvert {
	/* Allow ScriptEventStoryPageButtonClick to be used as Squirrel parameter */
	template <> struct Param<ScriptEventStoryPageButtonClick *> { static inline ScriptEventStoryPageButtonClick *Get(HSQUIRRELVM vm, int index) { return  static_cast<ScriptEventStoryPageButtonClick *>(Squirrel::GetRealInstance(vm, index, "EventStoryPageButtonClick")); } };
	template <> struct Param<ScriptEventStoryPageButtonClick &> { static inline ScriptEventStoryPageButtonClick &Get(HSQUIRRELVM vm, int index) { return *static_cast<ScriptEventStoryPageButtonClick *>(Squirrel::GetRealInstance(vm, index, "EventStoryPageButtonClick")); } };
	template <> struct Param<const ScriptEventStoryPageButtonClick *> { static inline const ScriptEventStoryPageButtonClick *Get(HSQUIRRELVM vm, int index) { return  static_cast<ScriptEventStoryPageButtonClick *>(Squirrel::GetRealInstance(vm, index, "EventStoryPageButtonClick")); } };
	template <> struct Param<const ScriptEventStoryPageButtonClick &> { static inline const ScriptEventStoryPageButtonClick &Get(HSQUIRRELVM vm, int index) { return *static_cast<ScriptEventStoryPageButtonClick *>(Squirrel::GetRealInstance(vm, index, "EventStoryPageButtonClick")); } };
	template <> struct Return<ScriptEventStoryPageButtonClick *> { static inline int Set(HSQUIRRELVM vm, ScriptEventStoryPageButtonClick *res) { if (res == nullptr) { sq_pushnull(vm); return 1; } res->AddRef(); Squirrel::CreateClassInstanceVM(vm, "EventStoryPageButtonClick", res, nullptr, DefSQDestructorCallback<ScriptEventStoryPageButtonClick>, true); return 1; } };
} // namespace SQConvert

namespace SQConvert {
	/* Allow ScriptEventStoryPageTileSelect to be used as Squirrel parameter */
	template <> struct Param<ScriptEventStoryPageTileSelect *> { static inline ScriptEventStoryPageTileSelect *Get(HSQUIRRELVM vm, int index) { return  static_cast<ScriptEventStoryPageTileSelect *>(Squirrel::GetRealInstance(vm, index, "EventStoryPageTileSelect")); } };
	template <> struct Param<ScriptEventStoryPageTileSelect &> { static inline ScriptEventStoryPageTileSelect &Get(HSQUIRRELVM vm, int index) { return *static_cast<ScriptEventStoryPageTileSelect *>(Squirrel::GetRealInstance(vm, index, "EventStoryPageTileSelect")); } };
	template <> struct Param<const ScriptEventStoryPageTileSelect *> { static inline const ScriptEventStoryPageTileSelect *Get(HSQUIRRELVM vm, int index) { return  static_cast<ScriptEventStoryPageTileSelect *>(Squirrel::GetRealInstance(vm, index, "EventStoryPageTileSelect")); } };
	template <> struct Param<const ScriptEventStoryPageTileSelect &> { static inline const ScriptEventStoryPageTileSelect &Get(HSQUIRRELVM vm, int index) { return *static_cast<ScriptEventStoryPageTileSelect *>(Squirrel::GetRealInstance(vm, index, "EventStoryPageTileSelect")); } };
	template <> struct Return<ScriptEventStoryPageTileSelect *> { static inline int Set(HSQUIRRELVM vm, ScriptEventStoryPageTileSelect *res) { if (res == nullptr) { sq_pushnull(vm); return 1; } res->AddRef(); Squirrel::CreateClassInstanceVM(vm, "EventStoryPageTileSelect", res, nullptr, DefSQDestructorCallback<ScriptEventStoryPageTileSelect>, true); return 1; } };
} // namespace SQConvert

namespace SQConvert {
	/* Allow ScriptEventStoryPageVehicleSelect to be used as Squirrel parameter */
	template <> struct Param<ScriptEventStoryPageVehicleSelect *> { static inline ScriptEventStoryPageVehicleSelect *Get(HSQUIRRELVM vm, int index) { return  static_cast<ScriptEventStoryPageVehicleSelect *>(Squirrel::GetRealInstance(vm, index, "EventStoryPageVehicleSelect")); } };
	template <> struct Param<ScriptEventStoryPageVehicleSelect &> { static inline ScriptEventStoryPageVehicleSelect &Get(HSQUIRRELVM vm, int index) { return *static_cast<ScriptEventStoryPageVehicleSelect *>(Squirrel::GetRealInstance(vm, index, "EventStoryPageVehicleSelect")); } };
	template <> struct Param<const ScriptEventStoryPageVehicleSelect *> { static inline const ScriptEventStoryPageVehicleSelect *Get(HSQUIRRELVM vm, int index) { return  static_cast<ScriptEventStoryPageVehicleSelect *>(Squirrel::GetRealInstance(vm, index, "EventStoryPageVehicleSelect")); } };
	template <> struct Param<const ScriptEventStoryPageVehicleSelect &> { static inline const ScriptEventStoryPageVehicleSelect &Get(HSQUIRRELVM vm, int index) { return *static_cast<ScriptEventStoryPageVehicleSelect *>(Squirrel::GetRealInstance(vm, index, "EventStoryPageVehicleSelect")); } };
	template <> struct Return<ScriptEventStoryPageVehicleSelect *> { static inline int Set(HSQUIRRELVM vm, ScriptEventStoryPageVehicleSelect *res) { if (res == nullptr) { sq_pushnull(vm); return 1; } res->AddRef(); Squirrel::CreateClassInstanceVM(vm, "EventStoryPageVehicleSelect", res, nullptr, DefSQDestructorCallback<ScriptEventStoryPageVehicleSelect>, true); return 1; } };
} // namespace SQConvert

namespace SQConvert {
	/* Allow ScriptEventPresidentRenamed to be used as Squirrel parameter */
	template <> struct Param<ScriptEventPresidentRenamed *> { static inline ScriptEventPresidentRenamed *Get(HSQUIRRELVM vm, int index) { return  static_cast<ScriptEventPresidentRenamed *>(Squirrel::GetRealInstance(vm, index, "EventPresidentRenamed")); } };
	template <> struct Param<ScriptEventPresidentRenamed &> { static inline ScriptEventPresidentRenamed &Get(HSQUIRRELVM vm, int index) { return *static_cast<ScriptEventPresidentRenamed *>(Squirrel::GetRealInstance(vm, index, "EventPresidentRenamed")); } };
	template <> struct Param<const ScriptEventPresidentRenamed *> { static inline const ScriptEventPresidentRenamed *Get(HSQUIRRELVM vm, int index) { return  static_cast<ScriptEventPresidentRenamed *>(Squirrel::GetRealInstance(vm, index, "EventPresidentRenamed")); } };
	template <> struct Param<const ScriptEventPresidentRenamed &> { static inline const ScriptEventPresidentRenamed &Get(HSQUIRRELVM vm, int index) { return *static_cast<ScriptEventPresidentRenamed *>(Squirrel::GetRealInstance(vm, index, "EventPresidentRenamed")); } };
	template <> struct Return<ScriptEventPresidentRenamed *> { static inline int Set(HSQUIRRELVM vm, ScriptEventPresidentRenamed *res) { if (res == nullptr) { sq_pushnull(vm); return 1; } res->AddRef(); Squirrel::CreateClassInstanceVM(vm, "EventPresidentRenamed", res, nullptr, DefSQDestructorCallback<ScriptEventPresidentRenamed>, true); return 1; } };
} // namespace SQConvert
