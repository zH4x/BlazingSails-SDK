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

// BlueprintGeneratedClass BP_CapstanSlot.BP_CapstanSlot_C
// 0x0050 (0x0470 - 0x0420)
class ABP_CapstanSlot_C : public ABP_VehicleBase_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0420(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                        Beam;                                                     // 0x0428(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UCameraComponent*                            Camera;                                                   // 0x0430(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USpringArmComponent*                         SpringArm;                                                // 0x0438(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               Forward;                                                  // 0x0440(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0441(0x0007) MISSED OFFSET
	class ABP_CapstanSloop_C*                          CapstanRef;                                               // 0x0448(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	int                                                CurrentReviveProgress;                                    // 0x0450(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0454(0x0004) MISSED OFFSET
	struct FKey                                        ForwardKey;                                               // 0x0458(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_CapstanSlot.BP_CapstanSlot_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void S_Forward();
	void S_ForwardStop();
	void UnOccupied();
	void OnRepOccupied();
	void LoadKeys();
	void EjectPlayer();
	void Resetkeys();
	void RefreshKeys();
	void InpAxisKeyEvt_MouseX_K2Node_InputAxisKeyEvent_1(float AxisValue);
	void InpAxisKeyEvt_MouseY_K2Node_InputAxisKeyEvent_2(float AxisValue);
	void ExecuteUbergraph_BP_CapstanSlot(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
