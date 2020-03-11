
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

// Function UI_CrewMemberInfo.UI_CrewMemberInfo_C.ShowMemberInfo
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UUI_CrewMemberInfo_C::ShowMemberInfo()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CrewMemberInfo.UI_CrewMemberInfo_C.ShowMemberInfo");

	UUI_CrewMemberInfo_C_ShowMemberInfo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_CrewMemberInfo.UI_CrewMemberInfo_C.UpdateMemberInfo
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bIsValid                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FUniqueNetIdRepl        PlayerNetID                    (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FText                   PlayerName                     (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           bIsLeader                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FST_Customisation       Customization                  (BlueprintVisible, BlueprintReadOnly, Parm)

void UUI_CrewMemberInfo_C::UpdateMemberInfo(bool bIsValid, const struct FUniqueNetIdRepl& PlayerNetID, const struct FText& PlayerName, bool bIsLeader, const struct FST_Customisation& Customization)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CrewMemberInfo.UI_CrewMemberInfo_C.UpdateMemberInfo");

	UUI_CrewMemberInfo_C_UpdateMemberInfo_Params params;
	params.bIsValid = bIsValid;
	params.PlayerNetID = PlayerNetID;
	params.PlayerName = PlayerName;
	params.bIsLeader = bIsLeader;
	params.Customization = Customization;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CrewMemberInfo.UI_CrewMemberInfo_C.UpdateReadyState
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bIsReady                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_CrewMemberInfo_C::UpdateReadyState(bool bIsReady)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CrewMemberInfo.UI_CrewMemberInfo_C.UpdateReadyState");

	UUI_CrewMemberInfo_C_UpdateReadyState_Params params;
	params.bIsReady = bIsReady;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CrewMemberInfo.UI_CrewMemberInfo_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float                          InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_CrewMemberInfo_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CrewMemberInfo.UI_CrewMemberInfo_C.Tick");

	UUI_CrewMemberInfo_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CrewMemberInfo.UI_CrewMemberInfo_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_CrewMemberInfo_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CrewMemberInfo.UI_CrewMemberInfo_C.Construct");

	UUI_CrewMemberInfo_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CrewMemberInfo.UI_CrewMemberInfo_C.ExecuteUbergraph_UI_CrewMemberInfo
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_CrewMemberInfo_C::ExecuteUbergraph_UI_CrewMemberInfo(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CrewMemberInfo.UI_CrewMemberInfo_C.ExecuteUbergraph_UI_CrewMemberInfo");

	UUI_CrewMemberInfo_C_ExecuteUbergraph_UI_CrewMemberInfo_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
