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

// BlueprintGeneratedClass BP_MapCamera.BP_MapCamera_C
// 0x0068 (0x03F0 - 0x0388)
class ABP_MapCamera_C : public APawn
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0388(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UCameraComponent*                            Camera;                                                   // 0x0390(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USpringArmComponent*                         SpringArm;                                                // 0x0398(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x03A0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               Forward;                                                  // 0x03A8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               DragMode;                                                 // 0x03A9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x03AA(0x0002) MISSED OFFSET
	struct FVector                                     Mouseoffset;                                              // 0x03AC(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FocusTimer;                                               // 0x03B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxZoom;                                                  // 0x03BC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ZoomAmount;                                               // 0x03C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              NewFocusPointTimer;                                       // 0x03C4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DeltaTime;                                                // 0x03C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x03CC(0x0004) MISSED OFFSET
	class ABP_MapSea_C*                                MapSeaRef;                                                // 0x03D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	TArray<class ABP_IconBase_C*>                      IconRefArray;                                             // 0x03D8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	class ABP_Character_C*                             CharacterRef;                                             // 0x03E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_MapCamera.BP_MapCamera_C");
		return ptr;
	}


	void TeleportActorToPlayerForRelevancy();
	void SaveLocAndZoom();
	void FindAndShowIcons();
	void SetIconPosition(class ABP_IconBase_C* Icon);
	void GetFocusPoint(struct FVector* FocusPoint);
	void UserConstructionScript();
	void InpActEvt_PrimaryFire_K2Node_InputActionEvent_3(const struct FKey& Key);
	void InpActEvt_PrimaryFire_K2Node_InputActionEvent_2(const struct FKey& Key);
	void InpActEvt_SecondaryFire_K2Node_InputActionEvent_1(const struct FKey& Key);
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void OC_SetStartLocation();
	void OC_HideIcons();
	void S_PlaceMarker(const struct FVector& Location, int PlayerId, int TeamID, int TeamPlayerColor);
	void DragPressed();
	void DragReleased();
	void ZoomIn();
	void ZoomOut();
	void PlaceMarker();
	void RefreshIcons();
	void SetStartLocation();
	void ExecuteUbergraph_BP_MapCamera(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
