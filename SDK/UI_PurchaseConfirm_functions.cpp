
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

// Function UI_PurchaseConfirm.UI_PurchaseConfirm_C.SetPrice
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UUI_PurchaseConfirm_C::SetPrice()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_PurchaseConfirm.UI_PurchaseConfirm_C.SetPrice");

	UUI_PurchaseConfirm_C_SetPrice_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_PurchaseConfirm.UI_PurchaseConfirm_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature
// (BlueprintEvent)

void UUI_PurchaseConfirm_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_PurchaseConfirm.UI_PurchaseConfirm_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature");

	UUI_PurchaseConfirm_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_PurchaseConfirm.UI_PurchaseConfirm_C.BndEvt__Button_6_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature
// (BlueprintEvent)

void UUI_PurchaseConfirm_C::BndEvt__Button_6_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_PurchaseConfirm.UI_PurchaseConfirm_C.BndEvt__Button_6_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature");

	UUI_PurchaseConfirm_C_BndEvt__Button_6_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_PurchaseConfirm.UI_PurchaseConfirm_C.ExecuteUbergraph_UI_PurchaseConfirm
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_PurchaseConfirm_C::ExecuteUbergraph_UI_PurchaseConfirm(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_PurchaseConfirm.UI_PurchaseConfirm_C.ExecuteUbergraph_UI_PurchaseConfirm");

	UUI_PurchaseConfirm_C_ExecuteUbergraph_UI_PurchaseConfirm_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
