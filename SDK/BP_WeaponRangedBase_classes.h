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

// BlueprintGeneratedClass BP_WeaponRangedBase.BP_WeaponRangedBase_C
// 0x00C8 (0x0538 - 0x0470)
class ABP_WeaponRangedBase_C : public ABP_WeaponBase_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0470(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	float                                              BarrelLength;                                             // 0x0478(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ReloadTime;                                               // 0x047C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FireRate;                                                 // 0x0480(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              KnockbackAmount;                                          // 0x0484(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UClass*                                      Projectile;                                               // 0x0488(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               UseRaycastProjectile;                                     // 0x0490(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0491(0x0007) MISSED OFFSET
	class UClass*                                      RayCastProjectile;                                        // 0x0498(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                FireAnimation;                                            // 0x04A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                LeftFireAnimation;                                        // 0x04A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystem*                             ParticleEffect;                                           // 0x04B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystem*                             MuzzleEffect;                                             // 0x04B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ParticleSize;                                             // 0x04C0(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               AttachParticleToWeapon;                                   // 0x04CC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x04CD(0x0003) MISSED OFFSET
	class USoundBase*                                  SoundEffect;                                              // 0x04D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               IsLoadedServer;                                           // 0x04D8(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Reloading;                                                // 0x04D9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               FireCooldownReady;                                        // 0x04DA(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x1];                                       // 0x04DB(0x0001) MISSED OFFSET
	float                                              ReloadTimer;                                              // 0x04DC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FireRateTimer;                                            // 0x04E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DeltaTime;                                                // 0x04E4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FRotator                                    NormalRotation;                                           // 0x04E8(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               UnloadWhenHolstered;                                      // 0x04F4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<E_Items>                               AmmoType;                                                 // 0x04F5(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x2];                                       // 0x04F6(0x0002) MISSED OFFSET
	int                                                ClipSize;                                                 // 0x04F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                ProjectileCollisionRadius;                                // 0x04FC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     TempCameraLocation;                                       // 0x0500(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     TempDirection;                                            // 0x050C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     TempAddedVelocity;                                        // 0x0518(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MuzzleHeightOffset;                                       // 0x0524(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               HideMuzzle;                                               // 0x0528(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x7];                                       // 0x0529(0x0007) MISSED OFFSET
	class ABP_ProjectileBase_C*                        ProjectileRef;                                            // 0x0530(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_WeaponRangedBase.BP_WeaponRangedBase_C");
		return ptr;
	}


	void UnloadWeapon();
	void SetClipAmount();
	void OnRep_IsLoaded();
	void CalculateInaccuracyOffset(struct FVector* Offset);
	void CheckClipAmmo(bool* ClipEmpty);
	void SpawnAndLaunchProjectile(const struct FVector& CameraLocation, const struct FVector& Direction, int TeamID, bool OwnProjectile, class ABP_Character_C* CharacterRef, const struct FVector& AddedVelocity);
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void SpawnProjectile();
	void SpawnProjectileFromServer(const struct FVector& CameraLocation, const struct FVector& Direction, int TeamID, bool LeftWeapon, class ABP_Character_C* CharacterRef, const struct FVector& AddedVelocity);
	void MC_SpawnProjectile(const struct FVector& CameraLocation, const struct FVector& Direction, int TeamID, bool LeftWeapon, class ABP_Character_C* CharacterRef, const struct FVector& AddedVelocity);
	void LoadedState(bool Loaded);
	void Effects(const struct FVector& Direction, class ABP_Character_C* CharacterRef);
	void PrimaryFire(const struct FVector& CameraLocation, const struct FVector& Direction, bool FullPrecision, bool WasSprinting);
	void ReloadWeaponLocal(bool DelayedReload);
	void CancelReload();
	void Fired();
	void Unfired();
	void ExecuteUbergraph_BP_WeaponRangedBase(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
