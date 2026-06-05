/*
 * This file is part of OpenTTD.
 * OpenTTD is free software; you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, version 2.
 * OpenTTD is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 * See the GNU General Public License for more details. You should have received a copy of the GNU General Public License along with OpenTTD. If not, see <https://www.gnu.org/licenses/old-licenses/gpl-2.0>.
 */

/* THIS FILE IS AUTO-GENERATED; PLEASE DO NOT ALTER MANUALLY */

#include "../script_fatalerror.hpp"

#include "ai_accounting.sq.hpp"
#include "ai_airport.sq.hpp"
#include "ai_base.sq.hpp"
#include "ai_basestation.sq.hpp"
#include "ai_bridge.sq.hpp"
#include "ai_bridgelist.sq.hpp"
#include "ai_cargo.sq.hpp"
#include "ai_cargolist.sq.hpp"
#include "ai_company.sq.hpp"
#include "ai_controller.sq.hpp"
#include "ai_date.sq.hpp"
#include "ai_depotlist.sq.hpp"
#include "ai_engine.sq.hpp"
#include "ai_enginelist.sq.hpp"
#include "ai_error.sq.hpp"
#include "ai_event.sq.hpp"
#include "ai_event_types.sq.hpp"
#include "ai_execmode.sq.hpp"
#include "ai_gamesettings.sq.hpp"
#include "ai_group.sq.hpp"
#include "ai_grouplist.sq.hpp"
#include "ai_industry.sq.hpp"
#include "ai_industrylist.sq.hpp"
#include "ai_industrytype.sq.hpp"
#include "ai_industrytypelist.sq.hpp"
#include "ai_infrastructure.sq.hpp"
#include "ai_list.sq.hpp"
#include "ai_log.sq.hpp"
#include "ai_map.sq.hpp"
#include "ai_marine.sq.hpp"
#include "ai_newgrf.sq.hpp"
#include "ai_objecttype.sq.hpp"
#include "ai_objecttypelist.sq.hpp"
#include "ai_order.sq.hpp"
#include "ai_priorityqueue.sq.hpp"
#include "ai_rail.sq.hpp"
#include "ai_railtypelist.sq.hpp"
#include "ai_road.sq.hpp"
#include "ai_roadtypelist.sq.hpp"
#include "ai_sign.sq.hpp"
#include "ai_signlist.sq.hpp"
#include "ai_station.sq.hpp"
#include "ai_stationlist.sq.hpp"
#include "ai_subsidy.sq.hpp"
#include "ai_subsidylist.sq.hpp"
#include "ai_testmode.sq.hpp"
#include "ai_tile.sq.hpp"
#include "ai_tilelist.sq.hpp"
#include "ai_town.sq.hpp"
#include "ai_townlist.sq.hpp"
#include "ai_tunnel.sq.hpp"
#include "ai_vehicle.sq.hpp"
#include "ai_vehiclelist.sq.hpp"
#include "ai_waypoint.sq.hpp"
#include "ai_waypointlist.sq.hpp"

