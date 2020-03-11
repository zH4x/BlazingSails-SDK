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

// Function UI_Character.UI_Character_C.LoadActiveTab
struct UUI_Character_C_LoadActiveTab_Params
{
};

// Function UI_Character.UI_Character_C.PreviousCosmetic
struct UUI_Character_C_PreviousCosmetic_Params
{
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UDataTable*                                  DataTable;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                NewIndex;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function UI_Character.UI_Character_C.NextCosmetic
struct UUI_Character_C_NextCosmetic_Params
{
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UDataTable*                                  DataTable;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                NewIndex;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function UI_Character.UI_Character_C.LoadCustomisation
struct UUI_Character_C_LoadCustomisation_Params
{
};

// Function UI_Character.UI_Character_C.Construct
struct UUI_Character_C_Construct_Params
{
};

// Function UI_Character.UI_Character_C.Tick
struct UUI_Character_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float                                              InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_Character.UI_Character_C.BndEvt__Btn_Join_K2Node_ComponentBoundEvent_371_OnButtonClickedEvent__DelegateSignature
struct UUI_Character_C_BndEvt__Btn_Join_K2Node_ComponentBoundEvent_371_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function UI_Character.UI_Character_C.RefreshCharacterUI
struct UUI_Character_C_RefreshCharacterUI_Params
{
};

// Function UI_Character.UI_Character_C.BndEvt__Btn_Hats_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature
struct UUI_Character_C_BndEvt__Btn_Hats_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature_Params
{
};

// Function UI_Character.UI_Character_C.BndEvt__Button_1_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature
struct UUI_Character_C_BndEvt__Button_1_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature_Params
{
};

// Function UI_Character.UI_Character_C.BndEvt__Button_10_K2Node_ComponentBoundEvent_2_OnButtonPressedEvent__DelegateSignature
struct UUI_Character_C_BndEvt__Button_10_K2Node_ComponentBoundEvent_2_OnButtonPressedEvent__DelegateSignature_Params
{
};

// Function UI_Character.UI_Character_C.BndEvt__Button_9_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature
struct UUI_Character_C_BndEvt__Button_9_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature_Params
{
};

// Function UI_Character.UI_Character_C.BndEvt__Button_7_K2Node_ComponentBoundEvent_4_OnButtonPressedEvent__DelegateSignature
struct UUI_Character_C_BndEvt__Button_7_K2Node_ComponentBoundEvent_4_OnButtonPressedEvent__DelegateSignature_Params
{
};

// Function UI_Character.UI_Character_C.RollOutMenu
struct UUI_Character_C_RollOutMenu_Params
{
};

// Function UI_Character.UI_Character_C.BndEvt__Button_11_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature
struct UUI_Character_C_BndEvt__Button_11_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function UI_Character.UI_Character_C.ExecuteUbergraph_UI_Character
struct UUI_Character_C_ExecuteUbergraph_UI_Character_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
