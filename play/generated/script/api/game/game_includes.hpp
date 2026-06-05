/*
 * This file is part of OpenTTD.
 * OpenTTD is free software; you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, version 2.
 * OpenTTD is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 * See the GNU General Public License for more details. You should have received a copy of the GNU General Public License along with OpenTTD. If not, see <https://www.gnu.org/licenses/old-licenses/gpl-2.0>.
 */

/* THIS FILE IS AUTO-GENERATED; PLEASE DO NOT ALTER MANUALLY */

#include "../script_fatalerror.hpp"

#include "game_accounting.sq.hpp"
#include "game_admin.sq.hpp"
#include "game_airport.sq.hpp"
#include "game_asyncmode.sq.hpp"
#include "game_base.sq.hpp"
#include "game_basestation.sq.hpp"
#include "game_bridge.sq.hpp"
#include "game_bridgelist.sq.hpp"
#include "game_cargo.sq.hpp"
#include "game_cargolist.sq.hpp"
#include "game_cargomonitor.sq.hpp"
#include "game_client.sq.hpp"
#include "game_clientlist.sq.hpp"
#include "game_company.sq.hpp"
#include "game_companymode.sq.hpp"
#include "game_controller.sq.hpp"
#include "game_date.sq.hpp"
#include "game_depotlist.sq.hpp"
#include "game_engine.sq.hpp"
#include "game_enginelist.sq.hpp"
#include "game_error.sq.hpp"
#include "game_event.sq.hpp"
#include "game_event_types.sq.hpp"
#include "game_execmode.sq.hpp"
#include "game_game.sq.hpp"
#include "game_gamesettings.sq.hpp"
#include "game_goal.sq.hpp"
#include "game_group.sq.hpp"
#include "game_grouplist.sq.hpp"
#include "game_industry.sq.hpp"
#include "game_industrylist.sq.hpp"
#include "game_industrytype.sq.hpp"
#include "game_industrytypelist.sq.hpp"
#include "game_infrastructure.sq.hpp"
#include "game_league.sq.hpp"
#include "game_list.sq.hpp"
#include "game_log.sq.hpp"
#include "game_map.sq.hpp"
#include "game_marine.sq.hpp"
#include "game_newgrf.sq.hpp"
#include "game_news.sq.hpp"
#include "game_objecttype.sq.hpp"
#include "game_objecttypelist.sq.hpp"
#include "game_order.sq.hpp"
#include "game_priorityqueue.sq.hpp"
#include "game_rail.sq.hpp"
#include "game_railtypelist.sq.hpp"
#include "game_road.sq.hpp"
#include "game_roadtypelist.sq.hpp"
#include "game_sign.sq.hpp"
#include "game_signlist.sq.hpp"
#include "game_station.sq.hpp"
#include "game_stationlist.sq.hpp"
#include "game_story_page.sq.hpp"
#include "game_storypageelementlist.sq.hpp"
#include "game_storypagelist.sq.hpp"
#include "game_subsidy.sq.hpp"
#include "game_subsidylist.sq.hpp"
#include "game_testmode.sq.hpp"
#include "game_text.sq.hpp"
#include "game_tile.sq.hpp"
#include "game_tilelist.sq.hpp"
#include "game_town.sq.hpp"
#include "game_townlist.sq.hpp"
#include "game_tunnel.sq.hpp"
#include "game_vehicle.sq.hpp"
#include "game_vehiclelist.sq.hpp"
#include "game_viewport.sq.hpp"
#include "game_waypoint.sq.hpp"
#include "game_waypointlist.sq.hpp"
#include "game_window.sq.hpp"

