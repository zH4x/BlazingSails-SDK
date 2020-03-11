
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

// Function BP_Character.BP_Character_C.ToggleOwnCharacterInspectMode
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ModeOn                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Character_C::ToggleOwnCharacterInspectMode(bool ModeOn)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Character.BP_Character_C.ToggleOwnCharacterInspectMode");

	ABP_Character_C_ToggleOwnCharacterInspectMode_Params params;
	params.ModeOn = ModeOn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Character.BP_Character_C.ServerCheckIfOnShip
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           OnShip                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class ABP_BoatMeshBase_C*      ShipRef                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_Character_C::ServerCheckIfOnShip(bool* OnShip, class ABP_BoatMeshBase_C** ShipRef)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Character.BP_Character_C.ServerCheckIfOnShip");

	ABP_Character_C_ServerCheckIfOnShip_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OnShip != nullptr)
		*OnShip = params.OnShip;
	if (ShipRef != nullptr)
		*ShipRef = params.ShipRef;
}


// Function BP_Character.BP_Character_C.RepairAnimation
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_Character_C::RepairAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Character.BP_Character_C.RepairAnimation");

	ABP_Character_C_RepairAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Character.BP_Character_C.CleanUpLocally
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_Character_C::CleanUpLocally()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Character.BP_Character_C.CleanUpLocally");

	ABP_Character_C_CleanUpLocally_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Character.BP_Character_C.OnRep_ShowBanner
// (BlueprintCallable, BlueprintEvent)

void ABP_Character_C::OnRep_ShowBanner()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Character.BP_Character_C.OnRep_ShowBanner");

	ABP_Character_C_OnRep_ShowBanner_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Character.BP_Character_C.PlayLocalSoundAtLocation
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 Location                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class USoundBase*              Sound                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           OnlyOnSelf                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Volume                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Character_C::PlayLocalSoundAtLocation(const struct FVector& Location, class USoundBase* Sound, bool OnlyOnSelf, float Volume)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Character.BP_Character_C.PlayLocalSoundAtLocation");

	ABP_Character_C_PlayLocalSoundAtLocation_Params params;
	params.Location = Location;
	params.Sound = Sound;
	params.OnlyOnSelf = OnlyOnSelf;
	params.Volume = Volume;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Character.BP_Character_C.UpgradeInventory
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Upgraded                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_Character_C::UpgradeInventory(bool* Upgraded)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Character.BP_Character_C.UpgradeInventory");

	ABP_Character_C_UpgradeInventory_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Upgraded != nullptr)
		*Upgraded = params.Upgraded;
}


// Function BP_Character.BP_Character_C.FetchUpgradesForActionMenu
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<struct FST_PieMenuSelection> NewParam                       (Parm, OutParm, ZeroConstructor)

void ABP_Character_C::FetchUpgradesForActionMenu(TArray<struct FST_PieMenuSelection>* NewParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Character.BP_Character_C.FetchUpgradesForActionMenu");

	ABP_Character_C_FetchUpgradesForActionMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NewParam != nullptr)
		*NewParam = params.NewParam;
}


// Function BP_Character.BP_Character_C.CheckIfDifferentWeapon
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_EquipmentSlots>  Weapon                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            WeaponID                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           DifferentWeapon                (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_Character_C::CheckIfDifferentWeapon(TEnumAsByte<E_EquipmentSlots> Weapon, int WeaponID, bool* DifferentWeapon)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Character.BP_Character_C.CheckIfDifferentWeapon");

	ABP_Character_C_CheckIfDifferentWeapon_Params params;
	params.Weapon = Weapon;
	params.WeaponID = WeaponID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DifferentWeapon != nullptr)
		*DifferentWeapon = params.DifferentWeapon;
}


// Function BP_Character.BP_Character_C.OnRep_TeamPlayerColor
// (BlueprintCallable, BlueprintEvent)

void ABP_Character_C::OnRep_TeamPlayerColor()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Character.BP_Character_C.OnRep_TeamPlayerColor");

	ABP_Character_C_OnRep_TeamPlayerColor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Character.BP_Character_C.GetTotemChargeMultiplier
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          Multiplier                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_Character_C::GetTotemChargeMultiplier(float* Multiplier)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Character.BP_Character_C.GetTotemChargeMultiplier");

	ABP_Character_C_GetTotemChargeMultiplier_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Multiplier != nullptr)
		*Multiplier = params.Multiplier;
}


// Function BP_Character.BP_Character_C.TakeAllFromContainer
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_Character_C::TakeAllFromContainer()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Character.BP_Character_C.TakeAllFromContainer");

	ABP_Character_C_TakeAllFromContainer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Character.BP_Character_C.OnRep_MakeHammerHitSound
// (BlueprintCallable, BlueprintEvent)

void ABP_Character_C::OnRep_MakeHammerHitSound()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Character.BP_Character_C.OnRep_MakeHammerHitSound");

	ABP_Character_C_OnRep_MakeHammerHitSound_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Character.BP_Character_C.StabilizeCamera
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Stabilize                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Character_C::StabilizeCamera(bool Stabilize)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Character.BP_Character_C.StabilizeCamera");

	ABP_Character_C_StabilizeCamera_Params params;
	params.Stabilize = Stabilize;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Character.BP_Character_C.SetAimingMode
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Aiming                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Character_C::SetAimingMode(bool Aiming)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Character.BP_Character_C.SetAimingMode");

	ABP_Character_C_SetAimingMode_Params params;
	params.Aiming = Aiming;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Character.BP_Character_C.DepositAllToContainer
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_Character_C::DepositAllToContainer()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Character.BP_Character_C.DepositAllToContainer");

	ABP_Character_C_DepositAllToContainer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Character.BP_Character_C.FetchLocalWeaponRef
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_EquipmentSlots>  WeaponType                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Character_C::FetchLocalWeaponRef(TEnumAsByte<E_EquipmentSlots> WeaponType)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Character.BP_Character_C.FetchLocalWeaponRef");

	ABP_Character_C_FetchLocalWeaponRef_Params params;
	params.WeaponType = WeaponType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Character.BP_Character_C.OnRep_SprintingAll
// (BlueprintCallable, BlueprintEvent)

void ABP_Character_C::OnRep_SprintingAll()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Character.BP_Character_C.OnRep_SprintingAll");

	ABP_Character_C_OnRep_SprintingAll_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Character.BP_Character_C.OnRep_SpyGlassPose
// (HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_Character_C::OnRep_SpyGlassPose()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Character.BP_Character_C.OnRep_SpyGlassPose");

	ABP_Character_C_OnRep_SpyGlassPose_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Character.BP_Character_C.SelectInteractable
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_InteractableBase_C*  ClosestInteractable            (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class ABP_VehicleBase_C*       ClosestVehicle                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<E_InteractableType> InteractableType               (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           NothingSelected                (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_Character_C::SelectInteractable(class ABP_InteractableBase_C** ClosestInteractable, class ABP_VehicleBase_C** ClosestVehicle, TEnumAsByte<E_InteractableType>* InteractableType, bool* NothingSelected)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Character.BP_Character_C.SelectInteractable");

	ABP_Character_C_SelectInteractable_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ClosestInteractable != nullptr)
		*ClosestInteractable = params.ClosestInteractable;
	if (ClosestVehicle != nullptr)
		*ClosestVehicle = params.ClosestVehicle;
	if (InteractableType != nullptr)
		*InteractableType = params.InteractableType;
	if (NothingSelected != nullptr)
		*NothingSelected = params.NothingSelected;
}


// Function BP_Character.BP_Character_C.OnRep_LookingAtWorldMap
// (HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_Character_C::OnRep_LookingAtWorldMap()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Character.BP_Character_C.OnRep_LookingAtWorldMap");

	ABP_Character_C_OnRep_LookingAtWorldMap_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Character.BP_Character_C.ShowHideAmulet
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_Character_C::ShowHideAmulet()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Character.BP_Character_C.ShowHideAmulet");

	ABP_Character_C_ShowHideAmulet_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Character.BP_Character_C.OnRep_TeleportToShip
// (BlueprintCallable, BlueprintEvent)

void ABP_Character_C::OnRep_TeleportToShip()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Character.BP_Character_C.OnRep_TeleportToShip");

	ABP_Character_C_OnRep_TeleportToShip_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Character.BP_Character_C.SearchForLocalWeapons
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_Character_C::SearchForLocalWeapons()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Character.BP_Character_C.SearchForLocalWeapons");

	ABP_Character_C_SearchForLocalWeapons_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Character.BP_Character_C.OnRep_Melee
// (BlueprintCallable, BlueprintEvent)

void ABP_Character_C::OnRep_Melee()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Character.BP_Character_C.OnRep_Melee");

	ABP_Character_C_OnRep_Melee_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Character.BP_Character_C.OnRep_SideArm
// (BlueprintCallable, BlueprintEvent)

void ABP_Character_C::OnRep_SideArm()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Character.BP_Character_C.OnRep_SideArm");

	ABP_Character_C_OnRep_SideArm_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Character.BP_Character_C.OnRep_MainWeapon
// (BlueprintCallable, BlueprintEvent)

void ABP_Character_C::OnRep_MainWeapon()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Character.BP_Character_C.OnRep_MainWeapon");

	ABP_Character_C_OnRep_MainWeapon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Character.BP_Character_C.ResetLoadoutAndHealth
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_Character_C::ResetLoadoutAndHealth()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Character.BP_Character_C.ResetLoadoutAndHealth");

	ABP_Character_C_ResetLoadoutAndHealth_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Character.BP_Character_C.HideLocalWeapons
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           DontShowEquipedWeapon          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Character_C::HideLocalWeapons(bool DontShowEquipedWeapon)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Character.BP_Character_C.HideLocalWeapons");

	ABP_Character_C_HideLocalWeapons_Params params;
	params.DontShowEquipedWeapon = DontShowEquipedWeapon;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Character.BP_Character_C.SlowdownWhenFiring
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           WasSprinting                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_Character_C::SlowdownWhenFiring(bool* WasSprinting)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Character.BP_Character_C.SlowdownWhenFiring");

	ABP_Character_C_SlowdownWhenFiring_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (WasSprinting != nullptr)
		*WasSprinting = params.WasSprinting;
}


