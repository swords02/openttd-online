/*
 * This file is part of OpenTTD.
 * OpenTTD is free software; you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, version 2.
 * OpenTTD is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 * See the GNU General Public License for more details. You should have received a copy of the GNU General Public License along with OpenTTD. If not, see <https://www.gnu.org/licenses/old-licenses/gpl-2.0>.
 */

/* THIS FILE IS AUTO-GENERATED; PLEASE DO NOT ALTER MANUALLY */

#include "../script_event_types.hpp"
#include "../template/template_event_types.sq.hpp"


template <> SQInteger PushClassName<ScriptEventVehicleCrashed, ScriptType::GS>(HSQUIRRELVM vm) { sq_pushstring(vm, "GSEventVehicleCrashed"); return 1; }

void SQGSEventVehicleCrashed_Register(Squirrel &engine)
{
	DefSQClass<ScriptEventVehicleCrashed, ScriptType::GS> SQGSEventVehicleCrashed("GSEventVehicleCrashed");
	SQGSEventVehicleCrashed.PreRegister(engine, "GSEvent");

	SQGSEventVehicleCrashed.DefSQConst(engine, ScriptEventVehicleCrashed::CRASH_TRAIN,               "CRASH_TRAIN");
	SQGSEventVehicleCrashed.DefSQConst(engine, ScriptEventVehicleCrashed::CRASH_RV_LEVEL_CROSSING,   "CRASH_RV_LEVEL_CROSSING");
	SQGSEventVehicleCrashed.DefSQConst(engine, ScriptEventVehicleCrashed::CRASH_RV_UFO,              "CRASH_RV_UFO");
	SQGSEventVehicleCrashed.DefSQConst(engine, ScriptEventVehicleCrashed::CRASH_PLANE_LANDING,       "CRASH_PLANE_LANDING");
	SQGSEventVehicleCrashed.DefSQConst(engine, ScriptEventVehicleCrashed::CRASH_AIRCRAFT_NO_AIRPORT, "CRASH_AIRCRAFT_NO_AIRPORT");
	SQGSEventVehicleCrashed.DefSQConst(engine, ScriptEventVehicleCrashed::CRASH_FLOODED,             "CRASH_FLOODED");

	SQGSEventVehicleCrashed.DefSQStaticMethod(engine, &ScriptEventVehicleCrashed::Convert, "Convert", ".x");

	SQGSEventVehicleCrashed.DefSQMethod(engine, &ScriptEventVehicleCrashed::GetVehicleID,    "GetVehicleID",    "x");
	SQGSEventVehicleCrashed.DefSQMethod(engine, &ScriptEventVehicleCrashed::GetCrashSite,    "GetCrashSite",    "x");
	SQGSEventVehicleCrashed.DefSQMethod(engine, &ScriptEventVehicleCrashed::GetCrashReason,  "GetCrashReason",  "x");
	SQGSEventVehicleCrashed.DefSQMethod(engine, &ScriptEventVehicleCrashed::GetVictims,      "GetVictims",      "x");
	SQGSEventVehicleCrashed.DefSQMethod(engine, &ScriptEventVehicleCrashed::GetVehicleOwner, "GetVehicleOwner", "x");

	SQGSEventVehicleCrashed.PostRegister(engine);
}


template <> SQInteger PushClassName<ScriptEventSubsidyOffer, ScriptType::GS>(HSQUIRRELVM vm) { sq_pushstring(vm, "GSEventSubsidyOffer"); return 1; }

void SQGSEventSubsidyOffer_Register(Squirrel &engine)
{
	DefSQClass<ScriptEventSubsidyOffer, ScriptType::GS> SQGSEventSubsidyOffer("GSEventSubsidyOffer");
	SQGSEventSubsidyOffer.PreRegister(engine, "GSEvent");

	SQGSEventSubsidyOffer.DefSQStaticMethod(engine, &ScriptEventSubsidyOffer::Convert, "Convert", ".x");

	SQGSEventSubsidyOffer.DefSQMethod(engine, &ScriptEventSubsidyOffer::GetSubsidyID, "GetSubsidyID", "x");

	SQGSEventSubsidyOffer.PostRegister(engine);
}


template <> SQInteger PushClassName<ScriptEventSubsidyOfferExpired, ScriptType::GS>(HSQUIRRELVM vm) { sq_pushstring(vm, "GSEventSubsidyOfferExpired"); return 1; }

