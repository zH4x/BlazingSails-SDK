
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

// Function BP_WeaponMeleeBase.BP_WeaponMeleeBase_C.OtherHit
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_WeaponMeleeBase_C::OtherHit()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WeaponMeleeBase.BP_WeaponMeleeBase_C.OtherHit");

	ABP_WeaponMeleeBase_C_OtherHit_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WeaponMeleeBase.BP_WeaponMeleeBase_C.DamageLine
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_WeaponMeleeBase_C::DamageLine()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WeaponMeleeBase.BP_WeaponMeleeBase_C.DamageLine");

	ABP_WeaponMeleeBase_C_DamageLine_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WeaponMeleeBase.BP_WeaponMeleeBase_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_WeaponMeleeBase_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WeaponMeleeBase.BP_WeaponMeleeBase_C.UserConstructionScript");

	ABP_WeaponMeleeBase_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WeaponMeleeBase.BP_WeaponMeleeBase_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_WeaponMeleeBase_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WeaponMeleeBase.BP_WeaponMeleeBase_C.ReceiveBeginPlay");

	ABP_WeaponMeleeBase_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WeaponMeleeBase.BP_WeaponMeleeBase_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_WeaponMeleeBase_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WeaponMeleeBase.BP_WeaponMeleeBase_C.ReceiveTick");

	ABP_WeaponMeleeBase_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WeaponMeleeBase.BP_WeaponMeleeBase_C.MC_PrimaryFire
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)

