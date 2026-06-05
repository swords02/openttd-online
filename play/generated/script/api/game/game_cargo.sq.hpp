/*
 * This file is part of OpenTTD.
 * OpenTTD is free software; you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, version 2.
 * OpenTTD is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 * See the GNU General Public License for more details. You should have received a copy of the GNU General Public License along with OpenTTD. If not, see <https://www.gnu.org/licenses/old-licenses/gpl-2.0>.
 */

/* THIS FILE IS AUTO-GENERATED; PLEASE DO NOT ALTER MANUALLY */

#include "../script_cargo.hpp"
#include "../template/template_cargo.sq.hpp"


template <> SQInteger PushClassName<ScriptCargo, ScriptType::GS>(HSQUIRRELVM vm) { sq_pushstring(vm, "GSCargo"); return 1; }

void SQGSCargo_Register(Squirrel &engine)
{
	DefSQClass<ScriptCargo, ScriptType::GS> SQGSCargo("GSCargo");
	SQGSCargo.PreRegister(engine, "GSObject");

	SQGSCargo.DefSQConst(engine, ScriptCargo::CC_PASSENGERS,             "CC_PASSENGERS");
	SQGSCargo.DefSQConst(engine, ScriptCargo::CC_MAIL,                   "CC_MAIL");
	SQGSCargo.DefSQConst(engine, ScriptCargo::CC_EXPRESS,                "CC_EXPRESS");
	SQGSCargo.DefSQConst(engine, ScriptCargo::CC_ARMOURED,               "CC_ARMOURED");
	SQGSCargo.DefSQConst(engine, ScriptCargo::CC_BULK,                   "CC_BULK");
	SQGSCargo.DefSQConst(engine, ScriptCargo::CC_PIECE_GOODS,            "CC_PIECE_GOODS");
	SQGSCargo.DefSQConst(engine, ScriptCargo::CC_LIQUID,                 "CC_LIQUID");
	SQGSCargo.DefSQConst(engine, ScriptCargo::CC_REFRIGERATED,           "CC_REFRIGERATED");
	SQGSCargo.DefSQConst(engine, ScriptCargo::CC_HAZARDOUS,              "CC_HAZARDOUS");
	SQGSCargo.DefSQConst(engine, ScriptCargo::CC_COVERED,                "CC_COVERED");
	SQGSCargo.DefSQConst(engine, ScriptCargo::CC_OVERSIZED,              "CC_OVERSIZED");
	SQGSCargo.DefSQConst(engine, ScriptCargo::CC_POWDERIZED,             "CC_POWDERIZED");
	SQGSCargo.DefSQConst(engine, ScriptCargo::CC_NON_POURABLE,           "CC_NON_POURABLE");
	SQGSCargo.DefSQConst(engine, ScriptCargo::CC_POTABLE,                "CC_POTABLE");
	SQGSCargo.DefSQConst(engine, ScriptCargo::CC_NON_POTABLE,            "CC_NON_POTABLE");
	SQGSCargo.DefSQConst(engine, ScriptCargo::TE_NONE,                   "TE_NONE");
	SQGSCargo.DefSQConst(engine, ScriptCargo::TE_PASSENGERS,             "TE_PASSENGERS");
	SQGSCargo.DefSQConst(engine, ScriptCargo::TE_MAIL,                   "TE_MAIL");
	SQGSCargo.DefSQConst(engine, ScriptCargo::TE_GOODS,                  "TE_GOODS");
	SQGSCargo.DefSQConst(engine, ScriptCargo::TE_WATER,                  "TE_WATER");
	SQGSCargo.DefSQConst(engine, ScriptCargo::TE_FOOD,                   "TE_FOOD");
	SQGSCargo.DefSQConst(engine, ScriptCargo::CT_AUTO_REFIT,             "CT_AUTO_REFIT");
	SQGSCargo.DefSQConst(engine, ScriptCargo::CT_NO_REFIT,               "CT_NO_REFIT");
	SQGSCargo.DefSQConst(engine, ScriptCargo::CT_INVALID,                "CT_INVALID");
	SQGSCargo.DefSQConst(engine, ScriptCargo::DT_MANUAL,                 "DT_MANUAL");
	SQGSCargo.DefSQConst(engine, ScriptCargo::DT_ASYMMETRIC,             "DT_ASYMMETRIC");
	SQGSCargo.DefSQConst(engine, ScriptCargo::DT_SYMMETRIC,              "DT_SYMMETRIC");
	SQGSCargo.DefSQConst(engine, ScriptCargo::INVALID_DISTRIBUTION_TYPE, "INVALID_DISTRIBUTION_TYPE");

	SQGSCargo.DefSQStaticMethod(engine, &ScriptCargo::IsValidCargo,        "IsValidCargo",        ".i");
	SQGSCargo.DefSQStaticMethod(engine, &ScriptCargo::IsValidTownEffect,   "IsValidTownEffect",   ".i");
	SQGSCargo.DefSQStaticMethod(engine, &ScriptCargo::GetName,             "GetName",             ".i");
	SQGSCargo.DefSQStaticMethod(engine, &ScriptCargo::GetCargoLabel,       "GetCargoLabel",       ".i");
	SQGSCargo.DefSQStaticMethod(engine, &ScriptCargo::IsFreight,           "IsFreight",           ".i");
	SQGSCargo.DefSQStaticMethod(engine, &ScriptCargo::HasCargoClass,       "HasCargoClass",       ".ii");
	SQGSCargo.DefSQStaticMethod(engine, &ScriptCargo::GetTownEffect,       "GetTownEffect",       ".i");
	SQGSCargo.DefSQStaticMethod(engine, &ScriptCargo::GetCargoIncome,      "GetCargoIncome",      ".iii");
	SQGSCargo.DefSQStaticMethod(engine, &ScriptCargo::GetDistributionType, "GetDistributionType", ".i");
	SQGSCargo.DefSQStaticMethod(engine, &ScriptCargo::GetWeight,           "GetWeight",           ".ii");

	SQGSCargo.PostRegister(engine);
}
