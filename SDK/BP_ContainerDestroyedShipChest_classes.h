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

// BlueprintGeneratedClass BP_ContainerDestroyedShipChest.BP_ContainerDestroyedShipChest_C
// 0x0009 (0x0451 - 0x0448)
class ABP_ContainerDestroyedShipChest_C : public ABP_ContainerBase_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0448(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	bool                                               EnableEmptyCheck;                                         // 0x0450(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_ContainerDestroyedShipChest.BP_ContainerDestroyedShipChest_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void ExecuteUbergraph_BP_ContainerDestroyedShipChest(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
