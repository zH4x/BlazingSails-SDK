
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

// Function BP_VehicleCannon.BP_VehicleCannon_C.DamageBlockChain
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            DamageAmount                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_VehicleCannon_C::DamageBlockChain(int DamageAmount)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VehicleCannon.BP_VehicleCannon_C.DamageBlockChain");

	ABP_VehicleCannon_C_DamageBlockChain_Params params;
	params.DamageAmount = DamageAmount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_VehicleCannon.BP_VehicleCannon_C.OnRep_CannonBlockChainHP
// (BlueprintCallable, BlueprintEvent)

void ABP_VehicleCannon_C::OnRep_CannonBlockChainHP()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VehicleCannon.BP_VehicleCannon_C.OnRep_CannonBlockChainHP");

	ABP_VehicleCannon_C_OnRep_CannonBlockChainHP_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_VehicleCannon.BP_VehicleCannon_C.OnRep_CannonbBlocked
// (BlueprintCallable, BlueprintEvent)

void ABP_VehicleCannon_C::OnRep_CannonbBlocked()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VehicleCannon.BP_VehicleCannon_C.OnRep_CannonbBlocked");

	ABP_VehicleCannon_C_OnRep_CannonbBlocked_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_VehicleCannon.BP_VehicleCannon_C.SetCannonLevelAppearance
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_VehicleCannon_C::SetCannonLevelAppearance()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VehicleCannon.BP_VehicleCannon_C.SetCannonLevelAppearance");

	ABP_VehicleCannon_C_SetCannonLevelAppearance_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_VehicleCannon.BP_VehicleCannon_C.OnRep_CannonLevel
// (BlueprintCallable, BlueprintEvent)

void ABP_VehicleCannon_C::OnRep_CannonLevel()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VehicleCannon.BP_VehicleCannon_C.OnRep_CannonLevel");

	ABP_VehicleCannon_C_OnRep_CannonLevel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_VehicleCannon.BP_VehicleCannon_C.UpgradeCannon
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_VehicleCannon_C::UpgradeCannon()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VehicleCannon.BP_VehicleCannon_C.UpgradeCannon");

	ABP_VehicleCannon_C_UpgradeCannon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_VehicleCannon.BP_VehicleCannon_C.CheckSpecificAmmo
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_CannonAmmo>      AmmoType                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           HasAmmo                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_VehicleCannon_C::CheckSpecificAmmo(TEnumAsByte<E_CannonAmmo> AmmoType, bool* HasAmmo)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VehicleCannon.BP_VehicleCannon_C.CheckSpecificAmmo");

	ABP_VehicleCannon_C_CheckSpecificAmmo_Params params;
	params.AmmoType = AmmoType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (HasAmmo != nullptr)
		*HasAmmo = params.HasAmmo;
}