// Function BP_Character.BP_Character_C.SetSpringArmMode
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_Character_C::SetSpringArmMode()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Character.BP_Character_C.SetSpringArmMode");

	ABP_Character_C_SetSpringArmMode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Character.BP_Character_C.ShowFPSModelsOnly
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_Character_C::ShowFPSModelsOnly()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Character.BP_Character_C.ShowFPSModelsOnly");

	ABP_Character_C_ShowFPSModelsOnly_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Character.BP_Character_C.ToggleFPSMode
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ModeOn                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Character_C::ToggleFPSMode(bool ModeOn)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Character.BP_Character_C.ToggleFPSMode");

	ABP_Character_C_ToggleFPSMode_Params params;
	params.ModeOn = ModeOn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Character.BP_Character_C.LoadCustomisation
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_Character_C::LoadCustomisation()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Character.BP_Character_C.LoadCustomisation");

	ABP_Character_C_LoadCustomisation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Character.BP_Character_C.RemoveWeapon
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_EquipmentSlots>  Weapon                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Character_C::RemoveWeapon(TEnumAsByte<E_EquipmentSlots> Weapon)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Character.BP_Character_C.RemoveWeapon");

	ABP_Character_C_RemoveWeapon_Params params;
	params.Weapon = Weapon;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Character.BP_Character_C.ApplyOptions
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_Character_C::ApplyOptions()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Character.BP_Character_C.ApplyOptions");

	ABP_Character_C_ApplyOptions_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Character.BP_Character_C.OnRep_CameraRight
// (BlueprintCallable, BlueprintEvent)

void ABP_Character_C::OnRep_CameraRight()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Character.BP_Character_C.OnRep_CameraRight");

	ABP_Character_C_OnRep_CameraRight_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Character.BP_Character_C.OnRep_Customisation
// (BlueprintCallable, BlueprintEvent)

void ABP_Character_C::OnRep_Customisation()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Character.BP_Character_C.OnRep_Customisation");

	ABP_Character_C_OnRep_Customisation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Character.BP_Character_C.OnRep_BlockPose
// (BlueprintCallable, BlueprintEvent)

void ABP_Character_C::OnRep_BlockPose()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Character.BP_Character_C.OnRep_BlockPose");

	ABP_Character_C_OnRep_BlockPose_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Character.BP_Character_C.OnRep_Blocking
// (BlueprintCallable, BlueprintEvent)

void ABP_Character_C::OnRep_Blocking()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Character.BP_Character_C.OnRep_Blocking");

	ABP_Character_C_OnRep_Blocking_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Character.BP_Character_C.OnRep_IsDead
// (BlueprintCallable, BlueprintEvent)

void ABP_Character_C::OnRep_IsDead()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Character.BP_Character_C.OnRep_IsDead");

	ABP_Character_C_OnRep_IsDead_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Character.BP_Character_C.SetSpyGlassPPWeight
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Weight                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Character_C::SetSpyGlassPPWeight(float Weight)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Character.BP_Character_C.SetSpyGlassPPWeight");

	ABP_Character_C_SetSpyGlassPPWeight_Params params;
	params.Weight = Weight;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Character.BP_Character_C.RefreshAmmo
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_Character_C::RefreshAmmo()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Character.BP_Character_C.RefreshAmmo");

	ABP_Character_C_RefreshAmmo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Character.BP_Character_C.OnRep_EquipedWeapon
// (BlueprintCallable, BlueprintEvent)

void ABP_Character_C::OnRep_EquipedWeapon()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Character.BP_Character_C.OnRep_EquipedWeapon");

	ABP_Character_C_OnRep_EquipedWeapon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Character.BP_Character_C.DropItemDeathChest
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_Character_C::DropItemDeathChest()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Character.BP_Character_C.DropItemDeathChest");

	ABP_Character_C_DropItemDeathChest_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Character.BP_Character_C.LoadUpgrade
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_Character_C::LoadUpgrade()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Character.BP_Character_C.LoadUpgrade");

	ABP_Character_C_LoadUpgrade_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Character.BP_Character_C.LocalRepairDetect
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_Character_C::LocalRepairDetect()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Character.BP_Character_C.LocalRepairDetect");

	ABP_Character_C_LocalRepairDetect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Character.BP_Character_C.OnRep_Repairing
// (BlueprintCallable, BlueprintEvent)

void ABP_Character_C::OnRep_Repairing()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Character.BP_Character_C.OnRep_Repairing");

	ABP_Character_C_OnRep_Repairing_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Character.BP_Character_C.CheckThrowableAmmo
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_Items>           throwable                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           HasThrowableAmmo               (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_Character_C::CheckThrowableAmmo(TEnumAsByte<E_Items> throwable, bool* HasThrowableAmmo)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Character.BP_Character_C.CheckThrowableAmmo");

	ABP_Character_C_CheckThrowableAmmo_Params params;
	params.throwable = throwable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (HasThrowableAmmo != nullptr)
		*HasThrowableAmmo = params.HasThrowableAmmo;
}


// Function BP_Character.BP_Character_C.CycleThrowables
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           NoThrowablesFound              (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_Character_C::CycleThrowables(bool* NoThrowablesFound)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Character.BP_Character_C.CycleThrowables");

	ABP_Character_C_CycleThrowables_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NoThrowablesFound != nullptr)
		*NoThrowablesFound = params.NoThrowablesFound;
}


// Function BP_Character.BP_Character_C.SpawnThrowable
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_Character_C::SpawnThrowable()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Character.BP_Character_C.SpawnThrowable");

	ABP_Character_C_SpawnThrowable_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Character.BP_Character_C.SetEmblemAndColor
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_Character_C::SetEmblemAndColor()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Character.BP_Character_C.SetEmblemAndColor");

	ABP_Character_C_SetEmblemAndColor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Character.BP_Character_C.PaintSpray
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 ForwardVector                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Character_C::PaintSpray(const struct FVector& ForwardVector)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Character.BP_Character_C.PaintSpray");

	ABP_Character_C_PaintSpray_Params params;
	params.ForwardVector = ForwardVector;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Character.BP_Character_C.CheckIfFinalBlow
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            damage                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           headshot                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsFinalBlow                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_Character_C::CheckIfFinalBlow(int damage, bool headshot, bool* IsFinalBlow)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Character.BP_Character_C.CheckIfFinalBlow");

	ABP_Character_C_CheckIfFinalBlow_Params params;
	params.damage = damage;
	params.headshot = headshot;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsFinalBlow != nullptr)
		*IsFinalBlow = params.IsFinalBlow;
}


// Function BP_Character.BP_Character_C.CleanUp
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_Character_C::CleanUp()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Character.BP_Character_C.CleanUp");

	ABP_Character_C_CleanUp_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Character.BP_Character_C.OnRep_Username
// (BlueprintCallable, BlueprintEvent)

void ABP_Character_C::OnRep_Username()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Character.BP_Character_C.OnRep_Username");

	ABP_Character_C_OnRep_Username_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Character.BP_Character_C.PlayReloadAnimation
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            WeaponID                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Character_C::PlayReloadAnimation(int WeaponID)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Character.BP_Character_C.PlayReloadAnimation");

	ABP_Character_C_PlayReloadAnimation_Params params;
	params.WeaponID = WeaponID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Character.BP_Character_C.CancelReloads
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_Character_C::CancelReloads()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Character.BP_Character_C.CancelReloads");

	ABP_Character_C_CancelReloads_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Character.BP_Character_C.UnloadWeaponsServer
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_Character_C::UnloadWeaponsServer()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Character.BP_Character_C.UnloadWeaponsServer");

	ABP_Character_C_UnloadWeaponsServer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Character.BP_Character_C.OnRep_TeamID
// (BlueprintCallable, BlueprintEvent)

void ABP_Character_C::OnRep_TeamID()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Character.BP_Character_C.OnRep_TeamID");

	ABP_Character_C_OnRep_TeamID_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Character.BP_Character_C.EnterWalkingMode
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_Character_C::EnterWalkingMode()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Character.BP_Character_C.EnterWalkingMode");

	ABP_Character_C_EnterWalkingMode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Character.BP_Character_C.EnterSwimmingMode
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_Character_C::EnterSwimmingMode()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Character.BP_Character_C.EnterSwimmingMode");

	ABP_Character_C_EnterSwimmingMode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Character.BP_Character_C.GetEquipedWeaponID
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            WeaponID                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_Character_C::GetEquipedWeaponID(int* WeaponID)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Character.BP_Character_C.GetEquipedWeaponID");

	ABP_Character_C_GetEquipedWeaponID_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (WeaponID != nullptr)
		*WeaponID = params.WeaponID;
}


// Function BP_Character.BP_Character_C.OnRep_Steering
// (BlueprintCallable, BlueprintEvent)

void ABP_Character_C::OnRep_Steering()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Character.BP_Character_C.OnRep_Steering");

	ABP_Character_C_OnRep_Steering_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Character.BP_Character_C.OnRep_VehicleState
// (BlueprintCallable, BlueprintEvent)

