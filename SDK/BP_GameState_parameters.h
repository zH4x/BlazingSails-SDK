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

// Function BP_GameState.BP_GameState_C.BroadcastAnnouncement
struct ABP_GameState_C_BroadcastAnnouncement_Params
{
	struct FText                                       Message;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               NotificationSound;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_GameState.BP_GameState_C.RefreshSpawnPoints
struct ABP_GameState_C_RefreshSpawnPoints_Params
{
};

// Function BP_GameState.BP_GameState_C.TransferGoldFromTeamToTeam
struct ABP_GameState_C_TransferGoldFromTeamToTeam_Params
{
	int                                                FromTeam;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ToTeam;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_GameState.BP_GameState_C.AddGoldToCrew
struct ABP_GameState_C_AddGoldToCrew_Params
{
	int                                                GoldAmount;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                TeamID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_GameState.BP_GameState_C.OnRep_DefeatedTeams
struct ABP_GameState_C_OnRep_DefeatedTeams_Params
{
};

// Function BP_GameState.BP_GameState_C.OnRep_TimeOfDay
struct ABP_GameState_C_OnRep_TimeOfDay_Params
{
};

// Function BP_GameState.BP_GameState_C.OnRep_RemainingTeams
struct ABP_GameState_C_OnRep_RemainingTeams_Params
{
};

// Function BP_GameState.BP_GameState_C.OnRep_Teams
struct ABP_GameState_C_OnRep_Teams_Params
{
};

// Function BP_GameState.BP_GameState_C.UserConstructionScript
struct ABP_GameState_C_UserConstructionScript_Params
{
};

// Function BP_GameState.BP_GameState_C.ClaimSpawnPoint
struct ABP_GameState_C_ClaimSpawnPoint_Params
{
	class ABP_BoatSpawn_C*                             SpawnPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class ABP_Controller_C*                            Controller;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_GameState.BP_GameState_C.ReceiveTick
struct ABP_GameState_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_GameState.BP_GameState_C.ReceiveBeginPlay
struct ABP_GameState_C_ReceiveBeginPlay_Params
{
};

// Function BP_GameState.BP_GameState_C.ExecuteUbergraph_BP_GameState
struct ABP_GameState_C_ExecuteUbergraph_BP_GameState_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
