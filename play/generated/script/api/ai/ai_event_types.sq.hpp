/*
 * This file is part of OpenTTD.
 * OpenTTD is free software; you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, version 2.
 * OpenTTD is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 * See the GNU General Public License for more details. You should have received a copy of the GNU General Public License along with OpenTTD. If not, see <https://www.gnu.org/licenses/old-licenses/gpl-2.0>.
 */

/* THIS FILE IS AUTO-GENERATED; PLEASE DO NOT ALTER MANUALLY */

#include "../script_event_types.hpp"
#include "../template/template_event_types.sq.hpp"


template <> SQInteger PushClassName<ScriptEventVehicleCrashed, ScriptType::AI>(HSQUIRRELVM vm) { sq_pushstring(vm, "AIEventVehicleCrashed"); return 1; }

void SQAIEventVehicleCrashed_Register(Squirrel &engine)
{
	DefSQClass<ScriptEventVehicleCrashed, ScriptType::AI> SQAIEventVehicleCrashed("AIEventVehicleCrashed");
	SQAIEventVehicleCrashed.PreRegister(engine, "AIEvent");

	SQAIEventVehicleCrashed.DefSQConst(engine, ScriptEventVehicleCrashed::CRASH_TRAIN,               "CRASH_TRAIN");
	SQAIEventVehicleCrashed.DefSQConst(engine, ScriptEventVehicleCrashed::CRASH_RV_LEVEL_CROSSING,   "CRASH_RV_LEVEL_CROSSING");
	SQAIEventVehicleCrashed.DefSQConst(engine, ScriptEventVehicleCrashed::CRASH_RV_UFO,              "CRASH_RV_UFO");
	SQAIEventVehicleCrashed.DefSQConst(engine, ScriptEventVehicleCrashed::CRASH_PLANE_LANDING,       "CRASH_PLANE_LANDING");
	SQAIEventVehicleCrashed.DefSQConst(engine, ScriptEventVehicleCrashed::CRASH_AIRCRAFT_NO_AIRPORT, "CRASH_AIRCRAFT_NO_AIRPORT");
	SQAIEventVehicleCrashed.DefSQConst(engine, ScriptEventVehicleCrashed::CRASH_FLOODED,             "CRASH_FLOODED");

	SQAIEventVehicleCrashed.DefSQStaticMethod(engine, &ScriptEventVehicleCrashed::Convert, "Convert", ".x");

	SQAIEventVehicleCrashed.DefSQMethod(engine, &ScriptEventVehicleCrashed::GetVehicleID,    "GetVehicleID",    "x");
	SQAIEventVehicleCrashed.DefSQMethod(engine, &ScriptEventVehicleCrashed::GetCrashSite,    "GetCrashSite",    "x");
	SQAIEventVehicleCrashed.DefSQMethod(engine, &ScriptEventVehicleCrashed::GetCrashReason,  "GetCrashReason",  "x");
	SQAIEventVehicleCrashed.DefSQMethod(engine, &ScriptEventVehicleCrashed::GetVictims,      "GetVictims",      "x");
	SQAIEventVehicleCrashed.DefSQMethod(engine, &ScriptEventVehicleCrashed::GetVehicleOwner, "GetVehicleOwner", "x");

	SQAIEventVehicleCrashed.PostRegister(engine);
}


template <> SQInteger PushClassName<ScriptEventSubsidyOffer, ScriptType::AI>(HSQUIRRELVM vm) { sq_pushstring(vm, "AIEventSubsidyOffer"); return 1; }

void SQAIEventSubsidyOffer_Register(Squirrel &engine)
{
	DefSQClass<ScriptEventSubsidyOffer, ScriptType::AI> SQAIEventSubsidyOffer("AIEventSubsidyOffer");
	SQAIEventSubsidyOffer.PreRegister(engine, "AIEvent");

	SQAIEventSubsidyOffer.DefSQStaticMethod(engine, &ScriptEventSubsidyOffer::Convert, "Convert", ".x");

	SQAIEventSubsidyOffer.DefSQMethod(engine, &ScriptEventSubsidyOffer::GetSubsidyID, "GetSubsidyID", "x");

	SQAIEventSubsidyOffer.PostRegister(engine);
}


template <> SQInteger PushClassName<ScriptEventSubsidyOfferExpired, ScriptType::AI>(HSQUIRRELVM vm) { sq_pushstring(vm, "AIEventSubsidyOfferExpired"); return 1; }

