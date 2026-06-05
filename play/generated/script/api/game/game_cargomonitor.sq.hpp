/*
 * This file is part of OpenTTD.
 * OpenTTD is free software; you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, version 2.
 * OpenTTD is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 * See the GNU General Public License for more details. You should have received a copy of the GNU General Public License along with OpenTTD. If not, see <https://www.gnu.org/licenses/old-licenses/gpl-2.0>.
 */

/* THIS FILE IS AUTO-GENERATED; PLEASE DO NOT ALTER MANUALLY */

#include "../script_cargomonitor.hpp"
#include "../template/template_cargomonitor.sq.hpp"


template <> SQInteger PushClassName<ScriptCargoMonitor, ScriptType::GS>(HSQUIRRELVM vm) { sq_pushstring(vm, "GSCargoMonitor"); return 1; }

void SQGSCargoMonitor_Register(Squirrel &engine)
{
	DefSQClass<ScriptCargoMonitor, ScriptType::GS> SQGSCargoMonitor("GSCargoMonitor");
	SQGSCargoMonitor.PreRegister(engine, "GSObject");

	SQGSCargoMonitor.DefSQStaticMethod(engine, &ScriptCargoMonitor::GetTownDeliveryAmount,     "GetTownDeliveryAmount",     ".iiib");
	SQGSCargoMonitor.DefSQStaticMethod(engine, &ScriptCargoMonitor::GetIndustryDeliveryAmount, "GetIndustryDeliveryAmount", ".iiib");
	SQGSCargoMonitor.DefSQStaticMethod(engine, &ScriptCargoMonitor::GetTownPickupAmount,       "GetTownPickupAmount",       ".iiib");
	SQGSCargoMonitor.DefSQStaticMethod(engine, &ScriptCargoMonitor::GetIndustryPickupAmount,   "GetIndustryPickupAmount",   ".iiib");
	SQGSCargoMonitor.DefSQStaticMethod(engine, &ScriptCargoMonitor::StopAllMonitoring,         "StopAllMonitoring",         ".");

	SQGSCargoMonitor.PostRegister(engine);
}
