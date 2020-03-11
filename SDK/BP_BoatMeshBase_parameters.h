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

// Function BP_BoatMeshBase.BP_BoatMeshBase_C.OnRep_SailColorBottom
struct ABP_BoatMeshBase_C_OnRep_SailColorBottom_Params
{
};

// Function BP_BoatMeshBase.BP_BoatMeshBase_C.OnRep_SailEmblemBottom
struct ABP_BoatMeshBase_C_OnRep_SailEmblemBottom_Params
{
};

// Function BP_BoatMeshBase.BP_BoatMeshBase_C.SpawnDestroyedContainer
struct ABP_BoatMeshBase_C_SpawnDestroyedContainer_Params
{
};

// Function BP_BoatMeshBase.BP_BoatMeshBase_C.OnRep_MarkerRef
struct ABP_BoatMeshBase_C_OnRep_MarkerRef_Params
{
};

// Function BP_BoatMeshBase.BP_BoatMeshBase_C.OnRep_LampColor
struct ABP_BoatMeshBase_C_OnRep_LampColor_Params
{
};

// Function BP_BoatMeshBase.BP_BoatMeshBase_C.OnRep_SteeringWheelLevel
struct ABP_BoatMeshBase_C_OnRep_SteeringWheelLevel_Params
{
};