void SQGS_RegisterAll(Squirrel &engine)
{
	DefSQClass<ScriptObject, ScriptType::GS> SQGSObject("GSObject");
	SQGSObject.PreRegister(engine);
	SQGSObject.DefSQAdvancedStaticMethod(engine, &ScriptObject::Constructor, "constructor");
	SQGSObject.DefSQAdvancedStaticMethod(engine, &ScriptObject::_cloned, "_cloned");
	SQGSObject.PostRegister(engine);

	SQGSList_Register(engine);
	SQGSAccounting_Register(engine);
	SQGSAdmin_Register(engine);
	SQGSAirport_Register(engine);
	SQGSAsyncMode_Register(engine);
	SQGSBase_Register(engine);
	SQGSBaseStation_Register(engine);
	SQGSBridge_Register(engine);
	SQGSBridgeList_Register(engine);
	SQGSBridgeList_Length_Register(engine);
	SQGSCargo_Register(engine);
	SQGSCargoList_Register(engine);
	SQGSCargoList_IndustryAccepting_Register(engine);
	SQGSCargoList_IndustryProducing_Register(engine);
	SQGSCargoList_StationAccepting_Register(engine);
	SQGSCargoMonitor_Register(engine);
	SQGSClient_Register(engine);
	SQGSClientList_Register(engine);
	SQGSClientList_Company_Register(engine);
	SQGSCompany_Register(engine);
	SQGSCompanyMode_Register(engine);
	SQGSDate_Register(engine);
	SQGSDepotList_Register(engine);
	SQGSEngine_Register(engine);
	SQGSEngineList_Register(engine);
	SQGSError_Register(engine);
	SQGSEvent_Register(engine);
	SQGSEventAdminPort_Register(engine);
	SQGSEventCompanyBankrupt_Register(engine);
	SQGSEventCompanyInTrouble_Register(engine);
	SQGSEventCompanyMerger_Register(engine);
	SQGSEventCompanyNew_Register(engine);
	SQGSEventCompanyRenamed_Register(engine);
	SQGSEventCompanyTown_Register(engine);
	SQGSEventController_Register(engine);
	SQGSEventExclusiveTransportRights_Register(engine);
	SQGSEventGoalQuestionAnswer_Register(engine);
	SQGSEventIndustryClose_Register(engine);
	SQGSEventIndustryOpen_Register(engine);
	SQGSEventPresidentRenamed_Register(engine);
	SQGSEventRoadReconstruction_Register(engine);
	SQGSEventStationFirstVehicle_Register(engine);
	SQGSEventStoryPageButtonClick_Register(engine);
	SQGSEventStoryPageTileSelect_Register(engine);
	SQGSEventStoryPageVehicleSelect_Register(engine);
	SQGSEventSubsidyAwarded_Register(engine);
	SQGSEventSubsidyExpired_Register(engine);
	SQGSEventSubsidyOffer_Register(engine);
	SQGSEventSubsidyOfferExpired_Register(engine);
	SQGSEventTownFounded_Register(engine);
	SQGSEventVehicleCrashed_Register(engine);
	SQGSEventWindowWidgetClick_Register(engine);
	SQGSExecMode_Register(engine);
	SQGSGame_Register(engine);
	SQGSGameSettings_Register(engine);
	SQGSGoal_Register(engine);
	SQGSGroup_Register(engine);
	SQGSGroupList_Register(engine);
	SQGSIndustry_Register(engine);
	SQGSIndustryList_Register(engine);
	SQGSIndustryList_CargoAccepting_Register(engine);
	SQGSIndustryList_CargoProducing_Register(engine);
	SQGSIndustryType_Register(engine);
	SQGSIndustryTypeList_Register(engine);
	SQGSInfrastructure_Register(engine);
	SQGSLeagueTable_Register(engine);
	SQGSLog_Register(engine);
	SQGSMap_Register(engine);
	SQGSMarine_Register(engine);
	SQGSNewGRF_Register(engine);
	SQGSNewGRFList_Register(engine);
	SQGSNews_Register(engine);
	SQGSObjectType_Register(engine);
	SQGSObjectTypeList_Register(engine);
	SQGSOrder_Register(engine);
	SQGSPriorityQueue_Register(engine);
	SQGSRail_Register(engine);
	SQGSRailTypeList_Register(engine);
	SQGSRoad_Register(engine);
	SQGSRoadTypeList_Register(engine);
	SQGSSign_Register(engine);
	SQGSSignList_Register(engine);
	SQGSStation_Register(engine);
	SQGSStationList_Register(engine);
	SQGSStationList_Cargo_Register(engine);
	SQGSStationList_CargoPlanned_Register(engine);
	SQGSStationList_CargoPlannedByFrom_Register(engine);
	SQGSStationList_CargoPlannedByVia_Register(engine);
	SQGSStationList_CargoPlannedFromByVia_Register(engine);
	SQGSStationList_CargoPlannedViaByFrom_Register(engine);
	SQGSStationList_CargoWaiting_Register(engine);
	SQGSStationList_CargoWaitingByFrom_Register(engine);
	SQGSStationList_CargoWaitingByVia_Register(engine);
	SQGSStationList_CargoWaitingFromByVia_Register(engine);
	SQGSStationList_CargoWaitingViaByFrom_Register(engine);
	SQGSStationList_Vehicle_Register(engine);
	SQGSStoryPage_Register(engine);
	SQGSStoryPageElementList_Register(engine);
	SQGSStoryPageList_Register(engine);
	SQGSSubsidy_Register(engine);
	SQGSSubsidyList_Register(engine);
	SQGSTestMode_Register(engine);
	SQGSText_Register(engine);
	SQGSTile_Register(engine);
	SQGSTileList_Register(engine);
	SQGSTileList_IndustryAccepting_Register(engine);
	SQGSTileList_IndustryProducing_Register(engine);
	SQGSTileList_StationCoverage_Register(engine);
	SQGSTileList_StationType_Register(engine);
	SQGSTown_Register(engine);
	SQGSTownEffectList_Register(engine);
	SQGSTownList_Register(engine);
	SQGSTunnel_Register(engine);
	SQGSVehicle_Register(engine);
	SQGSVehicleList_Register(engine);
	SQGSVehicleList_DefaultGroup_Register(engine);
	SQGSVehicleList_Depot_Register(engine);
	SQGSVehicleList_Group_Register(engine);
	SQGSVehicleList_SharedOrders_Register(engine);
	SQGSVehicleList_Station_Register(engine);
	SQGSVehicleList_Waypoint_Register(engine);
	SQGSViewport_Register(engine);
	SQGSWaypoint_Register(engine);
	SQGSWaypointList_Register(engine);
	SQGSWaypointList_Vehicle_Register(engine);
	SQGSWindow_Register(engine);
}
