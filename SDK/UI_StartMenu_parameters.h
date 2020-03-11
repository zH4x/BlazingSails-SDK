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

// Function UI_StartMenu.UI_StartMenu_C.DoMatchmaking
struct UUI_StartMenu_C_DoMatchmaking_Params
{
	TArray<struct FBlueprintSessionResult>             Sessions;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	struct FBlueprintSessionResult                     SessionResult;                                            // (Parm, OutParm)
};

// Function UI_StartMenu.UI_StartMenu_C.ShowShip
struct UUI_StartMenu_C_ShowShip_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UI_StartMenu.UI_StartMenu_C.ShowBackButton
struct UUI_StartMenu_C_ShowBackButton_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UI_StartMenu.UI_StartMenu_C.ShowJoin
struct UUI_StartMenu_C_ShowJoin_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UI_StartMenu.UI_StartMenu_C.ShowHost
struct UUI_StartMenu_C_ShowHost_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UI_StartMenu.UI_StartMenu_C.ShowOptions
struct UUI_StartMenu_C_ShowOptions_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UI_StartMenu.UI_StartMenu_C.ShowPlayerSettings
struct UUI_StartMenu_C_ShowPlayerSettings_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UI_StartMenu.UI_StartMenu_C.ShowMainMenu
struct UUI_StartMenu_C_ShowMainMenu_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UI_StartMenu.UI_StartMenu_C.OnFailure_DBBC3B8C410D99DDEE9D67AE135FE6C5
struct UUI_StartMenu_C_OnFailure_DBBC3B8C410D99DDEE9D67AE135FE6C5_Params
{
};

// Function UI_StartMenu.UI_StartMenu_C.OnSuccess_DBBC3B8C410D99DDEE9D67AE135FE6C5
struct UUI_StartMenu_C_OnSuccess_DBBC3B8C410D99DDEE9D67AE135FE6C5_Params
{
};

// Function UI_StartMenu.UI_StartMenu_C.OnFailure_74E9BBAC4E496CBE0A0A0FA679459784
struct UUI_StartMenu_C_OnFailure_74E9BBAC4E496CBE0A0A0FA679459784_Params
{
	TArray<struct FBlueprintSessionResult>             Results;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function UI_StartMenu.UI_StartMenu_C.OnSuccess_74E9BBAC4E496CBE0A0A0FA679459784
struct UUI_StartMenu_C_OnSuccess_74E9BBAC4E496CBE0A0A0FA679459784_Params
{
	TArray<struct FBlueprintSessionResult>             Results;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function UI_StartMenu.UI_StartMenu_C.Tick
struct UUI_StartMenu_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float                                              InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_StartMenu.UI_StartMenu_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_64_OnButtonClickedEvent__DelegateSignature
struct UUI_StartMenu_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_64_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function UI_StartMenu.UI_StartMenu_C.BndEvt__Button_91_K2Node_ComponentBoundEvent_11_OnButtonPressedEvent__DelegateSignature
struct UUI_StartMenu_C_BndEvt__Button_91_K2Node_ComponentBoundEvent_11_OnButtonPressedEvent__DelegateSignature_Params
{
};

// Function UI_StartMenu.UI_StartMenu_C.BndEvt__Button_90_K2Node_ComponentBoundEvent_25_OnButtonClickedEvent__DelegateSignature
struct UUI_StartMenu_C_BndEvt__Button_90_K2Node_ComponentBoundEvent_25_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function UI_StartMenu.UI_StartMenu_C.BndEvt__Button_2_K2Node_ComponentBoundEvent_337_OnButtonClickedEvent__DelegateSignature
struct UUI_StartMenu_C_BndEvt__Button_2_K2Node_ComponentBoundEvent_337_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function UI_StartMenu.UI_StartMenu_C.BndEvt__Btn_Options_K2Node_ComponentBoundEvent_685_OnButtonClickedEvent__DelegateSignature
struct UUI_StartMenu_C_BndEvt__Btn_Options_K2Node_ComponentBoundEvent_685_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function UI_StartMenu.UI_StartMenu_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_1537_OnButtonClickedEvent__DelegateSignature
struct UUI_StartMenu_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_1537_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function UI_StartMenu.UI_StartMenu_C.BndEvt__Button_1_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
struct UUI_StartMenu_C_BndEvt__Button_1_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function UI_StartMenu.UI_StartMenu_C.ResetCamera
struct UUI_StartMenu_C_ResetCamera_Params
{
};

// Function UI_StartMenu.UI_StartMenu_C.BndEvt__Button_2_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature
struct UUI_StartMenu_C_BndEvt__Button_2_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature_Params
{
};

// Function UI_StartMenu.UI_StartMenu_C.RefreshVersion
struct UUI_StartMenu_C_RefreshVersion_Params
{
};

// Function UI_StartMenu.UI_StartMenu_C.BndEvt__Button_59_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
struct UUI_StartMenu_C_BndEvt__Button_59_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function UI_StartMenu.UI_StartMenu_C.BndEvt__Btn_Wishlist_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature
struct UUI_StartMenu_C_BndEvt__Btn_Wishlist_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function UI_StartMenu.UI_StartMenu_C.BndEvt__Btn_Wishlist_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature
struct UUI_StartMenu_C_BndEvt__Btn_Wishlist_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function UI_StartMenu.UI_StartMenu_C.BackToMainMenu
struct UUI_StartMenu_C_BackToMainMenu_Params
{
};

// Function UI_StartMenu.UI_StartMenu_C.OnInitialized
struct UUI_StartMenu_C_OnInitialized_Params
{
};

// Function UI_StartMenu.UI_StartMenu_C.Construct
struct UUI_StartMenu_C_Construct_Params
{
};

// Function UI_StartMenu.UI_StartMenu_C.RefreshOptionsEnabledState
struct UUI_StartMenu_C_RefreshOptionsEnabledState_Params
{
};

// Function UI_StartMenu.UI_StartMenu_C.ExecuteUbergraph_UI_StartMenu
struct UUI_StartMenu_C_ExecuteUbergraph_UI_StartMenu_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