// Function BP_BoatMeshBase.BP_BoatMeshBase_C.UpgradeSteeringWheel
struct ABP_BoatMeshBase_C_UpgradeSteeringWheel_Params
{
	bool                                               Upgraded;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BoatMeshBase.BP_BoatMeshBase_C.LoadFlagEmblem
struct ABP_BoatMeshBase_C_LoadFlagEmblem_Params
{
	bool                                               SuccesfullyLoaded;                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BoatMeshBase.BP_BoatMeshBase_C.OnRep_FlagEmblem
struct ABP_BoatMeshBase_C_OnRep_FlagEmblem_Params
{
};

// Function BP_BoatMeshBase.BP_BoatMeshBase_C.LoadRopeColor
struct ABP_BoatMeshBase_C_LoadRopeColor_Params
{
	bool                                               SuccesfullyLoaded;                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BoatMeshBase.BP_BoatMeshBase_C.OnRep_RopeColor
struct ABP_BoatMeshBase_C_OnRep_RopeColor_Params
{
};

// Function BP_BoatMeshBase.BP_BoatMeshBase_C.LoadFlagColor
struct ABP_BoatMeshBase_C_LoadFlagColor_Params
{
	bool                                               SuccesfullyLoaded;                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BoatMeshBase.BP_BoatMeshBase_C.OnRep_FlagColor
struct ABP_BoatMeshBase_C_OnRep_FlagColor_Params
{
};

// Function BP_BoatMeshBase.BP_BoatMeshBase_C.OnRep_BowFigureHead
struct ABP_BoatMeshBase_C_OnRep_BowFigureHead_Params
{
};

// Function BP_BoatMeshBase.BP_BoatMeshBase_C.LoadSailEmblem
struct ABP_BoatMeshBase_C_LoadSailEmblem_Params
{
	bool                                               SuccesfullyLoaded;                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BoatMeshBase.BP_BoatMeshBase_C.OnRep_SailEmblem
struct ABP_BoatMeshBase_C_OnRep_SailEmblem_Params
{
};

// Function BP_BoatMeshBase.BP_BoatMeshBase_C.LoadSailColor
struct ABP_BoatMeshBase_C_LoadSailColor_Params
{
	bool                                               SuccesfullyLoaded;                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BoatMeshBase.BP_BoatMeshBase_C.OnRep_SailColor
struct ABP_BoatMeshBase_C_OnRep_SailColor_Params
{
};

// Function BP_BoatMeshBase.BP_BoatMeshBase_C.OnRep_HullColor
struct ABP_BoatMeshBase_C_OnRep_HullColor_Params
{
};

// Function BP_BoatMeshBase.BP_BoatMeshBase_C.OnRep_Destroyed
struct ABP_BoatMeshBase_C_OnRep_Destroyed_Params
{
};

// Function BP_BoatMeshBase.BP_BoatMeshBase_C.OnRep_Colliding
struct ABP_BoatMeshBase_C_OnRep_Colliding_Params
{
};

// Function BP_BoatMeshBase.BP_BoatMeshBase_C.CheckForAutoStop
struct ABP_BoatMeshBase_C_CheckForAutoStop_Params
{
};

// Function BP_BoatMeshBase.BP_BoatMeshBase_C.OnRep_Going forward
struct ABP_BoatMeshBase_C_OnRep_Going_forward_Params
{
};

// Function BP_BoatMeshBase.BP_BoatMeshBase_C.CheckIfPointIsBelowWaterLevel
struct ABP_BoatMeshBase_C_CheckIfPointIsBelowWaterLevel_Params
{
	struct FVector                                     PointLocation;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<E_WaterHull>                           WaterDamage;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsBelowWaterLevel;                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BoatMeshBase.BP_BoatMeshBase_C.ChangeWaterLevel
struct ABP_BoatMeshBase_C_ChangeWaterLevel_Params
{
	int                                                Amount;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BoatMeshBase.BP_BoatMeshBase_C.CreateRandomDamage
struct ABP_BoatMeshBase_C_CreateRandomDamage_Params
{
	int                                                DamageAmount;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<int>                                        DamageAmounts;                                            // (Parm, OutParm, ZeroConstructor)
	TArray<struct FVector>                             DamageLocations;                                          // (Parm, OutParm, ZeroConstructor)
};

// Function BP_BoatMeshBase.BP_BoatMeshBase_C.OnRep_TeamID
struct ABP_BoatMeshBase_C_OnRep_TeamID_Params
{
};

// Function BP_BoatMeshBase.BP_BoatMeshBase_C.RestoreDamage
struct ABP_BoatMeshBase_C_RestoreDamage_Params
{
	int                                                RestoreAmount;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BoatMeshBase.BP_BoatMeshBase_C.AddDamage
struct ABP_BoatMeshBase_C_AddDamage_Params
{
	int                                                DamageAmount;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<E_DamageType>                          DamageType;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     RelativeLocation;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               NoSound;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BoatMeshBase.BP_BoatMeshBase_C.SetPointVisibility
struct ABP_BoatMeshBase_C_SetPointVisibility_Params
{
};

// Function BP_BoatMeshBase.BP_BoatMeshBase_C.MovePoints
struct ABP_BoatMeshBase_C_MovePoints_Params
{
	struct FVector                                     Vector;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        Point;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BP_BoatMeshBase.BP_BoatMeshBase_C.CollectPointLocations
struct ABP_BoatMeshBase_C_CollectPointLocations_Params
{
	TArray<struct FVector>                             BuoyancyPoints;                                           // (Parm, OutParm, ZeroConstructor)
	TArray<struct FVector>                             OriginalLocations;                                        // (Parm, OutParm, ZeroConstructor)
};

// Function BP_BoatMeshBase.BP_BoatMeshBase_C.UserConstructionScript
struct ABP_BoatMeshBase_C_UserConstructionScript_Params
{
};

// Function BP_BoatMeshBase.BP_BoatMeshBase_C.ReceiveBeginPlay
struct ABP_BoatMeshBase_C_ReceiveBeginPlay_Params
{
};

// Function BP_BoatMeshBase.BP_BoatMeshBase_C.ReceiveTick
struct ABP_BoatMeshBase_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BoatMeshBase.BP_BoatMeshBase_C.MC_Location
struct ABP_BoatMeshBase_C_MC_Location_Params
{
	int                                                XLocation;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                YLocation;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ZLocation;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BoatMeshBase.BP_BoatMeshBase_C.ReplicateLocation
struct ABP_BoatMeshBase_C_ReplicateLocation_Params
{
	struct FVector                                     Location;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BoatMeshBase.BP_BoatMeshBase_C.ReplicateRotation
struct ABP_BoatMeshBase_C_ReplicateRotation_Params
{
	struct FRotator                                    Yaw;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BoatMeshBase.BP_BoatMeshBase_C.MC_Rotation
struct ABP_BoatMeshBase_C_MC_Rotation_Params
{
	struct FRotator                                    Yaw;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BoatMeshBase.BP_BoatMeshBase_C.SetTeamID
struct ABP_BoatMeshBase_C_SetTeamID_Params
{
	int                                                TeamID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BoatMeshBase.BP_BoatMeshBase_C.MC_FrontalHit
struct ABP_BoatMeshBase_C_MC_FrontalHit_Params
{
	float                                              ImpactStrength;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BoatMeshBase.BP_BoatMeshBase_C.MC_AnchorStopSplash
struct ABP_BoatMeshBase_C_MC_AnchorStopSplash_Params
{
};

// Function BP_BoatMeshBase.BP_BoatMeshBase_C.MC_SetStartTransform
struct ABP_BoatMeshBase_C_MC_SetStartTransform_Params
{
	struct FTransform                                  Transform;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function BP_BoatMeshBase.BP_BoatMeshBase_C.ExecuteUbergraph_BP_BoatMeshBase
struct ABP_BoatMeshBase_C_ExecuteUbergraph_BP_BoatMeshBase_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
