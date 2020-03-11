#pragma once

#include "../SDK.h"

// Name: BlazingSails, Version: 1.481.81

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function UI_VideoOptions.UI_VideoOptions_C.GetSliderValueFromHullMaskResolution
struct UUI_VideoOptions_C_GetSliderValueFromHullMaskResolution_Params
{
	int                                                Resolution;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              SliderValue;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FText                                       Quality;                                                  // (Parm, OutParm)
};

// Function UI_VideoOptions.UI_VideoOptions_C.GetWaterHullMaskResolution
struct UUI_VideoOptions_C_GetWaterHullMaskResolution_Params
{
	int                                                Resolution;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function UI_VideoOptions.UI_VideoOptions_C.ApplyOptions
struct UUI_VideoOptions_C_ApplyOptions_Params
{
};

// Function UI_VideoOptions.UI_VideoOptions_C.AddResolutions
struct UUI_VideoOptions_C_AddResolutions_Params
{
};

// Function UI_VideoOptions.UI_VideoOptions_C.LoadOptions
struct UUI_VideoOptions_C_LoadOptions_Params
{
};

// Function UI_VideoOptions.UI_VideoOptions_C.SaveOptions
struct UUI_VideoOptions_C_SaveOptions_Params
{
};

// Function UI_VideoOptions.UI_VideoOptions_C.Construct
struct UUI_VideoOptions_C_Construct_Params
{
};

// Function UI_VideoOptions.UI_VideoOptions_C.Tick
struct UUI_VideoOptions_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float                                              InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_VideoOptions.UI_VideoOptions_C.BndEvt__Dropdown_Resolutions_K2Node_ComponentBoundEvent_321_OnSelectionChangedEvent__DelegateSignature
struct UUI_VideoOptions_C_BndEvt__Dropdown_Resolutions_K2Node_ComponentBoundEvent_321_OnSelectionChangedEvent__DelegateSignature_Params
{
	struct FString                                     SelectedItem;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	TEnumAsByte<ESelectInfo>                           SelectionType;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_VideoOptions.UI_VideoOptions_C.BndEvt__Checkbox_Fullscreen_K2Node_ComponentBoundEvent_326_OnCheckBoxComponentStateChanged__DelegateSignature
struct UUI_VideoOptions_C_BndEvt__Checkbox_Fullscreen_K2Node_ComponentBoundEvent_326_OnCheckBoxComponentStateChanged__DelegateSignature_Params
{
	bool                                               bIsChecked;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_VideoOptions.UI_VideoOptions_C.BndEvt__CheckBox_2_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature
struct UUI_VideoOptions_C_BndEvt__CheckBox_2_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature_Params
{
	bool                                               bIsChecked;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_VideoOptions.UI_VideoOptions_C.BndEvt__Silder_FOV_K2Node_ComponentBoundEvent_1_OnFloatValueChangedEvent__DelegateSignature
struct UUI_VideoOptions_C_BndEvt__Silder_FOV_K2Node_ComponentBoundEvent_1_OnFloatValueChangedEvent__DelegateSignature_Params
{
	float                                              Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_VideoOptions.UI_VideoOptions_C.BndEvt__Slider_Shadows_K2Node_ComponentBoundEvent_2_OnFloatValueChangedEvent__DelegateSignature
struct UUI_VideoOptions_C_BndEvt__Slider_Shadows_K2Node_ComponentBoundEvent_2_OnFloatValueChangedEvent__DelegateSignature_Params
{
	float                                              Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_VideoOptions.UI_VideoOptions_C.BndEvt__Slider_WaterHullMask_K2Node_ComponentBoundEvent_3_OnFloatValueChangedEvent__DelegateSignature
struct UUI_VideoOptions_C_BndEvt__Slider_WaterHullMask_K2Node_ComponentBoundEvent_3_OnFloatValueChangedEvent__DelegateSignature_Params
{
	float                                              Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_VideoOptions.UI_VideoOptions_C.BndEvt__Btn_Azerty_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature
struct UUI_VideoOptions_C_BndEvt__Btn_Azerty_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function UI_VideoOptions.UI_VideoOptions_C.BndEvt__Btn_Medium_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature
struct UUI_VideoOptions_C_BndEvt__Btn_Medium_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function UI_VideoOptions.UI_VideoOptions_C.BndEvt__Btn_High_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature
struct UUI_VideoOptions_C_BndEvt__Btn_High_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function UI_VideoOptions.UI_VideoOptions_C.BndEvt__Btn_Epic_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature
struct UUI_VideoOptions_C_BndEvt__Btn_Epic_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function UI_VideoOptions.UI_VideoOptions_C.ExecuteUbergraph_UI_VideoOptions
struct UUI_VideoOptions_C_ExecuteUbergraph_UI_VideoOptions_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
