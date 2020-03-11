
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

// Function BP_WeaponRangedBase.BP_WeaponRangedBase_C.UnloadWeapon
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_WeaponRangedBase_C::UnloadWeapon()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WeaponRangedBase.BP_WeaponRangedBase_C.UnloadWeapon");

	ABP_WeaponRangedBase_C_UnloadWeapon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WeaponRangedBase.BP_WeaponRangedBase_C.SetClipAmount
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_WeaponRangedBase_C::SetClipAmount()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WeaponRangedBase.BP_WeaponRangedBase_C.SetClipAmount");

	ABP_WeaponRangedBase_C_SetClipAmount_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WeaponRangedBase.BP_WeaponRangedBase_C.OnRep_IsLoaded
// (BlueprintCallable, BlueprintEvent)

void ABP_WeaponRangedBase_C::OnRep_IsLoaded()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WeaponRangedBase.BP_WeaponRangedBase_C.OnRep_IsLoaded");

	ABP_WeaponRangedBase_C_OnRep_IsLoaded_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WeaponRangedBase.BP_WeaponRangedBase_C.CalculateInaccuracyOffset
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 Offset                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_WeaponRangedBase_C::CalculateInaccuracyOffset(struct FVector* Offset)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WeaponRangedBase.BP_WeaponRangedBase_C.CalculateInaccuracyOffset");

	ABP_WeaponRangedBase_C_CalculateInaccuracyOffset_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Offset != nullptr)
		*Offset = params.Offset;
}


// Function BP_WeaponRangedBase.BP_WeaponRangedBase_C.CheckClipAmmo
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ClipEmpty                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_WeaponRangedBase_C::CheckClipAmmo(bool* ClipEmpty)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WeaponRangedBase.BP_WeaponRangedBase_C.CheckClipAmmo");

	ABP_WeaponRangedBase_C_CheckClipAmmo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ClipEmpty != nullptr)
		*ClipEmpty = params.ClipEmpty;
}


// Function BP_WeaponRangedBase.BP_WeaponRangedBase_C.SpawnAndLaunchProjectile
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 CameraLocation                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Direction                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            TeamID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           OwnProjectile                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class ABP_Character_C*         CharacterRef                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 AddedVelocity                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_WeaponRangedBase_C::SpawnAndLaunchProjectile(const struct FVector& CameraLocation, const struct FVector& Direction, int TeamID, bool OwnProjectile, class ABP_Character_C* CharacterRef, const struct FVector& AddedVelocity)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WeaponRangedBase.BP_WeaponRangedBase_C.SpawnAndLaunchProjectile");

	ABP_WeaponRangedBase_C_SpawnAndLaunchProjectile_Params params;
	params.CameraLocation = CameraLocation;
	params.Direction = Direction;
	params.TeamID = TeamID;
	params.OwnProjectile = OwnProjectile;
	params.CharacterRef = CharacterRef;
	params.AddedVelocity = AddedVelocity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WeaponRangedBase.BP_WeaponRangedBase_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_WeaponRangedBase_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WeaponRangedBase.BP_WeaponRangedBase_C.UserConstructionScript");

	ABP_WeaponRangedBase_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WeaponRangedBase.BP_WeaponRangedBase_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_WeaponRangedBase_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WeaponRangedBase.BP_WeaponRangedBase_C.ReceiveBeginPlay");

	ABP_WeaponRangedBase_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WeaponRangedBase.BP_WeaponRangedBase_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_WeaponRangedBase_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WeaponRangedBase.BP_WeaponRangedBase_C.ReceiveTick");

	ABP_WeaponRangedBase_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WeaponRangedBase.BP_WeaponRangedBase_C.SpawnProjectile
// (BlueprintCallable, BlueprintEvent)

