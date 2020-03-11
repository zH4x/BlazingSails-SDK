
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

// Function BP_BoatPhysicsBase.BP_BoatPhysicsBase_C.GetSpeed
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ABP_BoatPhysicsBase_C::GetSpeed()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BoatPhysicsBase.BP_BoatPhysicsBase_C.GetSpeed");

	ABP_BoatPhysicsBase_C_GetSpeed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_BoatPhysicsBase.BP_BoatPhysicsBase_C.GetCollisionMultiplier
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          Multiplier                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_BoatPhysicsBase_C::GetCollisionMultiplier(float* Multiplier)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BoatPhysicsBase.BP_BoatPhysicsBase_C.GetCollisionMultiplier");

	ABP_BoatPhysicsBase_C_GetCollisionMultiplier_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Multiplier != nullptr)
		*Multiplier = params.Multiplier;
}


// Function BP_BoatPhysicsBase.BP_BoatPhysicsBase_C.CalculateMastSpeeds
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Sum                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          TotalAmountOfSail              (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_BoatPhysicsBase_C::CalculateMastSpeeds(float* Sum, float* TotalAmountOfSail)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BoatPhysicsBase.BP_BoatPhysicsBase_C.CalculateMastSpeeds");

	ABP_BoatPhysicsBase_C_CalculateMastSpeeds_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Sum != nullptr)
		*Sum = params.Sum;
	if (TotalAmountOfSail != nullptr)
		*TotalAmountOfSail = params.TotalAmountOfSail;
}


// Function BP_BoatPhysicsBase.BP_BoatPhysicsBase_C.LoadBuoyancyPoints
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FVector>         BuoyancyPoints                 (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FVector>         OriginalLocations              (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void ABP_BoatPhysicsBase_C::LoadBuoyancyPoints(TArray<struct FVector>* BuoyancyPoints, TArray<struct FVector>* OriginalLocations)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BoatPhysicsBase.BP_BoatPhysicsBase_C.LoadBuoyancyPoints");

	ABP_BoatPhysicsBase_C_LoadBuoyancyPoints_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (BuoyancyPoints != nullptr)
		*BuoyancyPoints = params.BuoyancyPoints;
	if (OriginalLocations != nullptr)
		*OriginalLocations = params.OriginalLocations;
}


// Function BP_BoatPhysicsBase.BP_BoatPhysicsBase_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_BoatPhysicsBase_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BoatPhysicsBase.BP_BoatPhysicsBase_C.UserConstructionScript");

	ABP_BoatPhysicsBase_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BoatPhysicsBase.BP_BoatPhysicsBase_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_BoatPhysicsBase_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BoatPhysicsBase.BP_BoatPhysicsBase_C.ReceiveBeginPlay");

	ABP_BoatPhysicsBase_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BoatPhysicsBase.BP_BoatPhysicsBase_C.ReceiveActorBeginOverlap
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_BoatPhysicsBase_C::ReceiveActorBeginOverlap(class AActor* OtherActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BoatPhysicsBase.BP_BoatPhysicsBase_C.ReceiveActorBeginOverlap");

	ABP_BoatPhysicsBase_C_ReceiveActorBeginOverlap_Params params;
	params.OtherActor = OtherActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BoatPhysicsBase.BP_BoatPhysicsBase_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_BoatPhysicsBase_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BoatPhysicsBase.BP_BoatPhysicsBase_C.ReceiveTick");

	ABP_BoatPhysicsBase_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BoatPhysicsBase.BP_BoatPhysicsBase_C.ChangeSpeed
// (BlueprintCallable, BlueprintEvent)

void ABP_BoatPhysicsBase_C::ChangeSpeed()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BoatPhysicsBase.BP_BoatPhysicsBase_C.ChangeSpeed");

	ABP_BoatPhysicsBase_C_ChangeSpeed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BoatPhysicsBase.BP_BoatPhysicsBase_C.ReceiveActorEndOverlap
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_BoatPhysicsBase_C::ReceiveActorEndOverlap(class AActor* OtherActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BoatPhysicsBase.BP_BoatPhysicsBase_C.ReceiveActorEndOverlap");

	ABP_BoatPhysicsBase_C_ReceiveActorEndOverlap_Params params;
	params.OtherActor = OtherActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BoatPhysicsBase.BP_BoatPhysicsBase_C.AutoStopShip
// (BlueprintCallable, BlueprintEvent)

void ABP_BoatPhysicsBase_C::AutoStopShip()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BoatPhysicsBase.BP_BoatPhysicsBase_C.AutoStopShip");

	ABP_BoatPhysicsBase_C_AutoStopShip_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BoatPhysicsBase.BP_BoatPhysicsBase_C.ReceiveHit
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     MyComp                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  Other                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           bSelfMoved                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 HitLocation                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 HitNormal                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 NormalImpulse                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              hit                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void ABP_BoatPhysicsBase_C::ReceiveHit(class UPrimitiveComponent* MyComp, class AActor* Other, class UPrimitiveComponent* OtherComp, bool bSelfMoved, const struct FVector& HitLocation, const struct FVector& HitNormal, const struct FVector& NormalImpulse, const struct FHitResult& hit)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BoatPhysicsBase.BP_BoatPhysicsBase_C.ReceiveHit");

	ABP_BoatPhysicsBase_C_ReceiveHit_Params params;
	params.MyComp = MyComp;
	params.Other = Other;
	params.OtherComp = OtherComp;
	params.bSelfMoved = bSelfMoved;
	params.HitLocation = HitLocation;
	params.HitNormal = HitNormal;
	params.NormalImpulse = NormalImpulse;
	params.hit = hit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BoatPhysicsBase.BP_BoatPhysicsBase_C.ExecuteUbergraph_BP_BoatPhysicsBase
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_BoatPhysicsBase_C::ExecuteUbergraph_BP_BoatPhysicsBase(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BoatPhysicsBase.BP_BoatPhysicsBase_C.ExecuteUbergraph_BP_BoatPhysicsBase");

	ABP_BoatPhysicsBase_C_ExecuteUbergraph_BP_BoatPhysicsBase_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
