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

// Function BP_VehicleCannon.BP_VehicleCannon_C.DamageBlockChain
struct ABP_VehicleCannon_C_DamageBlockChain_Params
{
	int                                                DamageAmount;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_VehicleCannon.BP_VehicleCannon_C.OnRep_CannonBlockChainHP
struct ABP_VehicleCannon_C_OnRep_CannonBlockChainHP_Params
{
};

// Function BP_VehicleCannon.BP_VehicleCannon_C.OnRep_CannonbBlocked
struct ABP_VehicleCannon_C_OnRep_CannonbBlocked_Params
{
};

// Function BP_VehicleCannon.BP_VehicleCannon_C.SetCannonLevelAppearance
struct ABP_VehicleCannon_C_SetCannonLevelAppearance_Params
{
};

// Function BP_VehicleCannon.BP_VehicleCannon_C.OnRep_CannonLevel
struct ABP_VehicleCannon_C_OnRep_CannonLevel_Params
{
};

// Function BP_VehicleCannon.BP_VehicleCannon_C.UpgradeCannon
struct ABP_VehicleCannon_C_UpgradeCannon_Params
{
};

// Function BP_VehicleCannon.BP_VehicleCannon_C.CheckSpecificAmmo
struct ABP_VehicleCannon_C_CheckSpecificAmmo_Params
{
	TEnumAsByte<E_CannonAmmo>                          AmmoType;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               HasAmmo;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_VehicleCannon.BP_VehicleCannon_C.FireCannon
struct ABP_VehicleCannon_C_FireCannon_Params
{
	struct FVector                                     StartLocation;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Direction;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                TeamID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<E_CannonAmmo>                          AmmoType;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     AddedVelocity;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               OwnProjectile;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_VehicleCannon.BP_VehicleCannon_C.Muzzle
struct ABP_VehicleCannon_C_Muzzle_Params
{
	class UParticleSystem*                             Muzzle;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UParticleSystem*                             Smoke;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UParticleSystem*                             Fuse;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_VehicleCannon.BP_VehicleCannon_C.FireProjectile
struct ABP_VehicleCannon_C_FireProjectile_Params
{
	class UClass*                                      Projectile;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     StartLocation;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Direction;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                TeamID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     AddedVelocity;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               OwnProjectile;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_VehicleCannon.BP_VehicleCannon_C.AmmoDown
struct ABP_VehicleCannon_C_AmmoDown_Params
{
	bool                                               Cycled;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_VehicleCannon.BP_VehicleCannon_C.AmmoUp
struct ABP_VehicleCannon_C_AmmoUp_Params
{
	bool                                               Cycled;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_VehicleCannon.BP_VehicleCannon_C.CheckAmmo
struct ABP_VehicleCannon_C_CheckAmmo_Params
{
	bool                                               HasAmmo;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_VehicleCannon.BP_VehicleCannon_C.LoadAmmo
struct ABP_VehicleCannon_C_LoadAmmo_Params
{
};

// Function BP_VehicleCannon.BP_VehicleCannon_C.OnRep_LoadedAmmo
struct ABP_VehicleCannon_C_OnRep_LoadedAmmo_Params
{
};

// Function BP_VehicleCannon.BP_VehicleCannon_C.OnRep_AmmoType
struct ABP_VehicleCannon_C_OnRep_AmmoType_Params
{
};

// Function BP_VehicleCannon.BP_VehicleCannon_C.OnRep_Loaded
struct ABP_VehicleCannon_C_OnRep_Loaded_Params
{
};

// Function BP_VehicleCannon.BP_VehicleCannon_C.CycleAmmoPrevious
struct ABP_VehicleCannon_C_CycleAmmoPrevious_Params
{
};

// Function BP_VehicleCannon.BP_VehicleCannon_C.CycleAmmoNext
struct ABP_VehicleCannon_C_CycleAmmoNext_Params
{
};

// Function BP_VehicleCannon.BP_VehicleCannon_C.UserConstructionScript
struct ABP_VehicleCannon_C_UserConstructionScript_Params
{
};

// Function BP_VehicleCannon.BP_VehicleCannon_C.InpActEvt_PrimaryFire_K2Node_InputActionEvent_1
struct ABP_VehicleCannon_C_InpActEvt_PrimaryFire_K2Node_InputActionEvent_1_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_VehicleCannon.BP_VehicleCannon_C.InpActEvt_MouseScrollUp_K2Node_InputKeyEvent_4
struct ABP_VehicleCannon_C_InpActEvt_MouseScrollUp_K2Node_InputKeyEvent_4_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_VehicleCannon.BP_VehicleCannon_C.InpActEvt_MouseScrollDown_K2Node_InputKeyEvent_3
struct ABP_VehicleCannon_C_InpActEvt_MouseScrollDown_K2Node_InputKeyEvent_3_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_VehicleCannon.BP_VehicleCannon_C.InpActEvt_A_K2Node_InputKeyEvent_2
struct ABP_VehicleCannon_C_InpActEvt_A_K2Node_InputKeyEvent_2_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_VehicleCannon.BP_VehicleCannon_C.InpActEvt_D_K2Node_InputKeyEvent_1
struct ABP_VehicleCannon_C_InpActEvt_D_K2Node_InputKeyEvent_1_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_VehicleCannon.BP_VehicleCannon_C.ReceiveBeginPlay
struct ABP_VehicleCannon_C_ReceiveBeginPlay_Params
{
};

// Function BP_VehicleCannon.BP_VehicleCannon_C.ReceiveTick
struct ABP_VehicleCannon_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_VehicleCannon.BP_VehicleCannon_C.InpAxisKeyEvt_MouseY_K2Node_InputAxisKeyEvent_12
struct ABP_VehicleCannon_C_InpAxisKeyEvt_MouseY_K2Node_InputAxisKeyEvent_12_Params
{
	float                                              AxisValue;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_VehicleCannon.BP_VehicleCannon_C.InpAxisKeyEvt_MouseX_K2Node_InputAxisKeyEvent_16
struct ABP_VehicleCannon_C_InpAxisKeyEvt_MouseX_K2Node_InputAxisKeyEvent_16_Params
{
	float                                              AxisValue;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_VehicleCannon.BP_VehicleCannon_C.S_Fire
struct ABP_VehicleCannon_C_S_Fire_Params
{
	struct FVector                                     StartLocation;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Direction;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                TeamID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<E_CannonAmmo>                          AmmoType;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     AddedVelocity;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_VehicleCannon.BP_VehicleCannon_C.S_SetYaw
struct ABP_VehicleCannon_C_S_SetYaw_Params
{
	float                                              Yaw;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_VehicleCannon.BP_VehicleCannon_C.S_SetPitch
struct ABP_VehicleCannon_C_S_SetPitch_Params
{
	float                                              Pitch;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_VehicleCannon.BP_VehicleCannon_C.RequestCannonFire
struct ABP_VehicleCannon_C_RequestCannonFire_Params
{
	struct FVector                                     StartLocation;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Direction;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                TeamID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<E_CannonAmmo>                          AmmoType;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     AddedVelocity;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               OwnProjectile;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_VehicleCannon.BP_VehicleCannon_C.S_StartReload
struct ABP_VehicleCannon_C_S_StartReload_Params
{
};

// Function BP_VehicleCannon.BP_VehicleCannon_C.S_StopReload
struct ABP_VehicleCannon_C_S_StopReload_Params
{
};

// Function BP_VehicleCannon.BP_VehicleCannon_C.S_NextAmmoType
struct ABP_VehicleCannon_C_S_NextAmmoType_Params
{
};

// Function BP_VehicleCannon.BP_VehicleCannon_C.S_PreviousAmmoType
struct ABP_VehicleCannon_C_S_PreviousAmmoType_Params
{
};

// Function BP_VehicleCannon.BP_VehicleCannon_C.MC_Reloaded
struct ABP_VehicleCannon_C_MC_Reloaded_Params
{
};

// Function BP_VehicleCannon.BP_VehicleCannon_C.UnOccupied
struct ABP_VehicleCannon_C_UnOccupied_Params
{
};

// Function BP_VehicleCannon.BP_VehicleCannon_C.Occupied
struct ABP_VehicleCannon_C_Occupied_Params
{
};

// Function BP_VehicleCannon.BP_VehicleCannon_C.MC_Pitch
struct ABP_VehicleCannon_C_MC_Pitch_Params
{
	float                                              Pitch;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_VehicleCannon.BP_VehicleCannon_C.MC_Yaw
struct ABP_VehicleCannon_C_MC_Yaw_Params
{
	float                                              Yaw;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_VehicleCannon.BP_VehicleCannon_C.LoadKeys
struct ABP_VehicleCannon_C_LoadKeys_Params
{
};

// Function BP_VehicleCannon.BP_VehicleCannon_C.Resetkeys
struct ABP_VehicleCannon_C_Resetkeys_Params
{
};

// Function BP_VehicleCannon.BP_VehicleCannon_C.RefreshKeys
struct ABP_VehicleCannon_C_RefreshKeys_Params
{
};

// Function BP_VehicleCannon.BP_VehicleCannon_C.MC_FireCannon
struct ABP_VehicleCannon_C_MC_FireCannon_Params
{
	struct FVector                                     StartLocation;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Direction;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                TeamID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<E_CannonAmmo>                          AmmoType;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     AddedVelocity;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_VehicleCannon.BP_VehicleCannon_C.MC_CannonUpgrade
struct ABP_VehicleCannon_C_MC_CannonUpgrade_Params
{
};

// Function BP_VehicleCannon.BP_VehicleCannon_C.BlockCannon
struct ABP_VehicleCannon_C_BlockCannon_Params
{
};

// Function BP_VehicleCannon.BP_VehicleCannon_C.ExecuteUbergraph_BP_VehicleCannon
struct ABP_VehicleCannon_C_ExecuteUbergraph_BP_VehicleCannon_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
