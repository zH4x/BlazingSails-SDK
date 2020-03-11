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

// BlueprintGeneratedClass BP_ItemSpawner.BP_ItemSpawner_C
// 0x0010 (0x0338 - 0x0328)
class ABP_ItemSpawner_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0328(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0330(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_ItemSpawner.BP_ItemSpawner_C");
		return ptr;
	}


	void UserConstructionScript();
	void SpawnItem(const struct FTransform& SpawnTransform, float SpawnTime, class UClass* ItemToSpawn, int MinAmount, int MaxAmount);
	void ExecuteUbergraph_BP_ItemSpawner(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
