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

// BlueprintGeneratedClass BP_DeathCam.BP_DeathCam_C
// 0x0068 (0x03F0 - 0x0388)
class ABP_DeathCam_C : public APawn
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0388(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UCameraComponent*                            Camera;                                                   // 0x0390(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USpringArmComponent*                         SpringArm;                                                // 0x0398(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x03A0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class ABP_Character_C*                             KillerCharacterRef;                                       // 0x03A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     KillerLocation;                                           // 0x03B0(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                TeamID;                                                   // 0x03BC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Active;                                                   // 0x03C0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x03C1(0x0003) MISSED OFFSET
	int                                                CurrentShipIndex;                                         // 0x03C4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class ABP_BoatMeshBase_C*                          CurrentSpectatingShip;                                    // 0x03C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	TArray<class ABP_Character_C*>                     Characters;                                               // 0x03D0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	int                                                CurrentCharacterIndex;                                    // 0x03E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x03E4(0x0004) MISSED OFFSET
	class UUI_TeamMenu_C*                              TeamMenuRef;                                              // 0x03E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_DeathCam.BP_DeathCam_C");
		return ptr;
	}


	void UserConstructionScript();
	void InpActEvt_MouseScrollUp_K2Node_InputKeyEvent_3(const struct FKey& Key);
	void InpActEvt_MouseScrollDown_K2Node_InputKeyEvent_2(const struct FKey& Key);
	void InpActEvt_X_K2Node_InputKeyEvent_1(const struct FKey& Key);
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void OC_LookAtKiller(const struct FVector& Location);
	void AttachToEntity(bool Defeated, int TeamID);
	void InpAxisKeyEvt_MouseX_K2Node_InputAxisKeyEvent_1(float AxisValue);
	void InpAxisKeyEvt_MouseY_K2Node_InputAxisKeyEvent_2(float AxisValue);
	void S_UpdateNetLocation(const struct FVector& Location);
	void OC_AttachToEntity(bool Defeated, int TeamID);
	void CloseTeammenu();
	void ExecuteUbergraph_BP_DeathCam(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
