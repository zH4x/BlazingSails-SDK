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

// BlueprintGeneratedClass BP_InteractableBase.BP_InteractableBase_C
// 0x0086 (0x03AE - 0x0328)
class ABP_InteractableBase_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0328(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetComponent*                            InteractionIndicator;                                     // 0x0330(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBoxComponent*                               CollisionVolume;                                          // 0x0338(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0340(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FText                                       InteractableName;                                         // 0x0348(0x0018) (Edit, BlueprintVisible)
	class ABP_Character_C*                             InteractingCharacterRef;                                  // 0x0360(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<E_InteractableType>                    InteractableType;                                         // 0x0368(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0369(0x0007) MISSED OFFSET
	class ABP_PlayerState_C*                           InteractingPlayerState;                                   // 0x0370(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class ABP_Controller_C*                            InteractingController;                                    // 0x0378(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	TArray<class ABP_Character_C*>                     TargetingCharacters;                                      // 0x0380(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	bool                                               EnableInteractionIndicator;                               // 0x0390(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               InUse;                                                    // 0x0391(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x0392(0x0006) MISSED OFFSET
	TArray<class ABP_Character_C*>                     UsingCharacters;                                          // 0x0398(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	int                                                InteractableTeamID;                                       // 0x03A8(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	bool                                               UseableByOwnTeam;                                         // 0x03AC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               UseableByOtherTeams;                                      // 0x03AD(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_InteractableBase.BP_InteractableBase_C");
		return ptr;
	}


	void OnRep_InUse();
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void S_Activate();
	void Activate(class ABP_Character_C* LocalCharacterRef);
	void StopActivate();
	void ShowInteractionIndicator();
	void HideInteractionIndicator();
	void ShowHighlight();
	void HideHighlight();
	void EngageFromServer();
	void UpdateVisualState();
	void SetInUse();
	void DoSomething();
	void ExecuteUbergraph_BP_InteractableBase(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
