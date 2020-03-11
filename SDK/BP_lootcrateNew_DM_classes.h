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

// BlueprintGeneratedClass BP_lootcrateNew_DM.BP_lootcrateNew_DM_C
// 0x0018 (0x0340 - 0x0328)
class ABP_lootcrateNew_DM_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0328(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UDestructibleComponent*                      Destructible;                                             // 0x0330(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UMaterialInstanceDynamic*                    LootCrateMaterialInstanceRef;                             // 0x0338(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_lootcrateNew_DM.BP_lootcrateNew_DM_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void ExecuteUbergraph_BP_lootcrateNew_DM(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
