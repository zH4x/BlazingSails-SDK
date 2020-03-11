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

// BlueprintGeneratedClass BP_WeaponMeleeBase.BP_WeaponMeleeBase_C
// 0x0079 (0x04E9 - 0x0470)
class ABP_WeaponMeleeBase_C : public ABP_WeaponBase_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0470(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UAnimMontage*                                AttackMontage1;                                           // 0x0478(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                AttackMontage2;                                           // 0x0480(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                damage;                                                   // 0x0488(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AttackCooldown;                                           // 0x048C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               CanAttack;                                                // 0x0490(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Attacking;                                                // 0x0491(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               CanBlock;                                                 // 0x0492(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x5];                                       // 0x0493(0x0005) MISSED OFFSET
	TArray<class ABP_Character_C*>                     HitCharacters;                                            // 0x0498(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	TArray<class ABP_VehicleCannon_C*>                 HitCannons;                                               // 0x04A8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	class AActor*                                      OtherHitActor;                                            // 0x04B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     OtherHitLocation;                                         // 0x04C0(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              OtherHitDelay;                                            // 0x04CC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                LineTraceCount;                                           // 0x04D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                AnimationDirection;                                       // 0x04D4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               CanHitOther;                                              // 0x04D8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               HittingOther;                                             // 0x04D9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               CoolDownReady;                                            // 0x04DA(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x5];                                       // 0x04DB(0x0005) MISSED OFFSET
	class USoundBase*                                  ImpactSound;                                              // 0x04E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               TryingToBlock;                                            // 0x04E8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_WeaponMeleeBase.BP_WeaponMeleeBase_C");
		return ptr;
	}


	void OtherHit();
	void DamageLine();
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void MC_PrimaryFire();
	void HitOther(const struct FVector& Location, const struct FVector& Normal, class AActor* OtherActor);
	void HitOtherTasks(const struct FVector& Location, const struct FVector& Normal, class AActor* HitActor, int AnimationDirection);
	void PrimaryFire(const struct FVector& CameraLocation, const struct FVector& Direction, bool FullPrecision, bool WasSprinting);
	void S_HitOther(const struct FVector& Location, const struct FVector& Normal, class AActor* HitActor, int AnimationDirection);
	void MC_HitOther(const struct FVector& Location, const struct FVector& Normal, class AActor* HitActor, int AnimationDirection);
	void SecondaryFire(const struct FVector& CameraLocation, const struct FVector& Direction);
	void StopSecondaryFire(const struct FVector& CameraLocation, const struct FVector& Direction);
	void S_HitPlayer(class ABP_Character_C* Character, const struct FVector& RelativeLocation);
	void MC_HitPlayer(class ABP_Character_C* Character, const struct FVector& RelativeLocation);
	void HitPlayer(class ABP_Character_C* Character, const struct FVector& Location);
	void PlayerHitEvent();
	void bLock();
	void StopBlock();
	void ExecuteUbergraph_BP_WeaponMeleeBase(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
