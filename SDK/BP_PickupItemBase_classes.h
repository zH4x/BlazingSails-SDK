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

// BlueprintGeneratedClass BP_PickupItemBase.BP_PickupItemBase_C
// 0x0008 (0x0440 - 0x0438)
class ABP_PickupItemBase_C : public ABP_PickupBase_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0438(0x0008) (ZeroConstructor, Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_PickupItemBase.BP_PickupItemBase_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveBeginPlay();
	void S_Activate();
	void Activate(class ABP_Character_C* LocalCharacterRef);
	void ExecuteUbergraph_BP_PickupItemBase(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
