
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

// Function UI_CheatCodes.UI_CheatCodes_C.EnableRedeem
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UUI_CheatCodes_C::EnableRedeem()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CheatCodes.UI_CheatCodes_C.EnableRedeem");

	UUI_CheatCodes_C_EnableRedeem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_CheatCodes.UI_CheatCodes_C.TryToRedeemCode
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Succes                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class UBP_GameInstance_C*      GameInstanceRef                (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UUI_CheatCodes_C::TryToRedeemCode(bool* Succes, class UBP_GameInstance_C** GameInstanceRef)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CheatCodes.UI_CheatCodes_C.TryToRedeemCode");

	UUI_CheatCodes_C_TryToRedeemCode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Succes != nullptr)
		*Succes = params.Succes;
	if (GameInstanceRef != nullptr)
		*GameInstanceRef = params.GameInstanceRef;
}


// Function UI_CheatCodes.UI_CheatCodes_C.CheckIfCodeIsUsed
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   Code                           (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           IsUsed                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UUI_CheatCodes_C::CheckIfCodeIsUsed(const struct FText& Code, bool* IsUsed)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CheatCodes.UI_CheatCodes_C.CheckIfCodeIsUsed");

	UUI_CheatCodes_C_CheckIfCodeIsUsed_Params params;
	params.Code = Code;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsUsed != nullptr)
		*IsUsed = params.IsUsed;
}


// Function UI_CheatCodes.UI_CheatCodes_C.ShowRedeemCode
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UUI_CheatCodes_C::ShowRedeemCode()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CheatCodes.UI_CheatCodes_C.ShowRedeemCode");

	UUI_CheatCodes_C_ShowRedeemCode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_CheatCodes.UI_CheatCodes_C.BndEvt__EditableTextBox_107_K2Node_ComponentBoundEvent_0_OnEditableTextBoxCommittedEvent__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// struct FText                   Text                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TEnumAsByte<ETextCommit>       CommitMethod                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_CheatCodes_C::BndEvt__EditableTextBox_107_K2Node_ComponentBoundEvent_0_OnEditableTextBoxCommittedEvent__DelegateSignature(const struct FText& Text, TEnumAsByte<ETextCommit> CommitMethod)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CheatCodes.UI_CheatCodes_C.BndEvt__EditableTextBox_107_K2Node_ComponentBoundEvent_0_OnEditableTextBoxCommittedEvent__DelegateSignature");

	UUI_CheatCodes_C_BndEvt__EditableTextBox_107_K2Node_ComponentBoundEvent_0_OnEditableTextBoxCommittedEvent__DelegateSignature_Params params;
	params.Text = Text;
	params.CommitMethod = CommitMethod;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CheatCodes.UI_CheatCodes_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_CheatCodes_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CheatCodes.UI_CheatCodes_C.Construct");

	UUI_CheatCodes_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CheatCodes.UI_CheatCodes_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature
// (BlueprintEvent)

void UUI_CheatCodes_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CheatCodes.UI_CheatCodes_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature");

	UUI_CheatCodes_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CheatCodes.UI_CheatCodes_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_2_OnButtonPressedEvent__DelegateSignature
// (BlueprintEvent)

void UUI_CheatCodes_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_2_OnButtonPressedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CheatCodes.UI_CheatCodes_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_2_OnButtonPressedEvent__DelegateSignature");

	UUI_CheatCodes_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_2_OnButtonPressedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CheatCodes.UI_CheatCodes_C.ExecuteUbergraph_UI_CheatCodes
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_CheatCodes_C::ExecuteUbergraph_UI_CheatCodes(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CheatCodes.UI_CheatCodes_C.ExecuteUbergraph_UI_CheatCodes");

	UUI_CheatCodes_C_ExecuteUbergraph_UI_CheatCodes_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
