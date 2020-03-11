
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

// Function UI_PlayerAmount.UI_PlayerAmount_C.Get_Txt_Players_Text_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UUI_PlayerAmount_C::Get_Txt_Players_Text_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_PlayerAmount.UI_PlayerAmount_C.Get_Txt_Players_Text_1");

	UUI_PlayerAmount_C_Get_Txt_Players_Text_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_PlayerAmount.UI_PlayerAmount_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float                          InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_PlayerAmount_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_PlayerAmount.UI_PlayerAmount_C.Tick");

	UUI_PlayerAmount_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_PlayerAmount.UI_PlayerAmount_C.refresh
// (BlueprintCallable, BlueprintEvent)

void UUI_PlayerAmount_C::refresh()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_PlayerAmount.UI_PlayerAmount_C.refresh");

	UUI_PlayerAmount_C_refresh_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_PlayerAmount.UI_PlayerAmount_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_PlayerAmount_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_PlayerAmount.UI_PlayerAmount_C.Construct");

	UUI_PlayerAmount_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_PlayerAmount.UI_PlayerAmount_C.ExecuteUbergraph_UI_PlayerAmount
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_PlayerAmount_C::ExecuteUbergraph_UI_PlayerAmount(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_PlayerAmount.UI_PlayerAmount_C.ExecuteUbergraph_UI_PlayerAmount");

	UUI_PlayerAmount_C_ExecuteUbergraph_UI_PlayerAmount_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
