#pragma once

#include "../SDK.h"

// Name: BlazingSails, Version: 1.481.81

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function Inventory.Inventory_C.GetAllItemsOfCategory
struct UInventory_C_GetAllItemsOfCategory_Params
{
	TEnumAsByte<E_ItemCategories>                      Category;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FST_InventoryArray>                  FoundItems;                                               // (Parm, OutParm, ZeroConstructor)
};

// Function Inventory.Inventory_C.ClearInventory
struct UInventory_C_ClearInventory_Params
{
};

// Function Inventory.Inventory_C.CheckIfRoomForItem
struct UInventory_C_CheckIfRoomForItem_Params
{
	TEnumAsByte<E_Items>                               Item;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Amount;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               EnoughRoom;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Inventory.Inventory_C.RefreshCharacterWidgets
struct UInventory_C_RefreshCharacterWidgets_Params
{
};

// Function Inventory.Inventory_C.OnRep_ItemArray
struct UInventory_C_OnRep_ItemArray_Params
{
};

// Function Inventory.Inventory_C.SpawnItem
struct UInventory_C_SpawnItem_Params
{
	TEnumAsByte<E_Items>                               Item;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Amount;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Inventory.Inventory_C.DropAllItems
struct UInventory_C_DropAllItems_Params
{
};

// Function Inventory.Inventory_C.RemoveItem
struct UInventory_C_RemoveItem_Params
{
	TEnumAsByte<E_Items>                               Item;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Amount;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Inventory.Inventory_C.RemoveAndDrop
struct UInventory_C_RemoveAndDrop_Params
{
	TEnumAsByte<E_Items>                               Item;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Amount;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Inventory.Inventory_C.CreateWidgetList
struct UInventory_C_CreateWidgetList_Params
{
	TEnumAsByte<E_InventoryItemWidgetType>             WidgetType;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class ABP_Character_C*                             CharacterRef;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<class UWidget*>                             WidgetList;                                               // (Parm, OutParm, ZeroConstructor)
};

// Function Inventory.Inventory_C.CalculateWeight
struct UInventory_C_CalculateWeight_Params
{
	int                                                MaxWeight;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ExtraWeightToBeAdded;                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Weight;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               Overweight;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               EnoughRoomForNewItem;                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Inventory.Inventory_C.AddItem
struct UInventory_C_AddItem_Params
{
	TEnumAsByte<E_Items>                               Item;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Amount;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ItemAdded;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Inventory.Inventory_C.ReceiveBeginPlay
struct UInventory_C_ReceiveBeginPlay_Params
{
};

// Function Inventory.Inventory_C.S_DropItem
struct UInventory_C_S_DropItem_Params
{
	TEnumAsByte<E_Items>                               Item;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Amount;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Inventory.Inventory_C.S_AddItem
struct UInventory_C_S_AddItem_Params
{
	TEnumAsByte<E_Items>                               Item;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Amount;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Inventory.Inventory_C.S_RemoveItem
struct UInventory_C_S_RemoveItem_Params
{
	TEnumAsByte<E_Items>                               Item;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Amount;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Inventory.Inventory_C.ExecuteUbergraph_Inventory
struct UInventory_C_ExecuteUbergraph_Inventory_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
