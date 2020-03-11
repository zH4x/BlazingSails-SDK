
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

// Function UI_ToolTipItem.UI_ToolTipItem_C.Init
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_Items>           Item                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Amount                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_ToolTipItem_C::Init(TEnumAsByte<E_Items> Item, int Amount)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ToolTipItem.UI_ToolTipItem_C.Init");

	UUI_ToolTipItem_C_Init_Params params;
	params.Item = Item;
	params.Amount = Amount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_ToolTipItem.UI_ToolTipItem_C.ExecuteUbergraph_UI_ToolTipItem
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_ToolTipItem_C::ExecuteUbergraph_UI_ToolTipItem(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ToolTipItem.UI_ToolTipItem_C.ExecuteUbergraph_UI_ToolTipItem");

	UUI_ToolTipItem_C_ExecuteUbergraph_UI_ToolTipItem_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
