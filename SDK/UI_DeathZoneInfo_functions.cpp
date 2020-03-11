
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

// Function UI_DeathZoneInfo.UI_DeathZoneInfo_C.ShowSkull
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UUI_DeathZoneInfo_C::ShowSkull()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_DeathZoneInfo.UI_DeathZoneInfo_C.ShowSkull");

	UUI_DeathZoneInfo_C_ShowSkull_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_DeathZoneInfo.UI_DeathZoneInfo_C.SetCountdownText
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UUI_DeathZoneInfo_C::SetCountdownText()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_DeathZoneInfo.UI_DeathZoneInfo_C.SetCountdownText");

	UUI_DeathZoneInfo_C_SetCountdownText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_DeathZoneInfo.UI_DeathZoneInfo_C.ShowCountDown
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UUI_DeathZoneInfo_C::ShowCountDown()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_DeathZoneInfo.UI_DeathZoneInfo_C.ShowCountDown");

	UUI_DeathZoneInfo_C_ShowCountDown_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_DeathZoneInfo.UI_DeathZoneInfo_C.SetDeadZoneText
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UUI_DeathZoneInfo_C::SetDeadZoneText()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_DeathZoneInfo.UI_DeathZoneInfo_C.SetDeadZoneText");

	UUI_DeathZoneInfo_C_SetDeadZoneText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_DeathZoneInfo.UI_DeathZoneInfo_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float                          InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_DeathZoneInfo_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_DeathZoneInfo.UI_DeathZoneInfo_C.Tick");

	UUI_DeathZoneInfo_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_DeathZoneInfo.UI_DeathZoneInfo_C.refresh
// (BlueprintCallable, BlueprintEvent)

void UUI_DeathZoneInfo_C::refresh()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_DeathZoneInfo.UI_DeathZoneInfo_C.refresh");

	UUI_DeathZoneInfo_C_refresh_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_DeathZoneInfo.UI_DeathZoneInfo_C.ExecuteUbergraph_UI_DeathZoneInfo
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_DeathZoneInfo_C::ExecuteUbergraph_UI_DeathZoneInfo(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_DeathZoneInfo.UI_DeathZoneInfo_C.ExecuteUbergraph_UI_DeathZoneInfo");

	UUI_DeathZoneInfo_C_ExecuteUbergraph_UI_DeathZoneInfo_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
