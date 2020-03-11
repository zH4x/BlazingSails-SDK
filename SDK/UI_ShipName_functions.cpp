
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

// Function UI_ShipName.UI_ShipName_C.SetBuyEnabled
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UUI_ShipName_C::SetBuyEnabled()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ShipName.UI_ShipName_C.SetBuyEnabled");

	UUI_ShipName_C_SetBuyEnabled_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_ShipName.UI_ShipName_C.SetPrice
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UUI_ShipName_C::SetPrice()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ShipName.UI_ShipName_C.SetPrice");

	UUI_ShipName_C_SetPrice_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_ShipName.UI_ShipName_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature
// (BlueprintEvent)

void UUI_ShipName_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ShipName.UI_ShipName_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature");

	UUI_ShipName_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_ShipName.UI_ShipName_C.BndEvt__Button_6_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature
// (BlueprintEvent)

void UUI_ShipName_C::BndEvt__Button_6_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ShipName.UI_ShipName_C.BndEvt__Button_6_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature");

	UUI_ShipName_C_BndEvt__Button_6_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_ShipName.UI_ShipName_C.BndEvt__EditableTextBox_125_K2Node_ComponentBoundEvent_2_OnEditableTextBoxChangedEvent__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// struct FText                   Text                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UUI_ShipName_C::BndEvt__EditableTextBox_125_K2Node_ComponentBoundEvent_2_OnEditableTextBoxChangedEvent__DelegateSignature(const struct FText& Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ShipName.UI_ShipName_C.BndEvt__EditableTextBox_125_K2Node_ComponentBoundEvent_2_OnEditableTextBoxChangedEvent__DelegateSignature");

	UUI_ShipName_C_BndEvt__EditableTextBox_125_K2Node_ComponentBoundEvent_2_OnEditableTextBoxChangedEvent__DelegateSignature_Params params;
	params.Text = Text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_ShipName.UI_ShipName_C.ExecuteUbergraph_UI_ShipName
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_ShipName_C::ExecuteUbergraph_UI_ShipName(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ShipName.UI_ShipName_C.ExecuteUbergraph_UI_ShipName");

	UUI_ShipName_C_ExecuteUbergraph_UI_ShipName_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
