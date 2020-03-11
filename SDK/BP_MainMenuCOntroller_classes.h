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

// BlueprintGeneratedClass BP_MainMenuCOntroller.BP_MainMenuCOntroller_C
// 0x0038 (0x06D8 - 0x06A0)
class ABP_MainMenuCOntroller_C : public ASteamBeaconPlayerController
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x06A0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	bool                                               RotateMode;                                               // 0x06A8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x06A9(0x0007) MISSED OFFSET
	class ABP_Mannequin_C*                             MannequinRef;                                             // 0x06B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	TArray<class ABP_ShipWaterCulling_C*>              ShipCullings;                                             // 0x06B8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	class AWaterPlane_C*                               WaterPlaneRef;                                            // 0x06C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class UUI_CheatCodes_C*                            CheatCodeRef;                                             // 0x06D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_MainMenuCOntroller.BP_MainMenuCOntroller_C");
		return ptr;
	}


	void UserConstructionScript();
	void InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_2(const struct FKey& Key);
	void InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_1(const struct FKey& Key);
	void ReceiveBeginPlay();
	void InpAxisKeyEvt_MouseX_K2Node_InputAxisKeyEvent_1(float AxisValue);
	void ReceiveTick(float DeltaSeconds);
	void OC_CreateAndAddWaterCullingVolume(class ABP_BoatMeshBase_C* BoatMeshBaseRef);
	void ExecuteUbergraph_BP_MainMenuCOntroller(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
