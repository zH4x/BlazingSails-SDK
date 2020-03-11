
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

// Function UI_Progress.UI_Progress_C.ShowStealingText
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UUI_Progress_C::ShowStealingText()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Progress.UI_Progress_C.ShowStealingText");

	UUI_Progress_C_ShowStealingText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_Progress.UI_Progress_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_Progress_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Progress.UI_Progress_C.Construct");

	UUI_Progress_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Progress.UI_Progress_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float                          InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_Progress_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Progress.UI_Progress_C.Tick");

	UUI_Progress_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Progress.UI_Progress_C.ExecuteUbergraph_UI_Progress
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_Progress_C::ExecuteUbergraph_UI_Progress(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Progress.UI_Progress_C.ExecuteUbergraph_UI_Progress");

	UUI_Progress_C_ExecuteUbergraph_UI_Progress_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
