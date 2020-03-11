
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

// Function UI_CorkPulled.UI_CorkPulled_C.SetWarningVisibility
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UUI_CorkPulled_C::SetWarningVisibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CorkPulled.UI_CorkPulled_C.SetWarningVisibility");

	UUI_CorkPulled_C_SetWarningVisibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_CorkPulled.UI_CorkPulled_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_CorkPulled_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CorkPulled.UI_CorkPulled_C.Construct");

	UUI_CorkPulled_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CorkPulled.UI_CorkPulled_C.ExecuteUbergraph_UI_CorkPulled
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_CorkPulled_C::ExecuteUbergraph_UI_CorkPulled(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CorkPulled.UI_CorkPulled_C.ExecuteUbergraph_UI_CorkPulled");

	UUI_CorkPulled_C_ExecuteUbergraph_UI_CorkPulled_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
