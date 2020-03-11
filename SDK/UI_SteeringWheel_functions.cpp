
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

// Function UI_SteeringWheel.UI_SteeringWheel_C.ShowTooltip
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UUI_SteeringWheel_C::ShowTooltip()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SteeringWheel.UI_SteeringWheel_C.ShowTooltip");

	UUI_SteeringWheel_C_ShowTooltip_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_SteeringWheel.UI_SteeringWheel_C.ShowCooldown
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UUI_SteeringWheel_C::ShowCooldown()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SteeringWheel.UI_SteeringWheel_C.ShowCooldown");

	UUI_SteeringWheel_C_ShowCooldown_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_SteeringWheel.UI_SteeringWheel_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_SteeringWheel_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SteeringWheel.UI_SteeringWheel_C.Construct");

	UUI_SteeringWheel_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_SteeringWheel.UI_SteeringWheel_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float                          InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_SteeringWheel_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SteeringWheel.UI_SteeringWheel_C.Tick");

	UUI_SteeringWheel_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_SteeringWheel.UI_SteeringWheel_C.ExecuteUbergraph_UI_SteeringWheel
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_SteeringWheel_C::ExecuteUbergraph_UI_SteeringWheel(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SteeringWheel.UI_SteeringWheel_C.ExecuteUbergraph_UI_SteeringWheel");

	UUI_SteeringWheel_C_ExecuteUbergraph_UI_SteeringWheel_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