void SQAIEventSubsidyOfferExpired_Register(Squirrel &engine)
{
	DefSQClass<ScriptEventSubsidyOfferExpired, ScriptType::AI> SQAIEventSubsidyOfferExpired("AIEventSubsidyOfferExpired");
	SQAIEventSubsidyOfferExpired.PreRegister(engine, "AIEvent");

	SQAIEventSubsidyOfferExpired.DefSQStaticMethod(engine, &ScriptEventSubsidyOfferExpired::Convert, "Convert", ".x");

	SQAIEventSubsidyOfferExpired.DefSQMethod(engine, &ScriptEventSubsidyOfferExpired::GetSubsidyID, "GetSubsidyID", "x");

	SQAIEventSubsidyOfferExpired.PostRegister(engine);
}


template <> SQInteger PushClassName<ScriptEventSubsidyAwarded, ScriptType::AI>(HSQUIRRELVM vm) { sq_pushstring(vm, "AIEventSubsidyAwarded"); return 1; }

void SQAIEventSubsidyAwarded_Register(Squirrel &engine)
{
	DefSQClass<ScriptEventSubsidyAwarded, ScriptType::AI> SQAIEventSubsidyAwarded("AIEventSubsidyAwarded");
	SQAIEventSubsidyAwarded.PreRegister(engine, "AIEvent");

	SQAIEventSubsidyAwarded.DefSQStaticMethod(engine, &ScriptEventSubsidyAwarded::Convert, "Convert", ".x");

	SQAIEventSubsidyAwarded.DefSQMethod(engine, &ScriptEventSubsidyAwarded::GetSubsidyID, "GetSubsidyID", "x");

	SQAIEventSubsidyAwarded.PostRegister(engine);
}


template <> SQInteger PushClassName<ScriptEventSubsidyExpired, ScriptType::AI>(HSQUIRRELVM vm) { sq_pushstring(vm, "AIEventSubsidyExpired"); return 1; }

void SQAIEventSubsidyExpired_Register(Squirrel &engine)
{
	DefSQClass<ScriptEventSubsidyExpired, ScriptType::AI> SQAIEventSubsidyExpired("AIEventSubsidyExpired");
	SQAIEventSubsidyExpired.PreRegister(engine, "AIEvent");

	SQAIEventSubsidyExpired.DefSQStaticMethod(engine, &ScriptEventSubsidyExpired::Convert, "Convert", ".x");

	SQAIEventSubsidyExpired.DefSQMethod(engine, &ScriptEventSubsidyExpired::GetSubsidyID, "GetSubsidyID", "x");

	SQAIEventSubsidyExpired.PostRegister(engine);
}


template <> SQInteger PushClassName<ScriptEventEnginePreview, ScriptType::AI>(HSQUIRRELVM vm) { sq_pushstring(vm, "AIEventEnginePreview"); return 1; }

void SQAIEventEnginePreview_Register(Squirrel &engine)
{
	DefSQClass<ScriptEventEnginePreview, ScriptType::AI> SQAIEventEnginePreview("AIEventEnginePreview");
	SQAIEventEnginePreview.PreRegister(engine, "AIEvent");

	SQAIEventEnginePreview.DefSQStaticMethod(engine, &ScriptEventEnginePreview::Convert, "Convert", ".x");

	SQAIEventEnginePreview.DefSQMethod(engine, &ScriptEventEnginePreview::GetName,        "GetName",        "x");
	SQAIEventEnginePreview.DefSQMethod(engine, &ScriptEventEnginePreview::GetCargoType,   "GetCargoType",   "x");
	SQAIEventEnginePreview.DefSQMethod(engine, &ScriptEventEnginePreview::GetCapacity,    "GetCapacity",    "x");
	SQAIEventEnginePreview.DefSQMethod(engine, &ScriptEventEnginePreview::GetMaxSpeed,    "GetMaxSpeed",    "x");
	SQAIEventEnginePreview.DefSQMethod(engine, &ScriptEventEnginePreview::GetPrice,       "GetPrice",       "x");
	SQAIEventEnginePreview.DefSQMethod(engine, &ScriptEventEnginePreview::GetRunningCost, "GetRunningCost", "x");
	SQAIEventEnginePreview.DefSQMethod(engine, &ScriptEventEnginePreview::GetVehicleType, "GetVehicleType", "x");
	SQAIEventEnginePreview.DefSQMethod(engine, &ScriptEventEnginePreview::AcceptPreview,  "AcceptPreview",  "x");

	SQAIEventEnginePreview.PostRegister(engine);
}


