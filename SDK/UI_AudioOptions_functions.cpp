
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

// Function UI_AudioOptions.UI_AudioOptions_C.LoadOptions
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UUI_AudioOptions_C::LoadOptions()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_AudioOptions.UI_AudioOptions_C.LoadOptions");

	UUI_AudioOptions_C_LoadOptions_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_AudioOptions.UI_AudioOptions_C.ApplyOptions
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_AudioOptions_C::ApplyOptions()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_AudioOptions.UI_AudioOptions_C.ApplyOptions");

	UUI_AudioOptions_C_ApplyOptions_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_AudioOptions.UI_AudioOptions_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_AudioOptions_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_AudioOptions.UI_AudioOptions_C.Construct");

	UUI_AudioOptions_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_AudioOptions.UI_AudioOptions_C.BndEvt__Slider_MouseSensitivity_K2Node_ComponentBoundEvent_109_OnFloatValueChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                          Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_AudioOptions_C::BndEvt__Slider_MouseSensitivity_K2Node_ComponentBoundEvent_109_OnFloatValueChangedEvent__DelegateSignature(float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_AudioOptions.UI_AudioOptions_C.BndEvt__Slider_MouseSensitivity_K2Node_ComponentBoundEvent_109_OnFloatValueChangedEvent__DelegateSignature");

	UUI_AudioOptions_C_BndEvt__Slider_MouseSensitivity_K2Node_ComponentBoundEvent_109_OnFloatValueChangedEvent__DelegateSignature_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_AudioOptions.UI_AudioOptions_C.BndEvt__Silder_FOV_K2Node_ComponentBoundEvent_119_OnFloatValueChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                          Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_AudioOptions_C::BndEvt__Silder_FOV_K2Node_ComponentBoundEvent_119_OnFloatValueChangedEvent__DelegateSignature(float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_AudioOptions.UI_AudioOptions_C.BndEvt__Silder_FOV_K2Node_ComponentBoundEvent_119_OnFloatValueChangedEvent__DelegateSignature");

	UUI_AudioOptions_C_BndEvt__Silder_FOV_K2Node_ComponentBoundEvent_119_OnFloatValueChangedEvent__DelegateSignature_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_AudioOptions.UI_AudioOptions_C.BndEvt__Slider_0_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                          Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_AudioOptions_C::BndEvt__Slider_0_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEvent__DelegateSignature(float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_AudioOptions.UI_AudioOptions_C.BndEvt__Slider_0_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEvent__DelegateSignature");

	UUI_AudioOptions_C_BndEvt__Slider_0_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEvent__DelegateSignature_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_AudioOptions.UI_AudioOptions_C.BndEvt__Slider_0_K2Node_ComponentBoundEvent_1_OnFloatValueChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                          Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_AudioOptions_C::BndEvt__Slider_0_K2Node_ComponentBoundEvent_1_OnFloatValueChangedEvent__DelegateSignature(float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_AudioOptions.UI_AudioOptions_C.BndEvt__Slider_0_K2Node_ComponentBoundEvent_1_OnFloatValueChangedEvent__DelegateSignature");

	UUI_AudioOptions_C_BndEvt__Slider_0_K2Node_ComponentBoundEvent_1_OnFloatValueChangedEvent__DelegateSignature_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_AudioOptions.UI_AudioOptions_C.ExecuteUbergraph_UI_AudioOptions
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_AudioOptions_C::ExecuteUbergraph_UI_AudioOptions(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_AudioOptions.UI_AudioOptions_C.ExecuteUbergraph_UI_AudioOptions");

	UUI_AudioOptions_C_ExecuteUbergraph_UI_AudioOptions_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
