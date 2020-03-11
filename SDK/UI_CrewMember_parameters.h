#pragma once

#include "../SDK.h"

// Name: BlazingSails, Version: 1.481.81

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function UI_CrewMember.UI_CrewMember_C.ShowIcon
struct UUI_CrewMember_C_ShowIcon_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UI_CrewMember.UI_CrewMember_C.ShowSkull
struct UUI_CrewMember_C_ShowSkull_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UI_CrewMember.UI_CrewMember_C.SetColor2
struct UUI_CrewMember_C_SetColor2_Params
{
	struct FLinearColor                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UI_CrewMember.UI_CrewMember_C.SetColor
struct UUI_CrewMember_C_SetColor_Params
{
	struct FLinearColor                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UI_CrewMember.UI_CrewMember_C.SetIcon
struct UUI_CrewMember_C_SetIcon_Params
{
};

// Function UI_CrewMember.UI_CrewMember_C.SetHealth
struct UUI_CrewMember_C_SetHealth_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
