
#include "../SDK.h"

// Name: BlazingSails, Version: 1.481.81

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function KinematicPawnMovement.KinematicPawnMovement_C.PushCharAside
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Object                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UKinematicPawnMovement_C::PushCharAside(class AActor* Object)
{
	static auto fn = UObject::FindObject<UFunction>("Function KinematicPawnMovement.KinematicPawnMovement_C.PushCharAside");

	UKinematicPawnMovement_C_PushCharAside_Params params;
	params.Object = Object;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KinematicPawnMovement.KinematicPawnMovement_C.GetDirectionVector
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                 Direction                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UKinematicPawnMovement_C::GetDirectionVector(struct FVector* Direction)
{
	static auto fn = UObject::FindObject<UFunction>("Function KinematicPawnMovement.KinematicPawnMovement_C.GetDirectionVector");

	UKinematicPawnMovement_C_GetDirectionVector_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Direction != nullptr)
		*Direction = params.Direction;
}


// Function KinematicPawnMovement.KinematicPawnMovement_C.CastDoubleCollisionSphere
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 Start                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 End                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              hit                            (Parm, OutParm, IsPlainOldData)
// bool                           HitSomething                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UKinematicPawnMovement_C::CastDoubleCollisionSphere(const struct FVector& Start, const struct FVector& End, struct FHitResult* hit, bool* HitSomething)
{
	static auto fn = UObject::FindObject<UFunction>("Function KinematicPawnMovement.KinematicPawnMovement_C.CastDoubleCollisionSphere");

	UKinematicPawnMovement_C_CastDoubleCollisionSphere_Params params;
	params.Start = Start;
	params.End = End;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (hit != nullptr)
		*hit = params.hit;
	if (HitSomething != nullptr)
		*HitSomething = params.HitSomething;
}


// Function KinematicPawnMovement.KinematicPawnMovement_C.CheckStepUpHeight
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 HitLocation                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          PreviousHeight                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           TooHigh                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UKinematicPawnMovement_C::CheckStepUpHeight(const struct FVector& HitLocation, float PreviousHeight, bool* TooHigh)
{
	static auto fn = UObject::FindObject<UFunction>("Function KinematicPawnMovement.KinematicPawnMovement_C.CheckStepUpHeight");

	UKinematicPawnMovement_C_CheckStepUpHeight_Params params;
	params.HitLocation = HitLocation;
	params.PreviousHeight = PreviousHeight;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (TooHigh != nullptr)
		*TooHigh = params.TooHigh;
}


// Function KinematicPawnMovement.KinematicPawnMovement_C.OnRep_MovingBaseSceneComponentRef
// (BlueprintCallable, BlueprintEvent)

void UKinematicPawnMovement_C::OnRep_MovingBaseSceneComponentRef()
{
	static auto fn = UObject::FindObject<UFunction>("Function KinematicPawnMovement.KinematicPawnMovement_C.OnRep_MovingBaseSceneComponentRef");

	UKinematicPawnMovement_C_OnRep_MovingBaseSceneComponentRef_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KinematicPawnMovement.KinematicPawnMovement_C.CheckSlopeSteepness
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 Normal                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           DrawDebug                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           TooSteep                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          SlopeAngle                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UKinematicPawnMovement_C::CheckSlopeSteepness(const struct FVector& Normal, bool DrawDebug, bool* TooSteep, float* SlopeAngle)
{
	static auto fn = UObject::FindObject<UFunction>("Function KinematicPawnMovement.KinematicPawnMovement_C.CheckSlopeSteepness");

	UKinematicPawnMovement_C_CheckSlopeSteepness_Params params;
	params.Normal = Normal;
	params.DrawDebug = DrawDebug;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (TooSteep != nullptr)
		*TooSteep = params.TooSteep;
	if (SlopeAngle != nullptr)
		*SlopeAngle = params.SlopeAngle;
}


// Function KinematicPawnMovement.KinematicPawnMovement_C.GetSprintJumpDirectionalForceMaxLength
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          Max                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UKinematicPawnMovement_C::GetSprintJumpDirectionalForceMaxLength(float* Max)
{
	static auto fn = UObject::FindObject<UFunction>("Function KinematicPawnMovement.KinematicPawnMovement_C.GetSprintJumpDirectionalForceMaxLength");

	UKinematicPawnMovement_C_GetSprintJumpDirectionalForceMaxLength_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Max != nullptr)
		*Max = params.Max;
}


