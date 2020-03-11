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

// BlueprintGeneratedClass BP_DualLeftWeaponBase.BP_DualLeftWeaponBase_C
// 0x0048 (0x0370 - 0x0328)
class ABP_DualLeftWeaponBase_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0328(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UArrowComponent*                             ProjectileStart;                                          // 0x0330(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        WeaponMesh;                                               // 0x0338(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0340(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               Holstered;                                                // 0x0348(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0349(0x0007) MISSED OFFSET
	class UParticleSystem*                             ParticleEffect;                                           // 0x0350(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  SoundEffect;                                              // 0x0358(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MuzzleHeightOffset;                                       // 0x0360(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0364(0x0004) MISSED OFFSET
	class UParticleSystem*                             MuzzleEffect;                                             // 0x0368(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_DualLeftWeaponBase.BP_DualLeftWeaponBase_C");
		return ptr;
	}


	void OnRep_Holstered();
	void UserConstructionScript();
	void MC_Effects(const struct FVector& Direction);
	void S_Effects(const struct FVector& Direction);
	void Effects(const struct FVector& Direction, class ABP_Character_C* CharacterRef);
	void ExecuteUbergraph_BP_DualLeftWeaponBase(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