template <> SQInteger PushClassName<ScriptEventCompanyNew, ScriptType::AI>(HSQUIRRELVM vm) { sq_pushstring(vm, "AIEventCompanyNew"); return 1; }

void SQAIEventCompanyNew_Register(Squirrel &engine)
{
	DefSQClass<ScriptEventCompanyNew, ScriptType::AI> SQAIEventCompanyNew("AIEventCompanyNew");
	SQAIEventCompanyNew.PreRegister(engine, "AIEvent");

	SQAIEventCompanyNew.DefSQStaticMethod(engine, &ScriptEventCompanyNew::Convert, "Convert", ".x");

	SQAIEventCompanyNew.DefSQMethod(engine, &ScriptEventCompanyNew::GetCompanyID, "GetCompanyID", "x");

	SQAIEventCompanyNew.PostRegister(engine);
}


template <> SQInteger PushClassName<ScriptEventCompanyRenamed, ScriptType::AI>(HSQUIRRELVM vm) { sq_pushstring(vm, "AIEventCompanyRenamed"); return 1; }

void SQAIEventCompanyRenamed_Register(Squirrel &engine)
{
	DefSQClass<ScriptEventCompanyRenamed, ScriptType::AI> SQAIEventCompanyRenamed("AIEventCompanyRenamed");
	SQAIEventCompanyRenamed.PreRegister(engine, "AIEvent");

	SQAIEventCompanyRenamed.DefSQStaticMethod(engine, &ScriptEventCompanyRenamed::Convert, "Convert", ".x");

	SQAIEventCompanyRenamed.DefSQMethod(engine, &ScriptEventCompanyRenamed::GetCompanyID, "GetCompanyID", "x");
	SQAIEventCompanyRenamed.DefSQMethod(engine, &ScriptEventCompanyRenamed::GetNewName,   "GetNewName",   "x");

	SQAIEventCompanyRenamed.PostRegister(engine);
}


template <> SQInteger PushClassName<ScriptEventCompanyInTrouble, ScriptType::AI>(HSQUIRRELVM vm) { sq_pushstring(vm, "AIEventCompanyInTrouble"); return 1; }

void SQAIEventCompanyInTrouble_Register(Squirrel &engine)
{
	DefSQClass<ScriptEventCompanyInTrouble, ScriptType::AI> SQAIEventCompanyInTrouble("AIEventCompanyInTrouble");
	SQAIEventCompanyInTrouble.PreRegister(engine, "AIEvent");

	SQAIEventCompanyInTrouble.DefSQStaticMethod(engine, &ScriptEventCompanyInTrouble::Convert, "Convert", ".x");

	SQAIEventCompanyInTrouble.DefSQMethod(engine, &ScriptEventCompanyInTrouble::GetCompanyID, "GetCompanyID", "x");

	SQAIEventCompanyInTrouble.PostRegister(engine);
}


template <> SQInteger PushClassName<ScriptEventCompanyAskMerger, ScriptType::AI>(HSQUIRRELVM vm) { sq_pushstring(vm, "AIEventCompanyAskMerger"); return 1; }

void SQAIEventCompanyAskMerger_Register(Squirrel &engine)
{
	DefSQClass<ScriptEventCompanyAskMerger, ScriptType::AI> SQAIEventCompanyAskMerger("AIEventCompanyAskMerger");
	SQAIEventCompanyAskMerger.PreRegister(engine, "AIEvent");

	SQAIEventCompanyAskMerger.DefSQStaticMethod(engine, &ScriptEventCompanyAskMerger::Convert, "Convert", ".x");

	SQAIEventCompanyAskMerger.DefSQMethod(engine, &ScriptEventCompanyAskMerger::GetCompanyID, "GetCompanyID", "x");
	SQAIEventCompanyAskMerger.DefSQMethod(engine, &ScriptEventCompanyAskMerger::GetValue,     "GetValue",     "x");
	SQAIEventCompanyAskMerger.DefSQMethod(engine, &ScriptEventCompanyAskMerger::AcceptMerger, "AcceptMerger", "x");

	SQAIEventCompanyAskMerger.PostRegister(engine);
}


