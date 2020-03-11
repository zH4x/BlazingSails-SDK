
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

// Function UI_WinningScreen.UI_WinningScreen_C.ShowVictoryText
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UUI_WinningScreen_C::ShowVictoryText()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_WinningScreen.UI_WinningScreen_C.ShowVictoryText");

	UUI_WinningScreen_C_ShowVictoryText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_WinningScreen.UI_WinningScreen_C.ShowReward
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UUI_WinningScreen_C::ShowReward()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_WinningScreen.UI_WinningScreen_C.ShowReward");

	UUI_WinningScreen_C_ShowReward_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_WinningScreen.UI_WinningScreen_C.SetNewGameTime
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UUI_WinningScreen_C::SetNewGameTime()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_WinningScreen.UI_WinningScreen_C.SetNewGameTime");

	UUI_WinningScreen_C_SetNewGameTime_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_WinningScreen.UI_WinningScreen_C.GetProcentGoldMultiplier
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FST_Team                Crew                           (BlueprintVisible, BlueprintReadOnly, Parm)
// float                          Procent                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          Multiplier                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UUI_WinningScreen_C::GetProcentGoldMultiplier(const struct FST_Team& Crew, float* Procent, float* Multiplier)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_WinningScreen.UI_WinningScreen_C.GetProcentGoldMultiplier");

	UUI_WinningScreen_C_GetProcentGoldMultiplier_Params params;
	params.Crew = Crew;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Procent != nullptr)
		*Procent = params.Procent;
	if (Multiplier != nullptr)
		*Multiplier = params.Multiplier;
}


// Function UI_WinningScreen.UI_WinningScreen_C.CheckIfOwnCrewAndAddGold
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FST_Team                Crew                           (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FText                   Result                         (Parm, OutParm)
// struct FSlateColor             OwnCrewColor                   (Parm, OutParm)

void UUI_WinningScreen_C::CheckIfOwnCrewAndAddGold(const struct FST_Team& Crew, struct FText* Result, struct FSlateColor* OwnCrewColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_WinningScreen.UI_WinningScreen_C.CheckIfOwnCrewAndAddGold");

	UUI_WinningScreen_C_CheckIfOwnCrewAndAddGold_Params params;
	params.Crew = Crew;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
	if (OwnCrewColor != nullptr)
		*OwnCrewColor = params.OwnCrewColor;
}


// Function UI_WinningScreen.UI_WinningScreen_C.GetLowestCrewRank
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FST_Team>        Teams                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// int                            Index                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UUI_WinningScreen_C::GetLowestCrewRank(TArray<struct FST_Team>* Teams, int* Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_WinningScreen.UI_WinningScreen_C.GetLowestCrewRank");

	UUI_WinningScreen_C_GetLowestCrewRank_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Teams != nullptr)
		*Teams = params.Teams;
	if (Index != nullptr)
		*Index = params.Index;
}


// Function UI_WinningScreen.UI_WinningScreen_C.SetBestKiller
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UUI_WinningScreen_C::SetBestKiller()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_WinningScreen.UI_WinningScreen_C.SetBestKiller");

	UUI_WinningScreen_C_SetBestKiller_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_WinningScreen.UI_WinningScreen_C.SetBestRepairMan
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UUI_WinningScreen_C::SetBestRepairMan()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_WinningScreen.UI_WinningScreen_C.SetBestRepairMan");

	UUI_WinningScreen_C_SetBestRepairMan_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_WinningScreen.UI_WinningScreen_C.FillCrewList
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UUI_WinningScreen_C::FillCrewList()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_WinningScreen.UI_WinningScreen_C.FillCrewList");

	UUI_WinningScreen_C_FillCrewList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_WinningScreen.UI_WinningScreen_C.GetHighestScore
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class ABP_PlayerState_C*> TestArray                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// int                            Index                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UUI_WinningScreen_C::GetHighestScore(TArray<class ABP_PlayerState_C*>* TestArray, int* Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_WinningScreen.UI_WinningScreen_C.GetHighestScore");

	UUI_WinningScreen_C_GetHighestScore_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (TestArray != nullptr)
		*TestArray = params.TestArray;
	if (Index != nullptr)
		*Index = params.Index;
}


// Function UI_WinningScreen.UI_WinningScreen_C.OrderPlayersByScore
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class APlayerState*>    PlayerArray                    (Parm, OutParm, ZeroConstructor)

void UUI_WinningScreen_C::OrderPlayersByScore(TArray<class APlayerState*>* PlayerArray)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_WinningScreen.UI_WinningScreen_C.OrderPlayersByScore");

	UUI_WinningScreen_C_OrderPlayersByScore_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PlayerArray != nullptr)
		*PlayerArray = params.PlayerArray;
}


// Function UI_WinningScreen.UI_WinningScreen_C.CheckIfSelf
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   Name                           (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FText                   Output                         (Parm, OutParm)
// bool                           IsYou                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FSlateColor             SelfColor                      (Parm, OutParm)

void UUI_WinningScreen_C::CheckIfSelf(const struct FText& Name, struct FText* Output, bool* IsYou, struct FSlateColor* SelfColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_WinningScreen.UI_WinningScreen_C.CheckIfSelf");

	UUI_WinningScreen_C_CheckIfSelf_Params params;
	params.Name = Name;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Output != nullptr)
		*Output = params.Output;
	if (IsYou != nullptr)
		*IsYou = params.IsYou;
	if (SelfColor != nullptr)
		*SelfColor = params.SelfColor;
}


// Function UI_WinningScreen.UI_WinningScreen_C.FillPlayerList
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UUI_WinningScreen_C::FillPlayerList()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_WinningScreen.UI_WinningScreen_C.FillPlayerList");

	UUI_WinningScreen_C_FillPlayerList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_WinningScreen.UI_WinningScreen_C.CheckIfOwnTeamWon
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            WinningTeamID                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           OwnTeamWon                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UUI_WinningScreen_C::CheckIfOwnTeamWon(int WinningTeamID, bool* OwnTeamWon)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_WinningScreen.UI_WinningScreen_C.CheckIfOwnTeamWon");

	UUI_WinningScreen_C_CheckIfOwnTeamWon_Params params;
	params.WinningTeamID = WinningTeamID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OwnTeamWon != nullptr)
		*OwnTeamWon = params.OwnTeamWon;
}


// Function UI_WinningScreen.UI_WinningScreen_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_WinningScreen_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_WinningScreen.UI_WinningScreen_C.Construct");

	UUI_WinningScreen_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_WinningScreen.UI_WinningScreen_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float                          InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_WinningScreen_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_WinningScreen.UI_WinningScreen_C.Tick");

	UUI_WinningScreen_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_WinningScreen.UI_WinningScreen_C.Init
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            WinningTeam                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_WinningScreen_C::Init(int WinningTeam)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_WinningScreen.UI_WinningScreen_C.Init");

	UUI_WinningScreen_C_Init_Params params;
	params.WinningTeam = WinningTeam;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_WinningScreen.UI_WinningScreen_C.ExecuteUbergraph_UI_WinningScreen
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_WinningScreen_C::ExecuteUbergraph_UI_WinningScreen(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_WinningScreen.UI_WinningScreen_C.ExecuteUbergraph_UI_WinningScreen");

	UUI_WinningScreen_C_ExecuteUbergraph_UI_WinningScreen_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
