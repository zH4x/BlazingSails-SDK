
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

// Function UI_Scoreboard.UI_Scoreboard_C.GetDefeatedText
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           Defeated                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   Defeatedtext                   (Parm, OutParm)

void UUI_Scoreboard_C::GetDefeatedText(bool Defeated, struct FText* Defeatedtext)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Scoreboard.UI_Scoreboard_C.GetDefeatedText");

	UUI_Scoreboard_C_GetDefeatedText_Params params;
	params.Defeated = Defeated;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Defeatedtext != nullptr)
		*Defeatedtext = params.Defeatedtext;
}


// Function UI_Scoreboard.UI_Scoreboard_C.SetPlayerAmount
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UUI_Scoreboard_C::SetPlayerAmount()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Scoreboard.UI_Scoreboard_C.SetPlayerAmount");

	UUI_Scoreboard_C_SetPlayerAmount_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_Scoreboard.UI_Scoreboard_C.LoadScoreboard
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UUI_Scoreboard_C::LoadScoreboard()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Scoreboard.UI_Scoreboard_C.LoadScoreboard");

	UUI_Scoreboard_C_LoadScoreboard_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Scoreboard.UI_Scoreboard_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float                          InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_Scoreboard_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Scoreboard.UI_Scoreboard_C.Tick");

	UUI_Scoreboard_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Scoreboard.UI_Scoreboard_C.ScrollScoreboardUp
// (BlueprintCallable, BlueprintEvent)

void UUI_Scoreboard_C::ScrollScoreboardUp()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Scoreboard.UI_Scoreboard_C.ScrollScoreboardUp");

	UUI_Scoreboard_C_ScrollScoreboardUp_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Scoreboard.UI_Scoreboard_C.ScrollScoreboardDown
// (BlueprintCallable, BlueprintEvent)

void UUI_Scoreboard_C::ScrollScoreboardDown()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Scoreboard.UI_Scoreboard_C.ScrollScoreboardDown");

	UUI_Scoreboard_C_ScrollScoreboardDown_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Scoreboard.UI_Scoreboard_C.ExecuteUbergraph_UI_Scoreboard
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_Scoreboard_C::ExecuteUbergraph_UI_Scoreboard(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Scoreboard.UI_Scoreboard_C.ExecuteUbergraph_UI_Scoreboard");

	UUI_Scoreboard_C_ExecuteUbergraph_UI_Scoreboard_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
