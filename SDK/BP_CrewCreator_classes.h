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

// BlueprintGeneratedClass BP_CrewCreator.BP_CrewCreator_C
// 0x001A (0x03C8 - 0x03AE)
class ABP_CrewCreator_C : public ABP_InteractableBase_C
{
public:
	unsigned char                                      UnknownData00[0x2];                                       // 0x03AE(0x0002) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03B0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UBillboardComponent*                         Billboard;                                                // 0x03B8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USkeletalMeshComponent*                      SkeletalMesh;                                             // 0x03C0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_CrewCreator.BP_CrewCreator_C");
		return ptr;
	}


	void UserConstructionScript();
	void S_Activate();
	void ExecuteUbergraph_BP_CrewCreator(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
