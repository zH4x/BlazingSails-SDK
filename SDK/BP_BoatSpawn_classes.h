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

// BlueprintGeneratedClass BP_BoatSpawn.BP_BoatSpawn_C
// 0x0070 (0x0398 - 0x0328)
class ABP_BoatSpawn_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0328(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetComponent*                            Widget;                                                   // 0x0330(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBillboardComponent*                         Billboard;                                                // 0x0338(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UArrowComponent*                             Arrow;                                                    // 0x0340(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        Cylinder;                                                 // 0x0348(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0350(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               InUse;                                                    // 0x0358(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0359(0x0003) MISSED OFFSET
	int                                                TeamUsingThisSpawnPoint;                                  // 0x035C(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<int>                                        TeamPlayerColors;                                         // 0x0360(0x0010) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance)
	bool                                               PointSelected;                                            // 0x0370(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Used;                                                     // 0x0371(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Disabled;                                                 // 0x0372(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               ClusterSelectionSpawn;                                    // 0x0373(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0374(0x0004) MISSED OFFSET
	struct FName                                       ClusterName;                                              // 0x0378(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<struct FST_TeamSpawnVotes>                  TeamVotes;                                                // 0x0380(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FName                                       ActualClusterName;                                        // 0x0390(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_BoatSpawn.BP_BoatSpawn_C");
		return ptr;
	}


	void RemoveVote(int TeamID);
	void AddVote(int TeamID);
	void GetRandomClusterSpawnLocation(class ABP_BoatSpawn_C** BoatSpawnPoint);
	void OnRep_Disabled();
	void OnRep_Selected();
	void OnRep_TeamPlayerColors();
	void UpdateButton();
	void OnRep_TeamUsingThisSpawnPoint();
	void OnRep_InUse();
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void RemovePoint();
	void ExecuteUbergraph_BP_BoatSpawn(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
