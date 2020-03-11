
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

// Function UI_HostLoadingScreen.UI_HostLoadingScreen_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_HostLoadingScreen_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HostLoadingScreen.UI_HostLoadingScreen_C.Construct");

	UUI_HostLoadingScreen_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HostLoadingScreen.UI_HostLoadingScreen_C.ExecuteUbergraph_UI_HostLoadingScreen
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_HostLoadingScreen_C::ExecuteUbergraph_UI_HostLoadingScreen(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HostLoadingScreen.UI_HostLoadingScreen_C.ExecuteUbergraph_UI_HostLoadingScreen");

	UUI_HostLoadingScreen_C_ExecuteUbergraph_UI_HostLoadingScreen_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
