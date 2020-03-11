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

// Function BP_Character.BP_Character_C.ToggleOwnCharacterInspectMode
struct ABP_Character_C_ToggleOwnCharacterInspectMode_Params
{
	bool                                               ModeOn;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Character.BP_Character_C.ServerCheckIfOnShip
struct ABP_Character_C_ServerCheckIfOnShip_Params
{
	bool                                               OnShip;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class ABP_BoatMeshBase_C*                          ShipRef;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Character.BP_Character_C.RepairAnimation
struct ABP_Character_C_RepairAnimation_Params
{
};

// Function BP_Character.BP_Character_C.CleanUpLocally
struct ABP_Character_C_CleanUpLocally_Params
{
};

// Function BP_Character.BP_Character_C.OnRep_ShowBanner
struct ABP_Character_C_OnRep_ShowBanner_Params
{
};

// Function BP_Character.BP_Character_C.PlayLocalSoundAtLocation
struct ABP_Character_C_PlayLocalSoundAtLocation_Params
{
	struct FVector                                     Location;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class USoundBase*                                  Sound;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               OnlyOnSelf;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Volume;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Character.BP_Character_C.UpgradeInventory
struct ABP_Character_C_UpgradeInventory_Params
{
	bool                                               Upgraded;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Character.BP_Character_C.FetchUpgradesForActionMenu
struct ABP_Character_C_FetchUpgradesForActionMenu_Params
{
	TArray<struct FST_PieMenuSelection>                NewParam;                                                 // (Parm, OutParm, ZeroConstructor)
};

// Function BP_Character.BP_Character_C.CheckIfDifferentWeapon
struct ABP_Character_C_CheckIfDifferentWeapon_Params
{
	TEnumAsByte<E_EquipmentSlots>                      Weapon;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                WeaponID;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               DifferentWeapon;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Character.BP_Character_C.OnRep_TeamPlayerColor
struct ABP_Character_C_OnRep_TeamPlayerColor_Params
{
};

// Function BP_Character.BP_Character_C.GetTotemChargeMultiplier
struct ABP_Character_C_GetTotemChargeMultiplier_Params
{
	float                                              Multiplier;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Character.BP_Character_C.TakeAllFromContainer
struct ABP_Character_C_TakeAllFromContainer_Params
{
};

// Function BP_Character.BP_Character_C.OnRep_MakeHammerHitSound
struct ABP_Character_C_OnRep_MakeHammerHitSound_Params
{
};

// Function BP_Character.BP_Character_C.StabilizeCamera
struct ABP_Character_C_StabilizeCamera_Params
{
	bool                                               Stabilize;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Character.BP_Character_C.SetAimingMode
struct ABP_Character_C_SetAimingMode_Params
{
	bool                                               Aiming;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Character.BP_Character_C.DepositAllToContainer
struct ABP_Character_C_DepositAllToContainer_Params
{
};

// Function BP_Character.BP_Character_C.FetchLocalWeaponRef
struct ABP_Character_C_FetchLocalWeaponRef_Params
{
	TEnumAsByte<E_EquipmentSlots>                      WeaponType;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Character.BP_Character_C.OnRep_SprintingAll
struct ABP_Character_C_OnRep_SprintingAll_Params
{
};

// Function BP_Character.BP_Character_C.OnRep_SpyGlassPose
struct ABP_Character_C_OnRep_SpyGlassPose_Params
{
};

// Function BP_Character.BP_Character_C.SelectInteractable
struct ABP_Character_C_SelectInteractable_Params
{
	class ABP_InteractableBase_C*                      ClosestInteractable;                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class ABP_VehicleBase_C*                           ClosestVehicle;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<E_InteractableType>                    InteractableType;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               NothingSelected;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Character.BP_Character_C.OnRep_LookingAtWorldMap
struct ABP_Character_C_OnRep_LookingAtWorldMap_Params
{
};

// Function BP_Character.BP_Character_C.ShowHideAmulet
struct ABP_Character_C_ShowHideAmulet_Params
{
};

// Function BP_Character.BP_Character_C.OnRep_TeleportToShip
struct ABP_Character_C_OnRep_TeleportToShip_Params
{
};

// Function BP_Character.BP_Character_C.SearchForLocalWeapons
struct ABP_Character_C_SearchForLocalWeapons_Params
{
};

// Function BP_Character.BP_Character_C.OnRep_Melee
struct ABP_Character_C_OnRep_Melee_Params
{
};

// Function BP_Character.BP_Character_C.OnRep_SideArm
struct ABP_Character_C_OnRep_SideArm_Params
{
};

// Function BP_Character.BP_Character_C.OnRep_MainWeapon
struct ABP_Character_C_OnRep_MainWeapon_Params
{
};

// Function BP_Character.BP_Character_C.ResetLoadoutAndHealth
struct ABP_Character_C_ResetLoadoutAndHealth_Params
{
};

// Function BP_Character.BP_Character_C.HideLocalWeapons
struct ABP_Character_C_HideLocalWeapons_Params
{
	bool                                               DontShowEquipedWeapon;                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Character.BP_Character_C.SlowdownWhenFiring
struct ABP_Character_C_SlowdownWhenFiring_Params
{
	bool                                               WasSprinting;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Character.BP_Character_C.SetSpringArmMode
struct ABP_Character_C_SetSpringArmMode_Params
{
};

// Function BP_Character.BP_Character_C.ShowFPSModelsOnly
struct ABP_Character_C_ShowFPSModelsOnly_Params
{
};

// Function BP_Character.BP_Character_C.ToggleFPSMode
struct ABP_Character_C_ToggleFPSMode_Params
{
	bool                                               ModeOn;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Character.BP_Character_C.LoadCustomisation
struct ABP_Character_C_LoadCustomisation_Params
{
};

// Function BP_Character.BP_Character_C.RemoveWeapon
struct ABP_Character_C_RemoveWeapon_Params
{
	TEnumAsByte<E_EquipmentSlots>                      Weapon;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Character.BP_Character_C.ApplyOptions
struct ABP_Character_C_ApplyOptions_Params
{
};

// Function BP_Character.BP_Character_C.OnRep_CameraRight
struct ABP_Character_C_OnRep_CameraRight_Params
{
};

// Function BP_Character.BP_Character_C.OnRep_Customisation
struct ABP_Character_C_OnRep_Customisation_Params
{
};

// Function BP_Character.BP_Character_C.OnRep_BlockPose
struct ABP_Character_C_OnRep_BlockPose_Params
{
};

// Function BP_Character.BP_Character_C.OnRep_Blocking
struct ABP_Character_C_OnRep_Blocking_Params
{
};

// Function BP_Character.BP_Character_C.OnRep_IsDead
struct ABP_Character_C_OnRep_IsDead_Params
{
};

// Function BP_Character.BP_Character_C.SetSpyGlassPPWeight
struct ABP_Character_C_SetSpyGlassPPWeight_Params
{
	float                                              Weight;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Character.BP_Character_C.RefreshAmmo
struct ABP_Character_C_RefreshAmmo_Params
{
};

// Function BP_Character.BP_Character_C.OnRep_EquipedWeapon
struct ABP_Character_C_OnRep_EquipedWeapon_Params
{
};

// Function BP_Character.BP_Character_C.DropItemDeathChest
struct ABP_Character_C_DropItemDeathChest_Params
{
};

// Function BP_Character.BP_Character_C.LoadUpgrade
struct ABP_Character_C_LoadUpgrade_Params
{
};

// Function BP_Character.BP_Character_C.LocalRepairDetect
struct ABP_Character_C_LocalRepairDetect_Params
{
};

// Function BP_Character.BP_Character_C.OnRep_Repairing
struct ABP_Character_C_OnRep_Repairing_Params
{
};

// Function BP_Character.BP_Character_C.CheckThrowableAmmo
struct ABP_Character_C_CheckThrowableAmmo_Params
{
	TEnumAsByte<E_Items>                               throwable;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               HasThrowableAmmo;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Character.BP_Character_C.CycleThrowables
struct ABP_Character_C_CycleThrowables_Params
{
	bool                                               NoThrowablesFound;                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Character.BP_Character_C.SpawnThrowable
struct ABP_Character_C_SpawnThrowable_Params
{
};

// Function BP_Character.BP_Character_C.SetEmblemAndColor
struct ABP_Character_C_SetEmblemAndColor_Params
{
};

// Function BP_Character.BP_Character_C.PaintSpray
struct ABP_Character_C_PaintSpray_Params
{
	struct FVector                                     ForwardVector;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Character.BP_Character_C.CheckIfFinalBlow
struct ABP_Character_C_CheckIfFinalBlow_Params
{
	int                                                damage;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               headshot;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsFinalBlow;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Character.BP_Character_C.CleanUp
struct ABP_Character_C_CleanUp_Params
{
};

// Function BP_Character.BP_Character_C.OnRep_Username
struct ABP_Character_C_OnRep_Username_Params
{
};

// Function BP_Character.BP_Character_C.PlayReloadAnimation
struct ABP_Character_C_PlayReloadAnimation_Params
{
	int                                                WeaponID;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Character.BP_Character_C.CancelReloads
struct ABP_Character_C_CancelReloads_Params
{
};

// Function BP_Character.BP_Character_C.UnloadWeaponsServer
struct ABP_Character_C_UnloadWeaponsServer_Params
{
};

// Function BP_Character.BP_Character_C.OnRep_TeamID
struct ABP_Character_C_OnRep_TeamID_Params
{
};

// Function BP_Character.BP_Character_C.EnterWalkingMode
struct ABP_Character_C_EnterWalkingMode_Params
{
};

// Function BP_Character.BP_Character_C.EnterSwimmingMode
struct ABP_Character_C_EnterSwimmingMode_Params
{
};

// Function BP_Character.BP_Character_C.GetEquipedWeaponID
struct ABP_Character_C_GetEquipedWeaponID_Params
{
	int                                                WeaponID;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Character.BP_Character_C.OnRep_Steering
struct ABP_Character_C_OnRep_Steering_Params
{
};

// Function BP_Character.BP_Character_C.OnRep_VehicleState
struct ABP_Character_C_OnRep_VehicleState_Params
{
};

// Function BP_Character.BP_Character_C.AddItem
struct ABP_Character_C_AddItem_Params
{
	TEnumAsByte<E_Items>                               Item;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Amount;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Character.BP_Character_C.DropWeapon
struct ABP_Character_C_DropWeapon_Params
{
	TEnumAsByte<E_EquipmentSlots>                      EquipedWeapon;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               DropToSpecificLocation;                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FTransform                                  SpecificDropLocation;                                     // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	bool                                               DestroyWeapon;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Character.BP_Character_C.OnRep_AnimationType
struct ABP_Character_C_OnRep_AnimationType_Params
{
};

// Function BP_Character.BP_Character_C.UnequipWeapons
struct ABP_Character_C_UnequipWeapons_Params
{
};

// Function BP_Character.BP_Character_C.LoadMelee
struct ABP_Character_C_LoadMelee_Params
{
};

// Function BP_Character.BP_Character_C.LoadSideArm
struct ABP_Character_C_LoadSideArm_Params
{
};

// Function BP_Character.BP_Character_C.LoadMainWeapon
struct ABP_Character_C_LoadMainWeapon_Params
{
};

// Function BP_Character.BP_Character_C.ShipDetect
struct ABP_Character_C_ShipDetect_Params
{
};

// Function BP_Character.BP_Character_C.UserConstructionScript
struct ABP_Character_C_UserConstructionScript_Params
{
};

// Function BP_Character.BP_Character_C.InpActEvt_Inventory_K2Node_InputActionEvent_5
struct ABP_Character_C_InpActEvt_Inventory_K2Node_InputActionEvent_5_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_Character.BP_Character_C.InpActEvt_K_K2Node_InputKeyEvent_12
struct ABP_Character_C_InpActEvt_K_K2Node_InputKeyEvent_12_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_Character.BP_Character_C.InpActEvt_X_K2Node_InputKeyEvent_11
struct ABP_Character_C_InpActEvt_X_K2Node_InputKeyEvent_11_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_Character.BP_Character_C.InpActEvt_Reload_K2Node_InputActionEvent_4
struct ABP_Character_C_InpActEvt_Reload_K2Node_InputActionEvent_4_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_Character.BP_Character_C.InpActEvt_CrewBanner_K2Node_InputActionEvent_3
struct ABP_Character_C_InpActEvt_CrewBanner_K2Node_InputActionEvent_3_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_Character.BP_Character_C.InpActEvt_PaintSpray_K2Node_InputActionEvent_2
struct ABP_Character_C_InpActEvt_PaintSpray_K2Node_InputActionEvent_2_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_Character.BP_Character_C.InpActEvt_Spyglass_K2Node_InputActionEvent_1
struct ABP_Character_C_InpActEvt_Spyglass_K2Node_InputActionEvent_1_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_Character.BP_Character_C.InpActEvt_Decimal_K2Node_InputKeyEvent_10
struct ABP_Character_C_InpActEvt_Decimal_K2Node_InputKeyEvent_10_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_Character.BP_Character_C.InpActEvt_NumPadFive_K2Node_InputKeyEvent_9
struct ABP_Character_C_InpActEvt_NumPadFive_K2Node_InputKeyEvent_9_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_Character.BP_Character_C.InpActEvt_NumPadEight_K2Node_InputKeyEvent_8
struct ABP_Character_C_InpActEvt_NumPadEight_K2Node_InputKeyEvent_8_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_Character.BP_Character_C.InpActEvt_NumPadSix_K2Node_InputKeyEvent_7
struct ABP_Character_C_InpActEvt_NumPadSix_K2Node_InputKeyEvent_7_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_Character.BP_Character_C.InpActEvt_NumPadFour_K2Node_InputKeyEvent_6
struct ABP_Character_C_InpActEvt_NumPadFour_K2Node_InputKeyEvent_6_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_Character.BP_Character_C.InpActEvt_Subtract_K2Node_InputKeyEvent_5
struct ABP_Character_C_InpActEvt_Subtract_K2Node_InputKeyEvent_5_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_Character.BP_Character_C.InpActEvt_Down_K2Node_InputKeyEvent_4
struct ABP_Character_C_InpActEvt_Down_K2Node_InputKeyEvent_4_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_Character.BP_Character_C.InpActEvt_Up_K2Node_InputKeyEvent_3
struct ABP_Character_C_InpActEvt_Up_K2Node_InputKeyEvent_3_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_Character.BP_Character_C.InpActEvt_Right_K2Node_InputKeyEvent_2
struct ABP_Character_C_InpActEvt_Right_K2Node_InputKeyEvent_2_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_Character.BP_Character_C.InpActEvt_Left_K2Node_InputKeyEvent_1
struct ABP_Character_C_InpActEvt_Left_K2Node_InputKeyEvent_1_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_Character.BP_Character_C.ReceiveBeginPlay
struct ABP_Character_C_ReceiveBeginPlay_Params
{
};

// Function BP_Character.BP_Character_C.ReceiveTick
struct ABP_Character_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Character.BP_Character_C.MC_SetSteeringWheelRef
struct ABP_Character_C_MC_SetSteeringWheelRef_Params
{
	class ABP_VehicleSteeringWheel_C*                  SteeringWheelRef;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Character.BP_Character_C.ReceiveDestroyed
struct ABP_Character_C_ReceiveDestroyed_Params
{
};

// Function BP_Character.BP_Character_C.OC_HitIndicator
struct ABP_Character_C_OC_HitIndicator_Params
{
};

// Function BP_Character.BP_Character_C.MC_RefreshBanner
struct ABP_Character_C_MC_RefreshBanner_Params
{
};

// Function BP_Character.BP_Character_C.OC_AddPlayerEffect
struct ABP_Character_C_OC_AddPlayerEffect_Params
{
	class UClass*                                      Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Time;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Character.BP_Character_C.OC_RemovePlayerEffect
struct ABP_Character_C_OC_RemovePlayerEffect_Params
{
};

// Function BP_Character.BP_Character_C.OC_UpgradeInventory
struct ABP_Character_C_OC_UpgradeInventory_Params
{
};

// Function BP_Character.BP_Character_C.BreakLootcrate
struct ABP_Character_C_BreakLootcrate_Params
{
	class ABP_Lootcrate_C*                             lootcrate;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Character.BP_Character_C.S_BreakLootCrate
struct ABP_Character_C_S_BreakLootCrate_Params
{
	class ABP_Lootcrate_C*                             lootcrate;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Character.BP_Character_C.DropItemChest
struct ABP_Character_C_DropItemChest_Params
{
};

// Function BP_Character.BP_Character_C.S_CleanUpInteractable
struct ABP_Character_C_S_CleanUpInteractable_Params
{
	class ABP_InteractableBase_C*                      InteractableRef;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Character.BP_Character_C.InpAxisKeyEvt_MouseY_K2Node_InputAxisKeyEvent_2
struct ABP_Character_C_InpAxisKeyEvt_MouseY_K2Node_InputAxisKeyEvent_2_Params
{
	float                                              AxisValue;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Character.BP_Character_C.InpAxisKeyEvt_MouseX_K2Node_InputAxisKeyEvent_1
struct ABP_Character_C_InpAxisKeyEvt_MouseX_K2Node_InputAxisKeyEvent_1_Params
{
	float                                              AxisValue;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Character.BP_Character_C.OC_ResetShipTeleportTime
struct ABP_Character_C_OC_ResetShipTeleportTime_Params
{
};

// Function BP_Character.BP_Character_C.AddRepairHit
struct ABP_Character_C_AddRepairHit_Params
{
};

// Function BP_Character.BP_Character_C.OC_TeleportToShipStartLocation
struct ABP_Character_C_OC_TeleportToShipStartLocation_Params
{
};

// Function BP_Character.BP_Character_C.S_SetLevel
struct ABP_Character_C_S_SetLevel_Params
{
	int                                                Level;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Character.BP_Character_C.ResetRefreshHUD
struct ABP_Character_C_ResetRefreshHUD_Params
{
};

// Function BP_Character.BP_Character_C.S_SetHammerHittingSound
struct ABP_Character_C_S_SetHammerHittingSound_Params
{
	bool                                               Sound;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Character.BP_Character_C.S_ReequipSavedWeapon
struct ABP_Character_C_S_ReequipSavedWeapon_Params
{
};

// Function BP_Character.BP_Character_C.OC_TeleportPlayer
struct ABP_Character_C_OC_TeleportPlayer_Params
{
	struct FVector                                     Location;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         NewBase;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BP_Character.BP_Character_C.ReloadKeys
struct ABP_Character_C_ReloadKeys_Params
{
};

// Function BP_Character.BP_Character_C.TeleportPlayer
struct ABP_Character_C_TeleportPlayer_Params
{
	struct FVector                                     Location;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         NewBase;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BP_Character.BP_Character_C.S_AddMastRepairHit
struct ABP_Character_C_S_AddMastRepairHit_Params
{
	class ABP_MastBase_C*                              MastRef;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Character.BP_Character_C.S_AddHullRepairHit
struct ABP_Character_C_S_AddHullRepairHit_Params
{
	class ABP_HullDamage_C*                            HullDamageRef;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Character.BP_Character_C.TeleportShip
struct ABP_Character_C_TeleportShip_Params
{
};

// Function BP_Character.BP_Character_C.S_SetIsServer
struct ABP_Character_C_S_SetIsServer_Params
{
	bool                                               IsServer;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Character.BP_Character_C.S_LoadCustomisation
struct ABP_Character_C_S_LoadCustomisation_Params
{
	struct FST_Customisation                           Customisation;                                            // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_Character.BP_Character_C.S_SetStomachPitch
struct ABP_Character_C_S_SetStomachPitch_Params
{
	float                                              Pitch;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Character.BP_Character_C.LeaveSwimming
struct ABP_Character_C_LeaveSwimming_Params
{
	bool                                               EnterVehicle;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class ABP_VehicleBase_C*                           VehicleRef;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Character.BP_Character_C.OpenInventory
struct ABP_Character_C_OpenInventory_Params
{
};

// Function BP_Character.BP_Character_C.S_GiveResources
struct ABP_Character_C_S_GiveResources_Params
{
	class ABP_QuickAccesPointBase_C*                   QuickAccessPoint;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Character.BP_Character_C.GiveResources
struct ABP_Character_C_GiveResources_Params
{
	class ABP_QuickAccesPointBase_C*                   QuickAccessPoint;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Character.BP_Character_C.OC_DepositedAll
struct ABP_Character_C_OC_DepositedAll_Params
{
};

// Function BP_Character.BP_Character_C.QuickDepositAll
struct ABP_Character_C_QuickDepositAll_Params
{
};

// Function BP_Character.BP_Character_C.S_RemoveFromOtherContainer
struct ABP_Character_C_S_RemoveFromOtherContainer_Params
{
	class UInventory_C*                                InventoryRef;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	TEnumAsByte<E_Items>                               Item;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Amount;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Character.BP_Character_C.CloseCannonballChest
struct ABP_Character_C_CloseCannonballChest_Params
{
};

// Function BP_Character.BP_Character_C.OpenCannonballChest
struct ABP_Character_C_OpenCannonballChest_Params
{
	class ABP_BoatMeshBase_C*                          ShipRef;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Character.BP_Character_C.S_IncreaseContainerUsers
struct ABP_Character_C_S_IncreaseContainerUsers_Params
{
	class ABP_ContainerBase_C*                         ContainerRef;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Character.BP_Character_C.S_DecreaseContainerUsers
struct ABP_Character_C_S_DecreaseContainerUsers_Params
{
	class ABP_ContainerBase_C*                         ContainerRef;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Character.BP_Character_C.S_TakeAllFromContainer
struct ABP_Character_C_S_TakeAllFromContainer_Params
{
};

// Function BP_Character.BP_Character_C.OC_NotEnoughRoom
struct ABP_Character_C_OC_NotEnoughRoom_Params
{
};

// Function BP_Character.BP_Character_C.S_DepositAllToContainer
struct ABP_Character_C_S_DepositAllToContainer_Params
{
};

// Function BP_Character.BP_Character_C.CloseContainer
struct ABP_Character_C_CloseContainer_Params
{
};

// Function BP_Character.BP_Character_C.S_RemoveFromContainer
struct ABP_Character_C_S_RemoveFromContainer_Params
{
	TEnumAsByte<E_Items>                               Item;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Amount;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Character.BP_Character_C.S_AddToContainer
struct ABP_Character_C_S_AddToContainer_Params
{
	TEnumAsByte<E_Items>                               Item;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Amount;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Character.BP_Character_C.RequestCloseContainer
struct ABP_Character_C_RequestCloseContainer_Params
{
};

// Function BP_Character.BP_Character_C.OpenContainer
struct ABP_Character_C_OpenContainer_Params
{
	class ABP_ContainerBase_C*                         ContainerLocalRef;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Character.BP_Character_C.CloseInventory
struct ABP_Character_C_CloseInventory_Params
{
};

// Function BP_Character.BP_Character_C.RefreshTeleport
struct ABP_Character_C_RefreshTeleport_Params
{
};

// Function BP_Character.BP_Character_C.OC_ResetCanSwitch
struct ABP_Character_C_OC_ResetCanSwitch_Params
{
};

// Function BP_Character.BP_Character_C.MC_TeleportToShip
struct ABP_Character_C_MC_TeleportToShip_Params
{
	bool                                               Teleporting;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Character.BP_Character_C.S_SetTeleportToShip
struct ABP_Character_C_S_SetTeleportToShip_Params
{
	bool                                               Teleporting;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Character.BP_Character_C.OC_EquipWeapon
struct ABP_Character_C_OC_EquipWeapon_Params
{
	TEnumAsByte<E_EquipmentSlots>                      SwitchToWeaponType;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Character.BP_Character_C.OC_UnequipWeapon
struct ABP_Character_C_OC_UnequipWeapon_Params
{
};

// Function BP_Character.BP_Character_C.OC_SetWalkAndSprintSpeed
struct ABP_Character_C_OC_SetWalkAndSprintSpeed_Params
{
	int                                                SprintSpeed;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                WalkSpeed;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Character.BP_Character_C.SetWalkAndSprintSpeed
struct ABP_Character_C_SetWalkAndSprintSpeed_Params
{
	int                                                SprintSpeed;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                WalkSpeed;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Character.BP_Character_C.StopShipTeleport
struct ABP_Character_C_StopShipTeleport_Params
{
};

// Function BP_Character.BP_Character_C.ShipTeleport
struct ABP_Character_C_ShipTeleport_Params
{
};

// Function BP_Character.BP_Character_C.SwitchToHammer
struct ABP_Character_C_SwitchToHammer_Params
{
};

// Function BP_Character.BP_Character_C.SwitchToMelee
struct ABP_Character_C_SwitchToMelee_Params
{
};

// Function BP_Character.BP_Character_C.SwitchToSecondary
struct ABP_Character_C_SwitchToSecondary_Params
{
};

// Function BP_Character.BP_Character_C.SwitchToMainWeapon
struct ABP_Character_C_SwitchToMainWeapon_Params
{
};

// Function BP_Character.BP_Character_C.ChargeTeleport
struct ABP_Character_C_ChargeTeleport_Params
{
	bool                                               StopCharging;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Character.BP_Character_C.S_DropWeapon
struct ABP_Character_C_S_DropWeapon_Params
{
	bool                                               DropFromInventory;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<E_EquipmentSlots>                      WeaponSlot_IfFromInventory_;                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Character.BP_Character_C.S_SwitchWeapon
struct ABP_Character_C_S_SwitchWeapon_Params
{
	TEnumAsByte<E_EquipmentSlots>                      WeaponType;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                UpgradeID;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FTransform                                  SwitchToTransform;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	bool                                               Switch;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               DestroyWeapon;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Character.BP_Character_C.S_ActionbarSelect
struct ABP_Character_C_S_ActionbarSelect_Params
{
	TEnumAsByte<E_EquipmentSlots>                      Selection;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               FastSwitch;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Character.BP_Character_C.AddSprintBlockTime
struct ABP_Character_C_AddSprintBlockTime_Params
{
	float                                              Time;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Character.BP_Character_C.PrimaryFireReleased
struct ABP_Character_C_PrimaryFireReleased_Params
{
};

// Function BP_Character.BP_Character_C.PrimaryFirePressed
struct ABP_Character_C_PrimaryFirePressed_Params
{
};

// Function BP_Character.BP_Character_C.SecondaryFireReleased
struct ABP_Character_C_SecondaryFireReleased_Params
{
};

// Function BP_Character.BP_Character_C.SecondaryFirePressed
struct ABP_Character_C_SecondaryFirePressed_Params
{
};

// Function BP_Character.BP_Character_C.OC_LeaveSecondaryFire
struct ABP_Character_C_OC_LeaveSecondaryFire_Params
{
};

// Function BP_Character.BP_Character_C.LeaveSecondaryFire
struct ABP_Character_C_LeaveSecondaryFire_Params
{
};

// Function BP_Character.BP_Character_C.S_MeleePlayerHit
struct ABP_Character_C_S_MeleePlayerHit_Params
{
	struct FVector                                     Location;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class ABP_Character_C*                             Character;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Character.BP_Character_C.MeleePlayerHit
struct ABP_Character_C_MeleePlayerHit_Params
{
	struct FVector                                     Location;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class ABP_Character_C*                             Character;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Character.BP_Character_C.S_MeleeHitOther
struct ABP_Character_C_S_MeleeHitOther_Params
{
	struct FVector                                     Location;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Normal;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      HitActor;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                AnimationDirection;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Character.BP_Character_C.MeleeHitOther
struct ABP_Character_C_MeleeHitOther_Params
{
	struct FVector                                     Location;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Normal;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      HitActor;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                AnimationDirection;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Character.BP_Character_C.S_ChangeBlockPoseOnOtherPlayer
struct ABP_Character_C_S_ChangeBlockPoseOnOtherPlayer_Params
{
	class ABP_Character_C*                             CharRef;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Character.BP_Character_C.ChangeBlockPoseOnOtherPlayer
struct ABP_Character_C_ChangeBlockPoseOnOtherPlayer_Params
{
	class ABP_Character_C*                             CharRef;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Character.BP_Character_C.ChangeBlockPose
struct ABP_Character_C_ChangeBlockPose_Params
{
};

// Function BP_Character.BP_Character_C.LeaveAimingMode
struct ABP_Character_C_LeaveAimingMode_Params
{
};

// Function BP_Character.BP_Character_C.OC_CancelReload
struct ABP_Character_C_OC_CancelReload_Params
{
};

// Function BP_Character.BP_Character_C.OC_UnloadWeapon
struct ABP_Character_C_OC_UnloadWeapon_Params
{
	TEnumAsByte<E_EquipmentSlots>                      Weapon;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Character.BP_Character_C.S_SetWeaponLoaded
struct ABP_Character_C_S_SetWeaponLoaded_Params
{
	bool                                               IsLoaded;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Character.BP_Character_C.S_SpawnProjectile
struct ABP_Character_C_S_SpawnProjectile_Params
{
	struct FVector                                     CameraLocation;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Direction;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                TeamID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               LeftWeapon;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     AddedVelocity;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Character.BP_Character_C.S_SetDazed
struct ABP_Character_C_S_SetDazed_Params
{
};

// Function BP_Character.BP_Character_C.StopBlock
struct ABP_Character_C_StopBlock_Params
{
};

// Function BP_Character.BP_Character_C.StartBlock
struct ABP_Character_C_StartBlock_Params
{
	int                                                BlockPose;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Character.BP_Character_C.S_StopBlock
struct ABP_Character_C_S_StopBlock_Params
{
};

// Function BP_Character.BP_Character_C.S_StartBlock
struct ABP_Character_C_S_StartBlock_Params
{
	int                                                BlockPose;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Character.BP_Character_C.StopSecondaryFire
struct ABP_Character_C_StopSecondaryFire_Params
{
	struct FVector                                     CameraLocation;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Direction;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Character.BP_Character_C.AimingMode
struct ABP_Character_C_AimingMode_Params
{
};

// Function BP_Character.BP_Character_C.AimingModeOff
struct ABP_Character_C_AimingModeOff_Params
{
};

// Function BP_Character.BP_Character_C.AimingModeOn
struct ABP_Character_C_AimingModeOn_Params
{
};

// Function BP_Character.BP_Character_C.PlaceMarker
struct ABP_Character_C_PlaceMarker_Params
{
};

// Function BP_Character.BP_Character_C.EnterAimingMode
struct ABP_Character_C_EnterAimingMode_Params
{
};

// Function BP_Character.BP_Character_C.S_StopRepair
struct ABP_Character_C_S_StopRepair_Params
{
};

// Function BP_Character.BP_Character_C.S_StartRepair
struct ABP_Character_C_S_StartRepair_Params
{
};

// Function BP_Character.BP_Character_C.OC_SecondaryFire
struct ABP_Character_C_OC_SecondaryFire_Params
{
};

// Function BP_Character.BP_Character_C.ApplyKnockback
struct ABP_Character_C_ApplyKnockback_Params
{
	float                                              KnockbackAmount;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Character.BP_Character_C.PrimaryFire_Repeat
struct ABP_Character_C_PrimaryFire_Repeat_Params
{
};

// Function BP_Character.BP_Character_C.StopPrimaryFire
struct ABP_Character_C_StopPrimaryFire_Params
{
};

// Function BP_Character.BP_Character_C.OC_RefreshAmmo
struct ABP_Character_C_OC_RefreshAmmo_Params
{
};

// Function BP_Character.BP_Character_C.S_RefreshAmmo
struct ABP_Character_C_S_RefreshAmmo_Params
{
};

// Function BP_Character.BP_Character_C.OC_LeaveAimingMode
struct ABP_Character_C_OC_LeaveAimingMode_Params
{
};

// Function BP_Character.BP_Character_C.PrimaryFire
struct ABP_Character_C_PrimaryFire_Params
{
	struct FVector                                     CameraLocation;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Direction;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Character.BP_Character_C.SecondaryFire
struct ABP_Character_C_SecondaryFire_Params
{
	struct FVector                                     CameraLocation;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Direction;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Character.BP_Character_C.RefreshCustomisation
struct ABP_Character_C_RefreshCustomisation_Params
{
};

// Function BP_Character.BP_Character_C.S_PlaceCrewBanner
struct ABP_Character_C_S_PlaceCrewBanner_Params
{
};

// Function BP_Character.BP_Character_C.MC_Effect_BloodSplatter
struct ABP_Character_C_MC_Effect_BloodSplatter_Params
{
};

// Function BP_Character.BP_Character_C.MC_Effect_TeamCreate
struct ABP_Character_C_MC_Effect_TeamCreate_Params
{
};

// Function BP_Character.BP_Character_C.S_PlayMontageOnOtherPlayer
struct ABP_Character_C_S_PlayMontageOnOtherPlayer_Params
{
	class UAnimMontage*                                Montage;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               FullPose;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              FullPoseTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class ABP_Character_C*                             CharRef;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Character.BP_Character_C.PlayMontageOnOtherPlayer
struct ABP_Character_C_PlayMontageOnOtherPlayer_Params
{
	class UAnimMontage*                                Montage;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               FullPose;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              FullPoseTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class ABP_Character_C*                             CharRef;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Character.BP_Character_C.S_StopCurrentMontage
struct ABP_Character_C_S_StopCurrentMontage_Params
{
	float                                              BlendOutTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Character.BP_Character_C.OC_StopCurrentMontage
struct ABP_Character_C_OC_StopCurrentMontage_Params
{
	float                                              BlendOutTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Character.BP_Character_C.WeaponReloadAnimationLocal
struct ABP_Character_C_WeaponReloadAnimationLocal_Params
{
	TEnumAsByte<E_EquipmentSlots>                      WeaponType;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Character.BP_Character_C.S_WeaponReloadAnimation
struct ABP_Character_C_S_WeaponReloadAnimation_Params
{
};

// Function BP_Character.BP_Character_C.S_PlayMontage
struct ABP_Character_C_S_PlayMontage_Params
{
	class UAnimMontage*                                Montage;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               FullPose;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              FullPoseTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               PlayOnSelf;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               StopCurrentMontage;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Character.BP_Character_C.PlayMontageLocal
struct ABP_Character_C_PlayMontageLocal_Params
{
	class UAnimMontage*                                Montage;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               FullPose;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              FullPoseTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               PlayOnAll;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               StopCurrentMontage;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Character.BP_Character_C.MC_StopCurrentMontage
struct ABP_Character_C_MC_StopCurrentMontage_Params
{
	float                                              BlendOutTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Character.BP_Character_C.MC_StopWeaponReloadAnimation
struct ABP_Character_C_MC_StopWeaponReloadAnimation_Params
{
};

// Function BP_Character.BP_Character_C.MC_WeaponReloadAnimation
struct ABP_Character_C_MC_WeaponReloadAnimation_Params
{
};

// Function BP_Character.BP_Character_C.MC_PlayMontage
struct ABP_Character_C_MC_PlayMontage_Params
{
	class UAnimMontage*                                Montage;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               FullPose;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              FullPoseTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               PlayOnSelf;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               StopCurrentMontage;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Character.BP_Character_C.ApplyHealth
struct ABP_Character_C_ApplyHealth_Params
{
	int                                                Amount;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Character.BP_Character_C.OC_RemoveHUD
struct ABP_Character_C_OC_RemoveHUD_Params
{
};

// Function BP_Character.BP_Character_C.KillCharacter
struct ABP_Character_C_KillCharacter_Params
{
};

// Function BP_Character.BP_Character_C.S_RestoreHealth
struct ABP_Character_C_S_RestoreHealth_Params
{
	int                                                RestoreAmount;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Character.BP_Character_C.ApplyDamage
struct ABP_Character_C_ApplyDamage_Params
{
	int                                                DamageAmount;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class ABP_Controller_C*                            Attacker;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               headshot;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                TeamID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               SelfDamage;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Character.BP_Character_C.MC_CharacterDeath
struct ABP_Character_C_MC_CharacterDeath_Params
{
	class ABP_Character_C*                             KillerRef;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Character.BP_Character_C.OC_RemoveWeaponUI
struct ABP_Character_C_OC_RemoveWeaponUI_Params
{
};

// Function BP_Character.BP_Character_C.RemoveWeaponUI
struct ABP_Character_C_RemoveWeaponUI_Params
{
};

// Function BP_Character.BP_Character_C.AddWeaponUI
struct ABP_Character_C_AddWeaponUI_Params
{
	class UClass*                                      WidgetClass;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               HideHUD;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ChromaticAbberation;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Character.BP_Character_C.RemoveCustomUIOverlay
struct ABP_Character_C_RemoveCustomUIOverlay_Params
{
};

// Function BP_Character.BP_Character_C.AddCustomUIOverlay
struct ABP_Character_C_AddCustomUIOverlay_Params
{
	class UClass*                                      WidgetClass;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               HideHUD;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class ABP_VehicleBase_C*                           VehicleRef;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Character.BP_Character_C.RecieveItemsIndicator
struct ABP_Character_C_RecieveItemsIndicator_Params
{
	struct FST_InventoryArray                          Item;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float                                              Delay;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               AtMouseLocation;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Character.BP_Character_C.OC_RemoveCustomUIOverlay
struct ABP_Character_C_OC_RemoveCustomUIOverlay_Params
{
};

// Function BP_Character.BP_Character_C.OC_AddCustomUIOverlay
struct ABP_Character_C_OC_AddCustomUIOverlay_Params
{
	class UClass*                                      WidgetClass;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               HideHUD;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class ABP_VehicleBase_C*                           VehicleRef;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Character.BP_Character_C.S_PaintSpray
struct ABP_Character_C_S_PaintSpray_Params
{
	struct FVector                                     ForwardVector;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Character.BP_Character_C.OpenActionMenu
struct ABP_Character_C_OpenActionMenu_Params
{
};

// Function BP_Character.BP_Character_C.MC_Voiceline
struct ABP_Character_C_MC_Voiceline_Params
{
	struct FName                                       VoiceLineRowName;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Character.BP_Character_C.ActionMenuReleased
struct ABP_Character_C_ActionMenuReleased_Params
{
};

// Function BP_Character.BP_Character_C.ActionMenuPressed
struct ABP_Character_C_ActionMenuPressed_Params
{
};

// Function BP_Character.BP_Character_C.CloseBuildMenu
struct ABP_Character_C_CloseBuildMenu_Params
{
};

// Function BP_Character.BP_Character_C.CloseActionMenu
struct ABP_Character_C_CloseActionMenu_Params
{
};

// Function BP_Character.BP_Character_C.OpenSpyglass
struct ABP_Character_C_OpenSpyglass_Params
{
};

// Function BP_Character.BP_Character_C.RequestCloseSpyglass
struct ABP_Character_C_RequestCloseSpyglass_Params
{
};

// Function BP_Character.BP_Character_C.S_SetSpyGlass
struct ABP_Character_C_S_SetSpyGlass_Params
{
	bool                                               Enabled;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Character.BP_Character_C.CloseSpyglass
struct ABP_Character_C_CloseSpyglass_Params
{
};

// Function BP_Character.BP_Character_C.S_ApplyOptions
struct ABP_Character_C_S_ApplyOptions_Params
{
	bool                                               AimingModeToggle;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               CameraPositionLeft;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               FirstPersonMode;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Character.BP_Character_C.ResetFPSOffset
struct ABP_Character_C_ResetFPSOffset_Params
{
};

// Function BP_Character.BP_Character_C.OC_ResetFPSOffset
struct ABP_Character_C_OC_ResetFPSOffset_Params
{
};

// Function BP_Character.BP_Character_C.OC_SetFPSOffset
struct ABP_Character_C_OC_SetFPSOffset_Params
{
	struct FVector                                     CharacterOffset;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    RotationOffset;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Scale;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Character.BP_Character_C.ExecuteUbergraph_BP_Character
struct ABP_Character_C_ExecuteUbergraph_BP_Character_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
