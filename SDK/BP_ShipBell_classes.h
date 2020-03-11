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

// BlueprintGeneratedClass BP_ShipBell.BP_ShipBell_C
// 0x001B (0x03C9 - 0x03AE)
class ABP_ShipBell_C : public ABP_InteractableBase_C
{
public:
	unsigned char                                      UnknownData00[0x2];                                       // 0x03AE(0x0002) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03B0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class USkeletalMeshComponent*                      shipbell2;                                                // 0x03B8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class ABP_Character_C*                             InteractingCharRefLocal;                                  // 0x03C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	bool                                               Ringed;                                                   // 0x03C8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_ShipBell.BP_ShipBell_C");
		return ptr;
	}


	void RingBell();
	void UserConstructionScript();
	void S_Activate();
	void Activate(class ABP_Character_C* LocalCharacterRef);
	void MC_Ring();
	void ExecuteUbergraph_BP_ShipBell(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
