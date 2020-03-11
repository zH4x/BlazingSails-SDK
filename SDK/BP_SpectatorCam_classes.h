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

// BlueprintGeneratedClass BP_SpectatorCam.BP_SpectatorCam_C
// 0x002A (0x03B2 - 0x0388)
class ABP_SpectatorCam_C : public APawn
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0388(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UCameraComponent*                            Camera;                                                   // 0x0390(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USpringArmComponent*                         SpringArm;                                                // 0x0398(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x03A0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               Forward;                                                  // 0x03A8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               BackWard;                                                 // 0x03A9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x03AA(0x0002) MISSED OFFSET
	float                                              Speed;                                                    // 0x03AC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Left;                                                     // 0x03B0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Right;                                                    // 0x03B1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_SpectatorCam.BP_SpectatorCam_C");
		return ptr;
	}


	void UserConstructionScript();
	void InpActEvt_W_K2Node_InputKeyEvent_10(const struct FKey& Key);
	void InpActEvt_W_K2Node_InputKeyEvent_9(const struct FKey& Key);
	void InpActEvt_MouseScrollUp_K2Node_InputKeyEvent_8(const struct FKey& Key);
	void InpActEvt_MouseScrollDown_K2Node_InputKeyEvent_7(const struct FKey& Key);
	void InpActEvt_S_K2Node_InputKeyEvent_6(const struct FKey& Key);
	void InpActEvt_S_K2Node_InputKeyEvent_5(const struct FKey& Key);
	void InpActEvt_A_K2Node_InputKeyEvent_4(const struct FKey& Key);
	void InpActEvt_A_K2Node_InputKeyEvent_3(const struct FKey& Key);
	void InpActEvt_D_K2Node_InputKeyEvent_2(const struct FKey& Key);
	void InpActEvt_D_K2Node_InputKeyEvent_1(const struct FKey& Key);
	void InpAxisKeyEvt_MouseX_K2Node_InputAxisKeyEvent_1(float AxisValue);
	void InpAxisKeyEvt_MouseY_K2Node_InputAxisKeyEvent_2(float AxisValue);
	void ReceiveTick(float DeltaSeconds);
	void ExecuteUbergraph_BP_SpectatorCam(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
