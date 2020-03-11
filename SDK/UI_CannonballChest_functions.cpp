
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

// Function UI_CannonballChest.UI_CannonballChest_C.GetItemFromCannonAmmo
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_CannonAmmo>      cannonball                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<E_Items>           Item                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UUI_CannonballChest_C::GetItemFromCannonAmmo(TEnumAsByte<E_CannonAmmo> cannonball, TEnumAsByte<E_Items>* Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CannonballChest.UI_CannonballChest_C.GetItemFromCannonAmmo");

	UUI_CannonballChest_C_GetItemFromCannonAmmo_Params params;
	params.cannonball = cannonball;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Item != nullptr)
		*Item = params.Item;
}


// Function UI_CannonballChest.UI_CannonballChest_C.ShowNoCannonballsText
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UUI_CannonballChest_C::ShowNoCannonballsText()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CannonballChest.UI_CannonballChest_C.ShowNoCannonballsText");

	UUI_CannonballChest_C_ShowNoCannonballsText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_CannonballChest.UI_CannonballChest_C.LoadCannonballs
// (BlueprintCallable, BlueprintEvent)

void UUI_CannonballChest_C::LoadCannonballs()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CannonballChest.UI_CannonballChest_C.LoadCannonballs");

	UUI_CannonballChest_C_LoadCannonballs_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CannonballChest.UI_CannonballChest_C.BndEvt__Btn_Join_K2Node_ComponentBoundEvent_30_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UUI_CannonballChest_C::BndEvt__Btn_Join_K2Node_ComponentBoundEvent_30_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CannonballChest.UI_CannonballChest_C.BndEvt__Btn_Join_K2Node_ComponentBoundEvent_30_OnButtonClickedEvent__DelegateSignature");

	UUI_CannonballChest_C_BndEvt__Btn_Join_K2Node_ComponentBoundEvent_30_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CannonballChest.UI_CannonballChest_C.BndEvt__Button_130_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature
// (BlueprintEvent)

void UUI_CannonballChest_C::BndEvt__Button_130_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CannonballChest.UI_CannonballChest_C.BndEvt__Button_130_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature");

	UUI_CannonballChest_C_BndEvt__Button_130_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CannonballChest.UI_CannonballChest_C.BndEvt__Btn_Join_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature
// (BlueprintEvent)

void UUI_CannonballChest_C::BndEvt__Btn_Join_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CannonballChest.UI_CannonballChest_C.BndEvt__Btn_Join_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature");

	UUI_CannonballChest_C_BndEvt__Btn_Join_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CannonballChest.UI_CannonballChest_C.ExecuteUbergraph_UI_CannonballChest
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_CannonballChest_C::ExecuteUbergraph_UI_CannonballChest(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CannonballChest.UI_CannonballChest_C.ExecuteUbergraph_UI_CannonballChest");

	UUI_CannonballChest_C_ExecuteUbergraph_UI_CannonballChest_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
