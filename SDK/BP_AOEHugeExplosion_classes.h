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

// BlueprintGeneratedClass BP_AOEHugeExplosion.BP_AOEHugeExplosion_C
// 0x000C (0x03A0 - 0x0394)
class ABP_AOEHugeExplosion_C : public ABP_AOEBase_C
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x0394(0x0004) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0398(0x0008) (ZeroConstructor, Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_AOEHugeExplosion.BP_AOEHugeExplosion_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ReceiveActorBeginOverlap(class AActor* OtherActor);
	void ExecuteUbergraph_BP_AOEHugeExplosion(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