void SQGSEventSubsidyOfferExpired_Register(Squirrel &engine)
{
	DefSQClass<ScriptEventSubsidyOfferExpired, ScriptType::GS> SQGSEventSubsidyOfferExpired("GSEventSubsidyOfferExpired");
	SQGSEventSubsidyOfferExpired.PreRegister(engine, "GSEvent");

	SQGSEventSubsidyOfferExpired.DefSQStaticMethod(engine, &ScriptEventSubsidyOfferExpired::Convert, "Convert", ".x");

	SQGSEventSubsidyOfferExpired.DefSQMethod(engine, &ScriptEventSubsidyOfferExpired::GetSubsidyID, "GetSubsidyID", "x");

	SQGSEventSubsidyOfferExpired.PostRegister(engine);
}


template <> SQInteger PushClassName<ScriptEventSubsidyAwarded, ScriptType::GS>(HSQUIRRELVM vm) { sq_pushstring(vm, "GSEventSubsidyAwarded"); return 1; }

void SQGSEventSubsidyAwarded_Register(Squirrel &engine)
{
	DefSQClass<ScriptEventSubsidyAwarded, ScriptType::GS> SQGSEventSubsidyAwarded("GSEventSubsidyAwarded");
	SQGSEventSubsidyAwarded.PreRegister(engine, "GSEvent");

	SQGSEventSubsidyAwarded.DefSQStaticMethod(engine, &ScriptEventSubsidyAwarded::Convert, "Convert", ".x");

	SQGSEventSubsidyAwarded.DefSQMethod(engine, &ScriptEventSubsidyAwarded::GetSubsidyID, "GetSubsidyID", "x");

	SQGSEventSubsidyAwarded.PostRegister(engine);
}


template <> SQInteger PushClassName<ScriptEventSubsidyExpired, ScriptType::GS>(HSQUIRRELVM vm) { sq_pushstring(vm, "GSEventSubsidyExpired"); return 1; }

void SQGSEventSubsidyExpired_Register(Squirrel &engine)
{
	DefSQClass<ScriptEventSubsidyExpired, ScriptType::GS> SQGSEventSubsidyExpired("GSEventSubsidyExpired");
	SQGSEventSubsidyExpired.PreRegister(engine, "GSEvent");

	SQGSEventSubsidyExpired.DefSQStaticMethod(engine, &ScriptEventSubsidyExpired::Convert, "Convert", ".x");

	SQGSEventSubsidyExpired.DefSQMethod(engine, &ScriptEventSubsidyExpired::GetSubsidyID, "GetSubsidyID", "x");

	SQGSEventSubsidyExpired.PostRegister(engine);
}


template <> SQInteger PushClassName<ScriptEventCompanyNew, ScriptType::GS>(HSQUIRRELVM vm) { sq_pushstring(vm, "GSEventCompanyNew"); return 1; }

void SQGSEventCompanyNew_Register(Squirrel &engine)
{
	DefSQClass<ScriptEventCompanyNew, ScriptType::GS> SQGSEventCompanyNew("GSEventCompanyNew");
	SQGSEventCompanyNew.PreRegister(engine, "GSEvent");

	SQGSEventCompanyNew.DefSQStaticMethod(engine, &ScriptEventCompanyNew::Convert, "Convert", ".x");

	SQGSEventCompanyNew.DefSQMethod(engine, &ScriptEventCompanyNew::GetCompanyID, "GetCompanyID", "x");

	SQGSEventCompanyNew.PostRegister(engine);
}


template <> SQInteger PushClassName<ScriptEventCompanyRenamed, ScriptType::GS>(HSQUIRRELVM vm) { sq_pushstring(vm, "GSEventCompanyRenamed"); return 1; }

void SQGSEventCompanyRenamed_Register(Squirrel &engine)
{
	DefSQClass<ScriptEventCompanyRenamed, ScriptType::GS> SQGSEventCompanyRenamed("GSEventCompanyRenamed");
	SQGSEventCompanyRenamed.PreRegister(engine, "GSEvent");

	SQGSEventCompanyRenamed.DefSQStaticMethod(engine, &ScriptEventCompanyRenamed::Convert, "Convert", ".x");

	SQGSEventCompanyRenamed.DefSQMethod(engine, &ScriptEventCompanyRenamed::GetCompanyID, "GetCompanyID", "x");
	SQGSEventCompanyRenamed.DefSQMethod(engine, &ScriptEventCompanyRenamed::GetNewName,   "GetNewName",   "x");

	SQGSEventCompanyRenamed.PostRegister(engine);
}


