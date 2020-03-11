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

// Function UI_Hit.UI_Hit_C.SetLowHPDamageColor
struct UUI_Hit_C_SetLowHPDamageColor_Params
{
	struct FSlateColor                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UI_Hit.UI_Hit_C.SetDamageAmount
struct UUI_Hit_C_SetDamageAmount_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UI_Hit.UI_Hit_C.ShowHitIndicator
struct UUI_Hit_C_ShowHitIndicator_Params
{
	bool                                               headshot;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_Hit.UI_Hit_C.Construct
struct UUI_Hit_C_Construct_Params
{
};

// Function UI_Hit.UI_Hit_C.Tick
struct UUI_Hit_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float                                              InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_Hit.UI_Hit_C.ExecuteUbergraph_UI_Hit
struct UUI_Hit_C_ExecuteUbergraph_UI_Hit_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
