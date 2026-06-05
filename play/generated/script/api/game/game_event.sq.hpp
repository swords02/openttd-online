/*
 * This file is part of OpenTTD.
 * OpenTTD is free software; you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, version 2.
 * OpenTTD is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 * See the GNU General Public License for more details. You should have received a copy of the GNU General Public License along with OpenTTD. If not, see <https://www.gnu.org/licenses/old-licenses/gpl-2.0>.
 */

/* THIS FILE IS AUTO-GENERATED; PLEASE DO NOT ALTER MANUALLY */

#include "../script_event.hpp"
#include "../template/template_event.sq.hpp"


template <> SQInteger PushClassName<ScriptEvent, ScriptType::GS>(HSQUIRRELVM vm) { sq_pushstring(vm, "GSEvent"); return 1; }

void SQGSEvent_Register(Squirrel &engine)
{
	DefSQClass<ScriptEvent, ScriptType::GS> SQGSEvent("GSEvent");
	SQGSEvent.PreRegister(engine, "GSObject");

	SQGSEvent.DefSQConst(engine, ScriptEvent::ET_INVALID,                     "ET_INVALID");
	SQGSEvent.DefSQConst(engine, ScriptEvent::ET_TEST,                        "ET_TEST");
	SQGSEvent.DefSQConst(engine, ScriptEvent::ET_SUBSIDY_OFFER,               "ET_SUBSIDY_OFFER");
	SQGSEvent.DefSQConst(engine, ScriptEvent::ET_SUBSIDY_OFFER_EXPIRED,       "ET_SUBSIDY_OFFER_EXPIRED");
	SQGSEvent.DefSQConst(engine, ScriptEvent::ET_SUBSIDY_AWARDED,             "ET_SUBSIDY_AWARDED");
	SQGSEvent.DefSQConst(engine, ScriptEvent::ET_SUBSIDY_EXPIRED,             "ET_SUBSIDY_EXPIRED");
	SQGSEvent.DefSQConst(engine, ScriptEvent::ET_ENGINE_PREVIEW,              "ET_ENGINE_PREVIEW");
	SQGSEvent.DefSQConst(engine, ScriptEvent::ET_COMPANY_NEW,                 "ET_COMPANY_NEW");
	SQGSEvent.DefSQConst(engine, ScriptEvent::ET_COMPANY_IN_TROUBLE,          "ET_COMPANY_IN_TROUBLE");
	SQGSEvent.DefSQConst(engine, ScriptEvent::ET_COMPANY_ASK_MERGER,          "ET_COMPANY_ASK_MERGER");
	SQGSEvent.DefSQConst(engine, ScriptEvent::ET_COMPANY_MERGER,              "ET_COMPANY_MERGER");
	SQGSEvent.DefSQConst(engine, ScriptEvent::ET_COMPANY_BANKRUPT,            "ET_COMPANY_BANKRUPT");
	SQGSEvent.DefSQConst(engine, ScriptEvent::ET_VEHICLE_CRASHED,             "ET_VEHICLE_CRASHED");
	SQGSEvent.DefSQConst(engine, ScriptEvent::ET_VEHICLE_LOST,                "ET_VEHICLE_LOST");
	SQGSEvent.DefSQConst(engine, ScriptEvent::ET_VEHICLE_WAITING_IN_DEPOT,    "ET_VEHICLE_WAITING_IN_DEPOT");
	SQGSEvent.DefSQConst(engine, ScriptEvent::ET_VEHICLE_UNPROFITABLE,        "ET_VEHICLE_UNPROFITABLE");
	SQGSEvent.DefSQConst(engine, ScriptEvent::ET_INDUSTRY_OPEN,               "ET_INDUSTRY_OPEN");
	SQGSEvent.DefSQConst(engine, ScriptEvent::ET_INDUSTRY_CLOSE,              "ET_INDUSTRY_CLOSE");
	SQGSEvent.DefSQConst(engine, ScriptEvent::ET_ENGINE_AVAILABLE,            "ET_ENGINE_AVAILABLE");
	SQGSEvent.DefSQConst(engine, ScriptEvent::ET_STATION_FIRST_VEHICLE,       "ET_STATION_FIRST_VEHICLE");
	SQGSEvent.DefSQConst(engine, ScriptEvent::ET_DISASTER_ZEPPELINER_CRASHED, "ET_DISASTER_ZEPPELINER_CRASHED");
	SQGSEvent.DefSQConst(engine, ScriptEvent::ET_DISASTER_ZEPPELINER_CLEARED, "ET_DISASTER_ZEPPELINER_CLEARED");
	SQGSEvent.DefSQConst(engine, ScriptEvent::ET_TOWN_FOUNDED,                "ET_TOWN_FOUNDED");
	SQGSEvent.DefSQConst(engine, ScriptEvent::ET_AIRCRAFT_DEST_TOO_FAR,       "ET_AIRCRAFT_DEST_TOO_FAR");
	SQGSEvent.DefSQConst(engine, ScriptEvent::ET_ADMIN_PORT,                  "ET_ADMIN_PORT");
	SQGSEvent.DefSQConst(engine, ScriptEvent::ET_WINDOW_WIDGET_CLICK,         "ET_WINDOW_WIDGET_CLICK");
	SQGSEvent.DefSQConst(engine, ScriptEvent::ET_GOAL_QUESTION_ANSWER,        "ET_GOAL_QUESTION_ANSWER");
	SQGSEvent.DefSQConst(engine, ScriptEvent::ET_EXCLUSIVE_TRANSPORT_RIGHTS,  "ET_EXCLUSIVE_TRANSPORT_RIGHTS");
	SQGSEvent.DefSQConst(engine, ScriptEvent::ET_ROAD_RECONSTRUCTION,         "ET_ROAD_RECONSTRUCTION");
	SQGSEvent.DefSQConst(engine, ScriptEvent::ET_VEHICLE_AUTOREPLACED,        "ET_VEHICLE_AUTOREPLACED");
	SQGSEvent.DefSQConst(engine, ScriptEvent::ET_STORYPAGE_BUTTON_CLICK,      "ET_STORYPAGE_BUTTON_CLICK");
	SQGSEvent.DefSQConst(engine, ScriptEvent::ET_STORYPAGE_TILE_SELECT,       "ET_STORYPAGE_TILE_SELECT");
	SQGSEvent.DefSQConst(engine, ScriptEvent::ET_STORYPAGE_VEHICLE_SELECT,    "ET_STORYPAGE_VEHICLE_SELECT");
	SQGSEvent.DefSQConst(engine, ScriptEvent::ET_COMPANY_RENAMED,             "ET_COMPANY_RENAMED");
	SQGSEvent.DefSQConst(engine, ScriptEvent::ET_PRESIDENT_RENAMED,           "ET_PRESIDENT_RENAMED");

	SQGSEvent.DefSQMethod(engine, &ScriptEvent::GetEventType, "GetEventType", "x");

	SQGSEvent.PostRegister(engine);
}


template <> SQInteger PushClassName<ScriptEventController, ScriptType::GS>(HSQUIRRELVM vm) { sq_pushstring(vm, "GSEventController"); return 1; }

void SQGSEventController_Register(Squirrel &engine)
{
	DefSQClass<ScriptEventController, ScriptType::GS> SQGSEventController("GSEventController");
	SQGSEventController.PreRegister(engine, "GSObject");

	SQGSEventController.DefSQStaticMethod(engine, &ScriptEventController::IsEventWaiting, "IsEventWaiting", ".");
	SQGSEventController.DefSQStaticMethod(engine, &ScriptEventController::GetNextEvent,   "GetNextEvent",   ".");

	SQGSEventController.PostRegister(engine);
}
