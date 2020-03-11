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

// Function UI_DeathZoneInfo.UI_DeathZoneInfo_C.ShowSkull
struct UUI_DeathZoneInfo_C_ShowSkull_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UI_DeathZoneInfo.UI_DeathZoneInfo_C.SetCountdownText
struct UUI_DeathZoneInfo_C_SetCountdownText_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UI_DeathZoneInfo.UI_DeathZoneInfo_C.ShowCountDown
struct UUI_DeathZoneInfo_C_ShowCountDown_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UI_DeathZoneInfo.UI_DeathZoneInfo_C.SetDeadZoneText
struct UUI_DeathZoneInfo_C_SetDeadZoneText_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UI_DeathZoneInfo.UI_DeathZoneInfo_C.Tick
struct UUI_DeathZoneInfo_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float                                              InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_DeathZoneInfo.UI_DeathZoneInfo_C.refresh
struct UUI_DeathZoneInfo_C_refresh_Params
{
};

// Function UI_DeathZoneInfo.UI_DeathZoneInfo_C.ExecuteUbergraph_UI_DeathZoneInfo
struct UUI_DeathZoneInfo_C_ExecuteUbergraph_UI_DeathZoneInfo_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
