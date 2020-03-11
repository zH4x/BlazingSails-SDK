
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

// Function B_MeleeMark.B_MeleeMark_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AB_MeleeMark_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function B_MeleeMark.B_MeleeMark_C.UserConstructionScript");

	AB_MeleeMark_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_MeleeMark.B_MeleeMark_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AB_MeleeMark_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function B_MeleeMark.B_MeleeMark_C.ReceiveBeginPlay");

	AB_MeleeMark_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_MeleeMark.B_MeleeMark_C.ExecuteUbergraph_B_MeleeMark
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AB_MeleeMark_C::ExecuteUbergraph_B_MeleeMark(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function B_MeleeMark.B_MeleeMark_C.ExecuteUbergraph_B_MeleeMark");

	AB_MeleeMark_C_ExecuteUbergraph_B_MeleeMark_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