void ABP_Character_C::OnRep_VehicleState()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Character.BP_Character_C.OnRep_VehicleState");

	ABP_Character_C_OnRep_VehicleState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Character.BP_Character_C.AddItem
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_Items>           Item                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Amount                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Character_C::AddItem(TEnumAsByte<E_Items> Item, int Amount)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Character.BP_Character_C.AddItem");

	ABP_Character_C_AddItem_Params params;
	params.Item = Item;
	params.Amount = Amount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Character.BP_Character_C.DropWeapon
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_EquipmentSlots>  EquipedWeapon                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           DropToSpecificLocation         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FTransform              SpecificDropLocation           (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// bool                           DestroyWeapon                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Character_C::DropWeapon(TEnumAsByte<E_EquipmentSlots> EquipedWeapon, bool DropToSpecificLocation, const struct FTransform& SpecificDropLocation, bool DestroyWeapon)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Character.BP_Character_C.DropWeapon");

	ABP_Character_C_DropWeapon_Params params;
	params.EquipedWeapon = EquipedWeapon;
	params.DropToSpecificLocation = DropToSpecificLocation;
	params.SpecificDropLocation = SpecificDropLocation;
	params.DestroyWeapon = DestroyWeapon;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Character.BP_Character_C.OnRep_AnimationType
// (BlueprintCallable, BlueprintEvent)

void ABP_Character_C::OnRep_AnimationType()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Character.BP_Character_C.OnRep_AnimationType");

	ABP_Character_C_OnRep_AnimationType_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Character.BP_Character_C.UnequipWeapons
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_Character_C::UnequipWeapons()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Character.BP_Character_C.UnequipWeapons");

	ABP_Character_C_UnequipWeapons_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Character.BP_Character_C.LoadMelee
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_Character_C::LoadMelee()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Character.BP_Character_C.LoadMelee");

	ABP_Character_C_LoadMelee_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Character.BP_Character_C.LoadSideArm
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_Character_C::LoadSideArm()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Character.BP_Character_C.LoadSideArm");

	ABP_Character_C_LoadSideArm_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Character.BP_Character_C.LoadMainWeapon
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_Character_C::LoadMainWeapon()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Character.BP_Character_C.LoadMainWeapon");

	ABP_Character_C_LoadMainWeapon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Character.BP_Character_C.ShipDetect
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_Character_C::ShipDetect()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Character.BP_Character_C.ShipDetect");

	ABP_Character_C_ShipDetect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Character.BP_Character_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_Character_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Character.BP_Character_C.UserConstructionScript");

	ABP_Character_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Character.BP_Character_C.InpActEvt_Inventory_K2Node_InputActionEvent_5
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_Character_C::InpActEvt_Inventory_K2Node_InputActionEvent_5(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Character.BP_Character_C.InpActEvt_Inventory_K2Node_InputActionEvent_5");

	ABP_Character_C_InpActEvt_Inventory_K2Node_InputActionEvent_5_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Character.BP_Character_C.InpActEvt_K_K2Node_InputKeyEvent_12
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_Character_C::InpActEvt_K_K2Node_InputKeyEvent_12(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Character.BP_Character_C.InpActEvt_K_K2Node_InputKeyEvent_12");

	ABP_Character_C_InpActEvt_K_K2Node_InputKeyEvent_12_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Character.BP_Character_C.InpActEvt_X_K2Node_InputKeyEvent_11
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_Character_C::InpActEvt_X_K2Node_InputKeyEvent_11(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Character.BP_Character_C.InpActEvt_X_K2Node_InputKeyEvent_11");

	ABP_Character_C_InpActEvt_X_K2Node_InputKeyEvent_11_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Character.BP_Character_C.InpActEvt_Reload_K2Node_InputActionEvent_4
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_Character_C::InpActEvt_Reload_K2Node_InputActionEvent_4(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Character.BP_Character_C.InpActEvt_Reload_K2Node_InputActionEvent_4");

	ABP_Character_C_InpActEvt_Reload_K2Node_InputActionEvent_4_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Character.BP_Character_C.InpActEvt_CrewBanner_K2Node_InputActionEvent_3
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_Character_C::InpActEvt_CrewBanner_K2Node_InputActionEvent_3(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Character.BP_Character_C.InpActEvt_CrewBanner_K2Node_InputActionEvent_3");

	ABP_Character_C_InpActEvt_CrewBanner_K2Node_InputActionEvent_3_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Character.BP_Character_C.InpActEvt_PaintSpray_K2Node_InputActionEvent_2
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_Character_C::InpActEvt_PaintSpray_K2Node_InputActionEvent_2(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Character.BP_Character_C.InpActEvt_PaintSpray_K2Node_InputActionEvent_2");

	ABP_Character_C_InpActEvt_PaintSpray_K2Node_InputActionEvent_2_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Character.BP_Character_C.InpActEvt_Spyglass_K2Node_InputActionEvent_1
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_Character_C::InpActEvt_Spyglass_K2Node_InputActionEvent_1(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Character.BP_Character_C.InpActEvt_Spyglass_K2Node_InputActionEvent_1");

	ABP_Character_C_InpActEvt_Spyglass_K2Node_InputActionEvent_1_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Character.BP_Character_C.InpActEvt_Decimal_K2Node_InputKeyEvent_10
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_Character_C::InpActEvt_Decimal_K2Node_InputKeyEvent_10(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Character.BP_Character_C.InpActEvt_Decimal_K2Node_InputKeyEvent_10");

	ABP_Character_C_InpActEvt_Decimal_K2Node_InputKeyEvent_10_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Character.BP_Character_C.InpActEvt_NumPadFive_K2Node_InputKeyEvent_9
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_Character_C::InpActEvt_NumPadFive_K2Node_InputKeyEvent_9(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Character.BP_Character_C.InpActEvt_NumPadFive_K2Node_InputKeyEvent_9");

	ABP_Character_C_InpActEvt_NumPadFive_K2Node_InputKeyEvent_9_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Character.BP_Character_C.InpActEvt_NumPadEight_K2Node_InputKeyEvent_8
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_Character_C::InpActEvt_NumPadEight_K2Node_InputKeyEvent_8(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Character.BP_Character_C.InpActEvt_NumPadEight_K2Node_InputKeyEvent_8");

	ABP_Character_C_InpActEvt_NumPadEight_K2Node_InputKeyEvent_8_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Character.BP_Character_C.InpActEvt_NumPadSix_K2Node_InputKeyEvent_7
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_Character_C::InpActEvt_NumPadSix_K2Node_InputKeyEvent_7(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Character.BP_Character_C.InpActEvt_NumPadSix_K2Node_InputKeyEvent_7");

	ABP_Character_C_InpActEvt_NumPadSix_K2Node_InputKeyEvent_7_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Character.BP_Character_C.InpActEvt_NumPadFour_K2Node_InputKeyEvent_6
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_Character_C::InpActEvt_NumPadFour_K2Node_InputKeyEvent_6(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Character.BP_Character_C.InpActEvt_NumPadFour_K2Node_InputKeyEvent_6");

	ABP_Character_C_InpActEvt_NumPadFour_K2Node_InputKeyEvent_6_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Character.BP_Character_C.InpActEvt_Subtract_K2Node_InputKeyEvent_5
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_Character_C::InpActEvt_Subtract_K2Node_InputKeyEvent_5(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Character.BP_Character_C.InpActEvt_Subtract_K2Node_InputKeyEvent_5");

	ABP_Character_C_InpActEvt_Subtract_K2Node_InputKeyEvent_5_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Character.BP_Character_C.InpActEvt_Down_K2Node_InputKeyEvent_4
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_Character_C::InpActEvt_Down_K2Node_InputKeyEvent_4(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Character.BP_Character_C.InpActEvt_Down_K2Node_InputKeyEvent_4");

	ABP_Character_C_InpActEvt_Down_K2Node_InputKeyEvent_4_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Character.BP_Character_C.InpActEvt_Up_K2Node_InputKeyEvent_3
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_Character_C::InpActEvt_Up_K2Node_InputKeyEvent_3(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Character.BP_Character_C.InpActEvt_Up_K2Node_InputKeyEvent_3");

	ABP_Character_C_InpActEvt_Up_K2Node_InputKeyEvent_3_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Character.BP_Character_C.InpActEvt_Right_K2Node_InputKeyEvent_2
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_Character_C::InpActEvt_Right_K2Node_InputKeyEvent_2(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Character.BP_Character_C.InpActEvt_Right_K2Node_InputKeyEvent_2");

	ABP_Character_C_InpActEvt_Right_K2Node_InputKeyEvent_2_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Character.BP_Character_C.InpActEvt_Left_K2Node_InputKeyEvent_1
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_Character_C::InpActEvt_Left_K2Node_InputKeyEvent_1(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Character.BP_Character_C.InpActEvt_Left_K2Node_InputKeyEvent_1");

	ABP_Character_C_InpActEvt_Left_K2Node_InputKeyEvent_1_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Character.BP_Character_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_Character_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Character.BP_Character_C.ReceiveBeginPlay");

	ABP_Character_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Character.BP_Character_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Character_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Character.BP_Character_C.ReceiveTick");

	ABP_Character_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Character.BP_Character_C.MC_SetSteeringWheelRef
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_VehicleSteeringWheel_C* SteeringWheelRef               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Character_C::MC_SetSteeringWheelRef(class ABP_VehicleSteeringWheel_C* SteeringWheelRef)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Character.BP_Character_C.MC_SetSteeringWheelRef");

	ABP_Character_C_MC_SetSteeringWheelRef_Params params;
	params.SteeringWheelRef = SteeringWheelRef;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Character.BP_Character_C.ReceiveDestroyed
// (Event, Public, BlueprintEvent)

void ABP_Character_C::ReceiveDestroyed()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Character.BP_Character_C.ReceiveDestroyed");

	ABP_Character_C_ReceiveDestroyed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Character.BP_Character_C.OC_HitIndicator
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)

void ABP_Character_C::OC_HitIndicator()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Character.BP_Character_C.OC_HitIndicator");

	ABP_Character_C_OC_HitIndicator_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Character.BP_Character_C.MC_RefreshBanner
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)

void ABP_Character_C::MC_RefreshBanner()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Character.BP_Character_C.MC_RefreshBanner");

	ABP_Character_C_MC_RefreshBanner_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Character.BP_Character_C.OC_AddPlayerEffect
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Time                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Character_C::OC_AddPlayerEffect(class UClass* Widget, float Time)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Character.BP_Character_C.OC_AddPlayerEffect");

	ABP_Character_C_OC_AddPlayerEffect_Params params;
	params.Widget = Widget;
	params.Time = Time;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Character.BP_Character_C.OC_RemovePlayerEffect
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)

void ABP_Character_C::OC_RemovePlayerEffect()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Character.BP_Character_C.OC_RemovePlayerEffect");

	ABP_Character_C_OC_RemovePlayerEffect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Character.BP_Character_C.OC_UpgradeInventory
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)

void ABP_Character_C::OC_UpgradeInventory()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Character.BP_Character_C.OC_UpgradeInventory");

	ABP_Character_C_OC_UpgradeInventory_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Character.BP_Character_C.BreakLootcrate
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_Lootcrate_C*         lootcrate                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Character_C::BreakLootcrate(class ABP_Lootcrate_C* lootcrate)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Character.BP_Character_C.BreakLootcrate");

	ABP_Character_C_BreakLootcrate_Params params;
	params.lootcrate = lootcrate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Character.BP_Character_C.S_BreakLootCrate
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_Lootcrate_C*         lootcrate                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Character_C::S_BreakLootCrate(class ABP_Lootcrate_C* lootcrate)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Character.BP_Character_C.S_BreakLootCrate");

	ABP_Character_C_S_BreakLootCrate_Params params;
	params.lootcrate = lootcrate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Character.BP_Character_C.DropItemChest
// (BlueprintCallable, BlueprintEvent)

void ABP_Character_C::DropItemChest()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Character.BP_Character_C.DropItemChest");

	ABP_Character_C_DropItemChest_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Character.BP_Character_C.S_CleanUpInteractable
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_InteractableBase_C*  InteractableRef                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Character_C::S_CleanUpInteractable(class ABP_InteractableBase_C* InteractableRef)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Character.BP_Character_C.S_CleanUpInteractable");

	ABP_Character_C_S_CleanUpInteractable_Params params;
	params.InteractableRef = InteractableRef;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Character.BP_Character_C.InpAxisKeyEvt_MouseY_K2Node_InputAxisKeyEvent_2
// (BlueprintEvent)
// Parameters:
// float                          AxisValue                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Character_C::InpAxisKeyEvt_MouseY_K2Node_InputAxisKeyEvent_2(float AxisValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Character.BP_Character_C.InpAxisKeyEvt_MouseY_K2Node_InputAxisKeyEvent_2");

	ABP_Character_C_InpAxisKeyEvt_MouseY_K2Node_InputAxisKeyEvent_2_Params params;
	params.AxisValue = AxisValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Character.BP_Character_C.InpAxisKeyEvt_MouseX_K2Node_InputAxisKeyEvent_1
// (BlueprintEvent)
// Parameters:
// float                          AxisValue                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Character_C::InpAxisKeyEvt_MouseX_K2Node_InputAxisKeyEvent_1(float AxisValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Character.BP_Character_C.InpAxisKeyEvt_MouseX_K2Node_InputAxisKeyEvent_1");

	ABP_Character_C_InpAxisKeyEvt_MouseX_K2Node_InputAxisKeyEvent_1_Params params;
	params.AxisValue = AxisValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Character.BP_Character_C.OC_ResetShipTeleportTime
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)

void ABP_Character_C::OC_ResetShipTeleportTime()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Character.BP_Character_C.OC_ResetShipTeleportTime");

	ABP_Character_C_OC_ResetShipTeleportTime_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Character.BP_Character_C.AddRepairHit
// (BlueprintCallable, BlueprintEvent)

void ABP_Character_C::AddRepairHit()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Character.BP_Character_C.AddRepairHit");

	ABP_Character_C_AddRepairHit_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Character.BP_Character_C.OC_TeleportToShipStartLocation
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)

void ABP_Character_C::OC_TeleportToShipStartLocation()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Character.BP_Character_C.OC_TeleportToShipStartLocation");

	ABP_Character_C_OC_TeleportToShipStartLocation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Character.BP_Character_C.S_SetLevel
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Level                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Character_C::S_SetLevel(int Level)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Character.BP_Character_C.S_SetLevel");

	ABP_Character_C_S_SetLevel_Params params;
	params.Level = Level;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Character.BP_Character_C.ResetRefreshHUD
// (BlueprintCallable, BlueprintEvent)

void ABP_Character_C::ResetRefreshHUD()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Character.BP_Character_C.ResetRefreshHUD");

	ABP_Character_C_ResetRefreshHUD_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Character.BP_Character_C.S_SetHammerHittingSound
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Sound                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Character_C::S_SetHammerHittingSound(bool Sound)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Character.BP_Character_C.S_SetHammerHittingSound");

	ABP_Character_C_S_SetHammerHittingSound_Params params;
	params.Sound = Sound;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Character.BP_Character_C.S_ReequipSavedWeapon
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)

void ABP_Character_C::S_ReequipSavedWeapon()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Character.BP_Character_C.S_ReequipSavedWeapon");

	ABP_Character_C_S_ReequipSavedWeapon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Character.BP_Character_C.OC_TeleportPlayer
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 Location                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     NewBase                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void ABP_Character_C::OC_TeleportPlayer(const struct FVector& Location, class UPrimitiveComponent* NewBase)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Character.BP_Character_C.OC_TeleportPlayer");

	ABP_Character_C_OC_TeleportPlayer_Params params;
	params.Location = Location;
	params.NewBase = NewBase;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Character.BP_Character_C.ReloadKeys
// (BlueprintCallable, BlueprintEvent)

void ABP_Character_C::ReloadKeys()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Character.BP_Character_C.ReloadKeys");

	ABP_Character_C_ReloadKeys_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Character.BP_Character_C.TeleportPlayer
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 Location                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     NewBase                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void ABP_Character_C::TeleportPlayer(const struct FVector& Location, class UPrimitiveComponent* NewBase)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Character.BP_Character_C.TeleportPlayer");

	ABP_Character_C_TeleportPlayer_Params params;
	params.Location = Location;
	params.NewBase = NewBase;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Character.BP_Character_C.S_AddMastRepairHit
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_MastBase_C*          MastRef                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Character_C::S_AddMastRepairHit(class ABP_MastBase_C* MastRef)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Character.BP_Character_C.S_AddMastRepairHit");

	ABP_Character_C_S_AddMastRepairHit_Params params;
	params.MastRef = MastRef;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Character.BP_Character_C.S_AddHullRepairHit
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_HullDamage_C*        HullDamageRef                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Character_C::S_AddHullRepairHit(class ABP_HullDamage_C* HullDamageRef)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Character.BP_Character_C.S_AddHullRepairHit");

	ABP_Character_C_S_AddHullRepairHit_Params params;
	params.HullDamageRef = HullDamageRef;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Character.BP_Character_C.TeleportShip
// (BlueprintCallable, BlueprintEvent)

void ABP_Character_C::TeleportShip()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Character.BP_Character_C.TeleportShip");

	ABP_Character_C_TeleportShip_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Character.BP_Character_C.S_SetIsServer
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsServer                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Character_C::S_SetIsServer(bool IsServer)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Character.BP_Character_C.S_SetIsServer");

	ABP_Character_C_S_SetIsServer_Params params;
	params.IsServer = IsServer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Character.BP_Character_C.S_LoadCustomisation
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FST_Customisation       Customisation                  (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_Character_C::S_LoadCustomisation(const struct FST_Customisation& Customisation)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Character.BP_Character_C.S_LoadCustomisation");

	ABP_Character_C_S_LoadCustomisation_Params params;
	params.Customisation = Customisation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Character.BP_Character_C.S_SetStomachPitch
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Pitch                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Character_C::S_SetStomachPitch(float Pitch)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Character.BP_Character_C.S_SetStomachPitch");

	ABP_Character_C_S_SetStomachPitch_Params params;
	params.Pitch = Pitch;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Character.BP_Character_C.LeaveSwimming
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           EnterVehicle                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class ABP_VehicleBase_C*       VehicleRef                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Character_C::LeaveSwimming(bool EnterVehicle, class ABP_VehicleBase_C* VehicleRef)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Character.BP_Character_C.LeaveSwimming");

	ABP_Character_C_LeaveSwimming_Params params;
	params.EnterVehicle = EnterVehicle;
	params.VehicleRef = VehicleRef;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Character.BP_Character_C.OpenInventory
// (BlueprintCallable, BlueprintEvent)

void ABP_Character_C::OpenInventory()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Character.BP_Character_C.OpenInventory");

	ABP_Character_C_OpenInventory_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Character.BP_Character_C.S_GiveResources
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_QuickAccesPointBase_C* QuickAccessPoint               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Character_C::S_GiveResources(class ABP_QuickAccesPointBase_C* QuickAccessPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Character.BP_Character_C.S_GiveResources");

	ABP_Character_C_S_GiveResources_Params params;
	params.QuickAccessPoint = QuickAccessPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Character.BP_Character_C.GiveResources
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_QuickAccesPointBase_C* QuickAccessPoint               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Character_C::GiveResources(class ABP_QuickAccesPointBase_C* QuickAccessPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Character.BP_Character_C.GiveResources");

	ABP_Character_C_GiveResources_Params params;
	params.QuickAccessPoint = QuickAccessPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Character.BP_Character_C.OC_DepositedAll
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)

void ABP_Character_C::OC_DepositedAll()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Character.BP_Character_C.OC_DepositedAll");

	ABP_Character_C_OC_DepositedAll_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Character.BP_Character_C.QuickDepositAll
// (BlueprintCallable, BlueprintEvent)

void ABP_Character_C::QuickDepositAll()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Character.BP_Character_C.QuickDepositAll");

	ABP_Character_C_QuickDepositAll_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Character.BP_Character_C.S_RemoveFromOtherContainer
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UInventory_C*            InventoryRef                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// TEnumAsByte<E_Items>           Item                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Amount                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Character_C::S_RemoveFromOtherContainer(class UInventory_C* InventoryRef, TEnumAsByte<E_Items> Item, int Amount)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Character.BP_Character_C.S_RemoveFromOtherContainer");

	ABP_Character_C_S_RemoveFromOtherContainer_Params params;
	params.InventoryRef = InventoryRef;
	params.Item = Item;
	params.Amount = Amount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Character.BP_Character_C.CloseCannonballChest
// (BlueprintCallable, BlueprintEvent)

void ABP_Character_C::CloseCannonballChest()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Character.BP_Character_C.CloseCannonballChest");

	ABP_Character_C_CloseCannonballChest_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Character.BP_Character_C.OpenCannonballChest
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_BoatMeshBase_C*      ShipRef                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Character_C::OpenCannonballChest(class ABP_BoatMeshBase_C* ShipRef)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Character.BP_Character_C.OpenCannonballChest");

	ABP_Character_C_OpenCannonballChest_Params params;
	params.ShipRef = ShipRef;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Character.BP_Character_C.S_IncreaseContainerUsers
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_ContainerBase_C*     ContainerRef                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Character_C::S_IncreaseContainerUsers(class ABP_ContainerBase_C* ContainerRef)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Character.BP_Character_C.S_IncreaseContainerUsers");

	ABP_Character_C_S_IncreaseContainerUsers_Params params;
	params.ContainerRef = ContainerRef;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Character.BP_Character_C.S_DecreaseContainerUsers
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_ContainerBase_C*     ContainerRef                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Character_C::S_DecreaseContainerUsers(class ABP_ContainerBase_C* ContainerRef)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Character.BP_Character_C.S_DecreaseContainerUsers");

	ABP_Character_C_S_DecreaseContainerUsers_Params params;
	params.ContainerRef = ContainerRef;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Character.BP_Character_C.S_TakeAllFromContainer
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)

void ABP_Character_C::S_TakeAllFromContainer()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Character.BP_Character_C.S_TakeAllFromContainer");

	ABP_Character_C_S_TakeAllFromContainer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Character.BP_Character_C.OC_NotEnoughRoom
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)

void ABP_Character_C::OC_NotEnoughRoom()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Character.BP_Character_C.OC_NotEnoughRoom");

	ABP_Character_C_OC_NotEnoughRoom_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Character.BP_Character_C.S_DepositAllToContainer
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)

void ABP_Character_C::S_DepositAllToContainer()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Character.BP_Character_C.S_DepositAllToContainer");

	ABP_Character_C_S_DepositAllToContainer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Character.BP_Character_C.CloseContainer
// (BlueprintCallable, BlueprintEvent)

void ABP_Character_C::CloseContainer()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Character.BP_Character_C.CloseContainer");

	ABP_Character_C_CloseContainer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Character.BP_Character_C.S_RemoveFromContainer
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_Items>           Item                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Amount                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Character_C::S_RemoveFromContainer(TEnumAsByte<E_Items> Item, int Amount)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Character.BP_Character_C.S_RemoveFromContainer");

	ABP_Character_C_S_RemoveFromContainer_Params params;
	params.Item = Item;
	params.Amount = Amount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Character.BP_Character_C.S_AddToContainer
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_Items>           Item                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Amount                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Character_C::S_AddToContainer(TEnumAsByte<E_Items> Item, int Amount)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Character.BP_Character_C.S_AddToContainer");

	ABP_Character_C_S_AddToContainer_Params params;
	params.Item = Item;
	params.Amount = Amount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Character.BP_Character_C.RequestCloseContainer
// (BlueprintCallable, BlueprintEvent)

void ABP_Character_C::RequestCloseContainer()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Character.BP_Character_C.RequestCloseContainer");

	ABP_Character_C_RequestCloseContainer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Character.BP_Character_C.OpenContainer
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_ContainerBase_C*     ContainerLocalRef              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Character_C::OpenContainer(class ABP_ContainerBase_C* ContainerLocalRef)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Character.BP_Character_C.OpenContainer");

	ABP_Character_C_OpenContainer_Params params;
	params.ContainerLocalRef = ContainerLocalRef;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Character.BP_Character_C.CloseInventory
// (BlueprintCallable, BlueprintEvent)

void ABP_Character_C::CloseInventory()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Character.BP_Character_C.CloseInventory");

	ABP_Character_C_CloseInventory_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Character.BP_Character_C.RefreshTeleport
// (BlueprintCallable, BlueprintEvent)

void ABP_Character_C::RefreshTeleport()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Character.BP_Character_C.RefreshTeleport");

	ABP_Character_C_RefreshTeleport_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Character.BP_Character_C.OC_ResetCanSwitch
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)

void ABP_Character_C::OC_ResetCanSwitch()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Character.BP_Character_C.OC_ResetCanSwitch");

	ABP_Character_C_OC_ResetCanSwitch_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Character.BP_Character_C.MC_TeleportToShip
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Teleporting                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Character_C::MC_TeleportToShip(bool Teleporting)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Character.BP_Character_C.MC_TeleportToShip");

	ABP_Character_C_MC_TeleportToShip_Params params;
	params.Teleporting = Teleporting;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Character.BP_Character_C.S_SetTeleportToShip
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Teleporting                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Character_C::S_SetTeleportToShip(bool Teleporting)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Character.BP_Character_C.S_SetTeleportToShip");

	ABP_Character_C_S_SetTeleportToShip_Params params;
	params.Teleporting = Teleporting;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Character.BP_Character_C.OC_EquipWeapon
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_EquipmentSlots>  SwitchToWeaponType             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Character_C::OC_EquipWeapon(TEnumAsByte<E_EquipmentSlots> SwitchToWeaponType)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Character.BP_Character_C.OC_EquipWeapon");

	ABP_Character_C_OC_EquipWeapon_Params params;
	params.SwitchToWeaponType = SwitchToWeaponType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Character.BP_Character_C.OC_UnequipWeapon
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)

void ABP_Character_C::OC_UnequipWeapon()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Character.BP_Character_C.OC_UnequipWeapon");

	ABP_Character_C_OC_UnequipWeapon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Character.BP_Character_C.OC_SetWalkAndSprintSpeed
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            SprintSpeed                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            WalkSpeed                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Character_C::OC_SetWalkAndSprintSpeed(int SprintSpeed, int WalkSpeed)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Character.BP_Character_C.OC_SetWalkAndSprintSpeed");

	ABP_Character_C_OC_SetWalkAndSprintSpeed_Params params;
	params.SprintSpeed = SprintSpeed;
	params.WalkSpeed = WalkSpeed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Character.BP_Character_C.SetWalkAndSprintSpeed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            SprintSpeed                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            WalkSpeed                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Character_C::SetWalkAndSprintSpeed(int SprintSpeed, int WalkSpeed)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Character.BP_Character_C.SetWalkAndSprintSpeed");

	ABP_Character_C_SetWalkAndSprintSpeed_Params params;
	params.SprintSpeed = SprintSpeed;
	params.WalkSpeed = WalkSpeed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Character.BP_Character_C.StopShipTeleport
// (BlueprintCallable, BlueprintEvent)

void ABP_Character_C::StopShipTeleport()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Character.BP_Character_C.StopShipTeleport");

	ABP_Character_C_StopShipTeleport_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Character.BP_Character_C.ShipTeleport
// (BlueprintCallable, BlueprintEvent)

void ABP_Character_C::ShipTeleport()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Character.BP_Character_C.ShipTeleport");

	ABP_Character_C_ShipTeleport_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Character.BP_Character_C.SwitchToHammer
// (BlueprintCallable, BlueprintEvent)

void ABP_Character_C::SwitchToHammer()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Character.BP_Character_C.SwitchToHammer");

	ABP_Character_C_SwitchToHammer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Character.BP_Character_C.SwitchToMelee
// (BlueprintCallable, BlueprintEvent)

void ABP_Character_C::SwitchToMelee()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Character.BP_Character_C.SwitchToMelee");

	ABP_Character_C_SwitchToMelee_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Character.BP_Character_C.SwitchToSecondary
// (BlueprintCallable, BlueprintEvent)

void ABP_Character_C::SwitchToSecondary()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Character.BP_Character_C.SwitchToSecondary");

	ABP_Character_C_SwitchToSecondary_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Character.BP_Character_C.SwitchToMainWeapon
// (BlueprintCallable, BlueprintEvent)

void ABP_Character_C::SwitchToMainWeapon()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Character.BP_Character_C.SwitchToMainWeapon");

	ABP_Character_C_SwitchToMainWeapon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Character.BP_Character_C.ChargeTeleport
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           StopCharging                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Character_C::ChargeTeleport(bool StopCharging)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Character.BP_Character_C.ChargeTeleport");

	ABP_Character_C_ChargeTeleport_Params params;
	params.StopCharging = StopCharging;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Character.BP_Character_C.S_DropWeapon
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           DropFromInventory              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<E_EquipmentSlots>  WeaponSlot_IfFromInventory_    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Character_C::S_DropWeapon(bool DropFromInventory, TEnumAsByte<E_EquipmentSlots> WeaponSlot_IfFromInventory_)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Character.BP_Character_C.S_DropWeapon");

	ABP_Character_C_S_DropWeapon_Params params;
	params.DropFromInventory = DropFromInventory;
	params.WeaponSlot_IfFromInventory_ = WeaponSlot_IfFromInventory_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Character.BP_Character_C.S_SwitchWeapon
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_EquipmentSlots>  WeaponType                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            UpgradeID                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FTransform              SwitchToTransform              (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// bool                           Switch                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           DestroyWeapon                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Character_C::S_SwitchWeapon(TEnumAsByte<E_EquipmentSlots> WeaponType, int UpgradeID, const struct FTransform& SwitchToTransform, bool Switch, bool DestroyWeapon)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Character.BP_Character_C.S_SwitchWeapon");

	ABP_Character_C_S_SwitchWeapon_Params params;
	params.WeaponType = WeaponType;
	params.UpgradeID = UpgradeID;
	params.SwitchToTransform = SwitchToTransform;
	params.Switch = Switch;
	params.DestroyWeapon = DestroyWeapon;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Character.BP_Character_C.S_ActionbarSelect
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_EquipmentSlots>  Selection                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           FastSwitch                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Character_C::S_ActionbarSelect(TEnumAsByte<E_EquipmentSlots> Selection, bool FastSwitch)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Character.BP_Character_C.S_ActionbarSelect");

	ABP_Character_C_S_ActionbarSelect_Params params;
	params.Selection = Selection;
	params.FastSwitch = FastSwitch;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Character.BP_Character_C.AddSprintBlockTime
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Time                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Character_C::AddSprintBlockTime(float Time)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Character.BP_Character_C.AddSprintBlockTime");

	ABP_Character_C_AddSprintBlockTime_Params params;
	params.Time = Time;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Character.BP_Character_C.PrimaryFireReleased
// (BlueprintCallable, BlueprintEvent)

void ABP_Character_C::PrimaryFireReleased()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Character.BP_Character_C.PrimaryFireReleased");

	ABP_Character_C_PrimaryFireReleased_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Character.BP_Character_C.PrimaryFirePressed
// (BlueprintCallable, BlueprintEvent)

void ABP_Character_C::PrimaryFirePressed()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Character.BP_Character_C.PrimaryFirePressed");

	ABP_Character_C_PrimaryFirePressed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Character.BP_Character_C.SecondaryFireReleased
// (BlueprintCallable, BlueprintEvent)

void ABP_Character_C::SecondaryFireReleased()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Character.BP_Character_C.SecondaryFireReleased");

	ABP_Character_C_SecondaryFireReleased_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Character.BP_Character_C.SecondaryFirePressed
// (BlueprintCallable, BlueprintEvent)

void ABP_Character_C::SecondaryFirePressed()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Character.BP_Character_C.SecondaryFirePressed");

	ABP_Character_C_SecondaryFirePressed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Character.BP_Character_C.OC_LeaveSecondaryFire
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)

void ABP_Character_C::OC_LeaveSecondaryFire()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Character.BP_Character_C.OC_LeaveSecondaryFire");

	ABP_Character_C_OC_LeaveSecondaryFire_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Character.BP_Character_C.LeaveSecondaryFire
// (BlueprintCallable, BlueprintEvent)

void ABP_Character_C::LeaveSecondaryFire()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Character.BP_Character_C.LeaveSecondaryFire");

	ABP_Character_C_LeaveSecondaryFire_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Character.BP_Character_C.S_MeleePlayerHit
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 Location                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class ABP_Character_C*         Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Character_C::S_MeleePlayerHit(const struct FVector& Location, class ABP_Character_C* Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Character.BP_Character_C.S_MeleePlayerHit");

	ABP_Character_C_S_MeleePlayerHit_Params params;
	params.Location = Location;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Character.BP_Character_C.MeleePlayerHit
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 Location                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class ABP_Character_C*         Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Character_C::MeleePlayerHit(const struct FVector& Location, class ABP_Character_C* Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Character.BP_Character_C.MeleePlayerHit");

	ABP_Character_C_MeleePlayerHit_Params params;
	params.Location = Location;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Character.BP_Character_C.S_MeleeHitOther
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 Location                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Normal                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  HitActor                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            AnimationDirection             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Character_C::S_MeleeHitOther(const struct FVector& Location, const struct FVector& Normal, class AActor* HitActor, int AnimationDirection)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Character.BP_Character_C.S_MeleeHitOther");

	ABP_Character_C_S_MeleeHitOther_Params params;
	params.Location = Location;
	params.Normal = Normal;
	params.HitActor = HitActor;
	params.AnimationDirection = AnimationDirection;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Character.BP_Character_C.MeleeHitOther
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 Location                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Normal                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  HitActor                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            AnimationDirection             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Character_C::MeleeHitOther(const struct FVector& Location, const struct FVector& Normal, class AActor* HitActor, int AnimationDirection)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Character.BP_Character_C.MeleeHitOther");

	ABP_Character_C_MeleeHitOther_Params params;
	params.Location = Location;
	params.Normal = Normal;
	params.HitActor = HitActor;
	params.AnimationDirection = AnimationDirection;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Character.BP_Character_C.S_ChangeBlockPoseOnOtherPlayer
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_Character_C*         CharRef                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Character_C::S_ChangeBlockPoseOnOtherPlayer(class ABP_Character_C* CharRef)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Character.BP_Character_C.S_ChangeBlockPoseOnOtherPlayer");

	ABP_Character_C_S_ChangeBlockPoseOnOtherPlayer_Params params;
	params.CharRef = CharRef;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Character.BP_Character_C.ChangeBlockPoseOnOtherPlayer
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_Character_C*         CharRef                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Character_C::ChangeBlockPoseOnOtherPlayer(class ABP_Character_C* CharRef)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Character.BP_Character_C.ChangeBlockPoseOnOtherPlayer");

	ABP_Character_C_ChangeBlockPoseOnOtherPlayer_Params params;
	params.CharRef = CharRef;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Character.BP_Character_C.ChangeBlockPose
// (BlueprintCallable, BlueprintEvent)

void ABP_Character_C::ChangeBlockPose()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Character.BP_Character_C.ChangeBlockPose");

	ABP_Character_C_ChangeBlockPose_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Character.BP_Character_C.LeaveAimingMode
// (BlueprintCallable, BlueprintEvent)

void ABP_Character_C::LeaveAimingMode()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Character.BP_Character_C.LeaveAimingMode");

	ABP_Character_C_LeaveAimingMode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Character.BP_Character_C.OC_CancelReload
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)

void ABP_Character_C::OC_CancelReload()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Character.BP_Character_C.OC_CancelReload");

	ABP_Character_C_OC_CancelReload_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Character.BP_Character_C.OC_UnloadWeapon
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_EquipmentSlots>  Weapon                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Character_C::OC_UnloadWeapon(TEnumAsByte<E_EquipmentSlots> Weapon)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Character.BP_Character_C.OC_UnloadWeapon");

	ABP_Character_C_OC_UnloadWeapon_Params params;
	params.Weapon = Weapon;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Character.BP_Character_C.S_SetWeaponLoaded
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsLoaded                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Character_C::S_SetWeaponLoaded(bool IsLoaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Character.BP_Character_C.S_SetWeaponLoaded");

	ABP_Character_C_S_SetWeaponLoaded_Params params;
	params.IsLoaded = IsLoaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Character.BP_Character_C.S_SpawnProjectile
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 CameraLocation                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Direction                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            TeamID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           LeftWeapon                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 AddedVelocity                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Character_C::S_SpawnProjectile(const struct FVector& CameraLocation, const struct FVector& Direction, int TeamID, bool LeftWeapon, const struct FVector& AddedVelocity)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Character.BP_Character_C.S_SpawnProjectile");

	ABP_Character_C_S_SpawnProjectile_Params params;
	params.CameraLocation = CameraLocation;
	params.Direction = Direction;
	params.TeamID = TeamID;
	params.LeftWeapon = LeftWeapon;
	params.AddedVelocity = AddedVelocity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Character.BP_Character_C.S_SetDazed
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)

void ABP_Character_C::S_SetDazed()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Character.BP_Character_C.S_SetDazed");

	ABP_Character_C_S_SetDazed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Character.BP_Character_C.StopBlock
// (BlueprintCallable, BlueprintEvent)

void ABP_Character_C::StopBlock()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Character.BP_Character_C.StopBlock");

	ABP_Character_C_StopBlock_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Character.BP_Character_C.StartBlock
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            BlockPose                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Character_C::StartBlock(int BlockPose)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Character.BP_Character_C.StartBlock");

	ABP_Character_C_StartBlock_Params params;
	params.BlockPose = BlockPose;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Character.BP_Character_C.S_StopBlock
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)

void ABP_Character_C::S_StopBlock()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Character.BP_Character_C.S_StopBlock");

	ABP_Character_C_S_StopBlock_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Character.BP_Character_C.S_StartBlock
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            BlockPose                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Character_C::S_StartBlock(int BlockPose)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Character.BP_Character_C.S_StartBlock");

	ABP_Character_C_S_StartBlock_Params params;
	params.BlockPose = BlockPose;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Character.BP_Character_C.StopSecondaryFire
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 CameraLocation                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Direction                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Character_C::StopSecondaryFire(const struct FVector& CameraLocation, const struct FVector& Direction)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Character.BP_Character_C.StopSecondaryFire");

	ABP_Character_C_StopSecondaryFire_Params params;
	params.CameraLocation = CameraLocation;
	params.Direction = Direction;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Character.BP_Character_C.AimingMode
// (BlueprintCallable, BlueprintEvent)

void ABP_Character_C::AimingMode()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Character.BP_Character_C.AimingMode");

	ABP_Character_C_AimingMode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Character.BP_Character_C.AimingModeOff
// (BlueprintCallable, BlueprintEvent)

void ABP_Character_C::AimingModeOff()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Character.BP_Character_C.AimingModeOff");

	ABP_Character_C_AimingModeOff_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Character.BP_Character_C.AimingModeOn
// (BlueprintCallable, BlueprintEvent)

void ABP_Character_C::AimingModeOn()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Character.BP_Character_C.AimingModeOn");

	ABP_Character_C_AimingModeOn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Character.BP_Character_C.PlaceMarker
// (BlueprintCallable, BlueprintEvent)

void ABP_Character_C::PlaceMarker()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Character.BP_Character_C.PlaceMarker");

	ABP_Character_C_PlaceMarker_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Character.BP_Character_C.EnterAimingMode
// (BlueprintCallable, BlueprintEvent)

void ABP_Character_C::EnterAimingMode()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Character.BP_Character_C.EnterAimingMode");

	ABP_Character_C_EnterAimingMode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Character.BP_Character_C.S_StopRepair
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)

void ABP_Character_C::S_StopRepair()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Character.BP_Character_C.S_StopRepair");

	ABP_Character_C_S_StopRepair_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Character.BP_Character_C.S_StartRepair
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)

void ABP_Character_C::S_StartRepair()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Character.BP_Character_C.S_StartRepair");

	ABP_Character_C_S_StartRepair_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Character.BP_Character_C.OC_SecondaryFire
// (Net, NetClient, BlueprintCallable, BlueprintEvent)

void ABP_Character_C::OC_SecondaryFire()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Character.BP_Character_C.OC_SecondaryFire");

	ABP_Character_C_OC_SecondaryFire_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Character.BP_Character_C.ApplyKnockback
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          KnockbackAmount                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Character_C::ApplyKnockback(float KnockbackAmount)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Character.BP_Character_C.ApplyKnockback");

	ABP_Character_C_ApplyKnockback_Params params;
	params.KnockbackAmount = KnockbackAmount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Character.BP_Character_C.PrimaryFire_Repeat
// (BlueprintCallable, BlueprintEvent)

void ABP_Character_C::PrimaryFire_Repeat()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Character.BP_Character_C.PrimaryFire_Repeat");

	ABP_Character_C_PrimaryFire_Repeat_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Character.BP_Character_C.StopPrimaryFire
// (BlueprintCallable, BlueprintEvent)

void ABP_Character_C::StopPrimaryFire()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Character.BP_Character_C.StopPrimaryFire");

	ABP_Character_C_StopPrimaryFire_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Character.BP_Character_C.OC_RefreshAmmo
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)

void ABP_Character_C::OC_RefreshAmmo()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Character.BP_Character_C.OC_RefreshAmmo");

	ABP_Character_C_OC_RefreshAmmo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Character.BP_Character_C.S_RefreshAmmo
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)

void ABP_Character_C::S_RefreshAmmo()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Character.BP_Character_C.S_RefreshAmmo");

	ABP_Character_C_S_RefreshAmmo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Character.BP_Character_C.OC_LeaveAimingMode
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)

void ABP_Character_C::OC_LeaveAimingMode()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Character.BP_Character_C.OC_LeaveAimingMode");

	ABP_Character_C_OC_LeaveAimingMode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Character.BP_Character_C.PrimaryFire
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 CameraLocation                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Direction                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Character_C::PrimaryFire(const struct FVector& CameraLocation, const struct FVector& Direction)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Character.BP_Character_C.PrimaryFire");

	ABP_Character_C_PrimaryFire_Params params;
	params.CameraLocation = CameraLocation;
	params.Direction = Direction;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Character.BP_Character_C.SecondaryFire
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 CameraLocation                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Direction                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Character_C::SecondaryFire(const struct FVector& CameraLocation, const struct FVector& Direction)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Character.BP_Character_C.SecondaryFire");

	ABP_Character_C_SecondaryFire_Params params;
	params.CameraLocation = CameraLocation;
	params.Direction = Direction;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Character.BP_Character_C.RefreshCustomisation
// (BlueprintCallable, BlueprintEvent)

void ABP_Character_C::RefreshCustomisation()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Character.BP_Character_C.RefreshCustomisation");

	ABP_Character_C_RefreshCustomisation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Character.BP_Character_C.S_PlaceCrewBanner
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)

void ABP_Character_C::S_PlaceCrewBanner()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Character.BP_Character_C.S_PlaceCrewBanner");

	ABP_Character_C_S_PlaceCrewBanner_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Character.BP_Character_C.MC_Effect_BloodSplatter
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)

void ABP_Character_C::MC_Effect_BloodSplatter()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Character.BP_Character_C.MC_Effect_BloodSplatter");

	ABP_Character_C_MC_Effect_BloodSplatter_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Character.BP_Character_C.MC_Effect_TeamCreate
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)

