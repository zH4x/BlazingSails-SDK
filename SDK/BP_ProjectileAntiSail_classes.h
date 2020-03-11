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

// BlueprintGeneratedClass BP_ProjectileAntiSail.BP_ProjectileAntiSail_C
// 0x0020 (0x0508 - 0x04E8)
class ABP_ProjectileAntiSail_C : public ABP_ProjectileCannonballBase_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x04E8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class URotatingMovementComponent*                  RotatingMovement;                                         // 0x04F0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        Cube;                                                     // 0x04F8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        StaticMesh_1;                                             // 0x0500(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_ProjectileAntiSail.BP_ProjectileAntiSail_C");
		return ptr;
	}


	void UserConstructionScript();
	void PostHit(bool ForceKilled_);
	void ExecuteUbergraph_BP_ProjectileAntiSail(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
