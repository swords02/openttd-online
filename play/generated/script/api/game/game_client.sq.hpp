/*
 * This file is part of OpenTTD.
 * OpenTTD is free software; you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, version 2.
 * OpenTTD is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 * See the GNU General Public License for more details. You should have received a copy of the GNU General Public License along with OpenTTD. If not, see <https://www.gnu.org/licenses/old-licenses/gpl-2.0>.
 */

/* THIS FILE IS AUTO-GENERATED; PLEASE DO NOT ALTER MANUALLY */

#include "../script_client.hpp"
#include "../template/template_client.sq.hpp"


template <> SQInteger PushClassName<ScriptClient, ScriptType::GS>(HSQUIRRELVM vm) { sq_pushstring(vm, "GSClient"); return 1; }

void SQGSClient_Register(Squirrel &engine)
{
	DefSQClass<ScriptClient, ScriptType::GS> SQGSClient("GSClient");
	SQGSClient.PreRegister(engine, "GSObject");

	SQGSClient.DefSQConst(engine, ScriptClient::CLIENT_INVALID, "CLIENT_INVALID");
	SQGSClient.DefSQConst(engine, ScriptClient::CLIENT_SERVER,  "CLIENT_SERVER");
	SQGSClient.DefSQConst(engine, ScriptClient::CLIENT_FIRST,   "CLIENT_FIRST");

	SQGSClient.DefSQStaticMethod(engine, &ScriptClient::ResolveClientID, "ResolveClientID", ".i");
	SQGSClient.DefSQStaticMethod(engine, &ScriptClient::GetName,         "GetName",         ".i");
	SQGSClient.DefSQStaticMethod(engine, &ScriptClient::GetCompany,      "GetCompany",      ".i");
	SQGSClient.DefSQStaticMethod(engine, &ScriptClient::GetJoinDate,     "GetJoinDate",     ".i");

	SQGSClient.PostRegister(engine);
}
