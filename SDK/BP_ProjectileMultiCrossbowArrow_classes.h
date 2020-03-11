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

// BlueprintGeneratedClass BP_ProjectileMultiCrossbowArrow.BP_ProjectileMultiCrossbowArrow_C
// 0x000E (0x04B8 - 0x04AA)
class ABP_ProjectileMultiCrossbowArrow_C : public ABP_ProjectileBase_C
{
public:
	unsigned char                                      UnknownData00[0x6];                                       // 0x04AA(0x0006) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x04B0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_ProjectileMultiCrossbowArrow.BP_ProjectileMultiCrossbowArrow_C");
		return ptr;
	}


	void UserConstructionScript();
	void PostHit(bool ForceKilled_);
	void ExecuteUbergraph_BP_ProjectileMultiCrossbowArrow(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
