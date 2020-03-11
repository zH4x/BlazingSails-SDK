
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

// Function UI_OptionsScreen.UI_OptionsScreen_C.BndEvt__Btn_Join_K2Node_ComponentBoundEvent_159_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UUI_OptionsScreen_C::BndEvt__Btn_Join_K2Node_ComponentBoundEvent_159_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_OptionsScreen.UI_OptionsScreen_C.BndEvt__Btn_Join_K2Node_ComponentBoundEvent_159_OnButtonClickedEvent__DelegateSignature");

	UUI_OptionsScreen_C_BndEvt__Btn_Join_K2Node_ComponentBoundEvent_159_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_OptionsScreen.UI_OptionsScreen_C.ExecuteUbergraph_UI_OptionsScreen
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_OptionsScreen_C::ExecuteUbergraph_UI_OptionsScreen(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_OptionsScreen.UI_OptionsScreen_C.ExecuteUbergraph_UI_OptionsScreen");

	UUI_OptionsScreen_C_ExecuteUbergraph_UI_OptionsScreen_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