template <> SQInteger PushClassName<ScriptEventCompanyMerger, ScriptType::AI>(HSQUIRRELVM vm) { sq_pushstring(vm, "AIEventCompanyMerger"); return 1; }

void SQAIEventCompanyMerger_Register(Squirrel &engine)
{
	DefSQClass<ScriptEventCompanyMerger, ScriptType::AI> SQAIEventCompanyMerger("AIEventCompanyMerger");
	SQAIEventCompanyMerger.PreRegister(engine, "AIEvent");

	SQAIEventCompanyMerger.DefSQStaticMethod(engine, &ScriptEventCompanyMerger::Convert, "Convert", ".x");

	SQAIEventCompanyMerger.DefSQMethod(engine, &ScriptEventCompanyMerger::GetOldCompanyID, "GetOldCompanyID", "x");
	SQAIEventCompanyMerger.DefSQMethod(engine, &ScriptEventCompanyMerger::GetNewCompanyID, "GetNewCompanyID", "x");

	SQAIEventCompanyMerger.PostRegister(engine);
}


template <> SQInteger PushClassName<ScriptEventCompanyBankrupt, ScriptType::AI>(HSQUIRRELVM vm) { sq_pushstring(vm, "AIEventCompanyBankrupt"); return 1; }

void SQAIEventCompanyBankrupt_Register(Squirrel &engine)
{
	DefSQClass<ScriptEventCompanyBankrupt, ScriptType::AI> SQAIEventCompanyBankrupt("AIEventCompanyBankrupt");
	SQAIEventCompanyBankrupt.PreRegister(engine, "AIEvent");

	SQAIEventCompanyBankrupt.DefSQStaticMethod(engine, &ScriptEventCompanyBankrupt::Convert, "Convert", ".x");

	SQAIEventCompanyBankrupt.DefSQMethod(engine, &ScriptEventCompanyBankrupt::GetCompanyID, "GetCompanyID", "x");

	SQAIEventCompanyBankrupt.PostRegister(engine);
}


template <> SQInteger PushClassName<ScriptEventVehicleLost, ScriptType::AI>(HSQUIRRELVM vm) { sq_pushstring(vm, "AIEventVehicleLost"); return 1; }

void SQAIEventVehicleLost_Register(Squirrel &engine)
{
	DefSQClass<ScriptEventVehicleLost, ScriptType::AI> SQAIEventVehicleLost("AIEventVehicleLost");
	SQAIEventVehicleLost.PreRegister(engine, "AIEvent");

	SQAIEventVehicleLost.DefSQStaticMethod(engine, &ScriptEventVehicleLost::Convert, "Convert", ".x");

	SQAIEventVehicleLost.DefSQMethod(engine, &ScriptEventVehicleLost::GetVehicleID, "GetVehicleID", "x");

	SQAIEventVehicleLost.PostRegister(engine);
}


template <> SQInteger PushClassName<ScriptEventVehicleWaitingInDepot, ScriptType::AI>(HSQUIRRELVM vm) { sq_pushstring(vm, "AIEventVehicleWaitingInDepot"); return 1; }

void SQAIEventVehicleWaitingInDepot_Register(Squirrel &engine)
{
	DefSQClass<ScriptEventVehicleWaitingInDepot, ScriptType::AI> SQAIEventVehicleWaitingInDepot("AIEventVehicleWaitingInDepot");
	SQAIEventVehicleWaitingInDepot.PreRegister(engine, "AIEvent");

	SQAIEventVehicleWaitingInDepot.DefSQStaticMethod(engine, &ScriptEventVehicleWaitingInDepot::Convert, "Convert", ".x");

	SQAIEventVehicleWaitingInDepot.DefSQMethod(engine, &ScriptEventVehicleWaitingInDepot::GetVehicleID, "GetVehicleID", "x");

	SQAIEventVehicleWaitingInDepot.PostRegister(engine);
}


template <> SQInteger PushClassName<ScriptEventVehicleUnprofitable, ScriptType::AI>(HSQUIRRELVM vm) { sq_pushstring(vm, "AIEventVehicleUnprofitable"); return 1; }

