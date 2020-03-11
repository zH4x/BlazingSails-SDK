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

// BlueprintGeneratedClass BP_BowBarrelMount.BP_BowBarrelMount_C
// 0x0020 (0x0348 - 0x0328)
class ABP_BowBarrelMount_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0328(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                        Cube;                                                     // 0x0330(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0338(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               Used;                                                     // 0x0340(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0341(0x0003) MISSED OFFSET
	int                                                TeamID;                                                   // 0x0344(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_BowBarrelMount.BP_BowBarrelMount_C");
		return ptr;
	}


	void MountBarrel(int TeamID, class ABP_Controller_C* ControllerRef, bool* Mounted);
	void UserConstructionScript();
	void MC_MountBarrel();
	void ExecuteUbergraph_BP_BowBarrelMount(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
