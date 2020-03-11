
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

// Function UI_CannonballChest_Cannonball.UI_CannonballChest_Cannonball_C.GetTakeAmount
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Amount                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           TakeOnlyOne                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UUI_CannonballChest_Cannonball_C::GetTakeAmount(int* Amount, bool* TakeOnlyOne)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CannonballChest_Cannonball.UI_CannonballChest_Cannonball_C.GetTakeAmount");

	UUI_CannonballChest_Cannonball_C_GetTakeAmount_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Amount != nullptr)
		*Amount = params.Amount;
	if (TakeOnlyOne != nullptr)
		*TakeOnlyOne = params.TakeOnlyOne;
}


// Function UI_CannonballChest_Cannonball.UI_CannonballChest_Cannonball_C.SetEnableTake
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UUI_CannonballChest_Cannonball_C::SetEnableTake()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CannonballChest_Cannonball.UI_CannonballChest_Cannonball_C.SetEnableTake");

	UUI_CannonballChest_Cannonball_C_SetEnableTake_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_CannonballChest_Cannonball.UI_CannonballChest_Cannonball_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float                          InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_CannonballChest_Cannonball_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CannonballChest_Cannonball.UI_CannonballChest_Cannonball_C.Tick");

	UUI_CannonballChest_Cannonball_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CannonballChest_Cannonball.UI_CannonballChest_Cannonball_C.BndEvt__Btn_TakeCannonball_K2Node_ComponentBoundEvent_25_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UUI_CannonballChest_Cannonball_C::BndEvt__Btn_TakeCannonball_K2Node_ComponentBoundEvent_25_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CannonballChest_Cannonball.UI_CannonballChest_Cannonball_C.BndEvt__Btn_TakeCannonball_K2Node_ComponentBoundEvent_25_OnButtonClickedEvent__DelegateSignature");

	UUI_CannonballChest_Cannonball_C_BndEvt__Btn_TakeCannonball_K2Node_ComponentBoundEvent_25_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CannonballChest_Cannonball.UI_CannonballChest_Cannonball_C.BndEvt__Btn_TakeCannonball_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UUI_CannonballChest_Cannonball_C::BndEvt__Btn_TakeCannonball_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CannonballChest_Cannonball.UI_CannonballChest_Cannonball_C.BndEvt__Btn_TakeCannonball_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature");

	UUI_CannonballChest_Cannonball_C_BndEvt__Btn_TakeCannonball_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CannonballChest_Cannonball.UI_CannonballChest_Cannonball_C.BndEvt__Btn_TakeCannonball_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UUI_CannonballChest_Cannonball_C::BndEvt__Btn_TakeCannonball_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CannonballChest_Cannonball.UI_CannonballChest_Cannonball_C.BndEvt__Btn_TakeCannonball_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature");

	UUI_CannonballChest_Cannonball_C_BndEvt__Btn_TakeCannonball_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CannonballChest_Cannonball.UI_CannonballChest_Cannonball_C.BndEvt__Btn_TakeCannonball_K2Node_ComponentBoundEvent_4_OnButtonPressedEvent__DelegateSignature
// (BlueprintEvent)

void UUI_CannonballChest_Cannonball_C::BndEvt__Btn_TakeCannonball_K2Node_ComponentBoundEvent_4_OnButtonPressedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CannonballChest_Cannonball.UI_CannonballChest_Cannonball_C.BndEvt__Btn_TakeCannonball_K2Node_ComponentBoundEvent_4_OnButtonPressedEvent__DelegateSignature");

	UUI_CannonballChest_Cannonball_C_BndEvt__Btn_TakeCannonball_K2Node_ComponentBoundEvent_4_OnButtonPressedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CannonballChest_Cannonball.UI_CannonballChest_Cannonball_C.ExecuteUbergraph_UI_CannonballChest_Cannonball
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_CannonballChest_Cannonball_C::ExecuteUbergraph_UI_CannonballChest_Cannonball(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CannonballChest_Cannonball.UI_CannonballChest_Cannonball_C.ExecuteUbergraph_UI_CannonballChest_Cannonball");

	UUI_CannonballChest_Cannonball_C_ExecuteUbergraph_UI_CannonballChest_Cannonball_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
