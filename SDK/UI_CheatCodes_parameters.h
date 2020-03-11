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

// Function UI_CheatCodes.UI_CheatCodes_C.EnableRedeem
struct UUI_CheatCodes_C_EnableRedeem_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UI_CheatCodes.UI_CheatCodes_C.TryToRedeemCode
struct UUI_CheatCodes_C_TryToRedeemCode_Params
{
	bool                                               Succes;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class UBP_GameInstance_C*                          GameInstanceRef;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function UI_CheatCodes.UI_CheatCodes_C.CheckIfCodeIsUsed
struct UUI_CheatCodes_C_CheckIfCodeIsUsed_Params
{
	struct FText                                       Code;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               IsUsed;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function UI_CheatCodes.UI_CheatCodes_C.ShowRedeemCode
struct UUI_CheatCodes_C_ShowRedeemCode_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UI_CheatCodes.UI_CheatCodes_C.BndEvt__EditableTextBox_107_K2Node_ComponentBoundEvent_0_OnEditableTextBoxCommittedEvent__DelegateSignature
struct UUI_CheatCodes_C_BndEvt__EditableTextBox_107_K2Node_ComponentBoundEvent_0_OnEditableTextBoxCommittedEvent__DelegateSignature_Params
{
	struct FText                                       Text;                                                     // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	TEnumAsByte<ETextCommit>                           CommitMethod;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_CheatCodes.UI_CheatCodes_C.Construct
struct UUI_CheatCodes_C_Construct_Params
{
};

// Function UI_CheatCodes.UI_CheatCodes_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature
struct UUI_CheatCodes_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature_Params
{
};

// Function UI_CheatCodes.UI_CheatCodes_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_2_OnButtonPressedEvent__DelegateSignature
struct UUI_CheatCodes_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_2_OnButtonPressedEvent__DelegateSignature_Params
{
};

// Function UI_CheatCodes.UI_CheatCodes_C.ExecuteUbergraph_UI_CheatCodes
struct UUI_CheatCodes_C_ExecuteUbergraph_UI_CheatCodes_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