void ABP_Character_C::MC_Effect_TeamCreate()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Character.BP_Character_C.MC_Effect_TeamCreate");

	ABP_Character_C_MC_Effect_TeamCreate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Character.BP_Character_C.S_PlayMontageOnOtherPlayer
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAnimMontage*            Montage                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           FullPose                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          FullPoseTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class ABP_Character_C*         CharRef                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Character_C::S_PlayMontageOnOtherPlayer(class UAnimMontage* Montage, bool FullPose, float FullPoseTime, class ABP_Character_C* CharRef)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Character.BP_Character_C.S_PlayMontageOnOtherPlayer");

	ABP_Character_C_S_PlayMontageOnOtherPlayer_Params params;
	params.Montage = Montage;
	params.FullPose = FullPose;
	params.FullPoseTime = FullPoseTime;
	params.CharRef = CharRef;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Character.BP_Character_C.PlayMontageOnOtherPlayer
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAnimMontage*            Montage                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           FullPose                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          FullPoseTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class ABP_Character_C*         CharRef                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Character_C::PlayMontageOnOtherPlayer(class UAnimMontage* Montage, bool FullPose, float FullPoseTime, class ABP_Character_C* CharRef)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Character.BP_Character_C.PlayMontageOnOtherPlayer");

	ABP_Character_C_PlayMontageOnOtherPlayer_Params params;
	params.Montage = Montage;
	params.FullPose = FullPose;
	params.FullPoseTime = FullPoseTime;
	params.CharRef = CharRef;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Character.BP_Character_C.S_StopCurrentMontage
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          BlendOutTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Character_C::S_StopCurrentMontage(float BlendOutTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Character.BP_Character_C.S_StopCurrentMontage");

	ABP_Character_C_S_StopCurrentMontage_Params params;
	params.BlendOutTime = BlendOutTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Character.BP_Character_C.OC_StopCurrentMontage
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          BlendOutTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Character_C::OC_StopCurrentMontage(float BlendOutTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Character.BP_Character_C.OC_StopCurrentMontage");

	ABP_Character_C_OC_StopCurrentMontage_Params params;
	params.BlendOutTime = BlendOutTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Character.BP_Character_C.WeaponReloadAnimationLocal
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_EquipmentSlots>  WeaponType                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Character_C::WeaponReloadAnimationLocal(TEnumAsByte<E_EquipmentSlots> WeaponType)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Character.BP_Character_C.WeaponReloadAnimationLocal");

	ABP_Character_C_WeaponReloadAnimationLocal_Params params;
	params.WeaponType = WeaponType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Character.BP_Character_C.S_WeaponReloadAnimation
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)

void ABP_Character_C::S_WeaponReloadAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Character.BP_Character_C.S_WeaponReloadAnimation");

	ABP_Character_C_S_WeaponReloadAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Character.BP_Character_C.S_PlayMontage
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAnimMontage*            Montage                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           FullPose                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          FullPoseTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           PlayOnSelf                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           StopCurrentMontage             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Character_C::S_PlayMontage(class UAnimMontage* Montage, bool FullPose, float FullPoseTime, bool PlayOnSelf, bool StopCurrentMontage)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Character.BP_Character_C.S_PlayMontage");

	ABP_Character_C_S_PlayMontage_Params params;
	params.Montage = Montage;
	params.FullPose = FullPose;
	params.FullPoseTime = FullPoseTime;
	params.PlayOnSelf = PlayOnSelf;
	params.StopCurrentMontage = StopCurrentMontage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Character.BP_Character_C.PlayMontageLocal
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAnimMontage*            Montage                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           FullPose                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          FullPoseTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           PlayOnAll                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           StopCurrentMontage             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Character_C::PlayMontageLocal(class UAnimMontage* Montage, bool FullPose, float FullPoseTime, bool PlayOnAll, bool StopCurrentMontage)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Character.BP_Character_C.PlayMontageLocal");

	ABP_Character_C_PlayMontageLocal_Params params;
	params.Montage = Montage;
	params.FullPose = FullPose;
	params.FullPoseTime = FullPoseTime;
	params.PlayOnAll = PlayOnAll;
	params.StopCurrentMontage = StopCurrentMontage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Character.BP_Character_C.MC_StopCurrentMontage
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          BlendOutTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Character_C::MC_StopCurrentMontage(float BlendOutTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Character.BP_Character_C.MC_StopCurrentMontage");

	ABP_Character_C_MC_StopCurrentMontage_Params params;
	params.BlendOutTime = BlendOutTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Character.BP_Character_C.MC_StopWeaponReloadAnimation
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)

void ABP_Character_C::MC_StopWeaponReloadAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Character.BP_Character_C.MC_StopWeaponReloadAnimation");

	ABP_Character_C_MC_StopWeaponReloadAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Character.BP_Character_C.MC_WeaponReloadAnimation
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)

