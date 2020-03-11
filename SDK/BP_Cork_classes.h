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

// BlueprintGeneratedClass BP_Cork.BP_Cork_C
// 0x004E (0x03FC - 0x03AE)
class ABP_Cork_C : public ABP_InteractableBase_C
{
public:
	unsigned char                                      UnknownData00[0x2];                                       // 0x03AE(0x0002) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03B0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetComponent*                            Progress;                                                 // 0x03B8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        StaticMesh;                                               // 0x03C0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    CorkWater;                                                // 0x03C8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UAudioComponent*                             Audio;                                                    // 0x03D0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        Cylinder;                                                 // 0x03D8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class ABP_BoatMeshBase_C*                          ShipRef;                                                  // 0x03E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class ABP_Character_C*                             LocalInteractingCharacterRef;                             // 0x03E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	bool                                               Releasing;                                                // 0x03F0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Popped;                                                   // 0x03F1(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x03F2(0x0002) MISSED OFFSET
	float                                              ReleaseTimer;                                             // 0x03F4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                InteractingCharacters_1;                                  // 0x03F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Cork.BP_Cork_C");
		return ptr;
	}


	void OnRep_Popped();
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void StopActivate();
	void Activate(class ABP_Character_C* LocalCharacterRef);
	void ShowHighlight();
	void HideHighlight();
	void EngageFromServer();
	void MC_ResetTimer();
	void S_Activate();
	void SetInUse();
	void ExecuteUbergraph_BP_Cork(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