void ABP_WeaponRangedBase_C::SpawnProjectile()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WeaponRangedBase.BP_WeaponRangedBase_C.SpawnProjectile");

	ABP_WeaponRangedBase_C_SpawnProjectile_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WeaponRangedBase.BP_WeaponRangedBase_C.SpawnProjectileFromServer
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 CameraLocation                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Direction                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            TeamID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           LeftWeapon                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class ABP_Character_C*         CharacterRef                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 AddedVelocity                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_WeaponRangedBase_C::SpawnProjectileFromServer(const struct FVector& CameraLocation, const struct FVector& Direction, int TeamID, bool LeftWeapon, class ABP_Character_C* CharacterRef, const struct FVector& AddedVelocity)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WeaponRangedBase.BP_WeaponRangedBase_C.SpawnProjectileFromServer");

	ABP_WeaponRangedBase_C_SpawnProjectileFromServer_Params params;
	params.CameraLocation = CameraLocation;
	params.Direction = Direction;
	params.TeamID = TeamID;
	params.LeftWeapon = LeftWeapon;
	params.CharacterRef = CharacterRef;
	params.AddedVelocity = AddedVelocity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WeaponRangedBase.BP_WeaponRangedBase_C.MC_SpawnProjectile
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 CameraLocation                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Direction                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            TeamID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           LeftWeapon                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class ABP_Character_C*         CharacterRef                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 AddedVelocity                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_WeaponRangedBase_C::MC_SpawnProjectile(const struct FVector& CameraLocation, const struct FVector& Direction, int TeamID, bool LeftWeapon, class ABP_Character_C* CharacterRef, const struct FVector& AddedVelocity)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WeaponRangedBase.BP_WeaponRangedBase_C.MC_SpawnProjectile");

	ABP_WeaponRangedBase_C_MC_SpawnProjectile_Params params;
	params.CameraLocation = CameraLocation;
	params.Direction = Direction;
	params.TeamID = TeamID;
	params.LeftWeapon = LeftWeapon;
	params.CharacterRef = CharacterRef;
	params.AddedVelocity = AddedVelocity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WeaponRangedBase.BP_WeaponRangedBase_C.LoadedState
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Loaded                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_WeaponRangedBase_C::LoadedState(bool Loaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WeaponRangedBase.BP_WeaponRangedBase_C.LoadedState");

	ABP_WeaponRangedBase_C_LoadedState_Params params;
	params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WeaponRangedBase.BP_WeaponRangedBase_C.Effects
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 Direction                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class ABP_Character_C*         CharacterRef                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_WeaponRangedBase_C::Effects(const struct FVector& Direction, class ABP_Character_C* CharacterRef)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WeaponRangedBase.BP_WeaponRangedBase_C.Effects");

	ABP_WeaponRangedBase_C_Effects_Params params;
	params.Direction = Direction;
	params.CharacterRef = CharacterRef;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WeaponRangedBase.BP_WeaponRangedBase_C.PrimaryFire
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 CameraLocation                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Direction                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           FullPrecision                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           WasSprinting                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_WeaponRangedBase_C::PrimaryFire(const struct FVector& CameraLocation, const struct FVector& Direction, bool FullPrecision, bool WasSprinting)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WeaponRangedBase.BP_WeaponRangedBase_C.PrimaryFire");

	ABP_WeaponRangedBase_C_PrimaryFire_Params params;
	params.CameraLocation = CameraLocation;
	params.Direction = Direction;
	params.FullPrecision = FullPrecision;
	params.WasSprinting = WasSprinting;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WeaponRangedBase.BP_WeaponRangedBase_C.ReloadWeaponLocal
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           DelayedReload                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_WeaponRangedBase_C::ReloadWeaponLocal(bool DelayedReload)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WeaponRangedBase.BP_WeaponRangedBase_C.ReloadWeaponLocal");

	ABP_WeaponRangedBase_C_ReloadWeaponLocal_Params params;
	params.DelayedReload = DelayedReload;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WeaponRangedBase.BP_WeaponRangedBase_C.CancelReload
// (BlueprintCallable, BlueprintEvent)

void ABP_WeaponRangedBase_C::CancelReload()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WeaponRangedBase.BP_WeaponRangedBase_C.CancelReload");

	ABP_WeaponRangedBase_C_CancelReload_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WeaponRangedBase.BP_WeaponRangedBase_C.Fired
// (BlueprintCallable, BlueprintEvent)

void ABP_WeaponRangedBase_C::Fired()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WeaponRangedBase.BP_WeaponRangedBase_C.Fired");

	ABP_WeaponRangedBase_C_Fired_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WeaponRangedBase.BP_WeaponRangedBase_C.Unfired
// (BlueprintCallable, BlueprintEvent)

void ABP_WeaponRangedBase_C::Unfired()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WeaponRangedBase.BP_WeaponRangedBase_C.Unfired");

	ABP_WeaponRangedBase_C_Unfired_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WeaponRangedBase.BP_WeaponRangedBase_C.ExecuteUbergraph_BP_WeaponRangedBase
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_WeaponRangedBase_C::ExecuteUbergraph_BP_WeaponRangedBase(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WeaponRangedBase.BP_WeaponRangedBase_C.ExecuteUbergraph_BP_WeaponRangedBase");

	ABP_WeaponRangedBase_C_ExecuteUbergraph_BP_WeaponRangedBase_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
