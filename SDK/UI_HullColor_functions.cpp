
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

// Function UI_HullColor.UI_HullColor_C.SetName
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UUI_HullColor_C::SetName()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HullColor.UI_HullColor_C.SetName");

	UUI_HullColor_C_SetName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_HullColor.UI_HullColor_C.LoadToolTip
// (BlueprintCallable, BlueprintEvent)

void UUI_HullColor_C::LoadToolTip()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HullColor.UI_HullColor_C.LoadToolTip");

	UUI_HullColor_C_LoadToolTip_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HullColor.UI_HullColor_C.Load
// (BlueprintCallable, BlueprintEvent)

void UUI_HullColor_C::Load()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HullColor.UI_HullColor_C.Load");

	UUI_HullColor_C_Load_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HullColor.UI_HullColor_C.BndEvt__Button_54_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UUI_HullColor_C::BndEvt__Button_54_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HullColor.UI_HullColor_C.BndEvt__Button_54_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UUI_HullColor_C_BndEvt__Button_54_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HullColor.UI_HullColor_C.BndEvt__Button_54_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UUI_HullColor_C::BndEvt__Button_54_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HullColor.UI_HullColor_C.BndEvt__Button_54_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");

	UUI_HullColor_C_BndEvt__Button_54_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HullColor.UI_HullColor_C.BndEvt__Button_54_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UUI_HullColor_C::BndEvt__Button_54_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HullColor.UI_HullColor_C.BndEvt__Button_54_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature");

	UUI_HullColor_C_BndEvt__Button_54_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HullColor.UI_HullColor_C.ExecuteUbergraph_UI_HullColor
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_HullColor_C::ExecuteUbergraph_UI_HullColor(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HullColor.UI_HullColor_C.ExecuteUbergraph_UI_HullColor");

	UUI_HullColor_C_ExecuteUbergraph_UI_HullColor_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