void ABP_Character_C::MC_WeaponReloadAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Character.BP_Character_C.MC_WeaponReloadAnimation");

	ABP_Character_C_MC_WeaponReloadAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Character.BP_Character_C.MC_PlayMontage
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAnimMontage*            Montage                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           FullPose                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          FullPoseTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           PlayOnSelf                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           StopCurrentMontage             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Character_C::MC_PlayMontage(class UAnimMontage* Montage, bool FullPose, float FullPoseTime, bool PlayOnSelf, bool StopCurrentMontage)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Character.BP_Character_C.MC_PlayMontage");

	ABP_Character_C_MC_PlayMontage_Params params;
	params.Montage = Montage;
	params.FullPose = FullPose;
	params.FullPoseTime = FullPoseTime;
	params.PlayOnSelf = PlayOnSelf;
	params.StopCurrentMontage = StopCurrentMontage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Character.BP_Character_C.ApplyHealth
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Amount                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Character_C::ApplyHealth(int Amount)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Character.BP_Character_C.ApplyHealth");

	ABP_Character_C_ApplyHealth_Params params;
	params.Amount = Amount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Character.BP_Character_C.OC_RemoveHUD
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)

void ABP_Character_C::OC_RemoveHUD()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Character.BP_Character_C.OC_RemoveHUD");

	ABP_Character_C_OC_RemoveHUD_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Character.BP_Character_C.KillCharacter
