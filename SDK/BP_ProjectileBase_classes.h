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

// BlueprintGeneratedClass BP_ProjectileBase.BP_ProjectileBase_C
// 0x0182 (0x04AA - 0x0328)
class ABP_ProjectileBase_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0328(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                        TracerFlareSide;                                          // 0x0330(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        TracerFlareFront;                                         // 0x0338(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBoxComponent*                               IslandSphereDetect;                                       // 0x0340(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        Mesh;                                                     // 0x0348(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0350(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              Travelspeed;                                              // 0x0358(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Droprate;                                                 // 0x035C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LifeSpan;                                                 // 0x0360(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                MaxDamage;                                                // 0x0364(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                TeamID;                                                   // 0x0368(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                CurrentRadius;                                            // 0x036C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DropAmount;                                               // 0x0370(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              WaterHeight;                                              // 0x0374(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     Direction;                                                // 0x0378(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                MinDamage;                                                // 0x0384(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                StartDamageRadius;                                        // 0x0388(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     PreviousLocation;                                         // 0x038C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                EndDamageRadius;                                          // 0x0398(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DamageReductionDistance;                                  // 0x039C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystem*                             TrailParticle;                                            // 0x03A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystem*                             ProjectileDeathParticle;                                  // 0x03A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USoundBase*                                  ProjectileDeathSound;                                     // 0x03B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ProjectileDeathEffectsDelay;                              // 0x03B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               DestroyWhenHitPlayer;                                     // 0x03BC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               DestroyWhenHitOther;                                      // 0x03BD(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               IgnoreWater;                                              // 0x03BE(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x03BF(0x0001) MISSED OFFSET
	struct FVector                                     HitLocation;                                              // 0x03C0(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     WaterHitLocation;                                         // 0x03CC(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     ImpactNormal;                                             // 0x03D8(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     StartLocation;                                            // 0x03E4(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     NewLocation;                                              // 0x03F0(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     FinalLocation;                                            // 0x03FC(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Deactivated;                                              // 0x0408(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               OverlappedPlayer;                                         // 0x0409(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x040A(0x0006) MISSED OFFSET
	class ABP_ProjectileTrail_C*                       TrailRef;                                                 // 0x0410(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	bool                                               HitWater;                                                 // 0x0418(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               OnIsland;                                                 // 0x0419(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               CheckForWater;                                            // 0x041A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x5];                                       // 0x041B(0x0005) MISSED OFFSET
	TArray<class ABP_Character_C*>                     HitPlayers;                                               // 0x0420(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	class ABP_Character_C*                             CharacterRef;                                             // 0x0430(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	class AWaterSettings_C*                            WaterSettingsRef;                                         // 0x0438(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	bool                                               ComplexCollisionTrace;                                    // 0x0440(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0441(0x0003) MISSED OFFSET
	float                                              WaterLeniancyOffset;                                      // 0x0444(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class AActor*                                      HitActor;                                                 // 0x0448(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	bool                                               IgnoreOwnShip;                                            // 0x0450(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x0451(0x0003) MISSED OFFSET
	struct FVector                                     Normal;                                                   // 0x0454(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IgnoreSails;                                              // 0x0460(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x3];                                       // 0x0461(0x0003) MISSED OFFSET
	struct FVector                                     AddedVelocity;                                            // 0x0464(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         HitComponent;                                             // 0x0470(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	bool                                               AttachToHitComponent;                                     // 0x0478(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               OwnProjectile;                                            // 0x0479(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0x6];                                       // 0x047A(0x0006) MISSED OFFSET
	class UClass*                                      DeathCameraShake;                                         // 0x0480(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               HitShip;                                                  // 0x0488(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData07[0x3];                                       // 0x0489(0x0003) MISSED OFFSET
	struct FVector                                     ActualWaterHitLocation;                                   // 0x048C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               PlayerHitEffects;                                         // 0x0498(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               UseTracer;                                                // 0x0499(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData08[0x6];                                       // 0x049A(0x0006) MISSED OFFSET
	class AActor*                                      ExtraActorToIgnore;                                       // 0x04A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	bool                                               InsideShip;                                               // 0x04A8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               ForceKilled;                                              // 0x04A9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_ProjectileBase.BP_ProjectileBase_C");
		return ptr;
	}


	void DamageWeapon(class ABP_WeaponBase_C* WeaponRef);
	void CalculateRadius();
	void CalculateDamage(int* damage);
	void SpawnAOE(class UClass* AOEActor, class ABP_AOEBase_C** AOEActorRef);
	void DamagePlayer(class ABP_Character_C* HitCharacter, bool headshot, const struct FVector& DamageLocation);
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void PostHit(bool ForceKilled_);
	void WaterSplash();
	void ReceiveActorBeginOverlap(class AActor* OtherActor);
	void ReceiveActorEndOverlap(class AActor* OtherActor);
	void Init();
	void PlayerHit(class ABP_Character_C* HitPlayer, class ABP_Controller_C* Attacker);
	void ProjectileDeath();
	void ForceKillProjectile();
	void ForceRe_Deactivate();
	void ForceCheckIfInShip();
	void ExecuteUbergraph_BP_ProjectileBase(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
