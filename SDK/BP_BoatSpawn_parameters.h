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

// Function BP_BoatSpawn.BP_BoatSpawn_C.RemoveVote
struct ABP_BoatSpawn_C_RemoveVote_Params
{
	int                                                TeamID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BoatSpawn.BP_BoatSpawn_C.AddVote
struct ABP_BoatSpawn_C_AddVote_Params
{
	int                                                TeamID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BoatSpawn.BP_BoatSpawn_C.GetRandomClusterSpawnLocation
struct ABP_BoatSpawn_C_GetRandomClusterSpawnLocation_Params
{
	class ABP_BoatSpawn_C*                             BoatSpawnPoint;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BoatSpawn.BP_BoatSpawn_C.OnRep_Disabled
struct ABP_BoatSpawn_C_OnRep_Disabled_Params
{
};

// Function BP_BoatSpawn.BP_BoatSpawn_C.OnRep_Selected
struct ABP_BoatSpawn_C_OnRep_Selected_Params
{
};

// Function BP_BoatSpawn.BP_BoatSpawn_C.OnRep_TeamPlayerColors
struct ABP_BoatSpawn_C_OnRep_TeamPlayerColors_Params
{
};

// Function BP_BoatSpawn.BP_BoatSpawn_C.UpdateButton
struct ABP_BoatSpawn_C_UpdateButton_Params
{
};

// Function BP_BoatSpawn.BP_BoatSpawn_C.OnRep_TeamUsingThisSpawnPoint
struct ABP_BoatSpawn_C_OnRep_TeamUsingThisSpawnPoint_Params
{
};

// Function BP_BoatSpawn.BP_BoatSpawn_C.OnRep_InUse
struct ABP_BoatSpawn_C_OnRep_InUse_Params
{
};

// Function BP_BoatSpawn.BP_BoatSpawn_C.UserConstructionScript
struct ABP_BoatSpawn_C_UserConstructionScript_Params
{
};

// Function BP_BoatSpawn.BP_BoatSpawn_C.ReceiveBeginPlay
struct ABP_BoatSpawn_C_ReceiveBeginPlay_Params
{
};

// Function BP_BoatSpawn.BP_BoatSpawn_C.ReceiveTick
struct ABP_BoatSpawn_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BoatSpawn.BP_BoatSpawn_C.RemovePoint
struct ABP_BoatSpawn_C_RemovePoint_Params
{
};

// Function BP_BoatSpawn.BP_BoatSpawn_C.ExecuteUbergraph_BP_BoatSpawn
struct ABP_BoatSpawn_C_ExecuteUbergraph_BP_BoatSpawn_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
