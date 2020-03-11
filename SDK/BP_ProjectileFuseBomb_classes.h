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

// BlueprintGeneratedClass BP_ProjectileFuseBomb.BP_ProjectileFuseBomb_C
// 0x0026 (0x04D0 - 0x04AA)
class ABP_ProjectileFuseBomb_C : public ABP_ProjectileBase_C
{
public:
	unsigned char                                      UnknownData00[0x6];                                       // 0x04AA(0x0006) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x04B0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UParticleSystemComponent*                    ParticleSystem1;                                          // 0x04B8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class URotatingMovementComponent*                  RotatingMovement;                                         // 0x04C0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    ParticleSystem_1;                                         // 0x04C8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_ProjectileFuseBomb.BP_ProjectileFuseBomb_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveTick(float DeltaSeconds);
	void PostHit(bool ForceKilled_);
	void ExecuteUbergraph_BP_ProjectileFuseBomb(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