void SQAIEventVehicleUnprofitable_Register(Squirrel &engine)
{
	DefSQClass<ScriptEventVehicleUnprofitable, ScriptType::AI> SQAIEventVehicleUnprofitable("AIEventVehicleUnprofitable");
	SQAIEventVehicleUnprofitable.PreRegister(engine, "AIEvent");

	SQAIEventVehicleUnprofitable.DefSQStaticMethod(engine, &ScriptEventVehicleUnprofitable::Convert, "Convert", ".x");

	SQAIEventVehicleUnprofitable.DefSQMethod(engine, &ScriptEventVehicleUnprofitable::GetVehicleID, "GetVehicleID", "x");

	SQAIEventVehicleUnprofitable.PostRegister(engine);
}


template <> SQInteger PushClassName<ScriptEventIndustryOpen, ScriptType::AI>(HSQUIRRELVM vm) { sq_pushstring(vm, "AIEventIndustryOpen"); return 1; }

void SQAIEventIndustryOpen_Register(Squirrel &engine)
{
	DefSQClass<ScriptEventIndustryOpen, ScriptType::AI> SQAIEventIndustryOpen("AIEventIndustryOpen");
	SQAIEventIndustryOpen.PreRegister(engine, "AIEvent");

	SQAIEventIndustryOpen.DefSQStaticMethod(engine, &ScriptEventIndustryOpen::Convert, "Convert", ".x");

	SQAIEventIndustryOpen.DefSQMethod(engine, &ScriptEventIndustryOpen::GetIndustryID, "GetIndustryID", "x");

	SQAIEventIndustryOpen.PostRegister(engine);
}


template <> SQInteger PushClassName<ScriptEventIndustryClose, ScriptType::AI>(HSQUIRRELVM vm) { sq_pushstring(vm, "AIEventIndustryClose"); return 1; }

void SQAIEventIndustryClose_Register(Squirrel &engine)
{
	DefSQClass<ScriptEventIndustryClose, ScriptType::AI> SQAIEventIndustryClose("AIEventIndustryClose");
	SQAIEventIndustryClose.PreRegister(engine, "AIEvent");

	SQAIEventIndustryClose.DefSQStaticMethod(engine, &ScriptEventIndustryClose::Convert, "Convert", ".x");

	SQAIEventIndustryClose.DefSQMethod(engine, &ScriptEventIndustryClose::GetIndustryID, "GetIndustryID", "x");

	SQAIEventIndustryClose.PostRegister(engine);
}


template <> SQInteger PushClassName<ScriptEventEngineAvailable, ScriptType::AI>(HSQUIRRELVM vm) { sq_pushstring(vm, "AIEventEngineAvailable"); return 1; }

void SQAIEventEngineAvailable_Register(Squirrel &engine)
{
	DefSQClass<ScriptEventEngineAvailable, ScriptType::AI> SQAIEventEngineAvailable("AIEventEngineAvailable");
	SQAIEventEngineAvailable.PreRegister(engine, "AIEvent");

	SQAIEventEngineAvailable.DefSQStaticMethod(engine, &ScriptEventEngineAvailable::Convert, "Convert", ".x");

	SQAIEventEngineAvailable.DefSQMethod(engine, &ScriptEventEngineAvailable::GetEngineID, "GetEngineID", "x");

	SQAIEventEngineAvailable.PostRegister(engine);
}


template <> SQInteger PushClassName<ScriptEventStationFirstVehicle, ScriptType::AI>(HSQUIRRELVM vm) { sq_pushstring(vm, "AIEventStationFirstVehicle"); return 1; }

void SQAIEventStationFirstVehicle_Register(Squirrel &engine)
{
	DefSQClass<ScriptEventStationFirstVehicle, ScriptType::AI> SQAIEventStationFirstVehicle("AIEventStationFirstVehicle");
	SQAIEventStationFirstVehicle.PreRegister(engine, "AIEvent");

	SQAIEventStationFirstVehicle.DefSQStaticMethod(engine, &ScriptEventStationFirstVehicle::Convert, "Convert", ".x");

	SQAIEventStationFirstVehicle.DefSQMethod(engine, &ScriptEventStationFirstVehicle::GetStationID, "GetStationID", "x");
	SQAIEventStationFirstVehicle.DefSQMethod(engine, &ScriptEventStationFirstVehicle::GetVehicleID, "GetVehicleID", "x");

	SQAIEventStationFirstVehicle.PostRegister(engine);
}


