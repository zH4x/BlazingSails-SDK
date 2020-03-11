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

// BlueprintGeneratedClass BP_WeaponShield.BP_WeaponShield_C
// 0x0017 (0x0500 - 0x04E9)
class ABP_WeaponShield_C : public ABP_WeaponMeleeBase_C
{
public:
	unsigned char                                      UnknownData00[0x7];                                       // 0x04E9(0x0007) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x04F0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UBoxComponent*                               Box;                                                      // 0x04F8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_WeaponShield.BP_WeaponShield_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_BP_WeaponShield(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
