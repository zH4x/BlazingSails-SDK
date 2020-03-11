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

// BlueprintGeneratedClass BP_UpgradeArmor.BP_UpgradeArmor_C
// 0x0010 (0x0480 - 0x0470)
class ABP_UpgradeArmor_C : public ABP_WeaponBase_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0470(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class ABP_ArmorPlateSlot_C*                        ArmorPlateRef;                                            // 0x0478(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_UpgradeArmor.BP_UpgradeArmor_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveTick(float DeltaSeconds);
	void ExecuteUbergraph_BP_UpgradeArmor(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