template <> SQInteger PushClassName<ScriptEventDisasterZeppelinerCrashed, ScriptType::AI>(HSQUIRRELVM vm) { sq_pushstring(vm, "AIEventDisasterZeppelinerCrashed"); return 1; }

void SQAIEventDisasterZeppelinerCrashed_Register(Squirrel &engine)
{
	DefSQClass<ScriptEventDisasterZeppelinerCrashed, ScriptType::AI> SQAIEventDisasterZeppelinerCrashed("AIEventDisasterZeppelinerCrashed");
	SQAIEventDisasterZeppelinerCrashed.PreRegister(engine, "AIEvent");

	SQAIEventDisasterZeppelinerCrashed.DefSQStaticMethod(engine, &ScriptEventDisasterZeppelinerCrashed::Convert, "Convert", ".x");

	SQAIEventDisasterZeppelinerCrashed.DefSQMethod(engine, &ScriptEventDisasterZeppelinerCrashed::GetStationID, "GetStationID", "x");

	SQAIEventDisasterZeppelinerCrashed.PostRegister(engine);
}


template <> SQInteger PushClassName<ScriptEventDisasterZeppelinerCleared, ScriptType::AI>(HSQUIRRELVM vm) { sq_pushstring(vm, "AIEventDisasterZeppelinerCleared"); return 1; }

void SQAIEventDisasterZeppelinerCleared_Register(Squirrel &engine)
{
	DefSQClass<ScriptEventDisasterZeppelinerCleared, ScriptType::AI> SQAIEventDisasterZeppelinerCleared("AIEventDisasterZeppelinerCleared");
	SQAIEventDisasterZeppelinerCleared.PreRegister(engine, "AIEvent");

	SQAIEventDisasterZeppelinerCleared.DefSQStaticMethod(engine, &ScriptEventDisasterZeppelinerCleared::Convert, "Convert", ".x");

	SQAIEventDisasterZeppelinerCleared.DefSQMethod(engine, &ScriptEventDisasterZeppelinerCleared::GetStationID, "GetStationID", "x");

	SQAIEventDisasterZeppelinerCleared.PostRegister(engine);
}


template <> SQInteger PushClassName<ScriptEventTownFounded, ScriptType::AI>(HSQUIRRELVM vm) { sq_pushstring(vm, "AIEventTownFounded"); return 1; }

void SQAIEventTownFounded_Register(Squirrel &engine)
{
	DefSQClass<ScriptEventTownFounded, ScriptType::AI> SQAIEventTownFounded("AIEventTownFounded");
	SQAIEventTownFounded.PreRegister(engine, "AIEvent");

	SQAIEventTownFounded.DefSQStaticMethod(engine, &ScriptEventTownFounded::Convert, "Convert", ".x");

	SQAIEventTownFounded.DefSQMethod(engine, &ScriptEventTownFounded::GetTownID, "GetTownID", "x");

	SQAIEventTownFounded.PostRegister(engine);
}


template <> SQInteger PushClassName<ScriptEventAircraftDestTooFar, ScriptType::AI>(HSQUIRRELVM vm) { sq_pushstring(vm, "AIEventAircraftDestTooFar"); return 1; }

void SQAIEventAircraftDestTooFar_Register(Squirrel &engine)
{
	DefSQClass<ScriptEventAircraftDestTooFar, ScriptType::AI> SQAIEventAircraftDestTooFar("AIEventAircraftDestTooFar");
	SQAIEventAircraftDestTooFar.PreRegister(engine, "AIEvent");

	SQAIEventAircraftDestTooFar.DefSQStaticMethod(engine, &ScriptEventAircraftDestTooFar::Convert, "Convert", ".x");

	SQAIEventAircraftDestTooFar.DefSQMethod(engine, &ScriptEventAircraftDestTooFar::GetVehicleID, "GetVehicleID", "x");

	SQAIEventAircraftDestTooFar.PostRegister(engine);
}


template <> SQInteger PushClassName<ScriptEventCompanyTown, ScriptType::AI>(HSQUIRRELVM vm) { sq_pushstring(vm, "AIEventCompanyTown"); return 1; }

