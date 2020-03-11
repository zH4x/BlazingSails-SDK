
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

// Function UI_YouKilledInfo.UI_YouKilledInfo_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_YouKilledInfo_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_YouKilledInfo.UI_YouKilledInfo_C.Construct");

	UUI_YouKilledInfo_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_YouKilledInfo.UI_YouKilledInfo_C.AddKill
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 PlayerName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UUI_YouKilledInfo_C::AddKill(const struct FString& PlayerName)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_YouKilledInfo.UI_YouKilledInfo_C.AddKill");

	UUI_YouKilledInfo_C_AddKill_Params params;
	params.PlayerName = PlayerName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_YouKilledInfo.UI_YouKilledInfo_C.ExecuteUbergraph_UI_YouKilledInfo
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_YouKilledInfo_C::ExecuteUbergraph_UI_YouKilledInfo(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_YouKilledInfo.UI_YouKilledInfo_C.ExecuteUbergraph_UI_YouKilledInfo");

	UUI_YouKilledInfo_C_ExecuteUbergraph_UI_YouKilledInfo_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
