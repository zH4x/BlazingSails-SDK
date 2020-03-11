
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

// Function UI_IngameOptions.UI_IngameOptions_C.BndEvt__Btn_Close_K2Node_ComponentBoundEvent_68_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UUI_IngameOptions_C::BndEvt__Btn_Close_K2Node_ComponentBoundEvent_68_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_IngameOptions.UI_IngameOptions_C.BndEvt__Btn_Close_K2Node_ComponentBoundEvent_68_OnButtonClickedEvent__DelegateSignature");

	UUI_IngameOptions_C_BndEvt__Btn_Close_K2Node_ComponentBoundEvent_68_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_IngameOptions.UI_IngameOptions_C.ExecuteUbergraph_UI_IngameOptions
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_IngameOptions_C::ExecuteUbergraph_UI_IngameOptions(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_IngameOptions.UI_IngameOptions_C.ExecuteUbergraph_UI_IngameOptions");

	UUI_IngameOptions_C_ExecuteUbergraph_UI_IngameOptions_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
