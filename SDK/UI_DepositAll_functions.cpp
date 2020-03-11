
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

// Function UI_DepositAll.UI_DepositAll_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_DepositAll_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_DepositAll.UI_DepositAll_C.Construct");

	UUI_DepositAll_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_DepositAll.UI_DepositAll_C.ExecuteUbergraph_UI_DepositAll
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_DepositAll_C::ExecuteUbergraph_UI_DepositAll(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_DepositAll.UI_DepositAll_C.ExecuteUbergraph_UI_DepositAll");

	UUI_DepositAll_C_ExecuteUbergraph_UI_DepositAll_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
