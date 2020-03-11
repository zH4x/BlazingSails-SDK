
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

// Function UI_KeyBind.UI_KeyBind_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_KeyBind_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_KeyBind.UI_KeyBind_C.Construct");

	UUI_KeyBind_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_KeyBind.UI_KeyBind_C.BndEvt__Key_K2Node_ComponentBoundEvent_4_OnKeySelected__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FInputChord             SelectedKey                    (BlueprintVisible, BlueprintReadOnly, Parm)

void UUI_KeyBind_C::BndEvt__Key_K2Node_ComponentBoundEvent_4_OnKeySelected__DelegateSignature(const struct FInputChord& SelectedKey)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_KeyBind.UI_KeyBind_C.BndEvt__Key_K2Node_ComponentBoundEvent_4_OnKeySelected__DelegateSignature");

	UUI_KeyBind_C_BndEvt__Key_K2Node_ComponentBoundEvent_4_OnKeySelected__DelegateSignature_Params params;
	params.SelectedKey = SelectedKey;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_KeyBind.UI_KeyBind_C.ExecuteUbergraph_UI_KeyBind
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_KeyBind_C::ExecuteUbergraph_UI_KeyBind(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_KeyBind.UI_KeyBind_C.ExecuteUbergraph_UI_KeyBind");

	UUI_KeyBind_C_ExecuteUbergraph_UI_KeyBind_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
