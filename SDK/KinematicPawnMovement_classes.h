#pragma once

// Name: BlazingSails, Version: 1.481.81

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass KinematicPawnMovement.KinematicPawnMovement_C
// 0x041C (0x050C - 0x00F0)
class UKinematicPawnMovement_C : public UActorComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x00F0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class APawn*                                       PawnRef;                                                  // 0x00F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class UCameraComponent*                            PawnCameraRef;                                            // 0x0100(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class USceneComponent*                             MovingBaseSceneComponentRef;                              // 0x0108(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AMovingBaseAttach_C*                         MovingBaseAttachRef;                                      // 0x0110(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class AWaterSettings_C*                            WaterSettingsRef;                                         // 0x0118(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class ABP_VehicleBase_C*                           VehicleRefLocal;                                          // 0x0120(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class ABP_VehicleBase_C*                           VehicleRefMulti;                                          // 0x0128(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class UCurveFloat*                                 JumpVelocityCurve;                                        // 0x0130(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               OwnMovementComponent;                                     // 0x0138(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               HeadBlocked;                                              // 0x0139(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               MoveBlocked;                                              // 0x013A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               BackwardBlocked;                                          // 0x013B(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CharacterHeightAboveGround;                               // 0x013C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FKey                                        ForwardKey;                                               // 0x0140(0x0018) (Edit, BlueprintVisible)
	struct FKey                                        BackwardKey;                                              // 0x0158(0x0018) (Edit, BlueprintVisible)
	bool                                               LeftBlocked;                                              // 0x0170(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               RightBlocked;                                             // 0x0171(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0172(0x0002) MISSED OFFSET
	float                                              Velocity;                                                 // 0x0174(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               InAir;                                                    // 0x0178(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               OnMovingBase;                                             // 0x0179(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Moving;                                                   // 0x017A(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               HitFloor;                                                 // 0x017B(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               CanGetNewBase;                                            // 0x017C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               CheckBase;                                                // 0x017D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               GoingForward;                                             // 0x017E(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               GoingBackward;                                            // 0x017F(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               GoingLeft;                                                // 0x0180(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               GoingRight;                                               // 0x0181(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Jumping;                                                  // 0x0182(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               InVehicle;                                                // 0x0183(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               CanJump;                                                  // 0x0184(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               SprintDisabled;                                           // 0x0185(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               TooSteep;                                                 // 0x0186(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               OnSlope;                                                  // 0x0187(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               MapModus;                                                 // 0x0188(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               BlockFalling;                                             // 0x0189(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               StartSmoothVehicleExitInterpolation;                      // 0x018A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x5];                                       // 0x018B(0x0005) MISSED OFFSET
	struct FHitResult                                  HitFloorResult;                                           // 0x0190(0x0088) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FVector2D                                   DeltaPrev;                                                // 0x0218(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FRotator                                    TargetRotation;                                           // 0x0220(0x000C) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FRotator                                    PreviousBaseRotation;                                     // 0x022C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FRotator                                    BaseRotationDifference;                                   // 0x0238(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FRotator                                    LastKnownRelativeRotationOffset;                          // 0x0244(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FRotator                                    NewMovingBaseOtherCLientRotation;                         // 0x0250(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     WorldLocation;                                            // 0x025C(0x000C) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     BackwardVector;                                           // 0x0268(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     ForwardVector;                                            // 0x0274(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     LeftVector;                                               // 0x0280(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     RightVector;                                              // 0x028C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     PreviousLocation;                                         // 0x0298(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     PreviousBaseLocation;                                     // 0x02A4(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     BaseLocationDifference;                                   // 0x02B0(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     ExtraRelativeLocation;                                    // 0x02BC(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     FinalReplicatedLocation;                                  // 0x02C8(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     MovingBaseReplicationLerpLocation;                        // 0x02D4(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     PreviousVelocityCalcLoc;                                  // 0x02E0(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     PreviousBaseVelocityCalcLoc;                              // 0x02EC(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     HitLocation;                                              // 0x02F8(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     NewMovingBaseOtherCLientsLocation;                        // 0x0304(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     SavedBaseLocation;                                        // 0x0310(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     JumpDirectionalForce;                                     // 0x031C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x8];                                       // 0x0328(0x0008) MISSED OFFSET
	struct FTransform                                  MovingBaseTransform;                                      // 0x0330(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FTransform                                  MovingBaseTransformMulti;                                 // 0x0360(0x0030) (Edit, BlueprintVisible, Net, DisableEditOnInstance, IsPlainOldData)
	float                                              ZInterpolationSpeed;                                      // 0x0390(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DeltaTime;                                                // 0x0394(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MovementControlMultiplier;                                // 0x0398(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FloorCheckTraceDepth;                                     // 0x039C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              BottomCollisionHeight;                                    // 0x03A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TopCollisionHeight;                                       // 0x03A4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MovementSpeedMultiplier;                                  // 0x03A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LocationInterpolationSpeed;                               // 0x03AC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LocationZInterpolationSpeed;                              // 0x03B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              BaseLocationZDifference;                                  // 0x03B4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SwimInterpolationSpeed;                                   // 0x03B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FloorZLocation;                                           // 0x03BC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              JumpTimeElapsed;                                          // 0x03C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              BackwardAcceleration;                                     // 0x03C4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ForwardAcceleration;                                      // 0x03C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LeftAcceleration;                                         // 0x03CC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RightAcceleration;                                        // 0x03D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x03D4(0x0004) MISSED OFFSET
	struct FKey                                        LeftKey;                                                  // 0x03D8(0x0018) (Edit, BlueprintVisible)
	struct FKey                                        RightKey;                                                 // 0x03F0(0x0018) (Edit, BlueprintVisible)
	struct FKey                                        JumpKey;                                                  // 0x0408(0x0018) (Edit, BlueprintVisible)
	struct FKey                                        SprintKey;                                                // 0x0420(0x0018) (Edit, BlueprintVisible)
	float                                              ForwardMoveSpeed;                                         // 0x0438(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              BackwardMoveSpeed;                                        // 0x043C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LeftMoveSpeed;                                            // 0x0440(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RightMoveSpeed;                                           // 0x0444(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              GravityMultiplier;                                        // 0x0448(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Gravity;                                                  // 0x044C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              JumpMultiplier;                                           // 0x0450(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              JumpDuration;                                             // 0x0454(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AccelerationMultiplier;                                   // 0x0458(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SprintMultiplier;                                         // 0x045C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              StepHeight;                                               // 0x0460(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               ForceAlwaysZeroPitchRoll;                                 // 0x0464(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               Sprinting;                                                // 0x0465(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Swimming;                                                 // 0x0466(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x1];                                       // 0x0467(0x0001) MISSED OFFSET
	struct FVector                                     VelocityVector;                                           // 0x0468(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EDrawDebugTrace>                       CollisionDebugMode;                                       // 0x0474(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x3];                                       // 0x0475(0x0003) MISSED OFFSET
	struct FVector                                     BaseVelocityVector;                                       // 0x0478(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AirControl;                                               // 0x0484(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETraceTypeQuery>                       TraceChannel;                                             // 0x0488(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData06[0x7];                                       // 0x0489(0x0007) MISSED OFFSET
	class AActor*                                      MovingBaseActor;                                          // 0x0490(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class UCameraShake*                                HeadBobShakeRef;                                          // 0x0498(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               MovementUpdateActive;                                     // 0x04A0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData07[0x3];                                       // 0x04A1(0x0003) MISSED OFFSET
	float                                              HeadbobScale;                                             // 0x04A4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               SprintBlocked;                                            // 0x04A8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData08[0x3];                                       // 0x04A9(0x0003) MISSED OFFSET
	struct FVector                                     ForwardBlockNormal;                                       // 0x04AC(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              PreviousForwardHeightCheck;                               // 0x04B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              PreviousBackwardHeightCheck;                              // 0x04BC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              PreviousLeftHeightCheck;                                  // 0x04C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              PreviousRightHeightCheck;                                 // 0x04C4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               CantStepUpOn;                                             // 0x04C8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData09[0x3];                                       // 0x04C9(0x0003) MISSED OFFSET
	struct FVector                                     PreviousForwardColCheckLoc;                               // 0x04CC(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              BottomTraceSlopeHeightExtra;                              // 0x04D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     Direction;                                                // 0x04DC(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     SlideVector;                                              // 0x04E8(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     RemainingMovingBaseVelocity;                              // 0x04F4(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     ShipPushWayVector;                                        // 0x0500(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass KinematicPawnMovement.KinematicPawnMovement_C");
		return ptr;
	}


	void PushCharAside(class AActor* Object);
	void GetDirectionVector(struct FVector* Direction);
	void CastDoubleCollisionSphere(const struct FVector& Start, const struct FVector& End, struct FHitResult* hit, bool* HitSomething);
	void CheckStepUpHeight(const struct FVector& HitLocation, float PreviousHeight, bool* TooHigh);
	void OnRep_MovingBaseSceneComponentRef();
	void CheckSlopeSteepness(const struct FVector& Normal, bool DrawDebug, bool* TooSteep, float* SlopeAngle);
	void GetSprintJumpDirectionalForceMaxLength(float* Max);
	void StopAirMovement();
	void StopAllMovement(bool ALsoStopAirMovement);
	void TeleportPlayer(const struct FVector& Location, class UPrimitiveComponent* NewBase);
	void LeaveVehicleState(const struct FRotator& ReturnRotation);
	void EnterVehicleState(const struct FVector& Location, const struct FRotator& Rotation, class ABP_VehicleBase_C* VehicleRef);
	void CheckGroundCollision(bool* WeHitSomething, struct FHitResult* HitResult);
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void S_TeleportPlayer(const struct FVector& Location);
	void MC_TeleportPlayer(const struct FVector& Location);
	void S_EnterVehicleState(const struct FVector& Location, bool OnMovingBase, const struct FRotator& Rotation, class ABP_VehicleBase_C* VehicleRef);
	void MC_EnterVehicleState(const struct FVector& Location, bool OnMovingBase, const struct FRotator& Rotation, class ABP_VehicleBase_C* VehicleRef);
	void S_SetSwimming(bool Swimming, bool InAir, const struct FVector& Location);
	void MC_WaterSplash(bool InAir, const struct FVector& Location);
	void WaterSplash(bool InAir, const struct FVector& Location);
	void S_SetSlowMode(bool SlowMode);
	void SetSlowMode(bool SlowMode);
	void MC_SetSlowMode(bool SlowMode);
	void SetSwimming(bool Swimming, bool InAir, const struct FVector& Location);
	void ResetCanJump();
	void BlockFall(float AmountOfTime);
	void StopSprinting();
	void OC_JumpLaunch();
	void S_JumpLaunch();
	void S_SetSprinting(bool Sprinting);
	void ForceLocationRefresh();
	void S_SetMoving(bool Moving);
	void S_UpdateRelativeLocationFromBase(int X, int Y, int Z, int Roll, int Pitch, int Yaw);
	void S_SetRotation(int Yaw);
	void S_SetLocation(int X, int Y, int Z);
	void SetInAir();
	void SetNotInAir();
	void SetNewBase(class UPrimitiveComponent* baseRef, class AActor* MovingBaseActor);
	void ForceDetachFromBase();
	void S_InAir(bool InAir);
	void MC_SetNoBase(const struct FVector& Location);
	void S_SetNoBase(const struct FVector& Location);
	void MC_SetBase(const struct FTransform& RelativeLocation, const struct FVector& WorldLocation);
	void S_SetBase(class USceneComponent* SceneComponent, const struct FTransform& RelativeLocation, const struct FVector& WorldLocation);
	void StopSwimming();
	void ExecuteUbergraph_KinematicPawnMovement(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
