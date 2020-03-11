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

// BlueprintGeneratedClass BP_CannonBallChest.BP_CannonBallChest_C
// 0x002A (0x03D8 - 0x03AE)
class ABP_CannonBallChest_C : public ABP_InteractableBase_C
{
public:
	unsigned char                                      UnknownData00[0x2];                                       // 0x03AE(0x0002) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03B0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                        Cube;                                                     // 0x03B8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        Cube1;                                                    // 0x03C0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               ScaleUp;                                                  // 0x03C8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x03C9(0x0007) MISSED OFFSET
	class UUI_CannonballChest_C*                       WidgetRef;                                                // 0x03D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_CannonBallChest.BP_CannonBallChest_C");
		return ptr;
	}


	void GiveCannonballs();
	void UserConstructionScript();
	void ShowReceivedIndicator(int CannonballAmount, int AntiSailAmount);
	void CloseChest();
	void Activate(class ABP_Character_C* LocalCharacterRef);
	void ReceiveTick(float DeltaSeconds);
	void S_Activate();
	void ExecuteUbergraph_BP_CannonBallChest(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
