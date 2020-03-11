
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

// Function UI_BodySettings.UI_BodySettings_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_BodySettings_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_BodySettings.UI_BodySettings_C.Construct");

	UUI_BodySettings_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_BodySettings.UI_BodySettings_C.BndEvt__Slider_194_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                          Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_BodySettings_C::BndEvt__Slider_194_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEvent__DelegateSignature(float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_BodySettings.UI_BodySettings_C.BndEvt__Slider_194_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEvent__DelegateSignature");

	UUI_BodySettings_C_BndEvt__Slider_194_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEvent__DelegateSignature_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_BodySettings.UI_BodySettings_C.ExecuteUbergraph_UI_BodySettings
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_BodySettings_C::ExecuteUbergraph_UI_BodySettings(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_BodySettings.UI_BodySettings_C.ExecuteUbergraph_UI_BodySettings");

	UUI_BodySettings_C_ExecuteUbergraph_UI_BodySettings_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
