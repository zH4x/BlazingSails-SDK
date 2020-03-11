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

// BlueprintGeneratedClass BP_ProjectileAntiCannon.BP_ProjectileAntiCannon_C
// 0x0010 (0x04F8 - 0x04E8)
class ABP_ProjectileAntiCannon_C : public ABP_ProjectileCannonballBase_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x04E8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UParticleSystemComponent*                    ParticleSystem_1;                                         // 0x04F0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_ProjectileAntiCannon.BP_ProjectileAntiCannon_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveTick(float DeltaSeconds);
	void ExecuteUbergraph_BP_ProjectileAntiCannon(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
