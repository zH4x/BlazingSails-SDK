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

// BlueprintGeneratedClass BP_QuickAccesPointBase.BP_QuickAccesPointBase_C
// 0x004A (0x03F8 - 0x03AE)
class ABP_QuickAccesPointBase_C : public ABP_InteractableBase_C
{
public:
	unsigned char                                      UnknownData00[0x2];                                       // 0x03AE(0x0002) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03B0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetComponent*                            Progress;                                                 // 0x03B8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UWidgetComponent*                            AmountWidget;                                             // 0x03C0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class ABP_BoatMeshBase_C*                          ShipRef;                                                  // 0x03C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	int                                                Amount;                                                   // 0x03D0(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<E_Items>                               ItemType;                                                 // 0x03D4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x03D5(0x0003) MISSED OFFSET
	float                                              StealTimer;                                               // 0x03D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              StealTime;                                                // 0x03DC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Stealing;                                                 // 0x03E0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x03E1(0x0007) MISSED OFFSET
	class UUI_Progress_C*                              ProgressRef;                                              // 0x03E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class ABP_Character_C*                             LocalCharRef;                                             // 0x03F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_QuickAccesPointBase.BP_QuickAccesPointBase_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void ShowAmountWidget();
	void HideAmountWidget();
	void RefreshAmount();
	void Activate(class ABP_Character_C* LocalCharacterRef);
	void ResourceReceiveAnimation();
	void ShowHighlight();
	void HideHighlight();
	void StopActivate();
	void S_Activate();
	void GiveResources();
	void ExecuteUbergraph_BP_QuickAccesPointBase(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