// Function KinematicPawnMovement.KinematicPawnMovement_C.StopAirMovement
// (Public, BlueprintCallable, BlueprintEvent)

void UKinematicPawnMovement_C::StopAirMovement()
{
	static auto fn = UObject::FindObject<UFunction>("Function KinematicPawnMovement.KinematicPawnMovement_C.StopAirMovement");

	UKinematicPawnMovement_C_StopAirMovement_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KinematicPawnMovement.KinematicPawnMovement_C.StopAllMovement
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ALsoStopAirMovement            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UKinematicPawnMovement_C::StopAllMovement(bool ALsoStopAirMovement)
{
	static auto fn = UObject::FindObject<UFunction>("Function KinematicPawnMovement.KinematicPawnMovement_C.StopAllMovement");

	UKinematicPawnMovement_C_StopAllMovement_Params params;
	params.ALsoStopAirMovement = ALsoStopAirMovement;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KinematicPawnMovement.KinematicPawnMovement_C.TeleportPlayer
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 Location                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     NewBase                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UKinematicPawnMovement_C::TeleportPlayer(const struct FVector& Location, class UPrimitiveComponent* NewBase)
{
	static auto fn = UObject::FindObject<UFunction>("Function KinematicPawnMovement.KinematicPawnMovement_C.TeleportPlayer");

	UKinematicPawnMovement_C_TeleportPlayer_Params params;
	params.Location = Location;
	params.NewBase = NewBase;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KinematicPawnMovement.KinematicPawnMovement_C.LeaveVehicleState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FRotator                ReturnRotation                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UKinematicPawnMovement_C::LeaveVehicleState(const struct FRotator& ReturnRotation)
{
	static auto fn = UObject::FindObject<UFunction>("Function KinematicPawnMovement.KinematicPawnMovement_C.LeaveVehicleState");

	UKinematicPawnMovement_C_LeaveVehicleState_Params params;
	params.ReturnRotation = ReturnRotation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KinematicPawnMovement.KinematicPawnMovement_C.EnterVehicleState
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 Location                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FRotator                Rotation                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class ABP_VehicleBase_C*       VehicleRef                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UKinematicPawnMovement_C::EnterVehicleState(const struct FVector& Location, const struct FRotator& Rotation, class ABP_VehicleBase_C* VehicleRef)
{
	static auto fn = UObject::FindObject<UFunction>("Function KinematicPawnMovement.KinematicPawnMovement_C.EnterVehicleState");

	UKinematicPawnMovement_C_EnterVehicleState_Params params;
	params.Location = Location;
	params.Rotation = Rotation;
	params.VehicleRef = VehicleRef;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KinematicPawnMovement.KinematicPawnMovement_C.CheckGroundCollision
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           WeHitSomething                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              HitResult                      (Parm, OutParm, IsPlainOldData)

void UKinematicPawnMovement_C::CheckGroundCollision(bool* WeHitSomething, struct FHitResult* HitResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function KinematicPawnMovement.KinematicPawnMovement_C.CheckGroundCollision");

	UKinematicPawnMovement_C_CheckGroundCollision_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (WeHitSomething != nullptr)
		*WeHitSomething = params.WeHitSomething;
	if (HitResult != nullptr)
		*HitResult = params.HitResult;
}


// Function KinematicPawnMovement.KinematicPawnMovement_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void UKinematicPawnMovement_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function KinematicPawnMovement.KinematicPawnMovement_C.ReceiveBeginPlay");

	UKinematicPawnMovement_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KinematicPawnMovement.KinematicPawnMovement_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UKinematicPawnMovement_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function KinematicPawnMovement.KinematicPawnMovement_C.ReceiveTick");

	UKinematicPawnMovement_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KinematicPawnMovement.KinematicPawnMovement_C.S_TeleportPlayer
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 Location                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UKinematicPawnMovement_C::S_TeleportPlayer(const struct FVector& Location)
{
	static auto fn = UObject::FindObject<UFunction>("Function KinematicPawnMovement.KinematicPawnMovement_C.S_TeleportPlayer");

	UKinematicPawnMovement_C_S_TeleportPlayer_Params params;
	params.Location = Location;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KinematicPawnMovement.KinematicPawnMovement_C.MC_TeleportPlayer
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 Location                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UKinematicPawnMovement_C::MC_TeleportPlayer(const struct FVector& Location)
{
	static auto fn = UObject::FindObject<UFunction>("Function KinematicPawnMovement.KinematicPawnMovement_C.MC_TeleportPlayer");

	UKinematicPawnMovement_C_MC_TeleportPlayer_Params params;
	params.Location = Location;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KinematicPawnMovement.KinematicPawnMovement_C.S_EnterVehicleState
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 Location                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           OnMovingBase                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FRotator                Rotation                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class ABP_VehicleBase_C*       VehicleRef                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UKinematicPawnMovement_C::S_EnterVehicleState(const struct FVector& Location, bool OnMovingBase, const struct FRotator& Rotation, class ABP_VehicleBase_C* VehicleRef)
{
	static auto fn = UObject::FindObject<UFunction>("Function KinematicPawnMovement.KinematicPawnMovement_C.S_EnterVehicleState");

	UKinematicPawnMovement_C_S_EnterVehicleState_Params params;
	params.Location = Location;
	params.OnMovingBase = OnMovingBase;
	params.Rotation = Rotation;
	params.VehicleRef = VehicleRef;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KinematicPawnMovement.KinematicPawnMovement_C.MC_EnterVehicleState
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 Location                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           OnMovingBase                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FRotator                Rotation                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class ABP_VehicleBase_C*       VehicleRef                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UKinematicPawnMovement_C::MC_EnterVehicleState(const struct FVector& Location, bool OnMovingBase, const struct FRotator& Rotation, class ABP_VehicleBase_C* VehicleRef)
{
	static auto fn = UObject::FindObject<UFunction>("Function KinematicPawnMovement.KinematicPawnMovement_C.MC_EnterVehicleState");

	UKinematicPawnMovement_C_MC_EnterVehicleState_Params params;
	params.Location = Location;
	params.OnMovingBase = OnMovingBase;
	params.Rotation = Rotation;
	params.VehicleRef = VehicleRef;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KinematicPawnMovement.KinematicPawnMovement_C.S_SetSwimming
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Swimming                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           InAir                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Location                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UKinematicPawnMovement_C::S_SetSwimming(bool Swimming, bool InAir, const struct FVector& Location)
{
	static auto fn = UObject::FindObject<UFunction>("Function KinematicPawnMovement.KinematicPawnMovement_C.S_SetSwimming");

	UKinematicPawnMovement_C_S_SetSwimming_Params params;
	params.Swimming = Swimming;
	params.InAir = InAir;
	params.Location = Location;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KinematicPawnMovement.KinematicPawnMovement_C.MC_WaterSplash
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           InAir                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Location                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UKinematicPawnMovement_C::MC_WaterSplash(bool InAir, const struct FVector& Location)
{
	static auto fn = UObject::FindObject<UFunction>("Function KinematicPawnMovement.KinematicPawnMovement_C.MC_WaterSplash");

	UKinematicPawnMovement_C_MC_WaterSplash_Params params;
	params.InAir = InAir;
	params.Location = Location;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KinematicPawnMovement.KinematicPawnMovement_C.WaterSplash
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           InAir                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Location                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UKinematicPawnMovement_C::WaterSplash(bool InAir, const struct FVector& Location)
{
	static auto fn = UObject::FindObject<UFunction>("Function KinematicPawnMovement.KinematicPawnMovement_C.WaterSplash");

	UKinematicPawnMovement_C_WaterSplash_Params params;
	params.InAir = InAir;
	params.Location = Location;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KinematicPawnMovement.KinematicPawnMovement_C.S_SetSlowMode
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           SlowMode                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UKinematicPawnMovement_C::S_SetSlowMode(bool SlowMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function KinematicPawnMovement.KinematicPawnMovement_C.S_SetSlowMode");

	UKinematicPawnMovement_C_S_SetSlowMode_Params params;
	params.SlowMode = SlowMode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KinematicPawnMovement.KinematicPawnMovement_C.SetSlowMode
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           SlowMode                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UKinematicPawnMovement_C::SetSlowMode(bool SlowMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function KinematicPawnMovement.KinematicPawnMovement_C.SetSlowMode");

	UKinematicPawnMovement_C_SetSlowMode_Params params;
	params.SlowMode = SlowMode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KinematicPawnMovement.KinematicPawnMovement_C.MC_SetSlowMode
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           SlowMode                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UKinematicPawnMovement_C::MC_SetSlowMode(bool SlowMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function KinematicPawnMovement.KinematicPawnMovement_C.MC_SetSlowMode");

	UKinematicPawnMovement_C_MC_SetSlowMode_Params params;
	params.SlowMode = SlowMode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KinematicPawnMovement.KinematicPawnMovement_C.SetSwimming
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Swimming                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           InAir                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Location                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UKinematicPawnMovement_C::SetSwimming(bool Swimming, bool InAir, const struct FVector& Location)
{
	static auto fn = UObject::FindObject<UFunction>("Function KinematicPawnMovement.KinematicPawnMovement_C.SetSwimming");

	UKinematicPawnMovement_C_SetSwimming_Params params;
	params.Swimming = Swimming;
	params.InAir = InAir;
	params.Location = Location;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KinematicPawnMovement.KinematicPawnMovement_C.ResetCanJump
// (BlueprintCallable, BlueprintEvent)

void UKinematicPawnMovement_C::ResetCanJump()
{
	static auto fn = UObject::FindObject<UFunction>("Function KinematicPawnMovement.KinematicPawnMovement_C.ResetCanJump");

	UKinematicPawnMovement_C_ResetCanJump_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KinematicPawnMovement.KinematicPawnMovement_C.BlockFall
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          AmountOfTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UKinematicPawnMovement_C::BlockFall(float AmountOfTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function KinematicPawnMovement.KinematicPawnMovement_C.BlockFall");

	UKinematicPawnMovement_C_BlockFall_Params params;
	params.AmountOfTime = AmountOfTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KinematicPawnMovement.KinematicPawnMovement_C.StopSprinting
// (BlueprintCallable, BlueprintEvent)

void UKinematicPawnMovement_C::StopSprinting()
{
	static auto fn = UObject::FindObject<UFunction>("Function KinematicPawnMovement.KinematicPawnMovement_C.StopSprinting");

	UKinematicPawnMovement_C_StopSprinting_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KinematicPawnMovement.KinematicPawnMovement_C.OC_JumpLaunch
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)

void UKinematicPawnMovement_C::OC_JumpLaunch()
{
	static auto fn = UObject::FindObject<UFunction>("Function KinematicPawnMovement.KinematicPawnMovement_C.OC_JumpLaunch");

	UKinematicPawnMovement_C_OC_JumpLaunch_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KinematicPawnMovement.KinematicPawnMovement_C.S_JumpLaunch
// (Net, NetServer, BlueprintCallable, BlueprintEvent)

void UKinematicPawnMovement_C::S_JumpLaunch()
{
	static auto fn = UObject::FindObject<UFunction>("Function KinematicPawnMovement.KinematicPawnMovement_C.S_JumpLaunch");

	UKinematicPawnMovement_C_S_JumpLaunch_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KinematicPawnMovement.KinematicPawnMovement_C.S_SetSprinting
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Sprinting                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UKinematicPawnMovement_C::S_SetSprinting(bool Sprinting)
{
	static auto fn = UObject::FindObject<UFunction>("Function KinematicPawnMovement.KinematicPawnMovement_C.S_SetSprinting");

	UKinematicPawnMovement_C_S_SetSprinting_Params params;
	params.Sprinting = Sprinting;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KinematicPawnMovement.KinematicPawnMovement_C.ForceLocationRefresh
// (BlueprintCallable, BlueprintEvent)

void UKinematicPawnMovement_C::ForceLocationRefresh()
{
	static auto fn = UObject::FindObject<UFunction>("Function KinematicPawnMovement.KinematicPawnMovement_C.ForceLocationRefresh");

	UKinematicPawnMovement_C_ForceLocationRefresh_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KinematicPawnMovement.KinematicPawnMovement_C.S_SetMoving
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Moving                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UKinematicPawnMovement_C::S_SetMoving(bool Moving)
{
	static auto fn = UObject::FindObject<UFunction>("Function KinematicPawnMovement.KinematicPawnMovement_C.S_SetMoving");

	UKinematicPawnMovement_C_S_SetMoving_Params params;
	params.Moving = Moving;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KinematicPawnMovement.KinematicPawnMovement_C.S_UpdateRelativeLocationFromBase
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            X                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Y                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Z                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Roll                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Pitch                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Yaw                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UKinematicPawnMovement_C::S_UpdateRelativeLocationFromBase(int X, int Y, int Z, int Roll, int Pitch, int Yaw)
{
	static auto fn = UObject::FindObject<UFunction>("Function KinematicPawnMovement.KinematicPawnMovement_C.S_UpdateRelativeLocationFromBase");

	UKinematicPawnMovement_C_S_UpdateRelativeLocationFromBase_Params params;
	params.X = X;
	params.Y = Y;
	params.Z = Z;
	params.Roll = Roll;
	params.Pitch = Pitch;
	params.Yaw = Yaw;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KinematicPawnMovement.KinematicPawnMovement_C.S_SetRotation
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Yaw                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UKinematicPawnMovement_C::S_SetRotation(int Yaw)
{
	static auto fn = UObject::FindObject<UFunction>("Function KinematicPawnMovement.KinematicPawnMovement_C.S_SetRotation");

	UKinematicPawnMovement_C_S_SetRotation_Params params;
	params.Yaw = Yaw;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KinematicPawnMovement.KinematicPawnMovement_C.S_SetLocation
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            X                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Y                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Z                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UKinematicPawnMovement_C::S_SetLocation(int X, int Y, int Z)
{
	static auto fn = UObject::FindObject<UFunction>("Function KinematicPawnMovement.KinematicPawnMovement_C.S_SetLocation");

	UKinematicPawnMovement_C_S_SetLocation_Params params;
	params.X = X;
	params.Y = Y;
	params.Z = Z;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KinematicPawnMovement.KinematicPawnMovement_C.SetInAir
// (BlueprintCallable, BlueprintEvent)

void UKinematicPawnMovement_C::SetInAir()
{
	static auto fn = UObject::FindObject<UFunction>("Function KinematicPawnMovement.KinematicPawnMovement_C.SetInAir");

	UKinematicPawnMovement_C_SetInAir_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KinematicPawnMovement.KinematicPawnMovement_C.SetNotInAir
// (BlueprintCallable, BlueprintEvent)

void UKinematicPawnMovement_C::SetNotInAir()
{
	static auto fn = UObject::FindObject<UFunction>("Function KinematicPawnMovement.KinematicPawnMovement_C.SetNotInAir");

	UKinematicPawnMovement_C_SetNotInAir_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KinematicPawnMovement.KinematicPawnMovement_C.SetNewBase
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     baseRef                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  MovingBaseActor                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UKinematicPawnMovement_C::SetNewBase(class UPrimitiveComponent* baseRef, class AActor* MovingBaseActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function KinematicPawnMovement.KinematicPawnMovement_C.SetNewBase");

	UKinematicPawnMovement_C_SetNewBase_Params params;
	params.baseRef = baseRef;
	params.MovingBaseActor = MovingBaseActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KinematicPawnMovement.KinematicPawnMovement_C.ForceDetachFromBase
// (BlueprintCallable, BlueprintEvent)

void UKinematicPawnMovement_C::ForceDetachFromBase()
{
	static auto fn = UObject::FindObject<UFunction>("Function KinematicPawnMovement.KinematicPawnMovement_C.ForceDetachFromBase");

	UKinematicPawnMovement_C_ForceDetachFromBase_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KinematicPawnMovement.KinematicPawnMovement_C.S_InAir
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           InAir                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UKinematicPawnMovement_C::S_InAir(bool InAir)
{
	static auto fn = UObject::FindObject<UFunction>("Function KinematicPawnMovement.KinematicPawnMovement_C.S_InAir");

	UKinematicPawnMovement_C_S_InAir_Params params;
	params.InAir = InAir;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KinematicPawnMovement.KinematicPawnMovement_C.MC_SetNoBase
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 Location                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UKinematicPawnMovement_C::MC_SetNoBase(const struct FVector& Location)
{
	static auto fn = UObject::FindObject<UFunction>("Function KinematicPawnMovement.KinematicPawnMovement_C.MC_SetNoBase");

	UKinematicPawnMovement_C_MC_SetNoBase_Params params;
	params.Location = Location;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KinematicPawnMovement.KinematicPawnMovement_C.S_SetNoBase
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 Location                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UKinematicPawnMovement_C::S_SetNoBase(const struct FVector& Location)
{
	static auto fn = UObject::FindObject<UFunction>("Function KinematicPawnMovement.KinematicPawnMovement_C.S_SetNoBase");

	UKinematicPawnMovement_C_S_SetNoBase_Params params;
	params.Location = Location;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KinematicPawnMovement.KinematicPawnMovement_C.MC_SetBase
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTransform              RelativeLocation               (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FVector                 WorldLocation                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UKinematicPawnMovement_C::MC_SetBase(const struct FTransform& RelativeLocation, const struct FVector& WorldLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function KinematicPawnMovement.KinematicPawnMovement_C.MC_SetBase");

	UKinematicPawnMovement_C_MC_SetBase_Params params;
	params.RelativeLocation = RelativeLocation;
	params.WorldLocation = WorldLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KinematicPawnMovement.KinematicPawnMovement_C.S_SetBase
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USceneComponent*         SceneComponent                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FTransform              RelativeLocation               (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FVector                 WorldLocation                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UKinematicPawnMovement_C::S_SetBase(class USceneComponent* SceneComponent, const struct FTransform& RelativeLocation, const struct FVector& WorldLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function KinematicPawnMovement.KinematicPawnMovement_C.S_SetBase");

	UKinematicPawnMovement_C_S_SetBase_Params params;
	params.SceneComponent = SceneComponent;
	params.RelativeLocation = RelativeLocation;
	params.WorldLocation = WorldLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KinematicPawnMovement.KinematicPawnMovement_C.StopSwimming
// (BlueprintCallable, BlueprintEvent)

void UKinematicPawnMovement_C::StopSwimming()
{
	static auto fn = UObject::FindObject<UFunction>("Function KinematicPawnMovement.KinematicPawnMovement_C.StopSwimming");

	UKinematicPawnMovement_C_StopSwimming_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KinematicPawnMovement.KinematicPawnMovement_C.ExecuteUbergraph_KinematicPawnMovement
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UKinematicPawnMovement_C::ExecuteUbergraph_KinematicPawnMovement(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function KinematicPawnMovement.KinematicPawnMovement_C.ExecuteUbergraph_KinematicPawnMovement");

	UKinematicPawnMovement_C_ExecuteUbergraph_KinematicPawnMovement_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