// (BlueprintCallable, BlueprintEvent)

void ABP_Character_C::KillCharacter()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Character.BP_Character_C.KillCharacter");

	ABP_Character_C_KillCharacter_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Character.BP_Character_C.S_RestoreHealth
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            RestoreAmount                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Character_C::S_RestoreHealth(int RestoreAmount)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Character.BP_Character_C.S_RestoreHealth");

	ABP_Character_C_S_RestoreHealth_Params params;
	params.RestoreAmount = RestoreAmount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Character.BP_Character_C.ApplyDamage
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            DamageAmount                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class ABP_Controller_C*        Attacker                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           headshot                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            TeamID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           SelfDamage                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Character_C::ApplyDamage(int DamageAmount, class ABP_Controller_C* Attacker, bool headshot, int TeamID, bool SelfDamage)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Character.BP_Character_C.ApplyDamage");

	ABP_Character_C_ApplyDamage_Params params;
	params.DamageAmount = DamageAmount;
	params.Attacker = Attacker;
	params.headshot = headshot;
	params.TeamID = TeamID;
	params.SelfDamage = SelfDamage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Character.BP_Character_C.MC_CharacterDeath
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_Character_C*         KillerRef                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Character_C::MC_CharacterDeath(class ABP_Character_C* KillerRef)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Character.BP_Character_C.MC_CharacterDeath");

	ABP_Character_C_MC_CharacterDeath_Params params;
	params.KillerRef = KillerRef;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Character.BP_Character_C.OC_RemoveWeaponUI
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)

