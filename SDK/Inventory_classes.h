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

// BlueprintGeneratedClass Inventory.Inventory_C
// 0x0030 (0x0120 - 0x00F0)
class UInventory_C : public UActorComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x00F0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	int                                                CurrentWeight;                                            // 0x00F8(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x00FC(0x0004) MISSED OFFSET
	TArray<struct FST_InventoryArray>                  ItemArray;                                                // 0x0100(0x0010) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance)
	int                                                MaxWeight;                                                // 0x0110(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0114(0x0004) MISSED OFFSET
	class ABP_Character_C*                             CharacterRef;                                             // 0x0118(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Inventory.Inventory_C");
		return ptr;
	}


	void GetAllItemsOfCategory(TEnumAsByte<E_ItemCategories> Category, TArray<struct FST_InventoryArray>* FoundItems);
	void ClearInventory();
	void CheckIfRoomForItem(TEnumAsByte<E_Items> Item, int Amount, bool* EnoughRoom);
	void RefreshCharacterWidgets();
	void OnRep_ItemArray();
	void SpawnItem(TEnumAsByte<E_Items> Item, int Amount);
	void DropAllItems();
	void RemoveItem(TEnumAsByte<E_Items> Item, int Amount);
	void RemoveAndDrop(TEnumAsByte<E_Items> Item, int Amount);
	void CreateWidgetList(TEnumAsByte<E_InventoryItemWidgetType> WidgetType, class ABP_Character_C* CharacterRef, TArray<class UWidget*>* WidgetList);
	void CalculateWeight(int MaxWeight, int ExtraWeightToBeAdded, int* Weight, bool* Overweight, bool* EnoughRoomForNewItem);
	void AddItem(TEnumAsByte<E_Items> Item, int Amount, bool* ItemAdded);
	void ReceiveBeginPlay();
	void S_DropItem(TEnumAsByte<E_Items> Item, int Amount);
	void S_AddItem(TEnumAsByte<E_Items> Item, int Amount);
	void S_RemoveItem(TEnumAsByte<E_Items> Item, int Amount);
	void ExecuteUbergraph_Inventory(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
