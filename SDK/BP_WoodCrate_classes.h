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

// BlueprintGeneratedClass BP_WoodCrate.BP_WoodCrate_C
// 0x0092 (0x04DA - 0x0448)
class ABP_WoodCrate_C : public ABP_ContainerBase_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0448(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UArrowComponent*                             Arrow;                                                    // 0x0450(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USkeletalMeshComponent*                      SkeletalMesh5;                                            // 0x0458(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USkeletalMeshComponent*                      SkeletalMesh4;                                            // 0x0460(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        StaticMesh_1;                                             // 0x0468(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USkeletalMeshComponent*                      SkeletalMesh3;                                            // 0x0470(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USkeletalMeshComponent*                      SkeletalMesh2;                                            // 0x0478(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USkeletalMeshComponent*                      SkeletalMesh1;                                            // 0x0480(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USkeletalMeshComponent*                      seagull;                                                  // 0x0488(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        StaticMesh1;                                              // 0x0490(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        Cube2;                                                    // 0x0498(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UAudioComponent*                             Seaguls;                                                  // 0x04A0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        Cube1;                                                    // 0x04A8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USkeletalMeshComponent*                      SkeletalMesh;                                             // 0x04B0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        Cube;                                                     // 0x04B8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               ScaleUp;                                                  // 0x04C0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x04C1(0x0003) MISSED OFFSET
	int                                                WoodAmount;                                               // 0x04C4(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SinkDepth;                                                // 0x04C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               sinking;                                                  // 0x04CC(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x04CD(0x0003) MISSED OFFSET
	class ABP_BoatMeshBase_C*                          OverlappingShipRef;                                       // 0x04D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	bool                                               EnableEmptyCheck;                                         // 0x04D8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               NoSeagulls;                                               // 0x04D9(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_WoodCrate.BP_WoodCrate_C");
		return ptr;
	}


	void OnRep_Sinking();
	void OnRep_Empty();
	void SetShowWoodState();
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void ShowReceivedIndicatorWood(int Amount);
	void UpdateVisualState();
	void SinkCrate();
	void ShowReceivedIndicatorCannonballs(int Amount);
	void ReceiveActorBeginOverlap(class AActor* OtherActor);
	void ReceiveActorEndOverlap(class AActor* OtherActor);
	void EmptyCrate();
	void ExecuteUbergraph_BP_WoodCrate(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