void ABP_WeaponMeleeBase_C::MC_PrimaryFire()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WeaponMeleeBase.BP_WeaponMeleeBase_C.MC_PrimaryFire");

	ABP_WeaponMeleeBase_C_MC_PrimaryFire_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WeaponMeleeBase.BP_WeaponMeleeBase_C.HitOther
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 Location                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Normal                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_WeaponMeleeBase_C::HitOther(const struct FVector& Location, const struct FVector& Normal, class AActor* OtherActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WeaponMeleeBase.BP_WeaponMeleeBase_C.HitOther");

	ABP_WeaponMeleeBase_C_HitOther_Params params;
	params.Location = Location;
	params.Normal = Normal;
	params.OtherActor = OtherActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WeaponMeleeBase.BP_WeaponMeleeBase_C.HitOtherTasks
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 Location                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Normal                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  HitActor                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            AnimationDirection             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_WeaponMeleeBase_C::HitOtherTasks(const struct FVector& Location, const struct FVector& Normal, class AActor* HitActor, int AnimationDirection)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WeaponMeleeBase.BP_WeaponMeleeBase_C.HitOtherTasks");

	ABP_WeaponMeleeBase_C_HitOtherTasks_Params params;
	params.Location = Location;
	params.Normal = Normal;
	params.HitActor = HitActor;
	params.AnimationDirection = AnimationDirection;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WeaponMeleeBase.BP_WeaponMeleeBase_C.PrimaryFire
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 CameraLocation                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Direction                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           FullPrecision                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           WasSprinting                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_WeaponMeleeBase_C::PrimaryFire(const struct FVector& CameraLocation, const struct FVector& Direction, bool FullPrecision, bool WasSprinting)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WeaponMeleeBase.BP_WeaponMeleeBase_C.PrimaryFire");

	ABP_WeaponMeleeBase_C_PrimaryFire_Params params;
	params.CameraLocation = CameraLocation;
	params.Direction = Direction;
	params.FullPrecision = FullPrecision;
	params.WasSprinting = WasSprinting;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WeaponMeleeBase.BP_WeaponMeleeBase_C.S_HitOther
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 Location                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Normal                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  HitActor                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            AnimationDirection             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_WeaponMeleeBase_C::S_HitOther(const struct FVector& Location, const struct FVector& Normal, class AActor* HitActor, int AnimationDirection)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WeaponMeleeBase.BP_WeaponMeleeBase_C.S_HitOther");

	ABP_WeaponMeleeBase_C_S_HitOther_Params params;
	params.Location = Location;
	params.Normal = Normal;
	params.HitActor = HitActor;
	params.AnimationDirection = AnimationDirection;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WeaponMeleeBase.BP_WeaponMeleeBase_C.MC_HitOther
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 Location                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Normal                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  HitActor                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            AnimationDirection             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_WeaponMeleeBase_C::MC_HitOther(const struct FVector& Location, const struct FVector& Normal, class AActor* HitActor, int AnimationDirection)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WeaponMeleeBase.BP_WeaponMeleeBase_C.MC_HitOther");

	ABP_WeaponMeleeBase_C_MC_HitOther_Params params;
	params.Location = Location;
	params.Normal = Normal;
	params.HitActor = HitActor;
	params.AnimationDirection = AnimationDirection;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WeaponMeleeBase.BP_WeaponMeleeBase_C.SecondaryFire
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 CameraLocation                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Direction                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_WeaponMeleeBase_C::SecondaryFire(const struct FVector& CameraLocation, const struct FVector& Direction)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WeaponMeleeBase.BP_WeaponMeleeBase_C.SecondaryFire");

	ABP_WeaponMeleeBase_C_SecondaryFire_Params params;
	params.CameraLocation = CameraLocation;
	params.Direction = Direction;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WeaponMeleeBase.BP_WeaponMeleeBase_C.StopSecondaryFire
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 CameraLocation                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Direction                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_WeaponMeleeBase_C::StopSecondaryFire(const struct FVector& CameraLocation, const struct FVector& Direction)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WeaponMeleeBase.BP_WeaponMeleeBase_C.StopSecondaryFire");

	ABP_WeaponMeleeBase_C_StopSecondaryFire_Params params;
	params.CameraLocation = CameraLocation;
	params.Direction = Direction;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WeaponMeleeBase.BP_WeaponMeleeBase_C.S_HitPlayer
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_Character_C*         Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 RelativeLocation               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_WeaponMeleeBase_C::S_HitPlayer(class ABP_Character_C* Character, const struct FVector& RelativeLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WeaponMeleeBase.BP_WeaponMeleeBase_C.S_HitPlayer");

	ABP_WeaponMeleeBase_C_S_HitPlayer_Params params;
	params.Character = Character;
	params.RelativeLocation = RelativeLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WeaponMeleeBase.BP_WeaponMeleeBase_C.MC_HitPlayer
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_Character_C*         Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 RelativeLocation               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_WeaponMeleeBase_C::MC_HitPlayer(class ABP_Character_C* Character, const struct FVector& RelativeLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WeaponMeleeBase.BP_WeaponMeleeBase_C.MC_HitPlayer");

	ABP_WeaponMeleeBase_C_MC_HitPlayer_Params params;
	params.Character = Character;
	params.RelativeLocation = RelativeLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WeaponMeleeBase.BP_WeaponMeleeBase_C.HitPlayer
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_Character_C*         Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Location                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_WeaponMeleeBase_C::HitPlayer(class ABP_Character_C* Character, const struct FVector& Location)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WeaponMeleeBase.BP_WeaponMeleeBase_C.HitPlayer");

	ABP_WeaponMeleeBase_C_HitPlayer_Params params;
	params.Character = Character;
	params.Location = Location;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WeaponMeleeBase.BP_WeaponMeleeBase_C.PlayerHitEvent
// (BlueprintCallable, BlueprintEvent)

void ABP_WeaponMeleeBase_C::PlayerHitEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WeaponMeleeBase.BP_WeaponMeleeBase_C.PlayerHitEvent");

	ABP_WeaponMeleeBase_C_PlayerHitEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WeaponMeleeBase.BP_WeaponMeleeBase_C.bLock
// (BlueprintCallable, BlueprintEvent)

void ABP_WeaponMeleeBase_C::bLock()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WeaponMeleeBase.BP_WeaponMeleeBase_C.bLock");

	ABP_WeaponMeleeBase_C_bLock_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WeaponMeleeBase.BP_WeaponMeleeBase_C.StopBlock
// (BlueprintCallable, BlueprintEvent)

void ABP_WeaponMeleeBase_C::StopBlock()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WeaponMeleeBase.BP_WeaponMeleeBase_C.StopBlock");

	ABP_WeaponMeleeBase_C_StopBlock_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WeaponMeleeBase.BP_WeaponMeleeBase_C.ExecuteUbergraph_BP_WeaponMeleeBase
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_WeaponMeleeBase_C::ExecuteUbergraph_BP_WeaponMeleeBase(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WeaponMeleeBase.BP_WeaponMeleeBase_C.ExecuteUbergraph_BP_WeaponMeleeBase");

	ABP_WeaponMeleeBase_C_ExecuteUbergraph_BP_WeaponMeleeBase_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
