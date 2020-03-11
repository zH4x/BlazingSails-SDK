
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

// Function UI_SailDamageProgress.UI_SailDamageProgress_C.ShowWidget
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UUI_SailDamageProgress_C::ShowWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SailDamageProgress.UI_SailDamageProgress_C.ShowWidget");

	UUI_SailDamageProgress_C_ShowWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_SailDamageProgress.UI_SailDamageProgress_C.GetHealthPercent
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UUI_SailDamageProgress_C::GetHealthPercent()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SailDamageProgress.UI_SailDamageProgress_C.GetHealthPercent");

	UUI_SailDamageProgress_C_GetHealthPercent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_SailDamageProgress.UI_SailDamageProgress_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_SailDamageProgress_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SailDamageProgress.UI_SailDamageProgress_C.Construct");

	UUI_SailDamageProgress_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_SailDamageProgress.UI_SailDamageProgress_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float                          InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_SailDamageProgress_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SailDamageProgress.UI_SailDamageProgress_C.Tick");

	UUI_SailDamageProgress_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_SailDamageProgress.UI_SailDamageProgress_C.ExecuteUbergraph_UI_SailDamageProgress
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_SailDamageProgress_C::ExecuteUbergraph_UI_SailDamageProgress(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SailDamageProgress.UI_SailDamageProgress_C.ExecuteUbergraph_UI_SailDamageProgress");

	UUI_SailDamageProgress_C_ExecuteUbergraph_UI_SailDamageProgress_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
