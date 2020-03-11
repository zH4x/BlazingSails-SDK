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

// BlueprintGeneratedClass BP_RumCrate.BP_RumCrate_C
// 0x0090 (0x0488 - 0x03F8)
class ABP_RumCrate_C : public ABP_QuickAccesPointBase_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03F8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                        bottle15;                                                 // 0x0400(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        bottle14;                                                 // 0x0408(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        bottle13;                                                 // 0x0410(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        bottle12;                                                 // 0x0418(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        bottle11;                                                 // 0x0420(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        bottle10;                                                 // 0x0428(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        bottle9;                                                  // 0x0430(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        bottle8;                                                  // 0x0438(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        bottle7;                                                  // 0x0440(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        bottle6;                                                  // 0x0448(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        bottle5;                                                  // 0x0450(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        bottle4;                                                  // 0x0458(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        bottle3;                                                  // 0x0460(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        bottle2;                                                  // 0x0468(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        bottle1;                                                  // 0x0470(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        Cube1;                                                    // 0x0478(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               ScaleUp;                                                  // 0x0480(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0481(0x0003) MISSED OFFSET
	int                                                BottleAmount;                                             // 0x0484(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_RumCrate.BP_RumCrate_C");
		return ptr;
	}


	void OnRep_BottleAmount();
	void SetShowBottleState();
	void GiveBottle();
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void ShowReceivedIndicator(int Amount);
	void UpdateVisualState();
	void ResourceReceiveAnimation();
	void GiveResources();
	void ExecuteUbergraph_BP_RumCrate(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