void ABP_Character_C::OC_RemoveWeaponUI()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Character.BP_Character_C.OC_RemoveWeaponUI");

	ABP_Character_C_OC_RemoveWeaponUI_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Character.BP_Character_C.RemoveWeaponUI
// (BlueprintCallable, BlueprintEvent)

void ABP_Character_C::RemoveWeaponUI()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Character.BP_Character_C.RemoveWeaponUI");

	ABP_Character_C_RemoveWeaponUI_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Character.BP_Character_C.AddWeaponUI
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  WidgetClass                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           HideHUD                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ChromaticAbberation            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Character_C::AddWeaponUI(class UClass* WidgetClass, bool HideHUD, bool ChromaticAbberation)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Character.BP_Character_C.AddWeaponUI");

	ABP_Character_C_AddWeaponUI_Params params;
	params.WidgetClass = WidgetClass;
	params.HideHUD = HideHUD;
	params.ChromaticAbberation = ChromaticAbberation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Character.BP_Character_C.RemoveCustomUIOverlay
// (BlueprintCallable, BlueprintEvent)

void ABP_Character_C::RemoveCustomUIOverlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Character.BP_Character_C.RemoveCustomUIOverlay");

	ABP_Character_C_RemoveCustomUIOverlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Character.BP_Character_C.AddCustomUIOverlay
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  WidgetClass                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           HideHUD                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class ABP_VehicleBase_C*       VehicleRef                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Character_C::AddCustomUIOverlay(class UClass* WidgetClass, bool HideHUD, class ABP_VehicleBase_C* VehicleRef)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Character.BP_Character_C.AddCustomUIOverlay");

	ABP_Character_C_AddCustomUIOverlay_Params params;
	params.WidgetClass = WidgetClass;
	params.HideHUD = HideHUD;
	params.VehicleRef = VehicleRef;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Character.BP_Character_C.RecieveItemsIndicator
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FST_InventoryArray      Item                           (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float                          Delay                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           AtMouseLocation                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Character_C::RecieveItemsIndicator(const struct FST_InventoryArray& Item, float Delay, bool AtMouseLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Character.BP_Character_C.RecieveItemsIndicator");

	ABP_Character_C_RecieveItemsIndicator_Params params;
	params.Item = Item;
	params.Delay = Delay;
	params.AtMouseLocation = AtMouseLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Character.BP_Character_C.OC_RemoveCustomUIOverlay
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)

void ABP_Character_C::OC_RemoveCustomUIOverlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Character.BP_Character_C.OC_RemoveCustomUIOverlay");

	ABP_Character_C_OC_RemoveCustomUIOverlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Character.BP_Character_C.OC_AddCustomUIOverlay
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  WidgetClass                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           HideHUD                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class ABP_VehicleBase_C*       VehicleRef                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Character_C::OC_AddCustomUIOverlay(class UClass* WidgetClass, bool HideHUD, class ABP_VehicleBase_C* VehicleRef)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Character.BP_Character_C.OC_AddCustomUIOverlay");

	ABP_Character_C_OC_AddCustomUIOverlay_Params params;
	params.WidgetClass = WidgetClass;
	params.HideHUD = HideHUD;
	params.VehicleRef = VehicleRef;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Character.BP_Character_C.S_PaintSpray
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 ForwardVector                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Character_C::S_PaintSpray(const struct FVector& ForwardVector)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Character.BP_Character_C.S_PaintSpray");

	ABP_Character_C_S_PaintSpray_Params params;
	params.ForwardVector = ForwardVector;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Character.BP_Character_C.OpenActionMenu
// (BlueprintCallable, BlueprintEvent)

void ABP_Character_C::OpenActionMenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Character.BP_Character_C.OpenActionMenu");

	ABP_Character_C_OpenActionMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Character.BP_Character_C.MC_Voiceline
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   VoiceLineRowName               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Character_C::MC_Voiceline(const struct FName& VoiceLineRowName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Character.BP_Character_C.MC_Voiceline");

	ABP_Character_C_MC_Voiceline_Params params;
	params.VoiceLineRowName = VoiceLineRowName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Character.BP_Character_C.ActionMenuReleased
// (BlueprintCallable, BlueprintEvent)

void ABP_Character_C::ActionMenuReleased()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Character.BP_Character_C.ActionMenuReleased");

	ABP_Character_C_ActionMenuReleased_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Character.BP_Character_C.ActionMenuPressed
// (BlueprintCallable, BlueprintEvent)

void ABP_Character_C::ActionMenuPressed()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Character.BP_Character_C.ActionMenuPressed");

	ABP_Character_C_ActionMenuPressed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Character.BP_Character_C.CloseBuildMenu
// (BlueprintCallable, BlueprintEvent)

void ABP_Character_C::CloseBuildMenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Character.BP_Character_C.CloseBuildMenu");

	ABP_Character_C_CloseBuildMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Character.BP_Character_C.CloseActionMenu
// (BlueprintCallable, BlueprintEvent)

void ABP_Character_C::CloseActionMenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Character.BP_Character_C.CloseActionMenu");

	ABP_Character_C_CloseActionMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Character.BP_Character_C.OpenSpyglass
// (BlueprintCallable, BlueprintEvent)

void ABP_Character_C::OpenSpyglass()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Character.BP_Character_C.OpenSpyglass");

	ABP_Character_C_OpenSpyglass_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Character.BP_Character_C.RequestCloseSpyglass
// (BlueprintCallable, BlueprintEvent)

void ABP_Character_C::RequestCloseSpyglass()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Character.BP_Character_C.RequestCloseSpyglass");

	ABP_Character_C_RequestCloseSpyglass_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Character.BP_Character_C.S_SetSpyGlass
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Enabled                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Character_C::S_SetSpyGlass(bool Enabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Character.BP_Character_C.S_SetSpyGlass");

	ABP_Character_C_S_SetSpyGlass_Params params;
	params.Enabled = Enabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Character.BP_Character_C.CloseSpyglass
// (BlueprintCallable, BlueprintEvent)

void ABP_Character_C::CloseSpyglass()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Character.BP_Character_C.CloseSpyglass");

	ABP_Character_C_CloseSpyglass_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Character.BP_Character_C.S_ApplyOptions
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           AimingModeToggle               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           CameraPositionLeft             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           FirstPersonMode                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Character_C::S_ApplyOptions(bool AimingModeToggle, bool CameraPositionLeft, bool FirstPersonMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Character.BP_Character_C.S_ApplyOptions");

	ABP_Character_C_S_ApplyOptions_Params params;
	params.AimingModeToggle = AimingModeToggle;
	params.CameraPositionLeft = CameraPositionLeft;
	params.FirstPersonMode = FirstPersonMode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Character.BP_Character_C.ResetFPSOffset
// (BlueprintCallable, BlueprintEvent)

void ABP_Character_C::ResetFPSOffset()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Character.BP_Character_C.ResetFPSOffset");

	ABP_Character_C_ResetFPSOffset_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Character.BP_Character_C.OC_ResetFPSOffset
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)

void ABP_Character_C::OC_ResetFPSOffset()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Character.BP_Character_C.OC_ResetFPSOffset");

	ABP_Character_C_OC_ResetFPSOffset_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Character.BP_Character_C.OC_SetFPSOffset
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 CharacterOffset                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FRotator                RotationOffset                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Scale                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Character_C::OC_SetFPSOffset(const struct FVector& CharacterOffset, const struct FRotator& RotationOffset, const struct FVector& Scale)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Character.BP_Character_C.OC_SetFPSOffset");

	ABP_Character_C_OC_SetFPSOffset_Params params;
	params.CharacterOffset = CharacterOffset;
	params.RotationOffset = RotationOffset;
	params.Scale = Scale;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Character.BP_Character_C.ExecuteUbergraph_BP_Character
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Character_C::ExecuteUbergraph_BP_Character(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Character.BP_Character_C.ExecuteUbergraph_BP_Character");

	ABP_Character_C_ExecuteUbergraph_BP_Character_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
