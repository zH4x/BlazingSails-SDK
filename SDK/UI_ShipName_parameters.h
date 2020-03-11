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

// Function UI_ShipName.UI_ShipName_C.SetBuyEnabled
struct UUI_ShipName_C_SetBuyEnabled_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UI_ShipName.UI_ShipName_C.SetPrice
struct UUI_ShipName_C_SetPrice_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UI_ShipName.UI_ShipName_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature
struct UUI_ShipName_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature_Params
{
};

// Function UI_ShipName.UI_ShipName_C.BndEvt__Button_6_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature
struct UUI_ShipName_C_BndEvt__Button_6_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature_Params
{
};

// Function UI_ShipName.UI_ShipName_C.BndEvt__EditableTextBox_125_K2Node_ComponentBoundEvent_2_OnEditableTextBoxChangedEvent__DelegateSignature
struct UUI_ShipName_C_BndEvt__EditableTextBox_125_K2Node_ComponentBoundEvent_2_OnEditableTextBoxChangedEvent__DelegateSignature_Params
{
	struct FText                                       Text;                                                     // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function UI_ShipName.UI_ShipName_C.ExecuteUbergraph_UI_ShipName
struct UUI_ShipName_C_ExecuteUbergraph_UI_ShipName_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