void SQAIEventCompanyTown_Register(Squirrel &engine)
{
	DefSQClass<ScriptEventCompanyTown, ScriptType::AI> SQAIEventCompanyTown("AIEventCompanyTown");
	SQAIEventCompanyTown.PreRegister(engine, "AIEvent");

	SQAIEventCompanyTown.DefSQStaticMethod(engine, &ScriptEventCompanyTown::Convert, "Convert", ".x");

	SQAIEventCompanyTown.DefSQMethod(engine, &ScriptEventCompanyTown::GetCompanyID, "GetCompanyID", "x");
	SQAIEventCompanyTown.DefSQMethod(engine, &ScriptEventCompanyTown::GetTownID,    "GetTownID",    "x");

	SQAIEventCompanyTown.PostRegister(engine);
}


template <> SQInteger PushClassName<ScriptEventExclusiveTransportRights, ScriptType::AI>(HSQUIRRELVM vm) { sq_pushstring(vm, "AIEventExclusiveTransportRights"); return 1; }

void SQAIEventExclusiveTransportRights_Register(Squirrel &engine)
{
	DefSQClass<ScriptEventExclusiveTransportRights, ScriptType::AI> SQAIEventExclusiveTransportRights("AIEventExclusiveTransportRights");
	SQAIEventExclusiveTransportRights.PreRegister(engine, "AIEventCompanyTown");

	SQAIEventExclusiveTransportRights.DefSQStaticMethod(engine, &ScriptEventExclusiveTransportRights::Convert, "Convert", ".x");

	SQAIEventExclusiveTransportRights.PostRegister(engine);
}


template <> SQInteger PushClassName<ScriptEventRoadReconstruction, ScriptType::AI>(HSQUIRRELVM vm) { sq_pushstring(vm, "AIEventRoadReconstruction"); return 1; }

void SQAIEventRoadReconstruction_Register(Squirrel &engine)
{
	DefSQClass<ScriptEventRoadReconstruction, ScriptType::AI> SQAIEventRoadReconstruction("AIEventRoadReconstruction");
	SQAIEventRoadReconstruction.PreRegister(engine, "AIEventCompanyTown");

	SQAIEventRoadReconstruction.DefSQStaticMethod(engine, &ScriptEventRoadReconstruction::Convert, "Convert", ".x");

	SQAIEventRoadReconstruction.PostRegister(engine);
}


template <> SQInteger PushClassName<ScriptEventVehicleAutoReplaced, ScriptType::AI>(HSQUIRRELVM vm) { sq_pushstring(vm, "AIEventVehicleAutoReplaced"); return 1; }

void SQAIEventVehicleAutoReplaced_Register(Squirrel &engine)
{
	DefSQClass<ScriptEventVehicleAutoReplaced, ScriptType::AI> SQAIEventVehicleAutoReplaced("AIEventVehicleAutoReplaced");
	SQAIEventVehicleAutoReplaced.PreRegister(engine, "AIEvent");

	SQAIEventVehicleAutoReplaced.DefSQStaticMethod(engine, &ScriptEventVehicleAutoReplaced::Convert, "Convert", ".x");

	SQAIEventVehicleAutoReplaced.DefSQMethod(engine, &ScriptEventVehicleAutoReplaced::GetOldVehicleID, "GetOldVehicleID", "x");
	SQAIEventVehicleAutoReplaced.DefSQMethod(engine, &ScriptEventVehicleAutoReplaced::GetNewVehicleID, "GetNewVehicleID", "x");

	SQAIEventVehicleAutoReplaced.PostRegister(engine);
}


template <> SQInteger PushClassName<ScriptEventPresidentRenamed, ScriptType::AI>(HSQUIRRELVM vm) { sq_pushstring(vm, "AIEventPresidentRenamed"); return 1; }

void SQAIEventPresidentRenamed_Register(Squirrel &engine)
{
	DefSQClass<ScriptEventPresidentRenamed, ScriptType::AI> SQAIEventPresidentRenamed("AIEventPresidentRenamed");
	SQAIEventPresidentRenamed.PreRegister(engine, "AIEvent");

	SQAIEventPresidentRenamed.DefSQStaticMethod(engine, &ScriptEventPresidentRenamed::Convert, "Convert", ".x");

	SQAIEventPresidentRenamed.DefSQMethod(engine, &ScriptEventPresidentRenamed::GetCompanyID, "GetCompanyID", "x");
	SQAIEventPresidentRenamed.DefSQMethod(engine, &ScriptEventPresidentRenamed::GetNewName,   "GetNewName",   "x");

	SQAIEventPresidentRenamed.PostRegister(engine);
}
