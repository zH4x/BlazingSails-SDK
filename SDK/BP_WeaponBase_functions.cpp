
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

// Function BP_WeaponBase.BP_WeaponBase_C.ApplyDamage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            damage                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_WeaponBase_C::ApplyDamage(int damage)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WeaponBase.BP_WeaponBase_C.ApplyDamage");

	ABP_WeaponBase_C_ApplyDamage_Params params;
	params.damage = damage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WeaponBase.BP_WeaponBase_C.OnRep_Holstered
// (BlueprintCallable, BlueprintEvent)

void ABP_WeaponBase_C::OnRep_Holstered()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WeaponBase.BP_WeaponBase_C.OnRep_Holstered");

	ABP_WeaponBase_C_OnRep_Holstered_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WeaponBase.BP_WeaponBase_C.ResetTransform
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_WeaponBase_C::ResetTransform()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WeaponBase.BP_WeaponBase_C.ResetTransform");

	ABP_WeaponBase_C_ResetTransform_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WeaponBase.BP_WeaponBase_C.SetCustomHolsterTransform
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_WeaponBase_C::SetCustomHolsterTransform()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WeaponBase.BP_WeaponBase_C.SetCustomHolsterTransform");

	ABP_WeaponBase_C_SetCustomHolsterTransform_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WeaponBase.BP_WeaponBase_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_WeaponBase_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WeaponBase.BP_WeaponBase_C.UserConstructionScript");

	ABP_WeaponBase_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WeaponBase.BP_WeaponBase_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_WeaponBase_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WeaponBase.BP_WeaponBase_C.ReceiveBeginPlay");

	ABP_WeaponBase_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WeaponBase.BP_WeaponBase_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_WeaponBase_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WeaponBase.BP_WeaponBase_C.ReceiveTick");

	ABP_WeaponBase_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WeaponBase.BP_WeaponBase_C.MC_DamagedEffects
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)

void ABP_WeaponBase_C::MC_DamagedEffects()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WeaponBase.BP_WeaponBase_C.MC_DamagedEffects");

	ABP_WeaponBase_C_MC_DamagedEffects_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WeaponBase.BP_WeaponBase_C.SpawnDualWeaponLeft
// (BlueprintCallable, BlueprintEvent)

void ABP_WeaponBase_C::SpawnDualWeaponLeft()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WeaponBase.BP_WeaponBase_C.SpawnDualWeaponLeft");

	ABP_WeaponBase_C_SpawnDualWeaponLeft_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WeaponBase.BP_WeaponBase_C.ReceiveDestroyed
// (Event, Public, BlueprintEvent)

void ABP_WeaponBase_C::ReceiveDestroyed()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WeaponBase.BP_WeaponBase_C.ReceiveDestroyed");

	ABP_WeaponBase_C_ReceiveDestroyed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WeaponBase.BP_WeaponBase_C.PrimaryFire
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 CameraLocation                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Direction                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           FullPrecision                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           WasSprinting                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_WeaponBase_C::PrimaryFire(const struct FVector& CameraLocation, const struct FVector& Direction, bool FullPrecision, bool WasSprinting)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WeaponBase.BP_WeaponBase_C.PrimaryFire");

	ABP_WeaponBase_C_PrimaryFire_Params params;
	params.CameraLocation = CameraLocation;
	params.Direction = Direction;
	params.FullPrecision = FullPrecision;
	params.WasSprinting = WasSprinting;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WeaponBase.BP_WeaponBase_C.StopPrimaryFire
// (BlueprintCallable, BlueprintEvent)

void ABP_WeaponBase_C::StopPrimaryFire()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WeaponBase.BP_WeaponBase_C.StopPrimaryFire");

	ABP_WeaponBase_C_StopPrimaryFire_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WeaponBase.BP_WeaponBase_C.SecondaryFire
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 CameraLocation                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Direction                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_WeaponBase_C::SecondaryFire(const struct FVector& CameraLocation, const struct FVector& Direction)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WeaponBase.BP_WeaponBase_C.SecondaryFire");

	ABP_WeaponBase_C_SecondaryFire_Params params;
	params.CameraLocation = CameraLocation;
	params.Direction = Direction;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WeaponBase.BP_WeaponBase_C.StopSecondaryFire
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 CameraLocation                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Direction                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_WeaponBase_C::StopSecondaryFire(const struct FVector& CameraLocation, const struct FVector& Direction)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WeaponBase.BP_WeaponBase_C.StopSecondaryFire");

	ABP_WeaponBase_C_StopSecondaryFire_Params params;
	params.CameraLocation = CameraLocation;
	params.Direction = Direction;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WeaponBase.BP_WeaponBase_C.HolsteredEvent
// (BlueprintCallable, BlueprintEvent)

void ABP_WeaponBase_C::HolsteredEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WeaponBase.BP_WeaponBase_C.HolsteredEvent");

	ABP_WeaponBase_C_HolsteredEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WeaponBase.BP_WeaponBase_C.ExecuteUbergraph_BP_WeaponBase
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_WeaponBase_C::ExecuteUbergraph_BP_WeaponBase(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WeaponBase.BP_WeaponBase_C.ExecuteUbergraph_BP_WeaponBase");

	ABP_WeaponBase_C_ExecuteUbergraph_BP_WeaponBase_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