template <> SQInteger PushClassName<ScriptEventCompanyInTrouble, ScriptType::GS>(HSQUIRRELVM vm) { sq_pushstring(vm, "GSEventCompanyInTrouble"); return 1; }

void SQGSEventCompanyInTrouble_Register(Squirrel &engine)
{
	DefSQClass<ScriptEventCompanyInTrouble, ScriptType::GS> SQGSEventCompanyInTrouble("GSEventCompanyInTrouble");
	SQGSEventCompanyInTrouble.PreRegister(engine, "GSEvent");

	SQGSEventCompanyInTrouble.DefSQStaticMethod(engine, &ScriptEventCompanyInTrouble::Convert, "Convert", ".x");

	SQGSEventCompanyInTrouble.DefSQMethod(engine, &ScriptEventCompanyInTrouble::GetCompanyID, "GetCompanyID", "x");

	SQGSEventCompanyInTrouble.PostRegister(engine);
}


template <> SQInteger PushClassName<ScriptEventCompanyMerger, ScriptType::GS>(HSQUIRRELVM vm) { sq_pushstring(vm, "GSEventCompanyMerger"); return 1; }

void SQGSEventCompanyMerger_Register(Squirrel &engine)
{
	DefSQClass<ScriptEventCompanyMerger, ScriptType::GS> SQGSEventCompanyMerger("GSEventCompanyMerger");
	SQGSEventCompanyMerger.PreRegister(engine, "GSEvent");

	SQGSEventCompanyMerger.DefSQStaticMethod(engine, &ScriptEventCompanyMerger::Convert, "Convert", ".x");

	SQGSEventCompanyMerger.DefSQMethod(engine, &ScriptEventCompanyMerger::GetOldCompanyID, "GetOldCompanyID", "x");
	SQGSEventCompanyMerger.DefSQMethod(engine, &ScriptEventCompanyMerger::GetNewCompanyID, "GetNewCompanyID", "x");

	SQGSEventCompanyMerger.PostRegister(engine);
}


template <> SQInteger PushClassName<ScriptEventCompanyBankrupt, ScriptType::GS>(HSQUIRRELVM vm) { sq_pushstring(vm, "GSEventCompanyBankrupt"); return 1; }

void SQGSEventCompanyBankrupt_Register(Squirrel &engine)
{
	DefSQClass<ScriptEventCompanyBankrupt, ScriptType::GS> SQGSEventCompanyBankrupt("GSEventCompanyBankrupt");
	SQGSEventCompanyBankrupt.PreRegister(engine, "GSEvent");

	SQGSEventCompanyBankrupt.DefSQStaticMethod(engine, &ScriptEventCompanyBankrupt::Convert, "Convert", ".x");

	SQGSEventCompanyBankrupt.DefSQMethod(engine, &ScriptEventCompanyBankrupt::GetCompanyID, "GetCompanyID", "x");

	SQGSEventCompanyBankrupt.PostRegister(engine);
}


template <> SQInteger PushClassName<ScriptEventIndustryOpen, ScriptType::GS>(HSQUIRRELVM vm) { sq_pushstring(vm, "GSEventIndustryOpen"); return 1; }

void SQGSEventIndustryOpen_Register(Squirrel &engine)
{
	DefSQClass<ScriptEventIndustryOpen, ScriptType::GS> SQGSEventIndustryOpen("GSEventIndustryOpen");
	SQGSEventIndustryOpen.PreRegister(engine, "GSEvent");

	SQGSEventIndustryOpen.DefSQStaticMethod(engine, &ScriptEventIndustryOpen::Convert, "Convert", ".x");

	SQGSEventIndustryOpen.DefSQMethod(engine, &ScriptEventIndustryOpen::GetIndustryID, "GetIndustryID", "x");

	SQGSEventIndustryOpen.PostRegister(engine);
}


template <> SQInteger PushClassName<ScriptEventIndustryClose, ScriptType::GS>(HSQUIRRELVM vm) { sq_pushstring(vm, "GSEventIndustryClose"); return 1; }

void SQGSEventIndustryClose_Register(Squirrel &engine)
{
	DefSQClass<ScriptEventIndustryClose, ScriptType::GS> SQGSEventIndustryClose("GSEventIndustryClose");
	SQGSEventIndustryClose.PreRegister(engine, "GSEvent");

	SQGSEventIndustryClose.DefSQStaticMethod(engine, &ScriptEventIndustryClose::Convert, "Convert", ".x");

	SQGSEventIndustryClose.DefSQMethod(engine, &ScriptEventIndustryClose::GetIndustryID, "GetIndustryID", "x");

	SQGSEventIndustryClose.PostRegister(engine);
}


