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

// BlueprintGeneratedClass BP_WeaponTomahawk.BP_WeaponTomahawk_C
// 0x0011 (0x04FA - 0x04E9)
class ABP_WeaponTomahawk_C : public ABP_WeaponMeleeBase_C
{
public:
	unsigned char                                      UnknownData00[0x7];                                       // 0x04E9(0x0007) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x04F0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	bool                                               Ready;                                                    // 0x04F8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               ShowWeapon;                                               // 0x04F9(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_WeaponTomahawk.BP_WeaponTomahawk_C");
		return ptr;
	}


	void OnRep_ShowWeapon();
	void UserConstructionScript();
	void MC_Throw(const struct FVector& Location, const struct FVector& Direction, int TeamID);
	void SecondaryFire(const struct FVector& CameraLocation, const struct FVector& Direction);
	void ExecuteUbergraph_BP_WeaponTomahawk(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
