/*
 * This file is part of OpenTTD.
 * OpenTTD is free software; you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, version 2.
 * OpenTTD is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 * See the GNU General Public License for more details. You should have received a copy of the GNU General Public License along with OpenTTD. If not, see <https://www.gnu.org/licenses/old-licenses/gpl-2.0>.
 */

/* THIS FILE IS AUTO-GENERATED; PLEASE DO NOT ALTER MANUALLY */

#include "../script_priorityqueue.hpp"
#include "../template/template_priorityqueue.sq.hpp"


template <> SQInteger PushClassName<ScriptPriorityQueue, ScriptType::AI>(HSQUIRRELVM vm) { sq_pushstring(vm, "AIPriorityQueue"); return 1; }

void SQAIPriorityQueue_Register(Squirrel &engine)
{
	DefSQClass<ScriptPriorityQueue, ScriptType::AI> SQAIPriorityQueue("AIPriorityQueue");
	SQAIPriorityQueue.PreRegister(engine, "AIObject");
	SQAIPriorityQueue.AddConstructor<void (ScriptPriorityQueue::*)()>(engine, "x");

	SQAIPriorityQueue.DefSQAdvancedMethod(engine, &ScriptPriorityQueue::Insert, "Insert");
	SQAIPriorityQueue.DefSQAdvancedMethod(engine, &ScriptPriorityQueue::Pop, "Pop");
	SQAIPriorityQueue.DefSQAdvancedMethod(engine, &ScriptPriorityQueue::Peek, "Peek");
	SQAIPriorityQueue.DefSQAdvancedMethod(engine, &ScriptPriorityQueue::Exists, "Exists");
	SQAIPriorityQueue.DefSQAdvancedMethod(engine, &ScriptPriorityQueue::Clear, "Clear");
	SQAIPriorityQueue.DefSQMethod(engine, &ScriptPriorityQueue::IsEmpty, "IsEmpty", "x");
	SQAIPriorityQueue.DefSQMethod(engine, &ScriptPriorityQueue::Count,   "Count",   "x");

	SQAIPriorityQueue.PostRegister(engine);
}
