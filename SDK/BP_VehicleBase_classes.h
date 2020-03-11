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

// BlueprintGeneratedClass BP_VehicleBase.BP_VehicleBase_C
// 0x0098 (0x0420 - 0x0388)
class ABP_VehicleBase_C : public APawn
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0388(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetComponent*                            InteractionIndicator;                                     // 0x0390(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        StaticMesh;                                               // 0x0398(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UArrowComponent*                             PlayerPosition;                                           // 0x03A0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBoxComponent*                               CollisionVolume;                                          // 0x03A8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x03B0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FText                                       VehicleName;                                              // 0x03B8(0x0018) (Edit, BlueprintVisible)
	bool                                               LocallyOccupied;                                          // 0x03D0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsOccupied;                                               // 0x03D1(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<E_Vehicles>                            VehicleType;                                              // 0x03D2(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x5];                                       // 0x03D3(0x0005) MISSED OFFSET
	class ABP_Character_C*                             ControllingCharacter;                                     // 0x03D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      VehicleWidget;                                            // 0x03E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               HideCharacter;                                            // 0x03E8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               LerpingOutVehicle;                                        // 0x03E9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x03EA(0x0002) MISSED OFFSET
	float                                              CameraLerpTime;                                           // 0x03EC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FTransform                                  OriginalCameraTransform;                                  // 0x03F0(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_VehicleBase.BP_VehicleBase_C");
		return ptr;
	}


	void OnRep_IsOccupied();
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void Reset();
	void UnOccupied();
	void Occupied();
	void OnRepOccupied();
	void ShowInteractionIndicator();
	void HideInteractionIndicator();
	void OC_AddVehicleUI();
	void RefreshKeys();
	void ExecuteUbergraph_BP_VehicleBase(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
