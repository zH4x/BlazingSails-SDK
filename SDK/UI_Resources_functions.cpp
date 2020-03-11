
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

// Function UI_Resources.UI_Resources_C.RefreshResources
// (BlueprintCallable, BlueprintEvent)

void UUI_Resources_C::RefreshResources()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Resources.UI_Resources_C.RefreshResources");

	UUI_Resources_C_RefreshResources_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Resources.UI_Resources_C.ExecuteUbergraph_UI_Resources
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_Resources_C::ExecuteUbergraph_UI_Resources(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Resources.UI_Resources_C.ExecuteUbergraph_UI_Resources");

	UUI_Resources_C_ExecuteUbergraph_UI_Resources_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
