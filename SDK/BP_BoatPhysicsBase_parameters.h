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

// Function BP_BoatPhysicsBase.BP_BoatPhysicsBase_C.GetSpeed
struct ABP_BoatPhysicsBase_C_GetSpeed_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_BoatPhysicsBase.BP_BoatPhysicsBase_C.GetCollisionMultiplier
struct ABP_BoatPhysicsBase_C_GetCollisionMultiplier_Params
{
	float                                              Multiplier;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BoatPhysicsBase.BP_BoatPhysicsBase_C.CalculateMastSpeeds
struct ABP_BoatPhysicsBase_C_CalculateMastSpeeds_Params
{
	float                                              Sum;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              TotalAmountOfSail;                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BoatPhysicsBase.BP_BoatPhysicsBase_C.LoadBuoyancyPoints
struct ABP_BoatPhysicsBase_C_LoadBuoyancyPoints_Params
{
	TArray<struct FVector>                             BuoyancyPoints;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FVector>                             OriginalLocations;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function BP_BoatPhysicsBase.BP_BoatPhysicsBase_C.UserConstructionScript
struct ABP_BoatPhysicsBase_C_UserConstructionScript_Params
{
};

// Function BP_BoatPhysicsBase.BP_BoatPhysicsBase_C.ReceiveBeginPlay
struct ABP_BoatPhysicsBase_C_ReceiveBeginPlay_Params
{
};

// Function BP_BoatPhysicsBase.BP_BoatPhysicsBase_C.ReceiveActorBeginOverlap
struct ABP_BoatPhysicsBase_C_ReceiveActorBeginOverlap_Params
{
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BoatPhysicsBase.BP_BoatPhysicsBase_C.ReceiveTick
struct ABP_BoatPhysicsBase_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BoatPhysicsBase.BP_BoatPhysicsBase_C.ChangeSpeed
struct ABP_BoatPhysicsBase_C_ChangeSpeed_Params
{
};

// Function BP_BoatPhysicsBase.BP_BoatPhysicsBase_C.ReceiveActorEndOverlap
struct ABP_BoatPhysicsBase_C_ReceiveActorEndOverlap_Params
{
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BoatPhysicsBase.BP_BoatPhysicsBase_C.AutoStopShip
struct ABP_BoatPhysicsBase_C_AutoStopShip_Params
{
};

// Function BP_BoatPhysicsBase.BP_BoatPhysicsBase_C.ReceiveHit
struct ABP_BoatPhysicsBase_C_ReceiveHit_Params
{
	class UPrimitiveComponent*                         MyComp;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      Other;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               bSelfMoved;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     HitLocation;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     HitNormal;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     NormalImpulse;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  hit;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function BP_BoatPhysicsBase.BP_BoatPhysicsBase_C.ExecuteUbergraph_BP_BoatPhysicsBase
struct ABP_BoatPhysicsBase_C_ExecuteUbergraph_BP_BoatPhysicsBase_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
