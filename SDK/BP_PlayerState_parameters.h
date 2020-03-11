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

// Function BP_PlayerState.BP_PlayerState_C.OnRep_IsModerator
struct ABP_PlayerState_C_OnRep_IsModerator_Params
{
};

// Function BP_PlayerState.BP_PlayerState_C.OnRep_SelectedSpawnPoint
struct ABP_PlayerState_C_OnRep_SelectedSpawnPoint_Params
{
};

// Function BP_PlayerState.BP_PlayerState_C.VoiceChat_Initialize
struct ABP_PlayerState_C_VoiceChat_Initialize_Params
{
};

// Function BP_PlayerState.BP_PlayerState_C.VoiceChat_PushToTalk
struct ABP_PlayerState_C_VoiceChat_PushToTalk_Params
{
	bool                                               bIsTryingToTalk;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerState.BP_PlayerState_C.OnRep_IsDead
struct ABP_PlayerState_C_OnRep_IsDead_Params
{
};

// Function BP_PlayerState.BP_PlayerState_C.ChangeRepairScore
struct ABP_PlayerState_C_ChangeRepairScore_Params
{
	int                                                Score;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerState.BP_PlayerState_C.ChangeScore
struct ABP_PlayerState_C_ChangeScore_Params
{
	int                                                Score;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerState.BP_PlayerState_C.OnRep_TeamPlayerColor
struct ABP_PlayerState_C_OnRep_TeamPlayerColor_Params
{
};

// Function BP_PlayerState.BP_PlayerState_C.OnRep_Health
struct ABP_PlayerState_C_OnRep_Health_Params
{
};

// Function BP_PlayerState.BP_PlayerState_C.OnRep_TeamID
struct ABP_PlayerState_C_OnRep_TeamID_Params
{
};

// Function BP_PlayerState.BP_PlayerState_C.UserConstructionScript
struct ABP_PlayerState_C_UserConstructionScript_Params
{
};

// Function BP_PlayerState.BP_PlayerState_C.MC_InitializeVoiceChat
struct ABP_PlayerState_C_MC_InitializeVoiceChat_Params
{
};

// Function BP_PlayerState.BP_PlayerState_C.S_SetIsTryingToTalk
struct ABP_PlayerState_C_S_SetIsTryingToTalk_Params
{
	bool                                               bIsTryingToTalk;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerState.BP_PlayerState_C.MC_SetIsTryingToTalk
struct ABP_PlayerState_C_MC_SetIsTryingToTalk_Params
{
	bool                                               bIsTryingToTalk;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerState.BP_PlayerState_C.ReceiveTick
struct ABP_PlayerState_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerState.BP_PlayerState_C.S_AddScore
struct ABP_PlayerState_C_S_AddScore_Params
{
	int                                                Score;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerState.BP_PlayerState_C.S_AddRepairScore
struct ABP_PlayerState_C_S_AddRepairScore_Params
{
	int                                                Score;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerState.BP_PlayerState_C.AddScore
struct ABP_PlayerState_C_AddScore_Params
{
	int                                                Score;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerState.BP_PlayerState_C.AddRepairScore
struct ABP_PlayerState_C_AddRepairScore_Params
{
	int                                                Score;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerState.BP_PlayerState_C.ReceiveEndPlay
struct ABP_PlayerState_C_ReceiveEndPlay_Params
{
	TEnumAsByte<EEndPlayReason>                        EndPlayReason;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerState.BP_PlayerState_C.ReceiveBeginPlay
struct ABP_PlayerState_C_ReceiveBeginPlay_Params
{
};

// Function BP_PlayerState.BP_PlayerState_C.SetSelectedSpawnPoint
struct ABP_PlayerState_C_SetSelectedSpawnPoint_Params
{
	class ABP_BoatSpawn_C*                             SpawnPointRef;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerState.BP_PlayerState_C.ExecuteUbergraph_BP_PlayerState
struct ABP_PlayerState_C_ExecuteUbergraph_BP_PlayerState_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerState.BP_PlayerState_C.OnPlayerRespawned__DelegateSignature
struct ABP_PlayerState_C_OnPlayerRespawned__DelegateSignature_Params
{
};

// Function BP_PlayerState.BP_PlayerState_C.OnPlayerDied__DelegateSignature
struct ABP_PlayerState_C_OnPlayerDied__DelegateSignature_Params
{
};

// Function BP_PlayerState.BP_PlayerState_C.OnPlayerChangedTeam__DelegateSignature
struct ABP_PlayerState_C_OnPlayerChangedTeam__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
