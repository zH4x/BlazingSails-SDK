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

// Function UI_Actionbar.UI_Actionbar_C.ShowNumbers
struct UUI_Actionbar_C_ShowNumbers_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UI_Actionbar.UI_Actionbar_C.ShowNotUseableCrosses
struct UUI_Actionbar_C_ShowNotUseableCrosses_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UI_Actionbar.UI_Actionbar_C.SetHammerIcon
struct UUI_Actionbar_C_SetHammerIcon_Params
{
	struct FSlateBrush                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UI_Actionbar.UI_Actionbar_C.SetThrowableIcon
struct UUI_Actionbar_C_SetThrowableIcon_Params
{
	struct FSlateBrush                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UI_Actionbar.UI_Actionbar_C.SetMeleeIcon
struct UUI_Actionbar_C_SetMeleeIcon_Params
{
	struct FSlateBrush                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UI_Actionbar.UI_Actionbar_C.SetSelectionVisibility
struct UUI_Actionbar_C_SetSelectionVisibility_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UI_Actionbar.UI_Actionbar_C.SetSideArmIcon
struct UUI_Actionbar_C_SetSideArmIcon_Params
{
	struct FSlateBrush                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UI_Actionbar.UI_Actionbar_C.SetMainWeaponIcon
struct UUI_Actionbar_C_SetMainWeaponIcon_Params
{
	struct FSlateBrush                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UI_Actionbar.UI_Actionbar_C.Tick
struct UUI_Actionbar_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float                                              InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_Actionbar.UI_Actionbar_C.refresh
struct UUI_Actionbar_C_refresh_Params
{
};

// Function UI_Actionbar.UI_Actionbar_C.ExecuteUbergraph_UI_Actionbar
struct UUI_Actionbar_C_ExecuteUbergraph_UI_Actionbar_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
