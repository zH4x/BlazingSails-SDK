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

// BlueprintGeneratedClass BP_ProjectileTrail.BP_ProjectileTrail_C
// 0x0028 (0x0350 - 0x0328)
class ABP_ProjectileTrail_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0328(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UParticleSystemComponent*                    ProjectileTrail;                                          // 0x0330(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0338(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystem*                             TrailParticle;                                            // 0x0340(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class ABP_ProjectileBase_C*                        ProjectileRef;                                            // 0x0348(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_ProjectileTrail.BP_ProjectileTrail_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void RemoveTrail();
	void ExecuteUbergraph_BP_ProjectileTrail(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