// Function BP_VehicleCannon.BP_VehicleCannon_C.FireCannon
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 StartLocation                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Direction                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            TeamID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<E_CannonAmmo>      AmmoType                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 AddedVelocity                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           OwnProjectile                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_VehicleCannon_C::FireCannon(const struct FVector& StartLocation, const struct FVector& Direction, int TeamID, TEnumAsByte<E_CannonAmmo> AmmoType, const struct FVector& AddedVelocity, bool OwnProjectile)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VehicleCannon.BP_VehicleCannon_C.FireCannon");

	ABP_VehicleCannon_C_FireCannon_Params params;
	params.StartLocation = StartLocation;
	params.Direction = Direction;
	params.TeamID = TeamID;
	params.AmmoType = AmmoType;
	params.AddedVelocity = AddedVelocity;
	params.OwnProjectile = OwnProjectile;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_VehicleCannon.BP_VehicleCannon_C.Muzzle
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UParticleSystem*         Muzzle                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UParticleSystem*         Smoke                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UParticleSystem*         Fuse                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_VehicleCannon_C::Muzzle(class UParticleSystem* Muzzle, class UParticleSystem* Smoke, class UParticleSystem* Fuse)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VehicleCannon.BP_VehicleCannon_C.Muzzle");

	ABP_VehicleCannon_C_Muzzle_Params params;
	params.Muzzle = Muzzle;
	params.Smoke = Smoke;
	params.Fuse = Fuse;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_VehicleCannon.BP_VehicleCannon_C.FireProjectile
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  Projectile                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 StartLocation                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Direction                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            TeamID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 AddedVelocity                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           OwnProjectile                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_VehicleCannon_C::FireProjectile(class UClass* Projectile, const struct FVector& StartLocation, const struct FVector& Direction, int TeamID, const struct FVector& AddedVelocity, bool OwnProjectile)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VehicleCannon.BP_VehicleCannon_C.FireProjectile");

	ABP_VehicleCannon_C_FireProjectile_Params params;
	params.Projectile = Projectile;
	params.StartLocation = StartLocation;
	params.Direction = Direction;
	params.TeamID = TeamID;
	params.AddedVelocity = AddedVelocity;
	params.OwnProjectile = OwnProjectile;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_VehicleCannon.BP_VehicleCannon_C.AmmoDown
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Cycled                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_VehicleCannon_C::AmmoDown(bool* Cycled)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VehicleCannon.BP_VehicleCannon_C.AmmoDown");

	ABP_VehicleCannon_C_AmmoDown_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Cycled != nullptr)
		*Cycled = params.Cycled;
}


// Function BP_VehicleCannon.BP_VehicleCannon_C.AmmoUp
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Cycled                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_VehicleCannon_C::AmmoUp(bool* Cycled)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VehicleCannon.BP_VehicleCannon_C.AmmoUp");

	ABP_VehicleCannon_C_AmmoUp_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Cycled != nullptr)
		*Cycled = params.Cycled;
}


// Function BP_VehicleCannon.BP_VehicleCannon_C.CheckAmmo
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           HasAmmo                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_VehicleCannon_C::CheckAmmo(bool* HasAmmo)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VehicleCannon.BP_VehicleCannon_C.CheckAmmo");

	ABP_VehicleCannon_C_CheckAmmo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (HasAmmo != nullptr)
		*HasAmmo = params.HasAmmo;
}


// Function BP_VehicleCannon.BP_VehicleCannon_C.LoadAmmo
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_VehicleCannon_C::LoadAmmo()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VehicleCannon.BP_VehicleCannon_C.LoadAmmo");

	ABP_VehicleCannon_C_LoadAmmo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_VehicleCannon.BP_VehicleCannon_C.OnRep_LoadedAmmo
// (HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_VehicleCannon_C::OnRep_LoadedAmmo()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VehicleCannon.BP_VehicleCannon_C.OnRep_LoadedAmmo");

	ABP_VehicleCannon_C_OnRep_LoadedAmmo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_VehicleCannon.BP_VehicleCannon_C.OnRep_AmmoType
// (HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_VehicleCannon_C::OnRep_AmmoType()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VehicleCannon.BP_VehicleCannon_C.OnRep_AmmoType");

	ABP_VehicleCannon_C_OnRep_AmmoType_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_VehicleCannon.BP_VehicleCannon_C.OnRep_Loaded
// (BlueprintCallable, BlueprintEvent)

