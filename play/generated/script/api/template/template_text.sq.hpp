/*
 * This file is part of OpenTTD.
 * OpenTTD is free software; you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, version 2.
 * OpenTTD is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 * See the GNU General Public License for more details. You should have received a copy of the GNU General Public License along with OpenTTD. If not, see <https://www.gnu.org/licenses/old-licenses/gpl-2.0>.
 */

/* THIS FILE IS AUTO-GENERATED; PLEASE DO NOT ALTER MANUALLY */

#include "../script_text.hpp"

namespace SQConvert {
	/* Allow ScriptText to be used as Squirrel parameter */
	template <> struct Param<ScriptText *> { static inline ScriptText *Get(HSQUIRRELVM vm, int index) { return  static_cast<ScriptText *>(Squirrel::GetRealInstance(vm, index, "Text")); } };
	template <> struct Param<ScriptText &> { static inline ScriptText &Get(HSQUIRRELVM vm, int index) { return *static_cast<ScriptText *>(Squirrel::GetRealInstance(vm, index, "Text")); } };
	template <> struct Param<const ScriptText *> { static inline const ScriptText *Get(HSQUIRRELVM vm, int index) { return  static_cast<ScriptText *>(Squirrel::GetRealInstance(vm, index, "Text")); } };
	template <> struct Param<const ScriptText &> { static inline const ScriptText &Get(HSQUIRRELVM vm, int index) { return *static_cast<ScriptText *>(Squirrel::GetRealInstance(vm, index, "Text")); } };

	template <> struct Param<Text *> {
		static inline Text *Get(HSQUIRRELVM vm, int index) {
			if (sq_gettype(vm, index) == OT_INSTANCE) {
				return Param<ScriptText *>::Get(vm, index);
			}
			if (sq_gettype(vm, index) == OT_STRING) {
				return new RawText(Param<const std::string &>::Get(vm, index));
			}
			if (sq_gettype(vm, index) == OT_NULL) {
				return nullptr;
			}
			throw sq_throwerror(vm, fmt::format("parameter {} has an invalid type ; expected: 'Text'", index - 1));
		}
	};
} // namespace SQConvert
