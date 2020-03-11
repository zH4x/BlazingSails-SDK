
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

// Function UI_Version.UI_Version_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_Version_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Version.UI_Version_C.Construct");

	UUI_Version_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Version.UI_Version_C.ExecuteUbergraph_UI_Version
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_Version_C::ExecuteUbergraph_UI_Version(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Version.UI_Version_C.ExecuteUbergraph_UI_Version");

	UUI_Version_C_ExecuteUbergraph_UI_Version_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
