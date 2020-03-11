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

// BlueprintGeneratedClass BP_InventoryScrollBox.BP_InventoryScrollBox_C
// 0x0020 (0x0880 - 0x0860)
class UBP_InventoryScrollBox_C : public UScrollBox
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0860(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UInventory_C*                                Inventory;                                                // 0x0868(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UUI_CharacterInventory_C*                    CharacterInventoryWidgetRef;                              // 0x0870(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UUI_Container_C*                             ContainerWidgetRef;                                       // 0x0878(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_InventoryScrollBox.BP_InventoryScrollBox_C");
		return ptr;
	}


	void LoadInventoryWidgets(TEnumAsByte<E_InventoryItemWidgetType> WidgetType, class ABP_Character_C* CharacterRef, class UInventory_C* Inventory);
	void ExecuteUbergraph_BP_InventoryScrollBox(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
