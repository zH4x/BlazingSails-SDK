#pragma once

#include "../SDK.h"

// Name: BlazingSails, Version: 1.481.81

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function UI_WinningScreen.UI_WinningScreen_C.ShowVictoryText
struct UUI_WinningScreen_C_ShowVictoryText_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UI_WinningScreen.UI_WinningScreen_C.ShowReward
struct UUI_WinningScreen_C_ShowReward_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UI_WinningScreen.UI_WinningScreen_C.SetNewGameTime
struct UUI_WinningScreen_C_SetNewGameTime_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UI_WinningScreen.UI_WinningScreen_C.GetProcentGoldMultiplier
struct UUI_WinningScreen_C_GetProcentGoldMultiplier_Params
{
	struct FST_Team                                    Crew;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
	float                                              Procent;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              Multiplier;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function UI_WinningScreen.UI_WinningScreen_C.CheckIfOwnCrewAndAddGold
struct UUI_WinningScreen_C_CheckIfOwnCrewAndAddGold_Params
{
	struct FST_Team                                    Crew;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FText                                       Result;                                                   // (Parm, OutParm)
	struct FSlateColor                                 OwnCrewColor;                                             // (Parm, OutParm)
};

// Function UI_WinningScreen.UI_WinningScreen_C.GetLowestCrewRank
struct UUI_WinningScreen_C_GetLowestCrewRank_Params
{
	TArray<struct FST_Team>                            Teams;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	int                                                Index;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function UI_WinningScreen.UI_WinningScreen_C.SetBestKiller
struct UUI_WinningScreen_C_SetBestKiller_Params
{
};

// Function UI_WinningScreen.UI_WinningScreen_C.SetBestRepairMan
struct UUI_WinningScreen_C_SetBestRepairMan_Params
{
};

// Function UI_WinningScreen.UI_WinningScreen_C.FillCrewList
struct UUI_WinningScreen_C_FillCrewList_Params
{
};

// Function UI_WinningScreen.UI_WinningScreen_C.GetHighestScore
struct UUI_WinningScreen_C_GetHighestScore_Params
{
	TArray<class ABP_PlayerState_C*>                   TestArray;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	int                                                Index;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function UI_WinningScreen.UI_WinningScreen_C.OrderPlayersByScore
struct UUI_WinningScreen_C_OrderPlayersByScore_Params
{
	TArray<class APlayerState*>                        PlayerArray;                                              // (Parm, OutParm, ZeroConstructor)
};

// Function UI_WinningScreen.UI_WinningScreen_C.CheckIfSelf
struct UUI_WinningScreen_C_CheckIfSelf_Params
{
	struct FText                                       Name;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FText                                       Output;                                                   // (Parm, OutParm)
	bool                                               IsYou;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FSlateColor                                 SelfColor;                                                // (Parm, OutParm)
};

// Function UI_WinningScreen.UI_WinningScreen_C.FillPlayerList
struct UUI_WinningScreen_C_FillPlayerList_Params
{
};

// Function UI_WinningScreen.UI_WinningScreen_C.CheckIfOwnTeamWon
struct UUI_WinningScreen_C_CheckIfOwnTeamWon_Params
{
	int                                                WinningTeamID;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               OwnTeamWon;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function UI_WinningScreen.UI_WinningScreen_C.Construct
struct UUI_WinningScreen_C_Construct_Params
{
};

// Function UI_WinningScreen.UI_WinningScreen_C.Tick
struct UUI_WinningScreen_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float                                              InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_WinningScreen.UI_WinningScreen_C.Init
struct UUI_WinningScreen_C_Init_Params
{
	int                                                WinningTeam;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_WinningScreen.UI_WinningScreen_C.ExecuteUbergraph_UI_WinningScreen
struct UUI_WinningScreen_C_ExecuteUbergraph_UI_WinningScreen_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
