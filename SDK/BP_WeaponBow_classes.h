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

// BlueprintGeneratedClass BP_WeaponBow.BP_WeaponBow_C
// 0x0008 (0x0540 - 0x0538)
class ABP_WeaponBow_C : public ABP_WeaponRangedBase_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0538(0x0008) (ZeroConstructor, Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_WeaponBow.BP_WeaponBow_C");
		return ptr;
	}


	void UserConstructionScript();
	void LoadedState(bool Loaded);
	void ExecuteUbergraph_BP_WeaponBow(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