template <> SQInteger PushClassName<ScriptEventStationFirstVehicle, ScriptType::GS>(HSQUIRRELVM vm) { sq_pushstring(vm, "GSEventStationFirstVehicle"); return 1; }

void SQGSEventStationFirstVehicle_Register(Squirrel &engine)
{
	DefSQClass<ScriptEventStationFirstVehicle, ScriptType::GS> SQGSEventStationFirstVehicle("GSEventStationFirstVehicle");
	SQGSEventStationFirstVehicle.PreRegister(engine, "GSEvent");

	SQGSEventStationFirstVehicle.DefSQStaticMethod(engine, &ScriptEventStationFirstVehicle::Convert, "Convert", ".x");

	SQGSEventStationFirstVehicle.DefSQMethod(engine, &ScriptEventStationFirstVehicle::GetStationID, "GetStationID", "x");
	SQGSEventStationFirstVehicle.DefSQMethod(engine, &ScriptEventStationFirstVehicle::GetVehicleID, "GetVehicleID", "x");

	SQGSEventStationFirstVehicle.PostRegister(engine);
}


template <> SQInteger PushClassName<ScriptEventTownFounded, ScriptType::GS>(HSQUIRRELVM vm) { sq_pushstring(vm, "GSEventTownFounded"); return 1; }

void SQGSEventTownFounded_Register(Squirrel &engine)
{
	DefSQClass<ScriptEventTownFounded, ScriptType::GS> SQGSEventTownFounded("GSEventTownFounded");
	SQGSEventTownFounded.PreRegister(engine, "GSEvent");

	SQGSEventTownFounded.DefSQStaticMethod(engine, &ScriptEventTownFounded::Convert, "Convert", ".x");

	SQGSEventTownFounded.DefSQMethod(engine, &ScriptEventTownFounded::GetTownID, "GetTownID", "x");

	SQGSEventTownFounded.PostRegister(engine);
}


template <> SQInteger PushClassName<ScriptEventAdminPort, ScriptType::GS>(HSQUIRRELVM vm) { sq_pushstring(vm, "GSEventAdminPort"); return 1; }

void SQGSEventAdminPort_Register(Squirrel &engine)
{
	DefSQClass<ScriptEventAdminPort, ScriptType::GS> SQGSEventAdminPort("GSEventAdminPort");
	SQGSEventAdminPort.PreRegister(engine, "GSEvent");

	SQGSEventAdminPort.DefSQStaticMethod(engine, &ScriptEventAdminPort::Convert, "Convert", ".x");

	SQGSEventAdminPort.DefSQAdvancedMethod(engine, &ScriptEventAdminPort::GetObject, "GetObject");

	SQGSEventAdminPort.PostRegister(engine);
}


template <> SQInteger PushClassName<ScriptEventWindowWidgetClick, ScriptType::GS>(HSQUIRRELVM vm) { sq_pushstring(vm, "GSEventWindowWidgetClick"); return 1; }

void SQGSEventWindowWidgetClick_Register(Squirrel &engine)
{
	DefSQClass<ScriptEventWindowWidgetClick, ScriptType::GS> SQGSEventWindowWidgetClick("GSEventWindowWidgetClick");
	SQGSEventWindowWidgetClick.PreRegister(engine, "GSEvent");

	SQGSEventWindowWidgetClick.DefSQStaticMethod(engine, &ScriptEventWindowWidgetClick::Convert, "Convert", ".x");

	SQGSEventWindowWidgetClick.DefSQMethod(engine, &ScriptEventWindowWidgetClick::GetWindowClass,  "GetWindowClass",  "x");
	SQGSEventWindowWidgetClick.DefSQMethod(engine, &ScriptEventWindowWidgetClick::GetWindowNumber, "GetWindowNumber", "x");
	SQGSEventWindowWidgetClick.DefSQMethod(engine, &ScriptEventWindowWidgetClick::GetWidgetNumber, "GetWidgetNumber", "x");

	SQGSEventWindowWidgetClick.PostRegister(engine);
}


template <> SQInteger PushClassName<ScriptEventGoalQuestionAnswer, ScriptType::GS>(HSQUIRRELVM vm) { sq_pushstring(vm, "GSEventGoalQuestionAnswer"); return 1; }

