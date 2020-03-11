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

// Function UI_BoatSpawnPoint.UI_BoatSpawnPoint_C.ResetSwords
struct UUI_BoatSpawnPoint_C_ResetSwords_Params
{
};

// Function UI_BoatSpawnPoint.UI_BoatSpawnPoint_C.GetPlayerAmountAndColors
struct UUI_BoatSpawnPoint_C_GetPlayerAmountAndColors_Params
{
	int                                                TeamMemberAmountThatSelectedThis;                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	TArray<int>                                        Colors;                                                   // (Parm, OutParm, ZeroConstructor)
};

// Function UI_BoatSpawnPoint.UI_BoatSpawnPoint_C.ShowImage
struct UUI_BoatSpawnPoint_C_ShowImage_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UI_BoatSpawnPoint.UI_BoatSpawnPoint_C.SetTopArrowColor
struct UUI_BoatSpawnPoint_C_SetTopArrowColor_Params
{
	struct FLinearColor                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UI_BoatSpawnPoint.UI_BoatSpawnPoint_C.SetRightArrowColor
struct UUI_BoatSpawnPoint_C_SetRightArrowColor_Params
{
	struct FLinearColor                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UI_BoatSpawnPoint.UI_BoatSpawnPoint_C.SetLeftArrowColor
struct UUI_BoatSpawnPoint_C_SetLeftArrowColor_Params
{
	struct FLinearColor                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UI_BoatSpawnPoint.UI_BoatSpawnPoint_C.SetBottomArrowColor
struct UUI_BoatSpawnPoint_C_SetBottomArrowColor_Params
{
	struct FLinearColor                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UI_BoatSpawnPoint.UI_BoatSpawnPoint_C.ShowTopArrow
struct UUI_BoatSpawnPoint_C_ShowTopArrow_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UI_BoatSpawnPoint.UI_BoatSpawnPoint_C.ShowRightArrow
struct UUI_BoatSpawnPoint_C_ShowRightArrow_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UI_BoatSpawnPoint.UI_BoatSpawnPoint_C.ShowLeftArrow
struct UUI_BoatSpawnPoint_C_ShowLeftArrow_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UI_BoatSpawnPoint.UI_BoatSpawnPoint_C.ShowBottomArrow
struct UUI_BoatSpawnPoint_C_ShowBottomArrow_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UI_BoatSpawnPoint.UI_BoatSpawnPoint_C.SetEnableButton
struct UUI_BoatSpawnPoint_C_SetEnableButton_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UI_BoatSpawnPoint.UI_BoatSpawnPoint_C.Tick
struct UUI_BoatSpawnPoint_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float                                              InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_BoatSpawnPoint.UI_BoatSpawnPoint_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
struct UUI_BoatSpawnPoint_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function UI_BoatSpawnPoint.UI_BoatSpawnPoint_C.SelectSpawnPoint
struct UUI_BoatSpawnPoint_C_SelectSpawnPoint_Params
{
};

// Function UI_BoatSpawnPoint.UI_BoatSpawnPoint_C.Update
struct UUI_BoatSpawnPoint_C_Update_Params
{
};

// Function UI_BoatSpawnPoint.UI_BoatSpawnPoint_C.ExecuteUbergraph_UI_BoatSpawnPoint
struct UUI_BoatSpawnPoint_C_ExecuteUbergraph_UI_BoatSpawnPoint_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
