/*
 * This file is part of OpenTTD.
 * OpenTTD is free software; you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, version 2.
 * OpenTTD is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 * See the GNU General Public License for more details. You should have received a copy of the GNU General Public License along with OpenTTD. If not, see <https://www.gnu.org/licenses/old-licenses/gpl-2.0>.
 */

/* THIS FILE IS AUTO-GENERATED; PLEASE DO NOT ALTER MANUALLY */

#include "../script_tunnel.hpp"

namespace SQConvert {
	/* Allow ScriptTunnel to be used as Squirrel parameter */
	template <> struct Param<ScriptTunnel *> { static inline ScriptTunnel *Get(HSQUIRRELVM vm, int index) { return  static_cast<ScriptTunnel *>(Squirrel::GetRealInstance(vm, index, "Tunnel")); } };
	template <> struct Param<ScriptTunnel &> { static inline ScriptTunnel &Get(HSQUIRRELVM vm, int index) { return *static_cast<ScriptTunnel *>(Squirrel::GetRealInstance(vm, index, "Tunnel")); } };
	template <> struct Param<const ScriptTunnel *> { static inline const ScriptTunnel *Get(HSQUIRRELVM vm, int index) { return  static_cast<ScriptTunnel *>(Squirrel::GetRealInstance(vm, index, "Tunnel")); } };
	template <> struct Param<const ScriptTunnel &> { static inline const ScriptTunnel &Get(HSQUIRRELVM vm, int index) { return *static_cast<ScriptTunnel *>(Squirrel::GetRealInstance(vm, index, "Tunnel")); } };
	template <> struct Return<ScriptTunnel *> { static inline int Set(HSQUIRRELVM vm, ScriptTunnel *res) { if (res == nullptr) { sq_pushnull(vm); return 1; } res->AddRef(); Squirrel::CreateClassInstanceVM(vm, "Tunnel", res, nullptr, DefSQDestructorCallback<ScriptTunnel>, true); return 1; } };
} // namespace SQConvert
