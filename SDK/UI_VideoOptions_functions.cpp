
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

// Function UI_VideoOptions.UI_VideoOptions_C.GetSliderValueFromHullMaskResolution
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            Resolution                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          SliderValue                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FText                   Quality                        (Parm, OutParm)

void UUI_VideoOptions_C::GetSliderValueFromHullMaskResolution(int Resolution, float* SliderValue, struct FText* Quality)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_VideoOptions.UI_VideoOptions_C.GetSliderValueFromHullMaskResolution");

	UUI_VideoOptions_C_GetSliderValueFromHullMaskResolution_Params params;
	params.Resolution = Resolution;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SliderValue != nullptr)
		*SliderValue = params.SliderValue;
	if (Quality != nullptr)
		*Quality = params.Quality;
}


// Function UI_VideoOptions.UI_VideoOptions_C.GetWaterHullMaskResolution
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            Resolution                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UUI_VideoOptions_C::GetWaterHullMaskResolution(int* Resolution)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_VideoOptions.UI_VideoOptions_C.GetWaterHullMaskResolution");

	UUI_VideoOptions_C_GetWaterHullMaskResolution_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Resolution != nullptr)
		*Resolution = params.Resolution;
}


// Function UI_VideoOptions.UI_VideoOptions_C.ApplyOptions
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_VideoOptions_C::ApplyOptions()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_VideoOptions.UI_VideoOptions_C.ApplyOptions");

	UUI_VideoOptions_C_ApplyOptions_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_VideoOptions.UI_VideoOptions_C.AddResolutions
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_VideoOptions_C::AddResolutions()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_VideoOptions.UI_VideoOptions_C.AddResolutions");

	UUI_VideoOptions_C_AddResolutions_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_VideoOptions.UI_VideoOptions_C.LoadOptions
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UUI_VideoOptions_C::LoadOptions()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_VideoOptions.UI_VideoOptions_C.LoadOptions");

	UUI_VideoOptions_C_LoadOptions_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_VideoOptions.UI_VideoOptions_C.SaveOptions
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_VideoOptions_C::SaveOptions()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_VideoOptions.UI_VideoOptions_C.SaveOptions");

	UUI_VideoOptions_C_SaveOptions_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_VideoOptions.UI_VideoOptions_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_VideoOptions_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_VideoOptions.UI_VideoOptions_C.Construct");

	UUI_VideoOptions_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_VideoOptions.UI_VideoOptions_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float                          InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_VideoOptions_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_VideoOptions.UI_VideoOptions_C.Tick");

	UUI_VideoOptions_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_VideoOptions.UI_VideoOptions_C.BndEvt__Dropdown_Resolutions_K2Node_ComponentBoundEvent_321_OnSelectionChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FString                 SelectedItem                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// TEnumAsByte<ESelectInfo>       SelectionType                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_VideoOptions_C::BndEvt__Dropdown_Resolutions_K2Node_ComponentBoundEvent_321_OnSelectionChangedEvent__DelegateSignature(const struct FString& SelectedItem, TEnumAsByte<ESelectInfo> SelectionType)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_VideoOptions.UI_VideoOptions_C.BndEvt__Dropdown_Resolutions_K2Node_ComponentBoundEvent_321_OnSelectionChangedEvent__DelegateSignature");

	UUI_VideoOptions_C_BndEvt__Dropdown_Resolutions_K2Node_ComponentBoundEvent_321_OnSelectionChangedEvent__DelegateSignature_Params params;
	params.SelectedItem = SelectedItem;
	params.SelectionType = SelectionType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_VideoOptions.UI_VideoOptions_C.BndEvt__Checkbox_Fullscreen_K2Node_ComponentBoundEvent_326_OnCheckBoxComponentStateChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                           bIsChecked                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_VideoOptions_C::BndEvt__Checkbox_Fullscreen_K2Node_ComponentBoundEvent_326_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_VideoOptions.UI_VideoOptions_C.BndEvt__Checkbox_Fullscreen_K2Node_ComponentBoundEvent_326_OnCheckBoxComponentStateChanged__DelegateSignature");

	UUI_VideoOptions_C_BndEvt__Checkbox_Fullscreen_K2Node_ComponentBoundEvent_326_OnCheckBoxComponentStateChanged__DelegateSignature_Params params;
	params.bIsChecked = bIsChecked;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_VideoOptions.UI_VideoOptions_C.BndEvt__CheckBox_2_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                           bIsChecked                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_VideoOptions_C::BndEvt__CheckBox_2_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_VideoOptions.UI_VideoOptions_C.BndEvt__CheckBox_2_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature");

	UUI_VideoOptions_C_BndEvt__CheckBox_2_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature_Params params;
	params.bIsChecked = bIsChecked;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_VideoOptions.UI_VideoOptions_C.BndEvt__Silder_FOV_K2Node_ComponentBoundEvent_1_OnFloatValueChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                          Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_VideoOptions_C::BndEvt__Silder_FOV_K2Node_ComponentBoundEvent_1_OnFloatValueChangedEvent__DelegateSignature(float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_VideoOptions.UI_VideoOptions_C.BndEvt__Silder_FOV_K2Node_ComponentBoundEvent_1_OnFloatValueChangedEvent__DelegateSignature");

	UUI_VideoOptions_C_BndEvt__Silder_FOV_K2Node_ComponentBoundEvent_1_OnFloatValueChangedEvent__DelegateSignature_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_VideoOptions.UI_VideoOptions_C.BndEvt__Slider_Shadows_K2Node_ComponentBoundEvent_2_OnFloatValueChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                          Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_VideoOptions_C::BndEvt__Slider_Shadows_K2Node_ComponentBoundEvent_2_OnFloatValueChangedEvent__DelegateSignature(float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_VideoOptions.UI_VideoOptions_C.BndEvt__Slider_Shadows_K2Node_ComponentBoundEvent_2_OnFloatValueChangedEvent__DelegateSignature");

	UUI_VideoOptions_C_BndEvt__Slider_Shadows_K2Node_ComponentBoundEvent_2_OnFloatValueChangedEvent__DelegateSignature_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_VideoOptions.UI_VideoOptions_C.BndEvt__Slider_WaterHullMask_K2Node_ComponentBoundEvent_3_OnFloatValueChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                          Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_VideoOptions_C::BndEvt__Slider_WaterHullMask_K2Node_ComponentBoundEvent_3_OnFloatValueChangedEvent__DelegateSignature(float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_VideoOptions.UI_VideoOptions_C.BndEvt__Slider_WaterHullMask_K2Node_ComponentBoundEvent_3_OnFloatValueChangedEvent__DelegateSignature");

	UUI_VideoOptions_C_BndEvt__Slider_WaterHullMask_K2Node_ComponentBoundEvent_3_OnFloatValueChangedEvent__DelegateSignature_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_VideoOptions.UI_VideoOptions_C.BndEvt__Btn_Azerty_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UUI_VideoOptions_C::BndEvt__Btn_Azerty_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_VideoOptions.UI_VideoOptions_C.BndEvt__Btn_Azerty_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature");

	UUI_VideoOptions_C_BndEvt__Btn_Azerty_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_VideoOptions.UI_VideoOptions_C.BndEvt__Btn_Medium_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UUI_VideoOptions_C::BndEvt__Btn_Medium_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_VideoOptions.UI_VideoOptions_C.BndEvt__Btn_Medium_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature");

	UUI_VideoOptions_C_BndEvt__Btn_Medium_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_VideoOptions.UI_VideoOptions_C.BndEvt__Btn_High_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UUI_VideoOptions_C::BndEvt__Btn_High_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_VideoOptions.UI_VideoOptions_C.BndEvt__Btn_High_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature");

	UUI_VideoOptions_C_BndEvt__Btn_High_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_VideoOptions.UI_VideoOptions_C.BndEvt__Btn_Epic_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UUI_VideoOptions_C::BndEvt__Btn_Epic_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_VideoOptions.UI_VideoOptions_C.BndEvt__Btn_Epic_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature");

	UUI_VideoOptions_C_BndEvt__Btn_Epic_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_VideoOptions.UI_VideoOptions_C.ExecuteUbergraph_UI_VideoOptions
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_VideoOptions_C::ExecuteUbergraph_UI_VideoOptions(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_VideoOptions.UI_VideoOptions_C.ExecuteUbergraph_UI_VideoOptions");

	UUI_VideoOptions_C_ExecuteUbergraph_UI_VideoOptions_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