void ABP_VehicleCannon_C::OnRep_Loaded()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VehicleCannon.BP_VehicleCannon_C.OnRep_Loaded");

	ABP_VehicleCannon_C_OnRep_Loaded_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_VehicleCannon.BP_VehicleCannon_C.CycleAmmoPrevious
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_VehicleCannon_C::CycleAmmoPrevious()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VehicleCannon.BP_VehicleCannon_C.CycleAmmoPrevious");

	ABP_VehicleCannon_C_CycleAmmoPrevious_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_VehicleCannon.BP_VehicleCannon_C.CycleAmmoNext
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_VehicleCannon_C::CycleAmmoNext()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VehicleCannon.BP_VehicleCannon_C.CycleAmmoNext");

	ABP_VehicleCannon_C_CycleAmmoNext_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_VehicleCannon.BP_VehicleCannon_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_VehicleCannon_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VehicleCannon.BP_VehicleCannon_C.UserConstructionScript");

	ABP_VehicleCannon_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_VehicleCannon.BP_VehicleCannon_C.InpActEvt_PrimaryFire_K2Node_InputActionEvent_1
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_VehicleCannon_C::InpActEvt_PrimaryFire_K2Node_InputActionEvent_1(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VehicleCannon.BP_VehicleCannon_C.InpActEvt_PrimaryFire_K2Node_InputActionEvent_1");

	ABP_VehicleCannon_C_InpActEvt_PrimaryFire_K2Node_InputActionEvent_1_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_VehicleCannon.BP_VehicleCannon_C.InpActEvt_MouseScrollUp_K2Node_InputKeyEvent_4
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_VehicleCannon_C::InpActEvt_MouseScrollUp_K2Node_InputKeyEvent_4(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VehicleCannon.BP_VehicleCannon_C.InpActEvt_MouseScrollUp_K2Node_InputKeyEvent_4");

	ABP_VehicleCannon_C_InpActEvt_MouseScrollUp_K2Node_InputKeyEvent_4_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_VehicleCannon.BP_VehicleCannon_C.InpActEvt_MouseScrollDown_K2Node_InputKeyEvent_3
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_VehicleCannon_C::InpActEvt_MouseScrollDown_K2Node_InputKeyEvent_3(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VehicleCannon.BP_VehicleCannon_C.InpActEvt_MouseScrollDown_K2Node_InputKeyEvent_3");

	ABP_VehicleCannon_C_InpActEvt_MouseScrollDown_K2Node_InputKeyEvent_3_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_VehicleCannon.BP_VehicleCannon_C.InpActEvt_A_K2Node_InputKeyEvent_2
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_VehicleCannon_C::InpActEvt_A_K2Node_InputKeyEvent_2(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VehicleCannon.BP_VehicleCannon_C.InpActEvt_A_K2Node_InputKeyEvent_2");

	ABP_VehicleCannon_C_InpActEvt_A_K2Node_InputKeyEvent_2_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_VehicleCannon.BP_VehicleCannon_C.InpActEvt_D_K2Node_InputKeyEvent_1
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_VehicleCannon_C::InpActEvt_D_K2Node_InputKeyEvent_1(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VehicleCannon.BP_VehicleCannon_C.InpActEvt_D_K2Node_InputKeyEvent_1");

	ABP_VehicleCannon_C_InpActEvt_D_K2Node_InputKeyEvent_1_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_VehicleCannon.BP_VehicleCannon_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_VehicleCannon_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VehicleCannon.BP_VehicleCannon_C.ReceiveBeginPlay");

	ABP_VehicleCannon_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_VehicleCannon.BP_VehicleCannon_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_VehicleCannon_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VehicleCannon.BP_VehicleCannon_C.ReceiveTick");

	ABP_VehicleCannon_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_VehicleCannon.BP_VehicleCannon_C.InpAxisKeyEvt_MouseY_K2Node_InputAxisKeyEvent_12
// (BlueprintEvent)
// Parameters:
// float                          AxisValue                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_VehicleCannon_C::InpAxisKeyEvt_MouseY_K2Node_InputAxisKeyEvent_12(float AxisValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VehicleCannon.BP_VehicleCannon_C.InpAxisKeyEvt_MouseY_K2Node_InputAxisKeyEvent_12");

	ABP_VehicleCannon_C_InpAxisKeyEvt_MouseY_K2Node_InputAxisKeyEvent_12_Params params;
	params.AxisValue = AxisValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_VehicleCannon.BP_VehicleCannon_C.InpAxisKeyEvt_MouseX_K2Node_InputAxisKeyEvent_16
// (BlueprintEvent)
// Parameters:
// float                          AxisValue                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_VehicleCannon_C::InpAxisKeyEvt_MouseX_K2Node_InputAxisKeyEvent_16(float AxisValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VehicleCannon.BP_VehicleCannon_C.InpAxisKeyEvt_MouseX_K2Node_InputAxisKeyEvent_16");

	ABP_VehicleCannon_C_InpAxisKeyEvt_MouseX_K2Node_InputAxisKeyEvent_16_Params params;
	params.AxisValue = AxisValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_VehicleCannon.BP_VehicleCannon_C.S_Fire
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 StartLocation                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Direction                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            TeamID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<E_CannonAmmo>      AmmoType                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 AddedVelocity                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_VehicleCannon_C::S_Fire(const struct FVector& StartLocation, const struct FVector& Direction, int TeamID, TEnumAsByte<E_CannonAmmo> AmmoType, const struct FVector& AddedVelocity)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VehicleCannon.BP_VehicleCannon_C.S_Fire");

	ABP_VehicleCannon_C_S_Fire_Params params;
	params.StartLocation = StartLocation;
	params.Direction = Direction;
	params.TeamID = TeamID;
	params.AmmoType = AmmoType;
	params.AddedVelocity = AddedVelocity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_VehicleCannon.BP_VehicleCannon_C.S_SetYaw
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Yaw                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_VehicleCannon_C::S_SetYaw(float Yaw)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VehicleCannon.BP_VehicleCannon_C.S_SetYaw");

	ABP_VehicleCannon_C_S_SetYaw_Params params;
	params.Yaw = Yaw;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_VehicleCannon.BP_VehicleCannon_C.S_SetPitch
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Pitch                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_VehicleCannon_C::S_SetPitch(float Pitch)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VehicleCannon.BP_VehicleCannon_C.S_SetPitch");

	ABP_VehicleCannon_C_S_SetPitch_Params params;
	params.Pitch = Pitch;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_VehicleCannon.BP_VehicleCannon_C.RequestCannonFire
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 StartLocation                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Direction                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            TeamID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<E_CannonAmmo>      AmmoType                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 AddedVelocity                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           OwnProjectile                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_VehicleCannon_C::RequestCannonFire(const struct FVector& StartLocation, const struct FVector& Direction, int TeamID, TEnumAsByte<E_CannonAmmo> AmmoType, const struct FVector& AddedVelocity, bool OwnProjectile)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VehicleCannon.BP_VehicleCannon_C.RequestCannonFire");

	ABP_VehicleCannon_C_RequestCannonFire_Params params;
	params.StartLocation = StartLocation;
	params.Direction = Direction;
	params.TeamID = TeamID;
	params.AmmoType = AmmoType;
	params.AddedVelocity = AddedVelocity;
	params.OwnProjectile = OwnProjectile;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_VehicleCannon.BP_VehicleCannon_C.S_StartReload
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)

void ABP_VehicleCannon_C::S_StartReload()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VehicleCannon.BP_VehicleCannon_C.S_StartReload");

	ABP_VehicleCannon_C_S_StartReload_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_VehicleCannon.BP_VehicleCannon_C.S_StopReload
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)

void ABP_VehicleCannon_C::S_StopReload()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VehicleCannon.BP_VehicleCannon_C.S_StopReload");

	ABP_VehicleCannon_C_S_StopReload_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_VehicleCannon.BP_VehicleCannon_C.S_NextAmmoType
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)

void ABP_VehicleCannon_C::S_NextAmmoType()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VehicleCannon.BP_VehicleCannon_C.S_NextAmmoType");

	ABP_VehicleCannon_C_S_NextAmmoType_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_VehicleCannon.BP_VehicleCannon_C.S_PreviousAmmoType
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)

void ABP_VehicleCannon_C::S_PreviousAmmoType()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VehicleCannon.BP_VehicleCannon_C.S_PreviousAmmoType");

	ABP_VehicleCannon_C_S_PreviousAmmoType_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_VehicleCannon.BP_VehicleCannon_C.MC_Reloaded
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)

