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

// BlueprintGeneratedClass BP_ProjectileCannonball.BP_ProjectileCannonball_C
// 0x0008 (0x04F0 - 0x04E8)
class ABP_ProjectileCannonball_C : public ABP_ProjectileCannonballBase_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x04E8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_ProjectileCannonball.BP_ProjectileCannonball_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_ProjectileCannonball(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
