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

// BlueprintGeneratedClass BP_BowBarrel.BP_BowBarrel_C
// 0x0038 (0x0360 - 0x0328)
class ABP_BowBarrel_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0328(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class USphereComponent*                            Sphere;                                                   // 0x0330(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        Bell_fin;                                                 // 0x0338(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0340(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class ABP_BowBarrelMount_C*                        MountRef;                                                 // 0x0348(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	int                                                TeamID;                                                   // 0x0350(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0354(0x0004) MISSED OFFSET
	class ABP_Controller_C*                            ControllerRef;                                            // 0x0358(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_BowBarrel.BP_BowBarrel_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveTick(float DeltaSeconds);
	void ReceiveActorBeginOverlap(class AActor* OtherActor);
	void MC_Explode();
	void Explode();
	void ExecuteUbergraph_BP_BowBarrel(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
