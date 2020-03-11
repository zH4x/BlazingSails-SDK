
#include "../SDK.h"

// Name: BlazingSails, Version: 1.481.81

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function UI_ServerPassword.UI_ServerPassword_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature
// (BlueprintEvent)

void UUI_ServerPassword_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ServerPassword.UI_ServerPassword_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature");

	UUI_ServerPassword_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_ServerPassword.UI_ServerPassword_C.BndEvt__Button_6_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature
// (BlueprintEvent)

void UUI_ServerPassword_C::BndEvt__Button_6_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ServerPassword.UI_ServerPassword_C.BndEvt__Button_6_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature");

	UUI_ServerPassword_C_BndEvt__Button_6_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_ServerPassword.UI_ServerPassword_C.BndEvt__EditableTextBox_125_K2Node_ComponentBoundEvent_2_OnEditableTextBoxCommittedEvent__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// struct FText                   Text                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TEnumAsByte<ETextCommit>       CommitMethod                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_ServerPassword_C::BndEvt__EditableTextBox_125_K2Node_ComponentBoundEvent_2_OnEditableTextBoxCommittedEvent__DelegateSignature(const struct FText& Text, TEnumAsByte<ETextCommit> CommitMethod)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ServerPassword.UI_ServerPassword_C.BndEvt__EditableTextBox_125_K2Node_ComponentBoundEvent_2_OnEditableTextBoxCommittedEvent__DelegateSignature");

	UUI_ServerPassword_C_BndEvt__EditableTextBox_125_K2Node_ComponentBoundEvent_2_OnEditableTextBoxCommittedEvent__DelegateSignature_Params params;
	params.Text = Text;
	params.CommitMethod = CommitMethod;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_ServerPassword.UI_ServerPassword_C.ExecuteUbergraph_UI_ServerPassword
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_ServerPassword_C::ExecuteUbergraph_UI_ServerPassword(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ServerPassword.UI_ServerPassword_C.ExecuteUbergraph_UI_ServerPassword");

	UUI_ServerPassword_C_ExecuteUbergraph_UI_ServerPassword_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