void ABP_VehicleCannon_C::MC_Reloaded()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VehicleCannon.BP_VehicleCannon_C.MC_Reloaded");

	ABP_VehicleCannon_C_MC_Reloaded_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_VehicleCannon.BP_VehicleCannon_C.UnOccupied
// (BlueprintCallable, BlueprintEvent)

void ABP_VehicleCannon_C::UnOccupied()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VehicleCannon.BP_VehicleCannon_C.UnOccupied");

	ABP_VehicleCannon_C_UnOccupied_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_VehicleCannon.BP_VehicleCannon_C.Occupied
// (BlueprintCallable, BlueprintEvent)

void ABP_VehicleCannon_C::Occupied()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VehicleCannon.BP_VehicleCannon_C.Occupied");

	ABP_VehicleCannon_C_Occupied_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_VehicleCannon.BP_VehicleCannon_C.MC_Pitch
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Pitch                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_VehicleCannon_C::MC_Pitch(float Pitch)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VehicleCannon.BP_VehicleCannon_C.MC_Pitch");

	ABP_VehicleCannon_C_MC_Pitch_Params params;
	params.Pitch = Pitch;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_VehicleCannon.BP_VehicleCannon_C.MC_Yaw
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Yaw                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_VehicleCannon_C::MC_Yaw(float Yaw)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VehicleCannon.BP_VehicleCannon_C.MC_Yaw");

	ABP_VehicleCannon_C_MC_Yaw_Params params;
	params.Yaw = Yaw;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_VehicleCannon.BP_VehicleCannon_C.LoadKeys
