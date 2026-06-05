/*
 * This file is part of OpenTTD.
 * OpenTTD is free software; you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, version 2.
 * OpenTTD is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 * See the GNU General Public License for more details. You should have received a copy of the GNU General Public License along with OpenTTD. If not, see <https://www.gnu.org/licenses/old-licenses/gpl-2.0>.
 */

/* THIS FILE IS AUTO-GENERATED; PLEASE DO NOT ALTER MANUALLY */

#include "../script_event.hpp"
#include "../template/template_event.sq.hpp"


template <> SQInteger PushClassName<ScriptEvent, ScriptType::AI>(HSQUIRRELVM vm) { sq_pushstring(vm, "AIEvent"); return 1; }

void SQAIEvent_Register(Squirrel &engine)
{
	DefSQClass<ScriptEvent, ScriptType::AI> SQAIEvent("AIEvent");
	SQAIEvent.PreRegister(engine, "AIObject");

	SQAIEvent.DefSQConst(engine, ScriptEvent::ET_INVALID,                     "ET_INVALID");
	SQAIEvent.DefSQConst(engine, ScriptEvent::ET_TEST,                        "ET_TEST");
	SQAIEvent.DefSQConst(engine, ScriptEvent::ET_SUBSIDY_OFFER,               "ET_SUBSIDY_OFFER");
	SQAIEvent.DefSQConst(engine, ScriptEvent::ET_SUBSIDY_OFFER_EXPIRED,       "ET_SUBSIDY_OFFER_EXPIRED");
	SQAIEvent.DefSQConst(engine, ScriptEvent::ET_SUBSIDY_AWARDED,             "ET_SUBSIDY_AWARDED");
	SQAIEvent.DefSQConst(engine, ScriptEvent::ET_SUBSIDY_EXPIRED,             "ET_SUBSIDY_EXPIRED");
	SQAIEvent.DefSQConst(engine, ScriptEvent::ET_ENGINE_PREVIEW,              "ET_ENGINE_PREVIEW");
	SQAIEvent.DefSQConst(engine, ScriptEvent::ET_COMPANY_NEW,                 "ET_COMPANY_NEW");
	SQAIEvent.DefSQConst(engine, ScriptEvent::ET_COMPANY_IN_TROUBLE,          "ET_COMPANY_IN_TROUBLE");
	SQAIEvent.DefSQConst(engine, ScriptEvent::ET_COMPANY_ASK_MERGER,          "ET_COMPANY_ASK_MERGER");
	SQAIEvent.DefSQConst(engine, ScriptEvent::ET_COMPANY_MERGER,              "ET_COMPANY_MERGER");
	SQAIEvent.DefSQConst(engine, ScriptEvent::ET_COMPANY_BANKRUPT,            "ET_COMPANY_BANKRUPT");
	SQAIEvent.DefSQConst(engine, ScriptEvent::ET_VEHICLE_CRASHED,             "ET_VEHICLE_CRASHED");
	SQAIEvent.DefSQConst(engine, ScriptEvent::ET_VEHICLE_LOST,                "ET_VEHICLE_LOST");
	SQAIEvent.DefSQConst(engine, ScriptEvent::ET_VEHICLE_WAITING_IN_DEPOT,    "ET_VEHICLE_WAITING_IN_DEPOT");
	SQAIEvent.DefSQConst(engine, ScriptEvent::ET_VEHICLE_UNPROFITABLE,        "ET_VEHICLE_UNPROFITABLE");
	SQAIEvent.DefSQConst(engine, ScriptEvent::ET_INDUSTRY_OPEN,               "ET_INDUSTRY_OPEN");
	SQAIEvent.DefSQConst(engine, ScriptEvent::ET_INDUSTRY_CLOSE,              "ET_INDUSTRY_CLOSE");
	SQAIEvent.DefSQConst(engine, ScriptEvent::ET_ENGINE_AVAILABLE,            "ET_ENGINE_AVAILABLE");
	SQAIEvent.DefSQConst(engine, ScriptEvent::ET_STATION_FIRST_VEHICLE,       "ET_STATION_FIRST_VEHICLE");
	SQAIEvent.DefSQConst(engine, ScriptEvent::ET_DISASTER_ZEPPELINER_CRASHED, "ET_DISASTER_ZEPPELINER_CRASHED");
	SQAIEvent.DefSQConst(engine, ScriptEvent::ET_DISASTER_ZEPPELINER_CLEARED, "ET_DISASTER_ZEPPELINER_CLEARED");
	SQAIEvent.DefSQConst(engine, ScriptEvent::ET_TOWN_FOUNDED,                "ET_TOWN_FOUNDED");
	SQAIEvent.DefSQConst(engine, ScriptEvent::ET_AIRCRAFT_DEST_TOO_FAR,       "ET_AIRCRAFT_DEST_TOO_FAR");
	SQAIEvent.DefSQConst(engine, ScriptEvent::ET_ADMIN_PORT,                  "ET_ADMIN_PORT");
	SQAIEvent.DefSQConst(engine, ScriptEvent::ET_WINDOW_WIDGET_CLICK,         "ET_WINDOW_WIDGET_CLICK");
	SQAIEvent.DefSQConst(engine, ScriptEvent::ET_GOAL_QUESTION_ANSWER,        "ET_GOAL_QUESTION_ANSWER");
	SQAIEvent.DefSQConst(engine, ScriptEvent::ET_EXCLUSIVE_TRANSPORT_RIGHTS,  "ET_EXCLUSIVE_TRANSPORT_RIGHTS");
	SQAIEvent.DefSQConst(engine, ScriptEvent::ET_ROAD_RECONSTRUCTION,         "ET_ROAD_RECONSTRUCTION");
	SQAIEvent.DefSQConst(engine, ScriptEvent::ET_VEHICLE_AUTOREPLACED,        "ET_VEHICLE_AUTOREPLACED");
	SQAIEvent.DefSQConst(engine, ScriptEvent::ET_STORYPAGE_BUTTON_CLICK,      "ET_STORYPAGE_BUTTON_CLICK");
	SQAIEvent.DefSQConst(engine, ScriptEvent::ET_STORYPAGE_TILE_SELECT,       "ET_STORYPAGE_TILE_SELECT");
	SQAIEvent.DefSQConst(engine, ScriptEvent::ET_STORYPAGE_VEHICLE_SELECT,    "ET_STORYPAGE_VEHICLE_SELECT");
	SQAIEvent.DefSQConst(engine, ScriptEvent::ET_COMPANY_RENAMED,             "ET_COMPANY_RENAMED");
	SQAIEvent.DefSQConst(engine, ScriptEvent::ET_PRESIDENT_RENAMED,           "ET_PRESIDENT_RENAMED");

	SQAIEvent.DefSQMethod(engine, &ScriptEvent::GetEventType, "GetEventType", "x");

	SQAIEvent.PostRegister(engine);
}


template <> SQInteger PushClassName<ScriptEventController, ScriptType::AI>(HSQUIRRELVM vm) { sq_pushstring(vm, "AIEventController"); return 1; }

void SQAIEventController_Register(Squirrel &engine)
{
	DefSQClass<ScriptEventController, ScriptType::AI> SQAIEventController("AIEventController");
	SQAIEventController.PreRegister(engine, "AIObject");

	SQAIEventController.DefSQStaticMethod(engine, &ScriptEventController::IsEventWaiting, "IsEventWaiting", ".");
	SQAIEventController.DefSQStaticMethod(engine, &ScriptEventController::GetNextEvent,   "GetNextEvent",   ".");

	SQAIEventController.PostRegister(engine);
}
