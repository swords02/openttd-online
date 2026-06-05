/*
 * This file is part of OpenTTD.
 * OpenTTD is free software; you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, version 2.
 * OpenTTD is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 * See the GNU General Public License for more details. You should have received a copy of the GNU General Public License along with OpenTTD. If not, see <https://www.gnu.org/licenses/old-licenses/gpl-2.0>.
 */

/* THIS FILE IS AUTO-GENERATED; PLEASE DO NOT ALTER MANUALLY */

#include "../script_priorityqueue.hpp"
#include "../template/template_priorityqueue.sq.hpp"


template <> SQInteger PushClassName<ScriptPriorityQueue, ScriptType::GS>(HSQUIRRELVM vm) { sq_pushstring(vm, "GSPriorityQueue"); return 1; }

void SQGSPriorityQueue_Register(Squirrel &engine)
{
	DefSQClass<ScriptPriorityQueue, ScriptType::GS> SQGSPriorityQueue("GSPriorityQueue");
	SQGSPriorityQueue.PreRegister(engine, "GSObject");
	SQGSPriorityQueue.AddConstructor<void (ScriptPriorityQueue::*)()>(engine, "x");

	SQGSPriorityQueue.DefSQAdvancedMethod(engine, &ScriptPriorityQueue::Insert, "Insert");
	SQGSPriorityQueue.DefSQAdvancedMethod(engine, &ScriptPriorityQueue::Pop, "Pop");
	SQGSPriorityQueue.DefSQAdvancedMethod(engine, &ScriptPriorityQueue::Peek, "Peek");
	SQGSPriorityQueue.DefSQAdvancedMethod(engine, &ScriptPriorityQueue::Exists, "Exists");
	SQGSPriorityQueue.DefSQAdvancedMethod(engine, &ScriptPriorityQueue::Clear, "Clear");
	SQGSPriorityQueue.DefSQMethod(engine, &ScriptPriorityQueue::IsEmpty, "IsEmpty", "x");
	SQGSPriorityQueue.DefSQMethod(engine, &ScriptPriorityQueue::Count,   "Count",   "x");

	SQGSPriorityQueue.PostRegister(engine);
}
