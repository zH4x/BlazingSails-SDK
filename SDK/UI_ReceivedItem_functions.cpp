
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

// Function UI_ReceivedItem.UI_ReceivedItem_C.Init
// (BlueprintCallable, BlueprintEvent)

void UUI_ReceivedItem_C::Init()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ReceivedItem.UI_ReceivedItem_C.Init");

	UUI_ReceivedItem_C_Init_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_ReceivedItem.UI_ReceivedItem_C.ExecuteUbergraph_UI_ReceivedItem
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_ReceivedItem_C::ExecuteUbergraph_UI_ReceivedItem(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ReceivedItem.UI_ReceivedItem_C.ExecuteUbergraph_UI_ReceivedItem");

	UUI_ReceivedItem_C_ExecuteUbergraph_UI_ReceivedItem_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
