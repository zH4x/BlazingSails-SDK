
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

// Function UI_KeyBinds.UI_KeyBinds_C.LoadOptions
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_KeyBinds_C::LoadOptions()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_KeyBinds.UI_KeyBinds_C.LoadOptions");

	UUI_KeyBinds_C_LoadOptions_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_KeyBinds.UI_KeyBinds_C.ApplyOptions
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_KeyBinds_C::ApplyOptions()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_KeyBinds.UI_KeyBinds_C.ApplyOptions");

	UUI_KeyBinds_C_ApplyOptions_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_KeyBinds.UI_KeyBinds_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_KeyBinds_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_KeyBinds.UI_KeyBinds_C.Construct");

	UUI_KeyBinds_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_KeyBinds.UI_KeyBinds_C.BndEvt__Slider_MouseSensitivity_K2Node_ComponentBoundEvent_109_OnFloatValueChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                          Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_KeyBinds_C::BndEvt__Slider_MouseSensitivity_K2Node_ComponentBoundEvent_109_OnFloatValueChangedEvent__DelegateSignature(float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_KeyBinds.UI_KeyBinds_C.BndEvt__Slider_MouseSensitivity_K2Node_ComponentBoundEvent_109_OnFloatValueChangedEvent__DelegateSignature");

	UUI_KeyBinds_C_BndEvt__Slider_MouseSensitivity_K2Node_ComponentBoundEvent_109_OnFloatValueChangedEvent__DelegateSignature_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_KeyBinds.UI_KeyBinds_C.BndEvt__Silder_FOV_K2Node_ComponentBoundEvent_119_OnFloatValueChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                          Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_KeyBinds_C::BndEvt__Silder_FOV_K2Node_ComponentBoundEvent_119_OnFloatValueChangedEvent__DelegateSignature(float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_KeyBinds.UI_KeyBinds_C.BndEvt__Silder_FOV_K2Node_ComponentBoundEvent_119_OnFloatValueChangedEvent__DelegateSignature");

	UUI_KeyBinds_C_BndEvt__Silder_FOV_K2Node_ComponentBoundEvent_119_OnFloatValueChangedEvent__DelegateSignature_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_KeyBinds.UI_KeyBinds_C.BndEvt__Button_36_K2Node_ComponentBoundEvent_204_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UUI_KeyBinds_C::BndEvt__Button_36_K2Node_ComponentBoundEvent_204_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_KeyBinds.UI_KeyBinds_C.BndEvt__Button_36_K2Node_ComponentBoundEvent_204_OnButtonClickedEvent__DelegateSignature");

	UUI_KeyBinds_C_BndEvt__Button_36_K2Node_ComponentBoundEvent_204_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_KeyBinds.UI_KeyBinds_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_221_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UUI_KeyBinds_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_221_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_KeyBinds.UI_KeyBinds_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_221_OnButtonClickedEvent__DelegateSignature");

	UUI_KeyBinds_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_221_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_KeyBinds.UI_KeyBinds_C.ExecuteUbergraph_UI_KeyBinds
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_KeyBinds_C::ExecuteUbergraph_UI_KeyBinds(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_KeyBinds.UI_KeyBinds_C.ExecuteUbergraph_UI_KeyBinds");

	UUI_KeyBinds_C_ExecuteUbergraph_UI_KeyBinds_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
