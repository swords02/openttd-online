/*
 * This file is part of OpenTTD.
 * OpenTTD is free software; you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, version 2.
 * OpenTTD is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 * See the GNU General Public License for more details. You should have received a copy of the GNU General Public License along with OpenTTD. If not, see <https://www.gnu.org/licenses/old-licenses/gpl-2.0>.
 */

/* THIS FILE IS AUTO-GENERATED; PLEASE DO NOT ALTER MANUALLY */

#include "../script_company.hpp"
#include "../template/template_company.sq.hpp"


template <> SQInteger PushClassName<ScriptCompany, ScriptType::AI>(HSQUIRRELVM vm) { sq_pushstring(vm, "AICompany"); return 1; }

void SQAICompany_Register(Squirrel &engine)
{
	DefSQClass<ScriptCompany, ScriptType::AI> SQAICompany("AICompany");
	SQAICompany.PreRegister(engine, "AIObject");

	SQAICompany.DefSQConst(engine, ScriptCompany::CURRENT_QUARTER,             "CURRENT_QUARTER");
	SQAICompany.DefSQConst(engine, ScriptCompany::EARLIEST_QUARTER,            "EARLIEST_QUARTER");
	SQAICompany.DefSQConst(engine, ScriptCompany::COMPANY_FIRST,               "COMPANY_FIRST");
	SQAICompany.DefSQConst(engine, ScriptCompany::COMPANY_LAST,                "COMPANY_LAST");
	SQAICompany.DefSQConst(engine, ScriptCompany::COMPANY_INVALID,             "COMPANY_INVALID");
	SQAICompany.DefSQConst(engine, ScriptCompany::COMPANY_SELF,                "COMPANY_SELF");
	SQAICompany.DefSQConst(engine, ScriptCompany::COMPANY_SPECTATOR,           "COMPANY_SPECTATOR");
	SQAICompany.DefSQConst(engine, ScriptCompany::GENDER_MALE,                 "GENDER_MALE");
	SQAICompany.DefSQConst(engine, ScriptCompany::GENDER_FEMALE,               "GENDER_FEMALE");
	SQAICompany.DefSQConst(engine, ScriptCompany::GENDER_INVALID,              "GENDER_INVALID");
	SQAICompany.DefSQConst(engine, ScriptCompany::LS_DEFAULT,                  "LS_DEFAULT");
	SQAICompany.DefSQConst(engine, ScriptCompany::LS_STEAM,                    "LS_STEAM");
	SQAICompany.DefSQConst(engine, ScriptCompany::LS_DIESEL,                   "LS_DIESEL");
	SQAICompany.DefSQConst(engine, ScriptCompany::LS_ELECTRIC,                 "LS_ELECTRIC");
	SQAICompany.DefSQConst(engine, ScriptCompany::LS_MONORAIL,                 "LS_MONORAIL");
	SQAICompany.DefSQConst(engine, ScriptCompany::LS_MAGLEV,                   "LS_MAGLEV");
	SQAICompany.DefSQConst(engine, ScriptCompany::LS_DMU,                      "LS_DMU");
	SQAICompany.DefSQConst(engine, ScriptCompany::LS_EMU,                      "LS_EMU");
	SQAICompany.DefSQConst(engine, ScriptCompany::LS_PASSENGER_WAGON_STEAM,    "LS_PASSENGER_WAGON_STEAM");
	SQAICompany.DefSQConst(engine, ScriptCompany::LS_PASSENGER_WAGON_DIESEL,   "LS_PASSENGER_WAGON_DIESEL");
	SQAICompany.DefSQConst(engine, ScriptCompany::LS_PASSENGER_WAGON_ELECTRIC, "LS_PASSENGER_WAGON_ELECTRIC");
	SQAICompany.DefSQConst(engine, ScriptCompany::LS_PASSENGER_WAGON_MONORAIL, "LS_PASSENGER_WAGON_MONORAIL");
	SQAICompany.DefSQConst(engine, ScriptCompany::LS_PASSENGER_WAGON_MAGLEV,   "LS_PASSENGER_WAGON_MAGLEV");
	SQAICompany.DefSQConst(engine, ScriptCompany::LS_FREIGHT_WAGON,            "LS_FREIGHT_WAGON");
	SQAICompany.DefSQConst(engine, ScriptCompany::LS_BUS,                      "LS_BUS");
	SQAICompany.DefSQConst(engine, ScriptCompany::LS_TRUCK,                    "LS_TRUCK");
	SQAICompany.DefSQConst(engine, ScriptCompany::LS_PASSENGER_SHIP,           "LS_PASSENGER_SHIP");
	SQAICompany.DefSQConst(engine, ScriptCompany::LS_FREIGHT_SHIP,             "LS_FREIGHT_SHIP");
	SQAICompany.DefSQConst(engine, ScriptCompany::LS_HELICOPTER,               "LS_HELICOPTER");
	SQAICompany.DefSQConst(engine, ScriptCompany::LS_SMALL_PLANE,              "LS_SMALL_PLANE");
	SQAICompany.DefSQConst(engine, ScriptCompany::LS_LARGE_PLANE,              "LS_LARGE_PLANE");
	SQAICompany.DefSQConst(engine, ScriptCompany::LS_PASSENGER_TRAM,           "LS_PASSENGER_TRAM");
	SQAICompany.DefSQConst(engine, ScriptCompany::LS_FREIGHT_TRAM,             "LS_FREIGHT_TRAM");
	SQAICompany.DefSQConst(engine, ScriptCompany::LS_INVALID,                  "LS_INVALID");
	SQAICompany.DefSQConst(engine, ScriptCompany::COLOUR_DARK_BLUE,            "COLOUR_DARK_BLUE");
	SQAICompany.DefSQConst(engine, ScriptCompany::COLOUR_PALE_GREEN,           "COLOUR_PALE_GREEN");
	SQAICompany.DefSQConst(engine, ScriptCompany::COLOUR_PINK,                 "COLOUR_PINK");
	SQAICompany.DefSQConst(engine, ScriptCompany::COLOUR_YELLOW,               "COLOUR_YELLOW");
	SQAICompany.DefSQConst(engine, ScriptCompany::COLOUR_RED,                  "COLOUR_RED");
	SQAICompany.DefSQConst(engine, ScriptCompany::COLOUR_LIGHT_BLUE,           "COLOUR_LIGHT_BLUE");
	SQAICompany.DefSQConst(engine, ScriptCompany::COLOUR_GREEN,                "COLOUR_GREEN");
	SQAICompany.DefSQConst(engine, ScriptCompany::COLOUR_DARK_GREEN,           "COLOUR_DARK_GREEN");
	SQAICompany.DefSQConst(engine, ScriptCompany::COLOUR_BLUE,                 "COLOUR_BLUE");
	SQAICompany.DefSQConst(engine, ScriptCompany::COLOUR_CREAM,                "COLOUR_CREAM");
	SQAICompany.DefSQConst(engine, ScriptCompany::COLOUR_MAUVE,                "COLOUR_MAUVE");
	SQAICompany.DefSQConst(engine, ScriptCompany::COLOUR_PURPLE,               "COLOUR_PURPLE");
	SQAICompany.DefSQConst(engine, ScriptCompany::COLOUR_ORANGE,               "COLOUR_ORANGE");
	SQAICompany.DefSQConst(engine, ScriptCompany::COLOUR_BROWN,                "COLOUR_BROWN");
	SQAICompany.DefSQConst(engine, ScriptCompany::COLOUR_GREY,                 "COLOUR_GREY");
	SQAICompany.DefSQConst(engine, ScriptCompany::COLOUR_WHITE,                "COLOUR_WHITE");
	SQAICompany.DefSQConst(engine, ScriptCompany::COLOUR_INVALID,              "COLOUR_INVALID");

	SQAICompany.DefSQStaticMethod(engine, &ScriptCompany::ResolveCompanyID,              "ResolveCompanyID",              ".i");
	SQAICompany.DefSQStaticMethod(engine, &ScriptCompany::IsMine,                        "IsMine",                        ".i");
	SQAICompany.DefSQStaticMethod(engine, &ScriptCompany::SetName,                       "SetName",                       "..");
	SQAICompany.DefSQStaticMethod(engine, &ScriptCompany::GetName,                       "GetName",                       ".i");
	SQAICompany.DefSQStaticMethod(engine, &ScriptCompany::SetPresidentName,              "SetPresidentName",              "..");
	SQAICompany.DefSQStaticMethod(engine, &ScriptCompany::GetPresidentName,              "GetPresidentName",              ".i");
	SQAICompany.DefSQStaticMethod(engine, &ScriptCompany::SetPresidentGender,            "SetPresidentGender",            ".i");
	SQAICompany.DefSQStaticMethod(engine, &ScriptCompany::GetPresidentGender,            "GetPresidentGender",            ".i");
	SQAICompany.DefSQStaticMethod(engine, &ScriptCompany::SetLoanAmount,                 "SetLoanAmount",                 ".i");
	SQAICompany.DefSQStaticMethod(engine, &ScriptCompany::SetMinimumLoanAmount,          "SetMinimumLoanAmount",          ".i");
	SQAICompany.DefSQStaticMethod(engine, &ScriptCompany::GetLoanAmount,                 "GetLoanAmount",                 ".");
	SQAICompany.DefSQStaticMethod(engine, &ScriptCompany::GetMaxLoanAmount,              "GetMaxLoanAmount",              ".");
	SQAICompany.DefSQStaticMethod(engine, &ScriptCompany::GetLoanInterval,               "GetLoanInterval",               ".");
	SQAICompany.DefSQStaticMethod(engine, &ScriptCompany::GetBankBalance,                "GetBankBalance",                ".i");
	SQAICompany.DefSQStaticMethod(engine, &ScriptCompany::GetQuarterlyIncome,            "GetQuarterlyIncome",            ".ii");
	SQAICompany.DefSQStaticMethod(engine, &ScriptCompany::GetQuarterlyExpenses,          "GetQuarterlyExpenses",          ".ii");
	SQAICompany.DefSQStaticMethod(engine, &ScriptCompany::GetQuarterlyCargoDelivered,    "GetQuarterlyCargoDelivered",    ".ii");
	SQAICompany.DefSQStaticMethod(engine, &ScriptCompany::GetQuarterlyPerformanceRating, "GetQuarterlyPerformanceRating", ".ii");
	SQAICompany.DefSQStaticMethod(engine, &ScriptCompany::GetQuarterlyCompanyValue,      "GetQuarterlyCompanyValue",      ".ii");
	SQAICompany.DefSQStaticMethod(engine, &ScriptCompany::BuildCompanyHQ,                "BuildCompanyHQ",                ".i");
	SQAICompany.DefSQStaticMethod(engine, &ScriptCompany::GetCompanyHQ,                  "GetCompanyHQ",                  ".i");
	SQAICompany.DefSQStaticMethod(engine, &ScriptCompany::SetAutoRenewStatus,            "SetAutoRenewStatus",            ".b");
	SQAICompany.DefSQStaticMethod(engine, &ScriptCompany::GetAutoRenewStatus,            "GetAutoRenewStatus",            ".i");
	SQAICompany.DefSQStaticMethod(engine, &ScriptCompany::SetAutoRenewMonths,            "SetAutoRenewMonths",            ".i");
	SQAICompany.DefSQStaticMethod(engine, &ScriptCompany::GetAutoRenewMonths,            "GetAutoRenewMonths",            ".i");
	SQAICompany.DefSQStaticMethod(engine, &ScriptCompany::SetAutoRenewMoney,             "SetAutoRenewMoney",             ".i");
	SQAICompany.DefSQStaticMethod(engine, &ScriptCompany::GetAutoRenewMoney,             "GetAutoRenewMoney",             ".i");
	SQAICompany.DefSQStaticMethod(engine, &ScriptCompany::SetPrimaryLiveryColour,        "SetPrimaryLiveryColour",        ".ii");
	SQAICompany.DefSQStaticMethod(engine, &ScriptCompany::SetSecondaryLiveryColour,      "SetSecondaryLiveryColour",      ".ii");
	SQAICompany.DefSQStaticMethod(engine, &ScriptCompany::GetPrimaryLiveryColour,        "GetPrimaryLiveryColour",        ".i");
	SQAICompany.DefSQStaticMethod(engine, &ScriptCompany::GetSecondaryLiveryColour,      "GetSecondaryLiveryColour",      ".i");

	SQAICompany.PostRegister(engine);
}
