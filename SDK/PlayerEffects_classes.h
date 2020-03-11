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

// BlueprintGeneratedClass PlayerEffects.PlayerEffects_C
// 0x002C (0x011C - 0x00F0)
class UPlayerEffects_C : public UActorComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x00F0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class ABP_Character_C*                             CharacterRef;                                             // 0x00F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	bool                                               DamagedOverTime;                                          // 0x0100(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0101(0x0003) MISSED OFFSET
	int                                                TotalHealthBeingHealed;                                   // 0x0104(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                DOTDamage;                                                // 0x0108(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x010C(0x0004) MISSED OFFSET
	class ABP_Controller_C*                            Attacker;                                                 // 0x0110(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	int                                                HealthToRestore;                                          // 0x0118(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PlayerEffects.PlayerEffects_C");
		return ptr;
	}


	void GetClosestSteeringWheel(class ABP_VehicleSteeringWheel_C** steeringwheel);
	void GetClosestBowBarrelMount(class ABP_BowBarrelMount_C** BowBarrelMount);
	void GetClosestCapstan(class ABP_CapstanSloop_C** SwivelPostionRef);
	void GetClosestSwivelPosition(class ABP_SwivelPosition_C** SwivelPostionRef);
	void GetClosestCannon(class ABP_VehicleCannon_C** ClosestCannonRef);
	void ApplyDamageOverTime(int DamageAmount, float TimeBetweenDamage, int DamageRepeats, class UParticleSystem* ParticleEffect, class ABP_Controller_C* Attacker, class UClass* PlayerEffectsWidget);
	void RestoreHealth(int RestoreAmount, bool* Consumed);
	void S_UseItem(TEnumAsByte<E_Items> Item, class UInventory_C* FromInventory);
	void MC_HealEffect();
	void ReceiveTick(float DeltaSeconds);
	void OC_BottleHealEffect();
	void RestoreHealthFromClient(int RestoreAmount);
	void S_RestoreHealth(int RestoreAmount);
	void OC_HealEffect();
	void ExecuteUbergraph_PlayerEffects(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
