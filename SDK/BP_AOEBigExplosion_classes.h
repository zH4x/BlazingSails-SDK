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

// BlueprintGeneratedClass BP_AOEBigExplosion.BP_AOEBigExplosion_C
// 0x000C (0x03A0 - 0x0394)
class ABP_AOEBigExplosion_C : public ABP_AOEBase_C
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x0394(0x0004) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0398(0x0008) (ZeroConstructor, Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_AOEBigExplosion.BP_AOEBigExplosion_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_AOEBigExplosion(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
