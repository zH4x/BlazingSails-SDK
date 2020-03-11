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

// Function BP_InventoryScrollBox.BP_InventoryScrollBox_C.LoadInventoryWidgets
struct UBP_InventoryScrollBox_C_LoadInventoryWidgets_Params
{
	TEnumAsByte<E_InventoryItemWidgetType>             WidgetType;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class ABP_Character_C*                             CharacterRef;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UInventory_C*                                Inventory;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BP_InventoryScrollBox.BP_InventoryScrollBox_C.ExecuteUbergraph_BP_InventoryScrollBox
struct UBP_InventoryScrollBox_C_ExecuteUbergraph_BP_InventoryScrollBox_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
