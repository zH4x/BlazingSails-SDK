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

// Function UI_Cannon.UI_Cannon_C.ShowCannonBlocked
struct UUI_Cannon_C_ShowCannonBlocked_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UI_Cannon.UI_Cannon_C.GetReloadInterpolationSpeed
struct UUI_Cannon_C_GetReloadInterpolationSpeed_Params
{
	float                                              Speed;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function UI_Cannon.UI_Cannon_C.ShowHoldText
struct UUI_Cannon_C_ShowHoldText_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UI_Cannon.UI_Cannon_C.SetInfoText
struct UUI_Cannon_C_SetInfoText_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UI_Cannon.UI_Cannon_C.SetInfoBgColor
struct UUI_Cannon_C_SetInfoBgColor_Params
{
	struct FLinearColor                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UI_Cannon.UI_Cannon_C.ShowArrows
struct UUI_Cannon_C_ShowArrows_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UI_Cannon.UI_Cannon_C.ShowNoAmmo
struct UUI_Cannon_C_ShowNoAmmo_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UI_Cannon.UI_Cannon_C.ShowAmmoType
struct UUI_Cannon_C_ShowAmmoType_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UI_Cannon.UI_Cannon_C.SetAmount
struct UUI_Cannon_C_SetAmount_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UI_Cannon.UI_Cannon_C.ShowChangeIcon
struct UUI_Cannon_C_ShowChangeIcon_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UI_Cannon.UI_Cannon_C.SetBgColor
struct UUI_Cannon_C_SetBgColor_Params
{
	struct FLinearColor                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UI_Cannon.UI_Cannon_C.ShowLoadedAmmo
struct UUI_Cannon_C_ShowLoadedAmmo_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UI_Cannon.UI_Cannon_C.SetLoadedAmmoIcon
struct UUI_Cannon_C_SetLoadedAmmoIcon_Params
{
	struct FSlateBrush                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UI_Cannon.UI_Cannon_C.SetAmmoType
struct UUI_Cannon_C_SetAmmoType_Params
{
	struct FSlateBrush                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UI_Cannon.UI_Cannon_C.ShowReloadInfo
struct UUI_Cannon_C_ShowReloadInfo_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UI_Cannon.UI_Cannon_C.ShowLoadingBar
struct UUI_Cannon_C_ShowLoadingBar_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UI_Cannon.UI_Cannon_C.PreConstruct
struct UUI_Cannon_C_PreConstruct_Params
{
	bool                                               IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_Cannon.UI_Cannon_C.Construct
struct UUI_Cannon_C_Construct_Params
{
};

// Function UI_Cannon.UI_Cannon_C.Tick
struct UUI_Cannon_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float                                              InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_Cannon.UI_Cannon_C.ExecuteUbergraph_UI_Cannon
struct UUI_Cannon_C_ExecuteUbergraph_UI_Cannon_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
