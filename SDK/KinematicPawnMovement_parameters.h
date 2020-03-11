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

// Function KinematicPawnMovement.KinematicPawnMovement_C.PushCharAside
struct UKinematicPawnMovement_C_PushCharAside_Params
{
	class AActor*                                      Object;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function KinematicPawnMovement.KinematicPawnMovement_C.GetDirectionVector
struct UKinematicPawnMovement_C_GetDirectionVector_Params
{
	struct FVector                                     Direction;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function KinematicPawnMovement.KinematicPawnMovement_C.CastDoubleCollisionSphere
struct UKinematicPawnMovement_C_CastDoubleCollisionSphere_Params
{
	struct FVector                                     Start;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     End;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  hit;                                                      // (Parm, OutParm, IsPlainOldData)
	bool                                               HitSomething;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function KinematicPawnMovement.KinematicPawnMovement_C.CheckStepUpHeight
struct UKinematicPawnMovement_C_CheckStepUpHeight_Params
{
	struct FVector                                     HitLocation;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              PreviousHeight;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               TooHigh;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function KinematicPawnMovement.KinematicPawnMovement_C.OnRep_MovingBaseSceneComponentRef
struct UKinematicPawnMovement_C_OnRep_MovingBaseSceneComponentRef_Params
{
};

// Function KinematicPawnMovement.KinematicPawnMovement_C.CheckSlopeSteepness
struct UKinematicPawnMovement_C_CheckSlopeSteepness_Params
{
	struct FVector                                     Normal;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               DrawDebug;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               TooSteep;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              SlopeAngle;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function KinematicPawnMovement.KinematicPawnMovement_C.GetSprintJumpDirectionalForceMaxLength
struct UKinematicPawnMovement_C_GetSprintJumpDirectionalForceMaxLength_Params
{
	float                                              Max;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function KinematicPawnMovement.KinematicPawnMovement_C.StopAirMovement
struct UKinematicPawnMovement_C_StopAirMovement_Params
{
};

// Function KinematicPawnMovement.KinematicPawnMovement_C.StopAllMovement
struct UKinematicPawnMovement_C_StopAllMovement_Params
{
	bool                                               ALsoStopAirMovement;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function KinematicPawnMovement.KinematicPawnMovement_C.TeleportPlayer
struct UKinematicPawnMovement_C_TeleportPlayer_Params
{
	struct FVector                                     Location;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         NewBase;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function KinematicPawnMovement.KinematicPawnMovement_C.LeaveVehicleState
struct UKinematicPawnMovement_C_LeaveVehicleState_Params
{
	struct FRotator                                    ReturnRotation;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function KinematicPawnMovement.KinematicPawnMovement_C.EnterVehicleState
struct UKinematicPawnMovement_C_EnterVehicleState_Params
{
	struct FVector                                     Location;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    Rotation;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class ABP_VehicleBase_C*                           VehicleRef;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function KinematicPawnMovement.KinematicPawnMovement_C.CheckGroundCollision
struct UKinematicPawnMovement_C_CheckGroundCollision_Params
{
	bool                                               WeHitSomething;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  HitResult;                                                // (Parm, OutParm, IsPlainOldData)
};

// Function KinematicPawnMovement.KinematicPawnMovement_C.ReceiveBeginPlay
struct UKinematicPawnMovement_C_ReceiveBeginPlay_Params
{
};

// Function KinematicPawnMovement.KinematicPawnMovement_C.ReceiveTick
struct UKinematicPawnMovement_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function KinematicPawnMovement.KinematicPawnMovement_C.S_TeleportPlayer
struct UKinematicPawnMovement_C_S_TeleportPlayer_Params
{
	struct FVector                                     Location;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function KinematicPawnMovement.KinematicPawnMovement_C.MC_TeleportPlayer
struct UKinematicPawnMovement_C_MC_TeleportPlayer_Params
{
	struct FVector                                     Location;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function KinematicPawnMovement.KinematicPawnMovement_C.S_EnterVehicleState
struct UKinematicPawnMovement_C_S_EnterVehicleState_Params
{
	struct FVector                                     Location;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               OnMovingBase;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    Rotation;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class ABP_VehicleBase_C*                           VehicleRef;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function KinematicPawnMovement.KinematicPawnMovement_C.MC_EnterVehicleState
struct UKinematicPawnMovement_C_MC_EnterVehicleState_Params
{
	struct FVector                                     Location;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               OnMovingBase;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    Rotation;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class ABP_VehicleBase_C*                           VehicleRef;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function KinematicPawnMovement.KinematicPawnMovement_C.S_SetSwimming
struct UKinematicPawnMovement_C_S_SetSwimming_Params
{
	bool                                               Swimming;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               InAir;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Location;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function KinematicPawnMovement.KinematicPawnMovement_C.MC_WaterSplash
struct UKinematicPawnMovement_C_MC_WaterSplash_Params
{
	bool                                               InAir;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Location;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function KinematicPawnMovement.KinematicPawnMovement_C.WaterSplash
struct UKinematicPawnMovement_C_WaterSplash_Params
{
	bool                                               InAir;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Location;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function KinematicPawnMovement.KinematicPawnMovement_C.S_SetSlowMode
struct UKinematicPawnMovement_C_S_SetSlowMode_Params
{
	bool                                               SlowMode;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function KinematicPawnMovement.KinematicPawnMovement_C.SetSlowMode
struct UKinematicPawnMovement_C_SetSlowMode_Params
{
	bool                                               SlowMode;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function KinematicPawnMovement.KinematicPawnMovement_C.MC_SetSlowMode
struct UKinematicPawnMovement_C_MC_SetSlowMode_Params
{
	bool                                               SlowMode;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function KinematicPawnMovement.KinematicPawnMovement_C.SetSwimming
struct UKinematicPawnMovement_C_SetSwimming_Params
{
	bool                                               Swimming;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               InAir;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Location;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function KinematicPawnMovement.KinematicPawnMovement_C.ResetCanJump
struct UKinematicPawnMovement_C_ResetCanJump_Params
{
};

// Function KinematicPawnMovement.KinematicPawnMovement_C.BlockFall
struct UKinematicPawnMovement_C_BlockFall_Params
{
	float                                              AmountOfTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function KinematicPawnMovement.KinematicPawnMovement_C.StopSprinting
struct UKinematicPawnMovement_C_StopSprinting_Params
{
};

// Function KinematicPawnMovement.KinematicPawnMovement_C.OC_JumpLaunch
struct UKinematicPawnMovement_C_OC_JumpLaunch_Params
{
};

// Function KinematicPawnMovement.KinematicPawnMovement_C.S_JumpLaunch
struct UKinematicPawnMovement_C_S_JumpLaunch_Params
{
};

// Function KinematicPawnMovement.KinematicPawnMovement_C.S_SetSprinting
struct UKinematicPawnMovement_C_S_SetSprinting_Params
{
	bool                                               Sprinting;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function KinematicPawnMovement.KinematicPawnMovement_C.ForceLocationRefresh
struct UKinematicPawnMovement_C_ForceLocationRefresh_Params
{
};

// Function KinematicPawnMovement.KinematicPawnMovement_C.S_SetMoving
struct UKinematicPawnMovement_C_S_SetMoving_Params
{
	bool                                               Moving;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function KinematicPawnMovement.KinematicPawnMovement_C.S_UpdateRelativeLocationFromBase
struct UKinematicPawnMovement_C_S_UpdateRelativeLocationFromBase_Params
{
	int                                                X;                                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Y;                                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Z;                                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Roll;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Pitch;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Yaw;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function KinematicPawnMovement.KinematicPawnMovement_C.S_SetRotation
struct UKinematicPawnMovement_C_S_SetRotation_Params
{
	int                                                Yaw;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function KinematicPawnMovement.KinematicPawnMovement_C.S_SetLocation
struct UKinematicPawnMovement_C_S_SetLocation_Params
{
	int                                                X;                                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Y;                                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Z;                                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function KinematicPawnMovement.KinematicPawnMovement_C.SetInAir
struct UKinematicPawnMovement_C_SetInAir_Params
{
};

// Function KinematicPawnMovement.KinematicPawnMovement_C.SetNotInAir
struct UKinematicPawnMovement_C_SetNotInAir_Params
{
};

// Function KinematicPawnMovement.KinematicPawnMovement_C.SetNewBase
struct UKinematicPawnMovement_C_SetNewBase_Params
{
	class UPrimitiveComponent*                         baseRef;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      MovingBaseActor;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function KinematicPawnMovement.KinematicPawnMovement_C.ForceDetachFromBase
struct UKinematicPawnMovement_C_ForceDetachFromBase_Params
{
};

// Function KinematicPawnMovement.KinematicPawnMovement_C.S_InAir
struct UKinematicPawnMovement_C_S_InAir_Params
{
	bool                                               InAir;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function KinematicPawnMovement.KinematicPawnMovement_C.MC_SetNoBase
struct UKinematicPawnMovement_C_MC_SetNoBase_Params
{
	struct FVector                                     Location;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function KinematicPawnMovement.KinematicPawnMovement_C.S_SetNoBase
struct UKinematicPawnMovement_C_S_SetNoBase_Params
{
	struct FVector                                     Location;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function KinematicPawnMovement.KinematicPawnMovement_C.MC_SetBase
struct UKinematicPawnMovement_C_MC_SetBase_Params
{
	struct FTransform                                  RelativeLocation;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FVector                                     WorldLocation;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function KinematicPawnMovement.KinematicPawnMovement_C.S_SetBase
struct UKinematicPawnMovement_C_S_SetBase_Params
{
	class USceneComponent*                             SceneComponent;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FTransform                                  RelativeLocation;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FVector                                     WorldLocation;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function KinematicPawnMovement.KinematicPawnMovement_C.StopSwimming
struct UKinematicPawnMovement_C_StopSwimming_Params
{
};

// Function KinematicPawnMovement.KinematicPawnMovement_C.ExecuteUbergraph_KinematicPawnMovement
struct UKinematicPawnMovement_C_ExecuteUbergraph_KinematicPawnMovement_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
