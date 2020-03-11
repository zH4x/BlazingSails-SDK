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

// BlueprintGeneratedClass BP_PickupWeaponBase.BP_PickupWeaponBase_C
// 0x0011 (0x0449 - 0x0438)
class ABP_PickupWeaponBase_C : public ABP_PickupBase_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0438(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	int                                                WeaponID;                                                 // 0x0440(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                DefaultAmmoAmount;                                        // 0x0444(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<E_EquipmentSlots>                      WeaponType;                                               // 0x0448(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_PickupWeaponBase.BP_PickupWeaponBase_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveBeginPlay();
	void S_Activate();
	void Activate(class ABP_Character_C* LocalCharacterRef);
	void ExecuteUbergraph_BP_PickupWeaponBase(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