void SQGSEventGoalQuestionAnswer_Register(Squirrel &engine)
{
	DefSQClass<ScriptEventGoalQuestionAnswer, ScriptType::GS> SQGSEventGoalQuestionAnswer("GSEventGoalQuestionAnswer");
	SQGSEventGoalQuestionAnswer.PreRegister(engine, "GSEvent");

	SQGSEventGoalQuestionAnswer.DefSQStaticMethod(engine, &ScriptEventGoalQuestionAnswer::Convert, "Convert", ".x");

	SQGSEventGoalQuestionAnswer.DefSQMethod(engine, &ScriptEventGoalQuestionAnswer::GetUniqueID, "GetUniqueID", "x");
	SQGSEventGoalQuestionAnswer.DefSQMethod(engine, &ScriptEventGoalQuestionAnswer::GetCompany,  "GetCompany",  "x");
	SQGSEventGoalQuestionAnswer.DefSQMethod(engine, &ScriptEventGoalQuestionAnswer::GetButton,   "GetButton",   "x");

	SQGSEventGoalQuestionAnswer.PostRegister(engine);
}


template <> SQInteger PushClassName<ScriptEventCompanyTown, ScriptType::GS>(HSQUIRRELVM vm) { sq_pushstring(vm, "GSEventCompanyTown"); return 1; }

void SQGSEventCompanyTown_Register(Squirrel &engine)
{
	DefSQClass<ScriptEventCompanyTown, ScriptType::GS> SQGSEventCompanyTown("GSEventCompanyTown");
	SQGSEventCompanyTown.PreRegister(engine, "GSEvent");

	SQGSEventCompanyTown.DefSQStaticMethod(engine, &ScriptEventCompanyTown::Convert, "Convert", ".x");

	SQGSEventCompanyTown.DefSQMethod(engine, &ScriptEventCompanyTown::GetCompanyID, "GetCompanyID", "x");
	SQGSEventCompanyTown.DefSQMethod(engine, &ScriptEventCompanyTown::GetTownID,    "GetTownID",    "x");

	SQGSEventCompanyTown.PostRegister(engine);
}


template <> SQInteger PushClassName<ScriptEventExclusiveTransportRights, ScriptType::GS>(HSQUIRRELVM vm) { sq_pushstring(vm, "GSEventExclusiveTransportRights"); return 1; }

void SQGSEventExclusiveTransportRights_Register(Squirrel &engine)
{
	DefSQClass<ScriptEventExclusiveTransportRights, ScriptType::GS> SQGSEventExclusiveTransportRights("GSEventExclusiveTransportRights");
	SQGSEventExclusiveTransportRights.PreRegister(engine, "GSEventCompanyTown");

	SQGSEventExclusiveTransportRights.DefSQStaticMethod(engine, &ScriptEventExclusiveTransportRights::Convert, "Convert", ".x");

	SQGSEventExclusiveTransportRights.PostRegister(engine);
}


template <> SQInteger PushClassName<ScriptEventRoadReconstruction, ScriptType::GS>(HSQUIRRELVM vm) { sq_pushstring(vm, "GSEventRoadReconstruction"); return 1; }

void SQGSEventRoadReconstruction_Register(Squirrel &engine)
{
	DefSQClass<ScriptEventRoadReconstruction, ScriptType::GS> SQGSEventRoadReconstruction("GSEventRoadReconstruction");
	SQGSEventRoadReconstruction.PreRegister(engine, "GSEventCompanyTown");

	SQGSEventRoadReconstruction.DefSQStaticMethod(engine, &ScriptEventRoadReconstruction::Convert, "Convert", ".x");

	SQGSEventRoadReconstruction.PostRegister(engine);
}


template <> SQInteger PushClassName<ScriptEventStoryPageButtonClick, ScriptType::GS>(HSQUIRRELVM vm) { sq_pushstring(vm, "GSEventStoryPageButtonClick"); return 1; }

void SQGSEventStoryPageButtonClick_Register(Squirrel &engine)
{
	DefSQClass<ScriptEventStoryPageButtonClick, ScriptType::GS> SQGSEventStoryPageButtonClick("GSEventStoryPageButtonClick");
	SQGSEventStoryPageButtonClick.PreRegister(engine, "GSEvent");

	SQGSEventStoryPageButtonClick.DefSQStaticMethod(engine, &ScriptEventStoryPageButtonClick::Convert, "Convert", ".x");

	SQGSEventStoryPageButtonClick.DefSQMethod(engine, &ScriptEventStoryPageButtonClick::GetCompanyID,   "GetCompanyID",   "x");
	SQGSEventStoryPageButtonClick.DefSQMethod(engine, &ScriptEventStoryPageButtonClick::GetStoryPageID, "GetStoryPageID", "x");
	SQGSEventStoryPageButtonClick.DefSQMethod(engine, &ScriptEventStoryPageButtonClick::GetElementID,   "GetElementID",   "x");

	SQGSEventStoryPageButtonClick.PostRegister(engine);
}


