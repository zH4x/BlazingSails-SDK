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

// BlueprintGeneratedClass BP_BoatMeshBase.BP_BoatMeshBase_C
// 0x0428 (0x0750 - 0x0328)
class ABP_BoatMeshBase_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0328(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                        NamePlate;                                                // 0x0330(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        ShipWaves_WarBrig;                                        // 0x0338(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UAudioComponent*                             CollisionSound;                                           // 0x0340(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        RespawnLocation3;                                         // 0x0348(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        RespawnLocation2;                                         // 0x0350(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UArrowComponent*                             SpectatorCamAnchorPoint;                                  // 0x0358(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UChildActorComponent*                        BowBarrelMount;                                           // 0x0360(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UAudioComponent*                             bow_water_sound;                                          // 0x0368(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UChildActorComponent*                        Cork;                                                     // 0x0370(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UChildActorComponent*                        capstan;                                                  // 0x0378(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        ShipWalls;                                                // 0x0380(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UChildActorComponent*                        HullDamage;                                               // 0x0388(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UArrowComponent*                             SideSplashRight;                                          // 0x0390(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UArrowComponent*                             SideSplashLeft;                                           // 0x0398(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        Cabin_Sound_Volume;                                       // 0x03A0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UArrowComponent*                             LeftSplash;                                               // 0x03A8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UArrowComponent*                             RightSplash;                                              // 0x03B0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        SpectatorCamCenterPoint;                                  // 0x03B8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UAudioComponent*                             WindSound;                                                // 0x03C0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        HullWater;                                                // 0x03C8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        SteeringWheelBlock;                                       // 0x03D0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        Deck;                                                     // 0x03D8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        RespawnLocation1;                                         // 0x03E0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UChildActorComponent*                        LadderLeft;                                               // 0x03E8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        LadderLeftTeleLoc;                                        // 0x03F0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        LadderRightTeleLoc;                                       // 0x03F8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UChildActorComponent*                        LadderRight;                                              // 0x0400(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        BowSplash;                                                // 0x0408(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UTextRenderComponent*                        ShipName;                                                 // 0x0410(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UChildActorComponent*                        steeringwheel;                                            // 0x0418(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        WaterDamageLevel;                                         // 0x0420(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UArrowComponent*                             Front;                                                    // 0x0428(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        BoatMesh_AddEverythingToThis_;                            // 0x0430(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        BR_BuoyancyPoint_;                                        // 0x0438(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        BL_BuoyancyPoint_;                                        // 0x0440(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        FL_BuoyancyPoint_;                                        // 0x0448(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        FR_BuoyancyPoint_;                                        // 0x0450(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0458(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AWaterSettings_C*                            WaterSetingsRef;                                          // 0x0460(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	int                                                MaxBoatHealth;                                            // 0x0468(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x046C(0x0004) MISSED OFFSET
	class UClass*                                      BoatPhysicsActorClass;                                    // 0x0470(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               DebugMode;                                                // 0x0478(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0479(0x0007) MISSED OFFSET
	struct FTransform                                  BoatTransform;                                            // 0x0480(0x0030) (Edit, BlueprintVisible, Net, IsPlainOldData)
	struct FVector                                     InitialLocation;                                          // 0x04B0(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     FR_FL_DIR;                                                // 0x04BC(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     BR_BL_DIR;                                                // 0x04C8(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     FR_BR_DIR;                                                // 0x04D4(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     FL_BL_DIR;                                                // 0x04E0(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     MiddleLineForward;                                        // 0x04EC(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     MiddleLineSideways;                                       // 0x04F8(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0504(0x0004) MISSED OFFSET
	class ABP_BoatPhysicsBase_C*                       BoatPhysicsRef;                                           // 0x0508(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	float                                              MeshBuoyPointHeightOffset;                                // 0x0510(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BoatHealth;                                               // 0x0514(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     FRRelativeLocation;                                       // 0x0518(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     FLRelativeLocation;                                       // 0x0524(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     BLRelativeLocation;                                       // 0x0530(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     BRRelativeLocation;                                       // 0x053C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                TeamID;                                                   // 0x0548(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	int                                                WaterLevel;                                               // 0x054C(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	float                                              DeltaTime;                                                // 0x0550(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              PhysicBuoyPointHeightOffset;                              // 0x0554(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              XYInterpolationSpeed;                                     // 0x0558(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ZInterpolationSpeed;                                      // 0x055C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RollInterpolationSpeed;                                   // 0x0560(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SavedFrontZ;                                              // 0x0564(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              WaterFoamVisiblity;                                       // 0x0568(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               SearchForMasts;                                           // 0x056C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               ApplyColors;                                              // 0x056D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Active;                                                   // 0x056E(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x1];                                       // 0x056F(0x0001) MISSED OFFSET
	float                                              PitchInterpolationSpeed;                                  // 0x0570(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              YawInterpolationSpeed;                                    // 0x0574(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               Destroyed;                                                // 0x0578(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Going_forward;                                            // 0x0579(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x2];                                       // 0x057A(0x0002) MISSED OFFSET
	struct FVector                                     BowSplashLocation;                                        // 0x057C(0x000C) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              WindDirection;                                            // 0x0588(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x4];                                       // 0x058C(0x0004) MISSED OFFSET
	class ABP_Wind_C*                                  WindRef;                                                  // 0x0590(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	float                                              Yaw;                                                      // 0x0598(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FRotator                                    Rotation;                                                 // 0x059C(0x000C) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class ABP_Deathzone_C*                             DeadZoneRef;                                              // 0x05A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	TArray<class ABP_MastBase2_C*>                     Masts;                                                    // 0x05B0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	class UMaterialInstanceDynamic*                    HullWaterMaterialInstanceRef;                             // 0x05C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UCurveFloat*                                 WaterWiggleCurve;                                         // 0x05C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RandomRollWobbleTarget;                                   // 0x05D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RandomPitchWobbleTarget;                                  // 0x05D4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RandomRollWobble;                                         // 0x05D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RandomPitchWobble;                                        // 0x05DC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ShipWindTilt;                                             // 0x05E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     Velocity;                                                 // 0x05E4(0x000C) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<class ABP_HullDamage_C*>                    DamagePoints;                                             // 0x05F0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	TArray<class ABP_Character_C*>                     CharactersOnShip;                                         // 0x0600(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	bool                                               BeginPlayClientFired;                                     // 0x0610(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData06[0x7];                                       // 0x0611(0x0007) MISSED OFFSET
	TArray<class UObject*>                             ChildActors;                                              // 0x0618(0x0010) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance)
	class ABP_IconBase_C*                              MarkerSmall;                                              // 0x0628(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	bool                                               Colliding;                                                // 0x0630(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData07[0x3];                                       // 0x0631(0x0003) MISSED OFFSET
	struct FVector                                     SplashLocationSaved;                                      // 0x0634(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<struct FTransform>                          DamagePointLocations;                                     // 0x0640(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class AWaterPlane_C*                               WaterPlaneRef;                                            // 0x0650(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class ABP_ShipWaterCulling_C*                      WaterCullingRef;                                          // 0x0658(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	bool                                               MainMenuBoat;                                             // 0x0660(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData08[0x7];                                       // 0x0661(0x0007) MISSED OFFSET
	class UMaterialInstanceDynamic*                    HullMaterialInstanceRef;                                  // 0x0668(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInstanceDynamic*                    DetailMaterialInstanceRef;                                // 0x0670(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInstanceDynamic*                    DeckDetailMaterialInstanceRef;                            // 0x0678(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInstanceDynamic*                    SecondaryHullMaterialInstanceRef;                         // 0x0680(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInstanceDynamic*                    SteeringWheelMaterialInstanceRef;                         // 0x0688(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bLoadHullColor;                                           // 0x0690(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bLoadSailColor;                                           // 0x0691(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bLoadSailEmblem;                                          // 0x0692(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bLoadBowFigureHead;                                       // 0x0693(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bLoadFlagColor;                                           // 0x0694(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bLoadRopeColor;                                           // 0x0695(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bLoadFlagEmblem;                                          // 0x0696(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bLoadLampColor;                                           // 0x0697(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bLoadBowFigureColor;                                      // 0x0698(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bLoadSailEmblemBottom;                                    // 0x0699(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData09[0x2];                                       // 0x069A(0x0002) MISSED OFFSET
	int                                                HullColor;                                                // 0x069C(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                SailColorTop;                                             // 0x06A0(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                SailColorBottom;                                          // 0x06A4(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                SailEmblemTop;                                            // 0x06A8(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                SailEmblemBottom;                                         // 0x06AC(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                BowFigureHead;                                            // 0x06B0(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData10[0x4];                                       // 0x06B4(0x0004) MISSED OFFSET
	class UStaticMeshComponent*                        BowFigureMesh;                                            // 0x06B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	int                                                FlagColor;                                                // 0x06C0(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                RopeColor;                                                // 0x06C4(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                FlagEmblem;                                               // 0x06C8(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                LampColor;                                                // 0x06CC(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               LoadMastCustomisation;                                    // 0x06D0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               BoatAtStartLocation;                                      // 0x06D1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               BuoyancyPointsLoaded;                                     // 0x06D2(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               AnchorDown;                                               // 0x06D3(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData11[0x4];                                       // 0x06D4(0x0004) MISSED OFFSET
	class ABP_CapstanSloop_C*                          CapstanRef;                                               // 0x06D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	bool                                               GetWaterSettingsRef;                                      // 0x06E0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData12[0x3];                                       // 0x06E1(0x0003) MISSED OFFSET
	float                                              Speed;                                                    // 0x06E4(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                AmountOfMasts;                                            // 0x06E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                AmountOfLamps;                                            // 0x06EC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                AmountOfSails;                                            // 0x06F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                SteeringWheelLevel;                                       // 0x06F4(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               UpgradeSteeringWheelVisuals;                              // 0x06F8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData13[0x7];                                       // 0x06F9(0x0007) MISSED OFFSET
	TArray<class AActor*>                              SuccesfullCustomisedLampChildActors;                      // 0x0700(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	bool                                               InterpolateRotation;                                      // 0x0710(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               DontLoadCustomisation;                                    // 0x0711(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData14[0x6];                                       // 0x0712(0x0006) MISSED OFFSET
	class UMaterialInstanceDynamic*                    RopeMaterialInstanceRef;                                  // 0x0718(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               DeadZoneSpawned;                                          // 0x0720(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData15[0x7];                                       // 0x0721(0x0007) MISSED OFFSET
	class AWaterSettings_C*                            WaterSettingsRef;                                         // 0x0728(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     OffsetShipWaves;                                          // 0x0730(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              WaterHeight;                                              // 0x073C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TrailSpeedAmount;                                         // 0x0740(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData16[0x4];                                       // 0x0744(0x0004) MISSED OFFSET
	class UMaterialInstanceDynamic*                    ShipWavesDynMat;                                          // 0x0748(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_BoatMeshBase.BP_BoatMeshBase_C");
		return ptr;
	}


	void OnRep_SailColorBottom();
	void OnRep_SailEmblemBottom();
	void SpawnDestroyedContainer();
	void OnRep_MarkerRef();
	void OnRep_LampColor();
	void OnRep_SteeringWheelLevel();
	void UpgradeSteeringWheel(bool* Upgraded);
	void LoadFlagEmblem(bool* SuccesfullyLoaded);
	void OnRep_FlagEmblem();
	void LoadRopeColor(bool* SuccesfullyLoaded);
	void OnRep_RopeColor();
	void LoadFlagColor(bool* SuccesfullyLoaded);
	void OnRep_FlagColor();
	void OnRep_BowFigureHead();
	void LoadSailEmblem(bool* SuccesfullyLoaded);
	void OnRep_SailEmblem();
	void LoadSailColor(bool* SuccesfullyLoaded);
	void OnRep_SailColor();
	void OnRep_HullColor();
	void OnRep_Destroyed();
	void OnRep_Colliding();
	void CheckForAutoStop();
	void OnRep_Going_forward();
	void CheckIfPointIsBelowWaterLevel(const struct FVector& PointLocation, TEnumAsByte<E_WaterHull> WaterDamage, bool* IsBelowWaterLevel);
	void ChangeWaterLevel(int Amount);
	void CreateRandomDamage(int DamageAmount, TArray<int>* DamageAmounts, TArray<struct FVector>* DamageLocations);
	void OnRep_TeamID();
	void RestoreDamage(int RestoreAmount);
	void AddDamage(int DamageAmount, TEnumAsByte<E_DamageType> DamageType, const struct FVector& RelativeLocation, bool NoSound);
	void SetPointVisibility();
	void MovePoints(const struct FVector& Vector, class UStaticMeshComponent* Point);
	void CollectPointLocations(TArray<struct FVector>* BuoyancyPoints, TArray<struct FVector>* OriginalLocations);
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void MC_Location(int XLocation, int YLocation, int ZLocation);
	void ReplicateLocation(const struct FVector& Location);
	void ReplicateRotation(const struct FRotator& Yaw);
	void MC_Rotation(const struct FRotator& Yaw);
	void SetTeamID(int TeamID);
	void MC_FrontalHit(float ImpactStrength);
	void MC_AnchorStopSplash();
	void MC_SetStartTransform(const struct FTransform& Transform);
	void ExecuteUbergraph_BP_BoatMeshBase(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