// (BlueprintCallable, BlueprintEvent)

void ABP_VehicleCannon_C::LoadKeys()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VehicleCannon.BP_VehicleCannon_C.LoadKeys");

	ABP_VehicleCannon_C_LoadKeys_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_VehicleCannon.BP_VehicleCannon_C.Resetkeys
// (BlueprintCallable, BlueprintEvent)

void ABP_VehicleCannon_C::Resetkeys()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VehicleCannon.BP_VehicleCannon_C.Resetkeys");

	ABP_VehicleCannon_C_Resetkeys_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_VehicleCannon.BP_VehicleCannon_C.RefreshKeys
// (BlueprintCallable, BlueprintEvent)

void ABP_VehicleCannon_C::RefreshKeys()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VehicleCannon.BP_VehicleCannon_C.RefreshKeys");

	ABP_VehicleCannon_C_RefreshKeys_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_VehicleCannon.BP_VehicleCannon_C.MC_FireCannon
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 StartLocation                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Direction                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            TeamID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<E_CannonAmmo>      AmmoType                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 AddedVelocity                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_VehicleCannon_C::MC_FireCannon(const struct FVector& StartLocation, const struct FVector& Direction, int TeamID, TEnumAsByte<E_CannonAmmo> AmmoType, const struct FVector& AddedVelocity)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VehicleCannon.BP_VehicleCannon_C.MC_FireCannon");

	ABP_VehicleCannon_C_MC_FireCannon_Params params;
	params.StartLocation = StartLocation;
	params.Direction = Direction;
	params.TeamID = TeamID;
	params.AmmoType = AmmoType;
	params.AddedVelocity = AddedVelocity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_VehicleCannon.BP_VehicleCannon_C.MC_CannonUpgrade
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)

void ABP_VehicleCannon_C::MC_CannonUpgrade()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VehicleCannon.BP_VehicleCannon_C.MC_CannonUpgrade");

	ABP_VehicleCannon_C_MC_CannonUpgrade_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_VehicleCannon.BP_VehicleCannon_C.BlockCannon
// (BlueprintCallable, BlueprintEvent)

void ABP_VehicleCannon_C::BlockCannon()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VehicleCannon.BP_VehicleCannon_C.BlockCannon");

	ABP_VehicleCannon_C_BlockCannon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_VehicleCannon.BP_VehicleCannon_C.ExecuteUbergraph_BP_VehicleCannon
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_VehicleCannon_C::ExecuteUbergraph_BP_VehicleCannon(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VehicleCannon.BP_VehicleCannon_C.ExecuteUbergraph_BP_VehicleCannon");

	ABP_VehicleCannon_C_ExecuteUbergraph_BP_VehicleCannon_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
