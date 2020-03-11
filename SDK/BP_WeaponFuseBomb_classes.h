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

// BlueprintGeneratedClass BP_WeaponFuseBomb.BP_WeaponFuseBomb_C
// 0x0008 (0x0540 - 0x0538)
class ABP_WeaponFuseBomb_C : public ABP_WeaponRangedBase_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0538(0x0008) (ZeroConstructor, Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_WeaponFuseBomb.BP_WeaponFuseBomb_C");
		return ptr;
	}


	void UserConstructionScript();
	void ToggleLoadedState_2();
	void ExecuteUbergraph_BP_WeaponFuseBomb(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
