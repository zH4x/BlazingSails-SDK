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

// BlueprintGeneratedClass BP_ContainerBase.BP_ContainerBase_C
// 0x009A (0x0448 - 0x03AE)
class ABP_ContainerBase_C : public ABP_InteractableBase_C
{
public:
	unsigned char                                      UnknownData00[0x2];                                       // 0x03AE(0x0002) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03B0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UInventory_C*                                Inventory;                                                // 0x03B8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        StaticMesh;                                               // 0x03C0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	TArray<struct FST_InventoryArray>                  ItemArray;                                                // 0x03C8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	class UTexture2D*                                  ContainerIcon;                                            // 0x03D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                Color;                                                    // 0x03E0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               AllowTakeAll;                                             // 0x03F0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x03F1(0x0003) MISSED OFFSET
	int                                                ContainerUsers;                                           // 0x03F4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class AWaterSettings_C*                            WaterSettingsRef;                                         // 0x03F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	bool                                               FloatingMode;                                             // 0x0400(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0401(0x0003) MISSED OFFSET
	struct FVector                                     InitialLocation;                                          // 0x0404(0x000C) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              WaterHeight;                                              // 0x0410(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     NewWaterLocation;                                         // 0x0414(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               InitialPositionReady;                                     // 0x0420(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               DropOffContainer;                                         // 0x0421(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x2];                                       // 0x0422(0x0002) MISSED OFFSET
	int                                                ContainerTeamID;                                          // 0x0424(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	struct FVector                                     NewLocation;                                              // 0x0428(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector2D                                   DeltaPrev;                                                // 0x0434(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               AutoCloseWhenTooFar;                                      // 0x043C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               CheckForDistanceBasedAutoClose;                           // 0x043D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x2];                                       // 0x043E(0x0002) MISSED OFFSET
	float                                              BuoyancyCheckDelay;                                       // 0x0440(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              InterpolationSpeed;                                       // 0x0444(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_ContainerBase.BP_ContainerBase_C");
		return ptr;
	}


	void OnRep_InitialLocation();
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void Init();
	void Activate(class ABP_Character_C* LocalCharacterRef);
	void S_Activate();
	void StopActivate();
	void ExecuteUbergraph_BP_ContainerBase(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
