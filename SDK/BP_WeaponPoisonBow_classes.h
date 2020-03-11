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

// BlueprintGeneratedClass BP_WeaponPoisonBow.BP_WeaponPoisonBow_C
// 0x0010 (0x0548 - 0x0538)
class ABP_WeaponPoisonBow_C : public ABP_WeaponRangedBase_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0538(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UParticleSystemComponent*                    ParticleSystem;                                           // 0x0540(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_WeaponPoisonBow.BP_WeaponPoisonBow_C");
		return ptr;
	}


	void UserConstructionScript();
	void LoadedState(bool Loaded);
	void ExecuteUbergraph_BP_WeaponPoisonBow(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
