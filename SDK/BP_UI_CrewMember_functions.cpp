
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

// Function BP_UI_CrewMember.BP_UI_CrewMember_C.UpdateShouldShowInfoWidget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bShouldShow                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_UI_CrewMember_C::UpdateShouldShowInfoWidget(bool bShouldShow)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UI_CrewMember.BP_UI_CrewMember_C.UpdateShouldShowInfoWidget");

	ABP_UI_CrewMember_C_UpdateShouldShowInfoWidget_Params params;
	params.bShouldShow = bShouldShow;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_UI_CrewMember.BP_UI_CrewMember_C.UpdateSlot
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_UI_CrewMember_C::UpdateSlot()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UI_CrewMember.BP_UI_CrewMember_C.UpdateSlot");

	ABP_UI_CrewMember_C_UpdateSlot_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_UI_CrewMember.BP_UI_CrewMember_C.ToggleVisible
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bNewVisible                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bShowInfo                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_UI_CrewMember_C::ToggleVisible(bool bNewVisible, bool bShowInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UI_CrewMember.BP_UI_CrewMember_C.ToggleVisible");

	ABP_UI_CrewMember_C_ToggleVisible_Params params;
	params.bNewVisible = bNewVisible;
	params.bShowInfo = bShowInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_UI_CrewMember.BP_UI_CrewMember_C.ResetCrewSlot
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_UI_CrewMember_C::ResetCrewSlot()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UI_CrewMember.BP_UI_CrewMember_C.ResetCrewSlot");

	ABP_UI_CrewMember_C_ResetCrewSlot_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_UI_CrewMember.BP_UI_CrewMember_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_UI_CrewMember_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UI_CrewMember.BP_UI_CrewMember_C.UserConstructionScript");

	ABP_UI_CrewMember_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_UI_CrewMember.BP_UI_CrewMember_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_UI_CrewMember_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UI_CrewMember.BP_UI_CrewMember_C.ReceiveBeginPlay");

	ABP_UI_CrewMember_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_UI_CrewMember.BP_UI_CrewMember_C.ExecuteUbergraph_BP_UI_CrewMember
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_UI_CrewMember_C::ExecuteUbergraph_BP_UI_CrewMember(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UI_CrewMember.BP_UI_CrewMember_C.ExecuteUbergraph_BP_UI_CrewMember");

	ABP_UI_CrewMember_C_ExecuteUbergraph_BP_UI_CrewMember_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
