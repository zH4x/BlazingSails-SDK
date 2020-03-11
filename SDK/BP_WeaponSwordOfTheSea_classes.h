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

// BlueprintGeneratedClass BP_WeaponSwordOfTheSea.BP_WeaponSwordOfTheSea_C
// 0x000F (0x04F8 - 0x04E9)
class ABP_WeaponSwordOfTheSea_C : public ABP_WeaponMeleeBase_C
{
public:
	unsigned char                                      UnknownData00[0x7];                                       // 0x04E9(0x0007) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x04F0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_WeaponSwordOfTheSea.BP_WeaponSwordOfTheSea_C");
		return ptr;
	}


	void UserConstructionScript();
	void PlayerHitEvent();
	void ExecuteUbergraph_BP_WeaponSwordOfTheSea(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
