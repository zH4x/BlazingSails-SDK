
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

// Function BP_InventoryScrollBox.BP_InventoryScrollBox_C.LoadInventoryWidgets
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_InventoryItemWidgetType> WidgetType                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class ABP_Character_C*         CharacterRef                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UInventory_C*            Inventory                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UBP_InventoryScrollBox_C::LoadInventoryWidgets(TEnumAsByte<E_InventoryItemWidgetType> WidgetType, class ABP_Character_C* CharacterRef, class UInventory_C* Inventory)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_InventoryScrollBox.BP_InventoryScrollBox_C.LoadInventoryWidgets");

	UBP_InventoryScrollBox_C_LoadInventoryWidgets_Params params;
	params.WidgetType = WidgetType;
	params.CharacterRef = CharacterRef;
	params.Inventory = Inventory;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_InventoryScrollBox.BP_InventoryScrollBox_C.ExecuteUbergraph_BP_InventoryScrollBox
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_InventoryScrollBox_C::ExecuteUbergraph_BP_InventoryScrollBox(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_InventoryScrollBox.BP_InventoryScrollBox_C.ExecuteUbergraph_BP_InventoryScrollBox");

	UBP_InventoryScrollBox_C_ExecuteUbergraph_BP_InventoryScrollBox_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
