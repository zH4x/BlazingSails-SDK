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

// BlueprintGeneratedClass BP_PickupWood.BP_PickupWood_C
// 0x0008 (0x0448 - 0x0440)
class ABP_PickupWood_C : public ABP_PickupItemBase_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0440(0x0008) (ZeroConstructor, Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_PickupWood.BP_PickupWood_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveBeginPlay();
	void S_Activate();
	void Activate(class ABP_Character_C* LocalCharacterRef);
	void ExecuteUbergraph_BP_PickupWood(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
