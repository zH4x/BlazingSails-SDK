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

// BlueprintGeneratedClass BP_Character.BP_Character_C
// 0x060B (0x0D4B - 0x0740)
class ABP_Character_C : public ACharacter
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0740(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UCapsuleComponent*                           LegCollision;                                             // 0x0748(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UArrowComponent*                             MuzzleAnchor;                                             // 0x0750(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        Beard;                                                    // 0x0758(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USkeletalMeshComponent*                      Belt;                                                     // 0x0760(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USkeletalMeshComponent*                      Pants;                                                    // 0x0768(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UArrowComponent*                             SpectatorAnchor;                                          // 0x0770(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UCameraComponent*                            Camera;                                                   // 0x0778(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UArrowComponent*                             CameraAnchor;                                             // 0x0780(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UKinematicPawnMovement_C*                    KinematicPawnMovement1;                                   // 0x0788(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    P_Amulet;                                                 // 0x0790(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        amulet;                                                   // 0x0798(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        Hat;                                                      // 0x07A0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UCapsuleComponent*                           BodyCollision;                                            // 0x07A8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UCapsuleComponent*                           HeadCollision;                                            // 0x07B0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        hammer;                                                   // 0x07B8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        Banner;                                                   // 0x07C0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UWidgetComponent*                            UsernameWidget;                                           // 0x07C8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UPlayerEffects_C*                            PlayerEffects;                                            // 0x07D0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UInventory_C*                                Inventory;                                                // 0x07D8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USpringArmComponent*                         IronSightSwayArm;                                         // 0x07E0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USpringArmComponent*                         SelfInspectSpringArm;                                     // 0x07E8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USkeletalMeshComponent*                      CharacterMesh;                                            // 0x07F0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USpringArmComponent*                         SpringArm;                                                // 0x07F8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FString                                     UserName;                                                 // 0x0800(0x0010) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance)
	TEnumAsByte<E_Vehicles>                            VehicleState;                                             // 0x0810(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0811(0x0003) MISSED OFFSET
	int                                                TeamID;                                                   // 0x0814(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class ABP_Controller_C*                            ControllerRefLocal;                                       // 0x0818(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class ABP_Controller_C*                            ControllerRefServer;                                      // 0x0820(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class ABP_InteractableBase_C*                      InteractableRefLocal;                                     // 0x0828(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class ABP_InteractableBase_C*                      InteractableRefServer;                                    // 0x0830(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class ABP_BoatMeshBase_C*                          ShipRefMulti;                                             // 0x0838(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class ABP_BoatMeshBase_C*                          ShipRefServer;                                            // 0x0840(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class ABP_WeaponBase_C*                            MainWeaponRefServer;                                      // 0x0848(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class ABP_WeaponBase_C*                            MainWeaponRefLocal;                                       // 0x0850(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class ABP_WeaponBase_C*                            SideArmRefServer;                                         // 0x0858(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class ABP_WeaponBase_C*                            SideArmRefLocal;                                          // 0x0860(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class ABP_WeaponBase_C*                            MeleeRefServer;                                           // 0x0868(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class ABP_WeaponBase_C*                            MeleeRefLocal;                                            // 0x0870(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class ABP_WeaponBase_C*                            ThrowableRefServer;                                       // 0x0878(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class ABP_WeaponBase_C*                            UpgradeRef;                                               // 0x0880(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class AWaterSettings_C*                            WaterSettingsRef;                                         // 0x0888(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class ABP_CrewBanner_C*                            CrewBannerRef;                                            // 0x0890(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class ABP_PaintSpray_C*                            PaintSprayRef;                                            // 0x0898(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class ABP_HullDamage_C*                            HullDamageRefLocal;                                       // 0x08A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class ABP_HullDamage_C*                            HullDamageRefServer;                                      // 0x08A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class ABP_ContainerBase_C*                         ContainerRef;                                             // 0x08B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class ABP_ContainerBase_C*                         ContainerLocalRef;                                        // 0x08B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class ABP_MainPP_C*                                MainPPRef;                                                // 0x08C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class ABP_IconBase_C*                              MarkerRef;                                                // 0x08C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class ABP_Deathzone_C*                             DeadZoneRef;                                              // 0x08D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class ABP_VehicleBase_C*                           VehicleRefLocal;                                          // 0x08D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class ABP_VehicleBase_C*                           VehicleRefServer;                                         // 0x08E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class ABP_VehicleSteeringWheel_C*                  SteeringWheelRef;                                         // 0x08E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class ABP_MastBase_C*                              MastRef;                                                  // 0x08F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class UUI_HUDBase_C*                               HUDRef;                                                   // 0x08F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	int                                                TeamPlayerColor;                                          // 0x0900(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                Health;                                                   // 0x0904(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                MaxHealth;                                                // 0x0908(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                ClipAmount;                                               // 0x090C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                BlockPose;                                                // 0x0910(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                BuoyIndex;                                                // 0x0914(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LocalCurrenSteeringFrame;                                 // 0x0918(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ReplicatedSteeringFrame;                                  // 0x091C(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Spread;                                                   // 0x0920(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SprintSpeed;                                              // 0x0924(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DeltaTime;                                                // 0x0928(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              WalkSpeed;                                                // 0x092C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ActiveFieldOfView;                                        // 0x0930(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AimZoomPercentage;                                        // 0x0934(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SpyglassZoom;                                             // 0x0938(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ReloadTimer;                                              // 0x093C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ReloadTime;                                               // 0x0940(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Knockback;                                                // 0x0944(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              KnockbackTimer;                                           // 0x0948(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              BlockTimer;                                               // 0x094C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DazedTimer;                                               // 0x0950(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              WaterHeight;                                              // 0x0954(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              WaterDepth;                                               // 0x0958(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TeleportToShipTimer;                                      // 0x095C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ShipTeleportTime;                                         // 0x0960(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     LookAtLocationTarget;                                     // 0x0964(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     SpringArmOffset;                                          // 0x0970(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     LastGroundTraceLocation;                                  // 0x097C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     NewGroundTraceLocation;                                   // 0x0988(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     SailRepairDetectLocation;                                 // 0x0994(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FRotator                                    Direction;                                                // 0x09A0(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FRotator                                    FPSRotationOffset;                                        // 0x09AC(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               PrimaryFireActivated;                                     // 0x09B8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               MainWeaponIsZoom;                                         // 0x09B9(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               SideArmIsZoom;                                            // 0x09BA(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               MeleeIsZoom;                                              // 0x09BB(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Steering;                                                 // 0x09BC(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               InVehicleReplicated;                                      // 0x09BD(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x09BE(0x0002) MISSED OFFSET
	float                                              InteractableDetectionRange;                               // 0x09C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               Overweight;                                               // 0x09C4(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x09C5(0x0003) MISSED OFFSET
	class UUI_CharacterInventory_C*                    InventoryRef;                                             // 0x09C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UUserWidget*                                 CustomUIOverlayRef;                                       // 0x09D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	float                                              MouseSensitivity;                                         // 0x09D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                MainWeapon;                                               // 0x09DC(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	int                                                sidearm;                                                  // 0x09E0(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	int                                                melee;                                                    // 0x09E4(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	int                                                ThrowableBad;                                             // 0x09E8(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                ThrowableIndex;                                           // 0x09EC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                Upgrade;                                                  // 0x09F0(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<E_EquipmentSlots>                      EquipedWeapon;                                            // 0x09F4(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bAimingMode;                                              // 0x09F5(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x2];                                       // 0x09F6(0x0002) MISSED OFFSET
	class UUI_Weapon_C*                                WeaponUiRef;                                              // 0x09F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UUI_PieMenu_C*                               ActionMenuRef;                                            // 0x0A00(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UUI_PieMenu_C*                               BuildMenu;                                                // 0x0A08(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UUI_Container_C*                             ContainerWidgetRef;                                       // 0x0A10(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UUI_Spyglass_C*                              SpyglassWidgetRef;                                        // 0x0A18(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UUI_Username_C*                              UsernameWidgetRef;                                        // 0x0A20(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UUI_PlayerEffectBase_C*                      PlayerEffectsWidgetRef;                                   // 0x0A28(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UUserWidget*                                 CustomWeaponUIOverlay;                                    // 0x0A30(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UUI_CannonballChest_C*                       CannonballChestRef;                                       // 0x0A38(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UCharacter_AnimBP_C*                         AnimationInstanceRef;                                     // 0x0A40(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<E_EquipmentSlots>                      SavedEquipedWeapon;                                       // 0x0A48(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<E_EquipmentSlots>                      SecondSavedEquipedWeapon;                                 // 0x0A49(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<E_AnimationType>                       AnimationType;                                            // 0x0A4A(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x5];                                       // 0x0A4B(0x0005) MISSED OFFSET
	class UInventory_C*                                InteractingInventoryRef;                                  // 0x0A50(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UMaterialInstanceDynamic*                    BannerMaterialInstance;                                   // 0x0A58(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInstanceDynamic*                    FaceMaterialInstance;                                     // 0x0A60(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInstanceDynamic*                    AmuletMaterialInstanceRef;                                // 0x0A68(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CameraSwaySpeed;                                          // 0x0A70(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RightLeftCameraSwayAmount;                                // 0x0A74(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ObstructionDetectionRange;                                // 0x0A78(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              HeadShotDamageMultiplier;                                 // 0x0A7C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              PlayerFieldOfView;                                        // 0x0A80(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               EnableIronSightCorrectionKeys;                            // 0x0A84(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               AutomaticReload;                                          // 0x0A85(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               IsDead;                                                   // 0x0A86(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               SprintingAll;                                             // 0x0A87(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               SprintingLocal;                                           // 0x0A88(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bHideCharacter;                                           // 0x0A89(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               MovingForward;                                            // 0x0A8A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               MovingBackward;                                           // 0x0A8B(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               MovingRight;                                              // 0x0A8C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               MovingLeft;                                               // 0x0A8D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<E_Items>                               SelectedThrowable;                                        // 0x0A8E(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               InventoryOpen;                                            // 0x0A8F(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               ActionMenuOpen;                                           // 0x0A90(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bLocked;                                                  // 0x0A91(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Repairing;                                                // 0x0A92(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               BuildMenuOpen;                                            // 0x0A93(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               DespawnWeaponsWhenDropped;                                // 0x0A94(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               SpyGlassActive;                                           // 0x0A95(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x2];                                       // 0x0A96(0x0002) MISSED OFFSET
	TArray<class UUI_PlayerEffectBase_C*>              PlayerEffectWidgets;                                      // 0x0A98(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class ABP_InteractableBase_C*>              OverlappingInteractables;                                 // 0x0AA8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	TArray<class AActor*>                              AttachedActors;                                           // 0x0AB8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	bool                                               SpyGlassPose;                                             // 0x0AC8(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               FetchLocalMainWeapon;                                     // 0x0AC9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               FetchLocalSideArm;                                        // 0x0ACA(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               FetchLocalMelee;                                          // 0x0ACB(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Blocking;                                                 // 0x0ACC(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Swapping;                                                 // 0x0ACD(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               WalkingOnSurface;                                         // 0x0ACE(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Dazed;                                                    // 0x0ACF(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Swimming;                                                 // 0x0AD0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               SecondaryPressed;                                         // 0x0AD1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               CameraLeft;                                               // 0x0AD2(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               DisableSprint;                                            // 0x0AD3(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               InIslandSphere;                                           // 0x0AD4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               PrimaryFiring;                                            // 0x0AD5(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               InWaterVolume;                                            // 0x0AD6(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsServer;                                                 // 0x0AD7(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               TeleportToShip;                                           // 0x0AD8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               EnoughRoom;                                               // 0x0AD9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               FindDeadZone;                                             // 0x0ADA(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               LookingAtWorldMap;                                        // 0x0ADB(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               SmoothCameraTransitioning;                                // 0x0ADC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               SwitchBackToAimAfterReload;                               // 0x0ADD(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData06[0x2];                                       // 0x0ADE(0x0002) MISSED OFFSET
	struct FST_Customisation                           Customisation;                                            // 0x0AE0(0x0068) (Edit, BlueprintVisible, Net, DisableEditOnInstance)
	bool                                               AimingModeToggle;                                         // 0x0B48(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData07[0x3];                                       // 0x0B49(0x0003) MISSED OFFSET
	struct FVector                                     FPSLocationOffset;                                        // 0x0B4C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<class ABP_InteractableBase_C*>              Interactables;                                            // 0x0B58(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	class UStaticMeshComponent*                        MapMeshRef;                                               // 0x0B68(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	TArray<class ABP_VehicleBase_C*>                   Vehicles;                                                 // 0x0B70(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	class UStaticMeshComponent*                        SpyGlassMeshRef;                                          // 0x0B80(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	TEnumAsByte<E_InteractableType>                    SelectedInteractableType;                                 // 0x0B88(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData08[0x3];                                       // 0x0B89(0x0003) MISSED OFFSET
	struct FVector                                     AimLocationOffset;                                        // 0x0B8C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               EnableKillsInPreGame;                                     // 0x0B98(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData09[0x3];                                       // 0x0B99(0x0003) MISSED OFFSET
	struct FRotator                                    AimRotationOffset;                                        // 0x0B9C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FKey                                        MarkLocationKey;                                          // 0x0BA8(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FKey                                        ActionMenu;                                               // 0x0BC0(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FKey                                        MainWeaponKey;                                            // 0x0BD8(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FKey                                        SecondaryWeaponkey;                                       // 0x0BF0(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FKey                                        MeleeKey;                                                 // 0x0C08(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FKey                                        HammerKey;                                                // 0x0C20(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FKey                                        TeleportKey;                                              // 0x0C38(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FKey                                        UseHealKey;                                               // 0x0C50(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FKey                                        SecondaryFireKey;                                         // 0x0C68(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FKey                                        PrimaryFireKey;                                           // 0x0C80(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               BloodEffectPlaying;                                       // 0x0C98(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData10[0x3];                                       // 0x0C99(0x0003) MISSED OFFSET
	float                                              MouseXValue;                                              // 0x0C9C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MouseYValue;                                              // 0x0CA0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              StomachPitch;                                             // 0x0CA4(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CurrentStomachPitch;                                      // 0x0CA8(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              KnockbackAmount;                                          // 0x0CAC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     DefaultFPSLocation;                                       // 0x0CB0(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               OwnCharacter;                                             // 0x0CBC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData11[0x3];                                       // 0x0CBD(0x0003) MISSED OFFSET
	struct FRotator                                    PlayerRotation;                                           // 0x0CC0(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Reloading;                                                // 0x0CCC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               SetUserName;                                              // 0x0CCD(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData12[0x2];                                       // 0x0CCE(0x0002) MISSED OFFSET
	float                                              AimingModeInterpolationSpeed;                             // 0x0CD0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Yaw;                                                      // 0x0CD4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               DetectingMast;                                            // 0x0CD8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               DetectingDamagePoint;                                     // 0x0CD9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               MakeHammerHitSound;                                       // 0x0CDA(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData13[0x1];                                       // 0x0CDB(0x0001) MISSED OFFSET
	float                                              MouseInvertMultiplier;                                    // 0x0CDC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               TotemCharged;                                             // 0x0CE0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               CanSwitch;                                                // 0x0CE1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               CommandWheelOpen;                                         // 0x0CE2(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData14[0x5];                                       // 0x0CE3(0x0005) MISSED OFFSET
	class UUI_PieMenu_C*                               CommandWheelRef;                                          // 0x0CE8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	bool                                               EnableVehiclesInPreGame;                                  // 0x0CF0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData15[0x3];                                       // 0x0CF1(0x0003) MISSED OFFSET
	float                                              VoiceLineVolume;                                          // 0x0CF4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              VoiceLinePitch;                                           // 0x0CF8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     CharacterScale;                                           // 0x0CFC(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                Level;                                                    // 0x0D08(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               TeleportToShipStartLocation;                              // 0x0D0C(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData16[0x3];                                       // 0x0D0D(0x0003) MISSED OFFSET
	class UMaterialInstanceDynamic*                    CharacterMaterialInstanceRef;                             // 0x0D10(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               EndGame;                                                  // 0x0D18(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               CanStopRepair;                                            // 0x0D19(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData17[0x2];                                       // 0x0D1A(0x0002) MISSED OFFSET
	float                                              DeathMaterialDissolveAmount;                              // 0x0D1C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               ShowBanner;                                               // 0x0D20(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData18[0x7];                                       // 0x0D21(0x0007) MISSED OFFSET
	class ABP_Character_C*                             KillerRef;                                                // 0x0D28(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class ABP_RespawnTotem_C*                          TotemWeAreStandingOn;                                     // 0x0D30(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	bool                                               bSecondaryFirePressed;                                    // 0x0D38(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bPrimaryFirePressed;                                      // 0x0D39(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData19[0x6];                                       // 0x0D3A(0x0006) MISSED OFFSET
	class UUserWidget*                                 WeaponWidgetRef;                                          // 0x0D40(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	bool                                               InVehicleLocal;                                           // 0x0D48(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               ControllerSet;                                            // 0x0D49(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               SelfInspectModeOn;                                        // 0x0D4A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Character.BP_Character_C");
		return ptr;
	}


	void ToggleOwnCharacterInspectMode(bool ModeOn);
	void ServerCheckIfOnShip(bool* OnShip, class ABP_BoatMeshBase_C** ShipRef);
	void RepairAnimation();
	void CleanUpLocally();
	void OnRep_ShowBanner();
	void PlayLocalSoundAtLocation(const struct FVector& Location, class USoundBase* Sound, bool OnlyOnSelf, float Volume);
	void UpgradeInventory(bool* Upgraded);
	void FetchUpgradesForActionMenu(TArray<struct FST_PieMenuSelection>* NewParam);
	void CheckIfDifferentWeapon(TEnumAsByte<E_EquipmentSlots> Weapon, int WeaponID, bool* DifferentWeapon);
	void OnRep_TeamPlayerColor();
	void GetTotemChargeMultiplier(float* Multiplier);
	void TakeAllFromContainer();
	void OnRep_MakeHammerHitSound();
	void StabilizeCamera(bool Stabilize);
	void SetAimingMode(bool Aiming);
	void DepositAllToContainer();
	void FetchLocalWeaponRef(TEnumAsByte<E_EquipmentSlots> WeaponType);
	void OnRep_SprintingAll();
	void OnRep_SpyGlassPose();
	void SelectInteractable(class ABP_InteractableBase_C** ClosestInteractable, class ABP_VehicleBase_C** ClosestVehicle, TEnumAsByte<E_InteractableType>* InteractableType, bool* NothingSelected);
	void OnRep_LookingAtWorldMap();
	void ShowHideAmulet();
	void OnRep_TeleportToShip();
	void SearchForLocalWeapons();
	void OnRep_Melee();
	void OnRep_SideArm();
	void OnRep_MainWeapon();
	void ResetLoadoutAndHealth();
	void HideLocalWeapons(bool DontShowEquipedWeapon);
	void SlowdownWhenFiring(bool* WasSprinting);
	void SetSpringArmMode();
	void ShowFPSModelsOnly();
	void ToggleFPSMode(bool ModeOn);
	void LoadCustomisation();
	void RemoveWeapon(TEnumAsByte<E_EquipmentSlots> Weapon);
	void ApplyOptions();
	void OnRep_CameraRight();
	void OnRep_Customisation();
	void OnRep_BlockPose();
	void OnRep_Blocking();
	void OnRep_IsDead();
	void SetSpyGlassPPWeight(float Weight);
	void RefreshAmmo();
	void OnRep_EquipedWeapon();
	void DropItemDeathChest();
	void LoadUpgrade();
	void LocalRepairDetect();
	void OnRep_Repairing();
	void CheckThrowableAmmo(TEnumAsByte<E_Items> throwable, bool* HasThrowableAmmo);
	void CycleThrowables(bool* NoThrowablesFound);
	void SpawnThrowable();
	void SetEmblemAndColor();
	void PaintSpray(const struct FVector& ForwardVector);
	void CheckIfFinalBlow(int damage, bool headshot, bool* IsFinalBlow);
	void CleanUp();
	void OnRep_Username();
	void PlayReloadAnimation(int WeaponID);
	void CancelReloads();
	void UnloadWeaponsServer();
	void OnRep_TeamID();
	void EnterWalkingMode();
	void EnterSwimmingMode();
	void GetEquipedWeaponID(int* WeaponID);
	void OnRep_Steering();
	void OnRep_VehicleState();
	void AddItem(TEnumAsByte<E_Items> Item, int Amount);
	void DropWeapon(TEnumAsByte<E_EquipmentSlots> EquipedWeapon, bool DropToSpecificLocation, const struct FTransform& SpecificDropLocation, bool DestroyWeapon);
	void OnRep_AnimationType();
	void UnequipWeapons();
	void LoadMelee();
	void LoadSideArm();
	void LoadMainWeapon();
	void ShipDetect();
	void UserConstructionScript();
	void InpActEvt_Inventory_K2Node_InputActionEvent_5(const struct FKey& Key);
	void InpActEvt_K_K2Node_InputKeyEvent_12(const struct FKey& Key);
	void InpActEvt_X_K2Node_InputKeyEvent_11(const struct FKey& Key);
	void InpActEvt_Reload_K2Node_InputActionEvent_4(const struct FKey& Key);
	void InpActEvt_CrewBanner_K2Node_InputActionEvent_3(const struct FKey& Key);
	void InpActEvt_PaintSpray_K2Node_InputActionEvent_2(const struct FKey& Key);
	void InpActEvt_Spyglass_K2Node_InputActionEvent_1(const struct FKey& Key);
	void InpActEvt_Decimal_K2Node_InputKeyEvent_10(const struct FKey& Key);
	void InpActEvt_NumPadFive_K2Node_InputKeyEvent_9(const struct FKey& Key);
	void InpActEvt_NumPadEight_K2Node_InputKeyEvent_8(const struct FKey& Key);
	void InpActEvt_NumPadSix_K2Node_InputKeyEvent_7(const struct FKey& Key);
	void InpActEvt_NumPadFour_K2Node_InputKeyEvent_6(const struct FKey& Key);
	void InpActEvt_Subtract_K2Node_InputKeyEvent_5(const struct FKey& Key);
	void InpActEvt_Down_K2Node_InputKeyEvent_4(const struct FKey& Key);
	void InpActEvt_Up_K2Node_InputKeyEvent_3(const struct FKey& Key);
	void InpActEvt_Right_K2Node_InputKeyEvent_2(const struct FKey& Key);
	void InpActEvt_Left_K2Node_InputKeyEvent_1(const struct FKey& Key);
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void MC_SetSteeringWheelRef(class ABP_VehicleSteeringWheel_C* SteeringWheelRef);
	void ReceiveDestroyed();
	void OC_HitIndicator();
	void MC_RefreshBanner();
	void OC_AddPlayerEffect(class UClass* Widget, float Time);
	void OC_RemovePlayerEffect();
	void OC_UpgradeInventory();
	void BreakLootcrate(class ABP_Lootcrate_C* lootcrate);
	void S_BreakLootCrate(class ABP_Lootcrate_C* lootcrate);
	void DropItemChest();
	void S_CleanUpInteractable(class ABP_InteractableBase_C* InteractableRef);
	void InpAxisKeyEvt_MouseY_K2Node_InputAxisKeyEvent_2(float AxisValue);
	void InpAxisKeyEvt_MouseX_K2Node_InputAxisKeyEvent_1(float AxisValue);
	void OC_ResetShipTeleportTime();
	void AddRepairHit();
	void OC_TeleportToShipStartLocation();
	void S_SetLevel(int Level);
	void ResetRefreshHUD();
	void S_SetHammerHittingSound(bool Sound);
	void S_ReequipSavedWeapon();
	void OC_TeleportPlayer(const struct FVector& Location, class UPrimitiveComponent* NewBase);
	void ReloadKeys();
	void TeleportPlayer(const struct FVector& Location, class UPrimitiveComponent* NewBase);
	void S_AddMastRepairHit(class ABP_MastBase_C* MastRef);
	void S_AddHullRepairHit(class ABP_HullDamage_C* HullDamageRef);
	void TeleportShip();
	void S_SetIsServer(bool IsServer);
	void S_LoadCustomisation(const struct FST_Customisation& Customisation);
	void S_SetStomachPitch(float Pitch);
	void LeaveSwimming(bool EnterVehicle, class ABP_VehicleBase_C* VehicleRef);
	void OpenInventory();
	void S_GiveResources(class ABP_QuickAccesPointBase_C* QuickAccessPoint);
	void GiveResources(class ABP_QuickAccesPointBase_C* QuickAccessPoint);
	void OC_DepositedAll();
	void QuickDepositAll();
	void S_RemoveFromOtherContainer(class UInventory_C* InventoryRef, TEnumAsByte<E_Items> Item, int Amount);
	void CloseCannonballChest();
	void OpenCannonballChest(class ABP_BoatMeshBase_C* ShipRef);
	void S_IncreaseContainerUsers(class ABP_ContainerBase_C* ContainerRef);
	void S_DecreaseContainerUsers(class ABP_ContainerBase_C* ContainerRef);
	void S_TakeAllFromContainer();
	void OC_NotEnoughRoom();
	void S_DepositAllToContainer();
	void CloseContainer();
	void S_RemoveFromContainer(TEnumAsByte<E_Items> Item, int Amount);
	void S_AddToContainer(TEnumAsByte<E_Items> Item, int Amount);
	void RequestCloseContainer();
	void OpenContainer(class ABP_ContainerBase_C* ContainerLocalRef);
	void CloseInventory();
	void RefreshTeleport();
	void OC_ResetCanSwitch();
	void MC_TeleportToShip(bool Teleporting);
	void S_SetTeleportToShip(bool Teleporting);
	void OC_EquipWeapon(TEnumAsByte<E_EquipmentSlots> SwitchToWeaponType);
	void OC_UnequipWeapon();
	void OC_SetWalkAndSprintSpeed(int SprintSpeed, int WalkSpeed);
	void SetWalkAndSprintSpeed(int SprintSpeed, int WalkSpeed);
	void StopShipTeleport();
	void ShipTeleport();
	void SwitchToHammer();
	void SwitchToMelee();
	void SwitchToSecondary();
	void SwitchToMainWeapon();
	void ChargeTeleport(bool StopCharging);
	void S_DropWeapon(bool DropFromInventory, TEnumAsByte<E_EquipmentSlots> WeaponSlot_IfFromInventory_);
	void S_SwitchWeapon(TEnumAsByte<E_EquipmentSlots> WeaponType, int UpgradeID, const struct FTransform& SwitchToTransform, bool Switch, bool DestroyWeapon);
	void S_ActionbarSelect(TEnumAsByte<E_EquipmentSlots> Selection, bool FastSwitch);
	void AddSprintBlockTime(float Time);
	void PrimaryFireReleased();
	void PrimaryFirePressed();
	void SecondaryFireReleased();
	void SecondaryFirePressed();
	void OC_LeaveSecondaryFire();
	void LeaveSecondaryFire();
	void S_MeleePlayerHit(const struct FVector& Location, class ABP_Character_C* Character);
	void MeleePlayerHit(const struct FVector& Location, class ABP_Character_C* Character);
	void S_MeleeHitOther(const struct FVector& Location, const struct FVector& Normal, class AActor* HitActor, int AnimationDirection);
	void MeleeHitOther(const struct FVector& Location, const struct FVector& Normal, class AActor* HitActor, int AnimationDirection);
	void S_ChangeBlockPoseOnOtherPlayer(class ABP_Character_C* CharRef);
	void ChangeBlockPoseOnOtherPlayer(class ABP_Character_C* CharRef);
	void ChangeBlockPose();
	void LeaveAimingMode();
	void OC_CancelReload();
	void OC_UnloadWeapon(TEnumAsByte<E_EquipmentSlots> Weapon);
	void S_SetWeaponLoaded(bool IsLoaded);
	void S_SpawnProjectile(const struct FVector& CameraLocation, const struct FVector& Direction, int TeamID, bool LeftWeapon, const struct FVector& AddedVelocity);
	void S_SetDazed();
	void StopBlock();
	void StartBlock(int BlockPose);
	void S_StopBlock();
	void S_StartBlock(int BlockPose);
	void StopSecondaryFire(const struct FVector& CameraLocation, const struct FVector& Direction);
	void AimingMode();
	void AimingModeOff();
	void AimingModeOn();
	void PlaceMarker();
	void EnterAimingMode();
	void S_StopRepair();
	void S_StartRepair();
	void OC_SecondaryFire();
	void ApplyKnockback(float KnockbackAmount);
	void PrimaryFire_Repeat();
	void StopPrimaryFire();
	void OC_RefreshAmmo();
	void S_RefreshAmmo();
	void OC_LeaveAimingMode();
	void PrimaryFire(const struct FVector& CameraLocation, const struct FVector& Direction);
	void SecondaryFire(const struct FVector& CameraLocation, const struct FVector& Direction);
	void RefreshCustomisation();
	void S_PlaceCrewBanner();
	void MC_Effect_BloodSplatter();
	void MC_Effect_TeamCreate();
	void S_PlayMontageOnOtherPlayer(class UAnimMontage* Montage, bool FullPose, float FullPoseTime, class ABP_Character_C* CharRef);
	void PlayMontageOnOtherPlayer(class UAnimMontage* Montage, bool FullPose, float FullPoseTime, class ABP_Character_C* CharRef);
	void S_StopCurrentMontage(float BlendOutTime);
	void OC_StopCurrentMontage(float BlendOutTime);
	void WeaponReloadAnimationLocal(TEnumAsByte<E_EquipmentSlots> WeaponType);
	void S_WeaponReloadAnimation();
	void S_PlayMontage(class UAnimMontage* Montage, bool FullPose, float FullPoseTime, bool PlayOnSelf, bool StopCurrentMontage);
	void PlayMontageLocal(class UAnimMontage* Montage, bool FullPose, float FullPoseTime, bool PlayOnAll, bool StopCurrentMontage);
	void MC_StopCurrentMontage(float BlendOutTime);
	void MC_StopWeaponReloadAnimation();
	void MC_WeaponReloadAnimation();
	void MC_PlayMontage(class UAnimMontage* Montage, bool FullPose, float FullPoseTime, bool PlayOnSelf, bool StopCurrentMontage);
	void ApplyHealth(int Amount);
	void OC_RemoveHUD();
	void KillCharacter();
	void S_RestoreHealth(int RestoreAmount);
	void ApplyDamage(int DamageAmount, class ABP_Controller_C* Attacker, bool headshot, int TeamID, bool SelfDamage);
	void MC_CharacterDeath(class ABP_Character_C* KillerRef);
	void OC_RemoveWeaponUI();
	void RemoveWeaponUI();
	void AddWeaponUI(class UClass* WidgetClass, bool HideHUD, bool ChromaticAbberation);
	void RemoveCustomUIOverlay();
	void AddCustomUIOverlay(class UClass* WidgetClass, bool HideHUD, class ABP_VehicleBase_C* VehicleRef);
	void RecieveItemsIndicator(const struct FST_InventoryArray& Item, float Delay, bool AtMouseLocation);
	void OC_RemoveCustomUIOverlay();
	void OC_AddCustomUIOverlay(class UClass* WidgetClass, bool HideHUD, class ABP_VehicleBase_C* VehicleRef);
	void S_PaintSpray(const struct FVector& ForwardVector);
	void OpenActionMenu();
	void MC_Voiceline(const struct FName& VoiceLineRowName);
	void ActionMenuReleased();
	void ActionMenuPressed();
	void CloseBuildMenu();
	void CloseActionMenu();
	void OpenSpyglass();
	void RequestCloseSpyglass();
	void S_SetSpyGlass(bool Enabled);
	void CloseSpyglass();
	void S_ApplyOptions(bool AimingModeToggle, bool CameraPositionLeft, bool FirstPersonMode);
	void ResetFPSOffset();
	void OC_ResetFPSOffset();
	void OC_SetFPSOffset(const struct FVector& CharacterOffset, const struct FRotator& RotationOffset, const struct FVector& Scale);
	void ExecuteUbergraph_BP_Character(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
