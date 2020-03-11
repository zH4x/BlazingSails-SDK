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

// Function BP_Deathzone.BP_Deathzone_C.SetZoneMusic
struct ABP_Deathzone_C_SetZoneMusic_Params
{
	class USoundBase*                                  Song;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Deathzone.BP_Deathzone_C.ClosestPointToDeathzoneEdge
struct ABP_Deathzone_C_ClosestPointToDeathzoneEdge_Params
{
	struct FVector                                     Closest_Location_To_Circle;                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               Outside_of_Zone_;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               IsCloseToDeadzone;                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Deathzone.BP_Deathzone_C.OnRep_CurrentPhase
struct ABP_Deathzone_C_OnRep_CurrentPhase_Params
{
};

// Function BP_Deathzone.BP_Deathzone_C.GenerateNextRandomCircle
struct ABP_Deathzone_C_GenerateNextRandomCircle_Params
{
	struct FVector                                     NextCircleLocation;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               CorrectNextCircleLocation;                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Deathzone.BP_Deathzone_C.CheckIfCrateIsSpawnedInWater
struct ABP_Deathzone_C_CheckIfCrateIsSpawnedInWater_Params
{
	struct FVector                                     CrateSpawnLocation;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               InWater;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Location;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Deathzone.BP_Deathzone_C.GenerateRandomPointInCircle
struct ABP_Deathzone_C_GenerateRandomPointInCircle_Params
{
	struct FVector                                     RandomPoint;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Deathzone.BP_Deathzone_C.DeadzonePercent
struct ABP_Deathzone_C_DeadzonePercent_Params
{
	struct FVector                                     Position;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              inZoneFloat;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Deathzone.BP_Deathzone_C.UserConstructionScript
struct ABP_Deathzone_C_UserConstructionScript_Params
{
};

// Function BP_Deathzone.BP_Deathzone_C.ReceiveTick
struct ABP_Deathzone_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Deathzone.BP_Deathzone_C.CloseGate
struct ABP_Deathzone_C_CloseGate_Params
{
};

// Function BP_Deathzone.BP_Deathzone_C.MC_SetDeadZone
struct ABP_Deathzone_C_MC_SetDeadZone_Params
{
	int                                                DeadzoneX;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                DeadZoneY;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                DeadZoneScale;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Countdown;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Collapsing;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               FinalZone;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                InnerDeadZoneX;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                InnerDeadZoneY;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                InnerDeadZoneRadius;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Falloff;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Deathzone.BP_Deathzone_C.ReceiveBeginPlay
struct ABP_Deathzone_C_ReceiveBeginPlay_Params
{
};

// Function BP_Deathzone.BP_Deathzone_C.ReInitZone
struct ABP_Deathzone_C_ReInitZone_Params
{
};

// Function BP_Deathzone.BP_Deathzone_C.ExecuteUbergraph_BP_Deathzone
struct ABP_Deathzone_C_ExecuteUbergraph_BP_Deathzone_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
