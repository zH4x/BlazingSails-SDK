
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

// Function UI_GameplayOptions.UI_GameplayOptions_C.LoadOptions
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UUI_GameplayOptions_C::LoadOptions()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GameplayOptions.UI_GameplayOptions_C.LoadOptions");

	UUI_GameplayOptions_C_LoadOptions_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_GameplayOptions.UI_GameplayOptions_C.ApplyOptions
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_GameplayOptions_C::ApplyOptions()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GameplayOptions.UI_GameplayOptions_C.ApplyOptions");

	UUI_GameplayOptions_C_ApplyOptions_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_GameplayOptions.UI_GameplayOptions_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_GameplayOptions_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GameplayOptions.UI_GameplayOptions_C.Construct");

	UUI_GameplayOptions_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_GameplayOptions.UI_GameplayOptions_C.BndEvt__Slider_MouseSensitivity_K2Node_ComponentBoundEvent_109_OnFloatValueChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                          Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_GameplayOptions_C::BndEvt__Slider_MouseSensitivity_K2Node_ComponentBoundEvent_109_OnFloatValueChangedEvent__DelegateSignature(float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GameplayOptions.UI_GameplayOptions_C.BndEvt__Slider_MouseSensitivity_K2Node_ComponentBoundEvent_109_OnFloatValueChangedEvent__DelegateSignature");

	UUI_GameplayOptions_C_BndEvt__Slider_MouseSensitivity_K2Node_ComponentBoundEvent_109_OnFloatValueChangedEvent__DelegateSignature_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_GameplayOptions.UI_GameplayOptions_C.BndEvt__Silder_FOV_K2Node_ComponentBoundEvent_119_OnFloatValueChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                          Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_GameplayOptions_C::BndEvt__Silder_FOV_K2Node_ComponentBoundEvent_119_OnFloatValueChangedEvent__DelegateSignature(float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GameplayOptions.UI_GameplayOptions_C.BndEvt__Silder_FOV_K2Node_ComponentBoundEvent_119_OnFloatValueChangedEvent__DelegateSignature");

	UUI_GameplayOptions_C_BndEvt__Silder_FOV_K2Node_ComponentBoundEvent_119_OnFloatValueChangedEvent__DelegateSignature_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_GameplayOptions.UI_GameplayOptions_C.BndEvt__Checkbox_AimToggle_K2Node_ComponentBoundEvent_117_OnCheckBoxComponentStateChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                           bIsChecked                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_GameplayOptions_C::BndEvt__Checkbox_AimToggle_K2Node_ComponentBoundEvent_117_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GameplayOptions.UI_GameplayOptions_C.BndEvt__Checkbox_AimToggle_K2Node_ComponentBoundEvent_117_OnCheckBoxComponentStateChanged__DelegateSignature");

	UUI_GameplayOptions_C_BndEvt__Checkbox_AimToggle_K2Node_ComponentBoundEvent_117_OnCheckBoxComponentStateChanged__DelegateSignature_Params params;
	params.bIsChecked = bIsChecked;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_GameplayOptions.UI_GameplayOptions_C.BndEvt__Dropdown_CameraPosition_K2Node_ComponentBoundEvent_175_OnSelectionChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FString                 SelectedItem                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// TEnumAsByte<ESelectInfo>       SelectionType                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_GameplayOptions_C::BndEvt__Dropdown_CameraPosition_K2Node_ComponentBoundEvent_175_OnSelectionChangedEvent__DelegateSignature(const struct FString& SelectedItem, TEnumAsByte<ESelectInfo> SelectionType)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GameplayOptions.UI_GameplayOptions_C.BndEvt__Dropdown_CameraPosition_K2Node_ComponentBoundEvent_175_OnSelectionChangedEvent__DelegateSignature");

	UUI_GameplayOptions_C_BndEvt__Dropdown_CameraPosition_K2Node_ComponentBoundEvent_175_OnSelectionChangedEvent__DelegateSignature_Params params;
	params.SelectedItem = SelectedItem;
	params.SelectionType = SelectionType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_GameplayOptions.UI_GameplayOptions_C.BndEvt__Dropdown_Perspective_K2Node_ComponentBoundEvent_43_OnSelectionChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FString                 SelectedItem                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// TEnumAsByte<ESelectInfo>       SelectionType                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_GameplayOptions_C::BndEvt__Dropdown_Perspective_K2Node_ComponentBoundEvent_43_OnSelectionChangedEvent__DelegateSignature(const struct FString& SelectedItem, TEnumAsByte<ESelectInfo> SelectionType)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GameplayOptions.UI_GameplayOptions_C.BndEvt__Dropdown_Perspective_K2Node_ComponentBoundEvent_43_OnSelectionChangedEvent__DelegateSignature");

	UUI_GameplayOptions_C_BndEvt__Dropdown_Perspective_K2Node_ComponentBoundEvent_43_OnSelectionChangedEvent__DelegateSignature_Params params;
	params.SelectedItem = SelectedItem;
	params.SelectionType = SelectionType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_GameplayOptions.UI_GameplayOptions_C.BndEvt__CheckBox_0_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                           bIsChecked                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_GameplayOptions_C::BndEvt__CheckBox_0_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GameplayOptions.UI_GameplayOptions_C.BndEvt__CheckBox_0_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature");

	UUI_GameplayOptions_C_BndEvt__CheckBox_0_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature_Params params;
	params.bIsChecked = bIsChecked;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_GameplayOptions.UI_GameplayOptions_C.BndEvt__CheckBox_0_K2Node_ComponentBoundEvent_1_OnCheckBoxComponentStateChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                           bIsChecked                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_GameplayOptions_C::BndEvt__CheckBox_0_K2Node_ComponentBoundEvent_1_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GameplayOptions.UI_GameplayOptions_C.BndEvt__CheckBox_0_K2Node_ComponentBoundEvent_1_OnCheckBoxComponentStateChanged__DelegateSignature");

	UUI_GameplayOptions_C_BndEvt__CheckBox_0_K2Node_ComponentBoundEvent_1_OnCheckBoxComponentStateChanged__DelegateSignature_Params params;
	params.bIsChecked = bIsChecked;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_GameplayOptions.UI_GameplayOptions_C.ExecuteUbergraph_UI_GameplayOptions
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_GameplayOptions_C::ExecuteUbergraph_UI_GameplayOptions(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GameplayOptions.UI_GameplayOptions_C.ExecuteUbergraph_UI_GameplayOptions");

	UUI_GameplayOptions_C_ExecuteUbergraph_UI_GameplayOptions_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