void SQAI_RegisterAll(Squirrel &engine)
{
	DefSQClass<ScriptObject, ScriptType::AI> SQAIObject("AIObject");
	SQAIObject.PreRegister(engine);
	SQAIObject.DefSQAdvancedStaticMethod(engine, &ScriptObject::Constructor, "constructor");
	SQAIObject.DefSQAdvancedStaticMethod(engine, &ScriptObject::_cloned, "_cloned");
	SQAIObject.PostRegister(engine);

	SQAIList_Register(engine);
	SQAIAccounting_Register(engine);
	SQAIAirport_Register(engine);
	SQAIBase_Register(engine);
	SQAIBaseStation_Register(engine);
	SQAIBridge_Register(engine);
	SQAIBridgeList_Register(engine);
	SQAIBridgeList_Length_Register(engine);
	SQAICargo_Register(engine);
	SQAICargoList_Register(engine);
	SQAICargoList_IndustryAccepting_Register(engine);
	SQAICargoList_IndustryProducing_Register(engine);
	SQAICargoList_StationAccepting_Register(engine);
	SQAICompany_Register(engine);
	SQAIDate_Register(engine);
	SQAIDepotList_Register(engine);
	SQAIEngine_Register(engine);
	SQAIEngineList_Register(engine);
	SQAIError_Register(engine);
	SQAIEvent_Register(engine);
	SQAIEventAircraftDestTooFar_Register(engine);
	SQAIEventCompanyAskMerger_Register(engine);
	SQAIEventCompanyBankrupt_Register(engine);
	SQAIEventCompanyInTrouble_Register(engine);
	SQAIEventCompanyMerger_Register(engine);
	SQAIEventCompanyNew_Register(engine);
	SQAIEventCompanyRenamed_Register(engine);
	SQAIEventCompanyTown_Register(engine);
	SQAIEventController_Register(engine);
	SQAIEventDisasterZeppelinerCleared_Register(engine);
	SQAIEventDisasterZeppelinerCrashed_Register(engine);
	SQAIEventEngineAvailable_Register(engine);
	SQAIEventEnginePreview_Register(engine);
	SQAIEventExclusiveTransportRights_Register(engine);
	SQAIEventIndustryClose_Register(engine);
	SQAIEventIndustryOpen_Register(engine);
	SQAIEventPresidentRenamed_Register(engine);
	SQAIEventRoadReconstruction_Register(engine);
	SQAIEventStationFirstVehicle_Register(engine);
	SQAIEventSubsidyAwarded_Register(engine);
	SQAIEventSubsidyExpired_Register(engine);
	SQAIEventSubsidyOffer_Register(engine);
	SQAIEventSubsidyOfferExpired_Register(engine);
	SQAIEventTownFounded_Register(engine);
	SQAIEventVehicleAutoReplaced_Register(engine);
	SQAIEventVehicleCrashed_Register(engine);
	SQAIEventVehicleLost_Register(engine);
	SQAIEventVehicleUnprofitable_Register(engine);
	SQAIEventVehicleWaitingInDepot_Register(engine);
	SQAIExecMode_Register(engine);
	SQAIGameSettings_Register(engine);
	SQAIGroup_Register(engine);
	SQAIGroupList_Register(engine);
	SQAIIndustry_Register(engine);
	SQAIIndustryList_Register(engine);
	SQAIIndustryList_CargoAccepting_Register(engine);
	SQAIIndustryList_CargoProducing_Register(engine);
	SQAIIndustryType_Register(engine);
	SQAIIndustryTypeList_Register(engine);
	SQAIInfrastructure_Register(engine);
	SQAILog_Register(engine);
	SQAIMap_Register(engine);
	SQAIMarine_Register(engine);
	SQAINewGRF_Register(engine);
	SQAINewGRFList_Register(engine);
	SQAIObjectType_Register(engine);
	SQAIObjectTypeList_Register(engine);
	SQAIOrder_Register(engine);
	SQAIPriorityQueue_Register(engine);
	SQAIRail_Register(engine);
	SQAIRailTypeList_Register(engine);
	SQAIRoad_Register(engine);
	SQAIRoadTypeList_Register(engine);
	SQAISign_Register(engine);
	SQAISignList_Register(engine);
	SQAIStation_Register(engine);
	SQAIStationList_Register(engine);
	SQAIStationList_Cargo_Register(engine);
	SQAIStationList_CargoPlanned_Register(engine);
	SQAIStationList_CargoPlannedByFrom_Register(engine);
	SQAIStationList_CargoPlannedByVia_Register(engine);
	SQAIStationList_CargoPlannedFromByVia_Register(engine);
	SQAIStationList_CargoPlannedViaByFrom_Register(engine);
	SQAIStationList_CargoWaiting_Register(engine);
	SQAIStationList_CargoWaitingByFrom_Register(engine);
	SQAIStationList_CargoWaitingByVia_Register(engine);
	SQAIStationList_CargoWaitingFromByVia_Register(engine);
	SQAIStationList_CargoWaitingViaByFrom_Register(engine);
	SQAIStationList_Vehicle_Register(engine);
	SQAISubsidy_Register(engine);
	SQAISubsidyList_Register(engine);
	SQAITestMode_Register(engine);
	SQAITile_Register(engine);
	SQAITileList_Register(engine);
	SQAITileList_IndustryAccepting_Register(engine);
	SQAITileList_IndustryProducing_Register(engine);
	SQAITileList_StationCoverage_Register(engine);
	SQAITileList_StationType_Register(engine);
	SQAITown_Register(engine);
	SQAITownEffectList_Register(engine);
	SQAITownList_Register(engine);
	SQAITunnel_Register(engine);
	SQAIVehicle_Register(engine);
	SQAIVehicleList_Register(engine);
	SQAIVehicleList_DefaultGroup_Register(engine);
	SQAIVehicleList_Depot_Register(engine);
	SQAIVehicleList_Group_Register(engine);
	SQAIVehicleList_SharedOrders_Register(engine);
	SQAIVehicleList_Station_Register(engine);
	SQAIVehicleList_Waypoint_Register(engine);
	SQAIWaypoint_Register(engine);
	SQAIWaypointList_Register(engine);
	SQAIWaypointList_Vehicle_Register(engine);
}
