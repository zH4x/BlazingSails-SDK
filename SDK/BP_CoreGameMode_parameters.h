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

// Function BP_CoreGameMode.BP_CoreGameMode_C.Event_Teams
struct ABP_CoreGameMode_C_Event_Teams_Params
{
};

// Function BP_CoreGameMode.BP_CoreGameMode_C.GetPreferedSpawnPointFromTeam
struct ABP_CoreGameMode_C_GetPreferedSpawnPointFromTeam_Params
{
	int                                                TeamID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class ABP_BoatSpawn_C*                             BoatSpawnPoint;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_CoreGameMode.BP_CoreGameMode_C.CheckIfPlayerIsBanned
struct ABP_CoreGameMode_C_CheckIfPlayerIsBanned_Params
{
	class ABP_Controller_C*                            ControllerRef;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Banned;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_CoreGameMode.BP_CoreGameMode_C.KickBanPlayer
struct ABP_CoreGameMode_C_KickBanPlayer_Params
{
	int                                                PlayerId;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Banned_;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     UniqueNetId;                                              // (Parm, OutParm, ZeroConstructor)
};

// Function BP_CoreGameMode.BP_CoreGameMode_C.GetUndefeatedTeamsArray
struct ABP_CoreGameMode_C_GetUndefeatedTeamsArray_Params
{
	TArray<struct FST_Team>                            UndefeatedTeamsArray;                                     // (Parm, OutParm, ZeroConstructor)
};

// Function BP_CoreGameMode.BP_CoreGameMode_C.PrepareTeamsForFair
struct ABP_CoreGameMode_C_PrepareTeamsForFair_Params
{
};

// Function BP_CoreGameMode.BP_CoreGameMode_C.DefeatTeam
struct ABP_CoreGameMode_C_DefeatTeam_Params
{
	int                                                Team;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_CoreGameMode.BP_CoreGameMode_C.DisplayPings
struct ABP_CoreGameMode_C_DisplayPings_Params
{
};

// Function BP_CoreGameMode.BP_CoreGameMode_C.StartGame
struct ABP_CoreGameMode_C_StartGame_Params
{
};

// Function BP_CoreGameMode.BP_CoreGameMode_C.CheckIfCrewIsEmpty
struct ABP_CoreGameMode_C_CheckIfCrewIsEmpty_Params
{
	int                                                CrewID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               CrewIsEmpty;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_CoreGameMode.BP_CoreGameMode_C.ClearEmptyCrews
struct ABP_CoreGameMode_C_ClearEmptyCrews_Params
{
};

// Function BP_CoreGameMode.BP_CoreGameMode_C.UserConstructionScript
struct ABP_CoreGameMode_C_UserConstructionScript_Params
{
};

// Function BP_CoreGameMode.BP_CoreGameMode_C.OnFailure_D04F3F4047CD2F1B9C80B780DAFC498D
struct ABP_CoreGameMode_C_OnFailure_D04F3F4047CD2F1B9C80B780DAFC498D_Params
{
};

// Function BP_CoreGameMode.BP_CoreGameMode_C.OnSuccess_D04F3F4047CD2F1B9C80B780DAFC498D
struct ABP_CoreGameMode_C_OnSuccess_D04F3F4047CD2F1B9C80B780DAFC498D_Params
{
};

// Function BP_CoreGameMode.BP_CoreGameMode_C.OnFailure_6716420744C0014FE83E3BAF8996ABB2
struct ABP_CoreGameMode_C_OnFailure_6716420744C0014FE83E3BAF8996ABB2_Params
{
};

// Function BP_CoreGameMode.BP_CoreGameMode_C.OnSuccess_6716420744C0014FE83E3BAF8996ABB2
struct ABP_CoreGameMode_C_OnSuccess_6716420744C0014FE83E3BAF8996ABB2_Params
{
};

// Function BP_CoreGameMode.BP_CoreGameMode_C.ReceiveBeginPlay
struct ABP_CoreGameMode_C_ReceiveBeginPlay_Params
{
};

// Function BP_CoreGameMode.BP_CoreGameMode_C.ReceiveTick
struct ABP_CoreGameMode_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_CoreGameMode.BP_CoreGameMode_C.K2_PostLogin
struct ABP_CoreGameMode_C_K2_PostLogin_Params
{
	class APlayerController*                           NewPlayer;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_CoreGameMode.BP_CoreGameMode_C.K2_OnLogout
struct ABP_CoreGameMode_C_K2_OnLogout_Params
{
	class AController*                                 ExitingController;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_CoreGameMode.BP_CoreGameMode_C.CreateNewTeam
struct ABP_CoreGameMode_C_CreateNewTeam_Params
{
	int                                                TeamFirstName;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                TeamSecondaryName;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                TeamSecondaryNameIndex;                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                teamColor;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class ABP_Controller_C*                            PlayerController;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       ShipName;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
	int                                                FlagEmblem;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_CoreGameMode.BP_CoreGameMode_C.RefreshHUDs
struct ABP_CoreGameMode_C_RefreshHUDs_Params
{
};

// Function BP_CoreGameMode.BP_CoreGameMode_C.AddNewChatMessage
struct ABP_CoreGameMode_C_AddNewChatMessage_Params
{
	struct FST_SimpleMessage                           ChatMessage;                                              // (BlueprintVisible, BlueprintReadOnly, Parm)
	int                                                TeamChatID;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               FormatText;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_CoreGameMode.BP_CoreGameMode_C.RestartLevel
struct ABP_CoreGameMode_C_RestartLevel_Params
{
};

// Function BP_CoreGameMode.BP_CoreGameMode_C.CloseGameServer
struct ABP_CoreGameMode_C_CloseGameServer_Params
{
};

// Function BP_CoreGameMode.BP_CoreGameMode_C.ExecuteUbergraph_BP_CoreGameMode
struct ABP_CoreGameMode_C_ExecuteUbergraph_BP_CoreGameMode_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