template <> SQInteger PushClassName<ScriptEventStoryPageTileSelect, ScriptType::GS>(HSQUIRRELVM vm) { sq_pushstring(vm, "GSEventStoryPageTileSelect"); return 1; }

void SQGSEventStoryPageTileSelect_Register(Squirrel &engine)
{
	DefSQClass<ScriptEventStoryPageTileSelect, ScriptType::GS> SQGSEventStoryPageTileSelect("GSEventStoryPageTileSelect");
	SQGSEventStoryPageTileSelect.PreRegister(engine, "GSEvent");

	SQGSEventStoryPageTileSelect.DefSQStaticMethod(engine, &ScriptEventStoryPageTileSelect::Convert, "Convert", ".x");

	SQGSEventStoryPageTileSelect.DefSQMethod(engine, &ScriptEventStoryPageTileSelect::GetCompanyID,   "GetCompanyID",   "x");
	SQGSEventStoryPageTileSelect.DefSQMethod(engine, &ScriptEventStoryPageTileSelect::GetStoryPageID, "GetStoryPageID", "x");
	SQGSEventStoryPageTileSelect.DefSQMethod(engine, &ScriptEventStoryPageTileSelect::GetElementID,   "GetElementID",   "x");
	SQGSEventStoryPageTileSelect.DefSQMethod(engine, &ScriptEventStoryPageTileSelect::GetTile,        "GetTile",        "x");

	SQGSEventStoryPageTileSelect.PostRegister(engine);
}


template <> SQInteger PushClassName<ScriptEventStoryPageVehicleSelect, ScriptType::GS>(HSQUIRRELVM vm) { sq_pushstring(vm, "GSEventStoryPageVehicleSelect"); return 1; }

void SQGSEventStoryPageVehicleSelect_Register(Squirrel &engine)
{
	DefSQClass<ScriptEventStoryPageVehicleSelect, ScriptType::GS> SQGSEventStoryPageVehicleSelect("GSEventStoryPageVehicleSelect");
	SQGSEventStoryPageVehicleSelect.PreRegister(engine, "GSEvent");

	SQGSEventStoryPageVehicleSelect.DefSQStaticMethod(engine, &ScriptEventStoryPageVehicleSelect::Convert, "Convert", ".x");

	SQGSEventStoryPageVehicleSelect.DefSQMethod(engine, &ScriptEventStoryPageVehicleSelect::GetCompanyID,   "GetCompanyID",   "x");
	SQGSEventStoryPageVehicleSelect.DefSQMethod(engine, &ScriptEventStoryPageVehicleSelect::GetStoryPageID, "GetStoryPageID", "x");
	SQGSEventStoryPageVehicleSelect.DefSQMethod(engine, &ScriptEventStoryPageVehicleSelect::GetElementID,   "GetElementID",   "x");
	SQGSEventStoryPageVehicleSelect.DefSQMethod(engine, &ScriptEventStoryPageVehicleSelect::GetVehicleID,   "GetVehicleID",   "x");

	SQGSEventStoryPageVehicleSelect.PostRegister(engine);
}


template <> SQInteger PushClassName<ScriptEventPresidentRenamed, ScriptType::GS>(HSQUIRRELVM vm) { sq_pushstring(vm, "GSEventPresidentRenamed"); return 1; }

void SQGSEventPresidentRenamed_Register(Squirrel &engine)
{
	DefSQClass<ScriptEventPresidentRenamed, ScriptType::GS> SQGSEventPresidentRenamed("GSEventPresidentRenamed");
	SQGSEventPresidentRenamed.PreRegister(engine, "GSEvent");

	SQGSEventPresidentRenamed.DefSQStaticMethod(engine, &ScriptEventPresidentRenamed::Convert, "Convert", ".x");

	SQGSEventPresidentRenamed.DefSQMethod(engine, &ScriptEventPresidentRenamed::GetCompanyID, "GetCompanyID", "x");
	SQGSEventPresidentRenamed.DefSQMethod(engine, &ScriptEventPresidentRenamed::GetNewName,   "GetNewName",   "x");

	SQGSEventPresidentRenamed.PostRegister(engine);
}
