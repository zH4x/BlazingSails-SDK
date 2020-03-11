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

// Function BP_EndGameRocksNew.BP_EndGameRocksNew_C.OnRep_Rock3Rotation
struct ABP_EndGameRocksNew_C_OnRep_Rock3Rotation_Params
{
};

// Function BP_EndGameRocksNew.BP_EndGameRocksNew_C.OnRep_Rock1Rotation
struct ABP_EndGameRocksNew_C_OnRep_Rock1Rotation_Params
{
};

// Function BP_EndGameRocksNew.BP_EndGameRocksNew_C.OnRep_Rock2Rotation
struct ABP_EndGameRocksNew_C_OnRep_Rock2Rotation_Params
{
};

// Function BP_EndGameRocksNew.BP_EndGameRocksNew_C.CheckIfRockCanSpawn
struct ABP_EndGameRocksNew_C_CheckIfRockCanSpawn_Params
{
	struct FVector                                     Location;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               CanSpawn;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_EndGameRocksNew.BP_EndGameRocksNew_C.CheckIfAllRocksHaveRisen
struct ABP_EndGameRocksNew_C_CheckIfAllRocksHaveRisen_Params
{
};

// Function BP_EndGameRocksNew.BP_EndGameRocksNew_C.OnRep_RiseRock3
struct ABP_EndGameRocksNew_C_OnRep_RiseRock3_Params
{
};

// Function BP_EndGameRocksNew.BP_EndGameRocksNew_C.OnRep_RiseRock2
struct ABP_EndGameRocksNew_C_OnRep_RiseRock2_Params
{
};

// Function BP_EndGameRocksNew.BP_EndGameRocksNew_C.OnRep_RiseRocks
struct ABP_EndGameRocksNew_C_OnRep_RiseRocks_Params
{
};

// Function BP_EndGameRocksNew.BP_EndGameRocksNew_C.OnRep_Rock3Location
struct ABP_EndGameRocksNew_C_OnRep_Rock3Location_Params
{
};

// Function BP_EndGameRocksNew.BP_EndGameRocksNew_C.OnRep_Rock2Location
struct ABP_EndGameRocksNew_C_OnRep_Rock2Location_Params
{
};

// Function BP_EndGameRocksNew.BP_EndGameRocksNew_C.OnRep_Rock1Location
struct ABP_EndGameRocksNew_C_OnRep_Rock1Location_Params
{
};

// Function BP_EndGameRocksNew.BP_EndGameRocksNew_C.GetRandomPointInCircle
struct ABP_EndGameRocksNew_C_GetRandomPointInCircle_Params
{
	struct FVector                                     Location;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_EndGameRocksNew.BP_EndGameRocksNew_C.UserConstructionScript
struct ABP_EndGameRocksNew_C_UserConstructionScript_Params
{
};

// Function BP_EndGameRocksNew.BP_EndGameRocksNew_C.ReceiveBeginPlay
struct ABP_EndGameRocksNew_C_ReceiveBeginPlay_Params
{
};

// Function BP_EndGameRocksNew.BP_EndGameRocksNew_C.ReceiveTick
struct ABP_EndGameRocksNew_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_EndGameRocksNew.BP_EndGameRocksNew_C.ExecuteUbergraph_BP_EndGameRocksNew
struct ABP_EndGameRocksNew_C_ExecuteUbergraph_BP_EndGameRocksNew_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
