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

// Function UI_Crosshair.UI_Crosshair_C.HideCompleteCrosshair
struct UUI_Crosshair_C_HideCompleteCrosshair_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UI_Crosshair.UI_Crosshair_C.ShowCrosshair
struct UUI_Crosshair_C_ShowCrosshair_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UI_Crosshair.UI_Crosshair_C.ShowHand
struct UUI_Crosshair_C_ShowHand_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UI_Crosshair.UI_Crosshair_C.ShowAmmo
struct UUI_Crosshair_C_ShowAmmo_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UI_Crosshair.UI_Crosshair_C.SetAmountColor
struct UUI_Crosshair_C_SetAmountColor_Params
{
	struct FSlateColor                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UI_Crosshair.UI_Crosshair_C.SetAmmoType
struct UUI_Crosshair_C_SetAmmoType_Params
{
};

// Function UI_Crosshair.UI_Crosshair_C.SetAmmoColor
struct UUI_Crosshair_C_SetAmmoColor_Params
{
	struct FSlateColor                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UI_Crosshair.UI_Crosshair_C.ShowProgressBar
struct UUI_Crosshair_C_ShowProgressBar_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UI_Crosshair.UI_Crosshair_C.SetAmmo
struct UUI_Crosshair_C_SetAmmo_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UI_Crosshair.UI_Crosshair_C.ShowRoundcrosshair
struct UUI_Crosshair_C_ShowRoundcrosshair_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UI_Crosshair.UI_Crosshair_C.ShowHammer
struct UUI_Crosshair_C_ShowHammer_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UI_Crosshair.UI_Crosshair_C.ShowCross
struct UUI_Crosshair_C_ShowCross_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UI_Crosshair.UI_Crosshair_C.ShowDot
struct UUI_Crosshair_C_ShowDot_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UI_Crosshair.UI_Crosshair_C.Construct
struct UUI_Crosshair_C_Construct_Params
{
};

// Function UI_Crosshair.UI_Crosshair_C.Tick
struct UUI_Crosshair_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float                                              InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_Crosshair.UI_Crosshair_C.HitIndicator
struct UUI_Crosshair_C_HitIndicator_Params
{
};

// Function UI_Crosshair.UI_Crosshair_C.RefreshClipsize
struct UUI_Crosshair_C_RefreshClipsize_Params
{
};

// Function UI_Crosshair.UI_Crosshair_C.RefreshAmmoAmount
struct UUI_Crosshair_C_RefreshAmmoAmount_Params
{
};

// Function UI_Crosshair.UI_Crosshair_C.ExecuteUbergraph_UI_Crosshair
struct UUI_Crosshair_C_ExecuteUbergraph_UI_Crosshair_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
