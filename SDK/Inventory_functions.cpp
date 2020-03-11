
#include "../SDK.h"

// Name: BlazingSails, Version: 1.481.81

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function Inventory.Inventory_C.GetAllItemsOfCategory
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_ItemCategories>  Category                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FST_InventoryArray> FoundItems                     (Parm, OutParm, ZeroConstructor)

void UInventory_C::GetAllItemsOfCategory(TEnumAsByte<E_ItemCategories> Category, TArray<struct FST_InventoryArray>* FoundItems)
{
	static auto fn = UObject::FindObject<UFunction>("Function Inventory.Inventory_C.GetAllItemsOfCategory");

	UInventory_C_GetAllItemsOfCategory_Params params;
	params.Category = Category;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (FoundItems != nullptr)
		*FoundItems = params.FoundItems;
}


// Function Inventory.Inventory_C.ClearInventory
// (Public, BlueprintCallable, BlueprintEvent)

void UInventory_C::ClearInventory()
{
	static auto fn = UObject::FindObject<UFunction>("Function Inventory.Inventory_C.ClearInventory");

	UInventory_C_ClearInventory_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Inventory.Inventory_C.CheckIfRoomForItem
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_Items>           Item                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Amount                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           EnoughRoom                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UInventory_C::CheckIfRoomForItem(TEnumAsByte<E_Items> Item, int Amount, bool* EnoughRoom)
{
	static auto fn = UObject::FindObject<UFunction>("Function Inventory.Inventory_C.CheckIfRoomForItem");

	UInventory_C_CheckIfRoomForItem_Params params;
	params.Item = Item;
	params.Amount = Amount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (EnoughRoom != nullptr)
		*EnoughRoom = params.EnoughRoom;
}


// Function Inventory.Inventory_C.RefreshCharacterWidgets
// (Public, BlueprintCallable, BlueprintEvent)

void UInventory_C::RefreshCharacterWidgets()
{
	static auto fn = UObject::FindObject<UFunction>("Function Inventory.Inventory_C.RefreshCharacterWidgets");

	UInventory_C_RefreshCharacterWidgets_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Inventory.Inventory_C.OnRep_ItemArray
// (BlueprintCallable, BlueprintEvent)

void UInventory_C::OnRep_ItemArray()
{
	static auto fn = UObject::FindObject<UFunction>("Function Inventory.Inventory_C.OnRep_ItemArray");

	UInventory_C_OnRep_ItemArray_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Inventory.Inventory_C.SpawnItem
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_Items>           Item                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Amount                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UInventory_C::SpawnItem(TEnumAsByte<E_Items> Item, int Amount)
{
	static auto fn = UObject::FindObject<UFunction>("Function Inventory.Inventory_C.SpawnItem");

	UInventory_C_SpawnItem_Params params;
	params.Item = Item;
	params.Amount = Amount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Inventory.Inventory_C.DropAllItems
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UInventory_C::DropAllItems()
{
	static auto fn = UObject::FindObject<UFunction>("Function Inventory.Inventory_C.DropAllItems");

	UInventory_C_DropAllItems_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Inventory.Inventory_C.RemoveItem
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_Items>           Item                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Amount                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UInventory_C::RemoveItem(TEnumAsByte<E_Items> Item, int Amount)
{
	static auto fn = UObject::FindObject<UFunction>("Function Inventory.Inventory_C.RemoveItem");

	UInventory_C_RemoveItem_Params params;
	params.Item = Item;
	params.Amount = Amount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Inventory.Inventory_C.RemoveAndDrop
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_Items>           Item                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Amount                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UInventory_C::RemoveAndDrop(TEnumAsByte<E_Items> Item, int Amount)
{
	static auto fn = UObject::FindObject<UFunction>("Function Inventory.Inventory_C.RemoveAndDrop");

	UInventory_C_RemoveAndDrop_Params params;
	params.Item = Item;
	params.Amount = Amount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Inventory.Inventory_C.CreateWidgetList
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_InventoryItemWidgetType> WidgetType                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class ABP_Character_C*         CharacterRef                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<class UWidget*>         WidgetList                     (Parm, OutParm, ZeroConstructor)

void UInventory_C::CreateWidgetList(TEnumAsByte<E_InventoryItemWidgetType> WidgetType, class ABP_Character_C* CharacterRef, TArray<class UWidget*>* WidgetList)
{
	static auto fn = UObject::FindObject<UFunction>("Function Inventory.Inventory_C.CreateWidgetList");

	UInventory_C_CreateWidgetList_Params params;
	params.WidgetType = WidgetType;
	params.CharacterRef = CharacterRef;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (WidgetList != nullptr)
		*WidgetList = params.WidgetList;
}


// Function Inventory.Inventory_C.CalculateWeight
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            MaxWeight                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            ExtraWeightToBeAdded           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Weight                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           Overweight                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           EnoughRoomForNewItem           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UInventory_C::CalculateWeight(int MaxWeight, int ExtraWeightToBeAdded, int* Weight, bool* Overweight, bool* EnoughRoomForNewItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function Inventory.Inventory_C.CalculateWeight");

	UInventory_C_CalculateWeight_Params params;
	params.MaxWeight = MaxWeight;
	params.ExtraWeightToBeAdded = ExtraWeightToBeAdded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Weight != nullptr)
		*Weight = params.Weight;
	if (Overweight != nullptr)
		*Overweight = params.Overweight;
	if (EnoughRoomForNewItem != nullptr)
		*EnoughRoomForNewItem = params.EnoughRoomForNewItem;
}


// Function Inventory.Inventory_C.AddItem
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_Items>           Item                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Amount                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ItemAdded                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UInventory_C::AddItem(TEnumAsByte<E_Items> Item, int Amount, bool* ItemAdded)
{
	static auto fn = UObject::FindObject<UFunction>("Function Inventory.Inventory_C.AddItem");

	UInventory_C_AddItem_Params params;
	params.Item = Item;
	params.Amount = Amount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ItemAdded != nullptr)
		*ItemAdded = params.ItemAdded;
}


// Function Inventory.Inventory_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void UInventory_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Inventory.Inventory_C.ReceiveBeginPlay");

	UInventory_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Inventory.Inventory_C.S_DropItem
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_Items>           Item                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Amount                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UInventory_C::S_DropItem(TEnumAsByte<E_Items> Item, int Amount)
{
	static auto fn = UObject::FindObject<UFunction>("Function Inventory.Inventory_C.S_DropItem");

	UInventory_C_S_DropItem_Params params;
	params.Item = Item;
	params.Amount = Amount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Inventory.Inventory_C.S_AddItem
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_Items>           Item                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Amount                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UInventory_C::S_AddItem(TEnumAsByte<E_Items> Item, int Amount)
{
	static auto fn = UObject::FindObject<UFunction>("Function Inventory.Inventory_C.S_AddItem");

	UInventory_C_S_AddItem_Params params;
	params.Item = Item;
	params.Amount = Amount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Inventory.Inventory_C.S_RemoveItem
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_Items>           Item                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Amount                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UInventory_C::S_RemoveItem(TEnumAsByte<E_Items> Item, int Amount)
{
	static auto fn = UObject::FindObject<UFunction>("Function Inventory.Inventory_C.S_RemoveItem");

	UInventory_C_S_RemoveItem_Params params;
	params.Item = Item;
	params.Amount = Amount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Inventory.Inventory_C.ExecuteUbergraph_Inventory
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UInventory_C::ExecuteUbergraph_Inventory(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Inventory.Inventory_C.ExecuteUbergraph_Inventory");

	UInventory_C_ExecuteUbergraph_Inventory_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
