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

// BlueprintGeneratedClass BP_RespawnTotem.BP_RespawnTotem_C
// 0x0080 (0x03A8 - 0x0328)
class ABP_RespawnTotem_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0328(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UArrowComponent*                             SpawnLocation;                                            // 0x0330(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        TotemRange;                                               // 0x0338(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UCapsuleComponent*                           Capsule;                                                  // 0x0340(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    P_TotemArea;                                              // 0x0348(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        AztecPlate;                                               // 0x0350(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0358(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UMaterialInstanceDynamic*                    TotemRangeMaterialInstanceRef;                            // 0x0360(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                Color;                                                    // 0x0368(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UTexture*                                    Icon;                                                     // 0x0378(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UMaterialInstanceDynamic*                    AztecPlateMaterialInstanceRef;                            // 0x0380(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class ABP_RespawnTotem_C*                          TeleportLocation;                                         // 0x0388(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	bool                                               ShipTotem;                                                // 0x0390(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0391(0x0007) MISSED OFFSET
	TArray<class ABP_RespawnTotem_C*>                  SameIslandShipTotems;                                     // 0x0398(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_RespawnTotem.BP_RespawnTotem_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void refresh();
	void Teleport(class ABP_Character_C* Character);
	void ExecuteUbergraph_BP_RespawnTotem(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
