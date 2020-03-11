
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

// Function UI_CrewInfo.UI_CrewInfo_C.SetGoldAmount
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UUI_CrewInfo_C::SetGoldAmount()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CrewInfo.UI_CrewInfo_C.SetGoldAmount");

	UUI_CrewInfo_C_SetGoldAmount_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_CrewInfo.UI_CrewInfo_C.RefreshCrewMembers
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UUI_CrewInfo_C::RefreshCrewMembers()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CrewInfo.UI_CrewInfo_C.RefreshCrewMembers");

	UUI_CrewInfo_C_RefreshCrewMembers_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CrewInfo.UI_CrewInfo_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_CrewInfo_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CrewInfo.UI_CrewInfo_C.Construct");

	UUI_CrewInfo_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CrewInfo.UI_CrewInfo_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float                          InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_CrewInfo_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CrewInfo.UI_CrewInfo_C.Tick");

	UUI_CrewInfo_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CrewInfo.UI_CrewInfo_C.RefreshEmblemAndPlayers
// (BlueprintCallable, BlueprintEvent)

void UUI_CrewInfo_C::RefreshEmblemAndPlayers()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CrewInfo.UI_CrewInfo_C.RefreshEmblemAndPlayers");

	UUI_CrewInfo_C_RefreshEmblemAndPlayers_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CrewInfo.UI_CrewInfo_C.ExecuteUbergraph_UI_CrewInfo
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_CrewInfo_C::ExecuteUbergraph_UI_CrewInfo(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CrewInfo.UI_CrewInfo_C.ExecuteUbergraph_UI_CrewInfo");

	UUI_CrewInfo_C_ExecuteUbergraph_UI_CrewInfo_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
