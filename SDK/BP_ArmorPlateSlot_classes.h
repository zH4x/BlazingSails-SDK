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

// BlueprintGeneratedClass BP_ArmorPlateSlot.BP_ArmorPlateSlot_C
// 0x0028 (0x0350 - 0x0328)
class ABP_ArmorPlateSlot_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0328(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                        Mesh;                                                     // 0x0330(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0338(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               Active;                                                   // 0x0340(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0341(0x0003) MISSED OFFSET
	int                                                Health;                                                   // 0x0344(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class ABP_BoatMeshBase_C*                          ShipRef;                                                  // 0x0348(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_ArmorPlateSlot.BP_ArmorPlateSlot_C");
		return ptr;
	}


	void SetActive();
	void damage(int DamageAmount);
	void OnRep_Active();
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void HighLight();
	void NoHighlight();
	void ExecuteUbergraph_BP_ArmorPlateSlot(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
