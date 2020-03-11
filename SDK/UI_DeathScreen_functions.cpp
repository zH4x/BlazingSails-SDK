
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

// Function UI_DeathScreen.UI_DeathScreen_C.ShowHeadshot
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UUI_DeathScreen_C::ShowHeadshot()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_DeathScreen.UI_DeathScreen_C.ShowHeadshot");

	UUI_DeathScreen_C_ShowHeadshot_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_DeathScreen.UI_DeathScreen_C.SetTimer
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UUI_DeathScreen_C::SetTimer()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_DeathScreen.UI_DeathScreen_C.SetTimer");

	UUI_DeathScreen_C_SetTimer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_DeathScreen.UI_DeathScreen_C.SetDeathText
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UUI_DeathScreen_C::SetDeathText()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_DeathScreen.UI_DeathScreen_C.SetDeathText");

	UUI_DeathScreen_C_SetDeathText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_DeathScreen.UI_DeathScreen_C.InitDeathScreen
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 KillerPlayerName               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// float                          RespawnTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           headshot                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_DeathScreen_C::InitDeathScreen(const struct FString& KillerPlayerName, float RespawnTime, bool headshot)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_DeathScreen.UI_DeathScreen_C.InitDeathScreen");

	UUI_DeathScreen_C_InitDeathScreen_Params params;
	params.KillerPlayerName = KillerPlayerName;
	params.RespawnTime = RespawnTime;
	params.headshot = headshot;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_DeathScreen.UI_DeathScreen_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float                          InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_DeathScreen_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_DeathScreen.UI_DeathScreen_C.Tick");

	UUI_DeathScreen_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_DeathScreen.UI_DeathScreen_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_DeathScreen_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_DeathScreen.UI_DeathScreen_C.Construct");

	UUI_DeathScreen_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_DeathScreen.UI_DeathScreen_C.ExecuteUbergraph_UI_DeathScreen
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_DeathScreen_C::ExecuteUbergraph_UI_DeathScreen(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_DeathScreen.UI_DeathScreen_C.ExecuteUbergraph_UI_DeathScreen");

	UUI_DeathScreen_C_ExecuteUbergraph_UI_DeathScreen_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
