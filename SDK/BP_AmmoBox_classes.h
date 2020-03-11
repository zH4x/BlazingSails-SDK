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

// BlueprintGeneratedClass BP_AmmoBox.BP_AmmoBox_C
// 0x0019 (0x0411 - 0x03F8)
class ABP_AmmoBox_C : public ABP_QuickAccesPointBase_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03F8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UTextRenderComponent*                        TextRender;                                               // 0x0400(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        Cube;                                                     // 0x0408(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               ScaleUp;                                                  // 0x0410(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_AmmoBox.BP_AmmoBox_C");
		return ptr;
	}


	void GiveAmmo();
	void UserConstructionScript();
	void ReceiveTick(float DeltaSeconds);
	void ShowReceivedIndicator(const struct FST_InventoryArray& MainAmmo, const struct FST_InventoryArray& SideAmmo);
	void ResourceReceiveAnimation();
	void GiveResources();
	void ExecuteUbergraph_BP_AmmoBox(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
