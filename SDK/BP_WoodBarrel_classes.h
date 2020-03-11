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

// BlueprintGeneratedClass BP_WoodBarrel.BP_WoodBarrel_C
// 0x0068 (0x0460 - 0x03F8)
class ABP_WoodBarrel_C : public ABP_QuickAccesPointBase_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03F8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                        plank10;                                                  // 0x0400(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        plank9;                                                   // 0x0408(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        plank8;                                                   // 0x0410(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        plank7;                                                   // 0x0418(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        plank2;                                                   // 0x0420(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        plank5;                                                   // 0x0428(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        plank4;                                                   // 0x0430(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        plank3;                                                   // 0x0438(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        plank6;                                                   // 0x0440(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        plank1;                                                   // 0x0448(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        Cube1;                                                    // 0x0450(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               ScaleUp;                                                  // 0x0458(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0459(0x0003) MISSED OFFSET
	int                                                WoodAmount;                                               // 0x045C(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_WoodBarrel.BP_WoodBarrel_C");
		return ptr;
	}


	void OnRep_WoodAmount();
	void SetShowWoodState();
	void GiveWood();
	void UserConstructionScript();
	void ReceiveTick(float DeltaSeconds);
	void ShowReceivedIndicator(int Amount);
	void UpdateVisualState();
	void ResourceReceiveAnimation();
	void GiveResources();
	void ExecuteUbergraph_BP_WoodBarrel(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
