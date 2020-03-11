
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

// Function BP_DeathCam.BP_DeathCam_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_DeathCam_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DeathCam.BP_DeathCam_C.UserConstructionScript");

	ABP_DeathCam_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DeathCam.BP_DeathCam_C.InpActEvt_MouseScrollUp_K2Node_InputKeyEvent_3
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_DeathCam_C::InpActEvt_MouseScrollUp_K2Node_InputKeyEvent_3(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DeathCam.BP_DeathCam_C.InpActEvt_MouseScrollUp_K2Node_InputKeyEvent_3");

	ABP_DeathCam_C_InpActEvt_MouseScrollUp_K2Node_InputKeyEvent_3_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DeathCam.BP_DeathCam_C.InpActEvt_MouseScrollDown_K2Node_InputKeyEvent_2
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_DeathCam_C::InpActEvt_MouseScrollDown_K2Node_InputKeyEvent_2(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DeathCam.BP_DeathCam_C.InpActEvt_MouseScrollDown_K2Node_InputKeyEvent_2");

	ABP_DeathCam_C_InpActEvt_MouseScrollDown_K2Node_InputKeyEvent_2_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DeathCam.BP_DeathCam_C.InpActEvt_X_K2Node_InputKeyEvent_1
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_DeathCam_C::InpActEvt_X_K2Node_InputKeyEvent_1(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DeathCam.BP_DeathCam_C.InpActEvt_X_K2Node_InputKeyEvent_1");

	ABP_DeathCam_C_InpActEvt_X_K2Node_InputKeyEvent_1_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DeathCam.BP_DeathCam_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_DeathCam_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DeathCam.BP_DeathCam_C.ReceiveBeginPlay");

	ABP_DeathCam_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DeathCam.BP_DeathCam_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_DeathCam_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DeathCam.BP_DeathCam_C.ReceiveTick");

	ABP_DeathCam_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DeathCam.BP_DeathCam_C.OC_LookAtKiller
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 Location                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_DeathCam_C::OC_LookAtKiller(const struct FVector& Location)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DeathCam.BP_DeathCam_C.OC_LookAtKiller");

	ABP_DeathCam_C_OC_LookAtKiller_Params params;
	params.Location = Location;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DeathCam.BP_DeathCam_C.AttachToEntity
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Defeated                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            TeamID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_DeathCam_C::AttachToEntity(bool Defeated, int TeamID)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DeathCam.BP_DeathCam_C.AttachToEntity");

	ABP_DeathCam_C_AttachToEntity_Params params;
	params.Defeated = Defeated;
	params.TeamID = TeamID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DeathCam.BP_DeathCam_C.InpAxisKeyEvt_MouseX_K2Node_InputAxisKeyEvent_1
// (BlueprintEvent)
// Parameters:
// float                          AxisValue                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_DeathCam_C::InpAxisKeyEvt_MouseX_K2Node_InputAxisKeyEvent_1(float AxisValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DeathCam.BP_DeathCam_C.InpAxisKeyEvt_MouseX_K2Node_InputAxisKeyEvent_1");

	ABP_DeathCam_C_InpAxisKeyEvt_MouseX_K2Node_InputAxisKeyEvent_1_Params params;
	params.AxisValue = AxisValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DeathCam.BP_DeathCam_C.InpAxisKeyEvt_MouseY_K2Node_InputAxisKeyEvent_2
// (BlueprintEvent)
// Parameters:
// float                          AxisValue                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_DeathCam_C::InpAxisKeyEvt_MouseY_K2Node_InputAxisKeyEvent_2(float AxisValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DeathCam.BP_DeathCam_C.InpAxisKeyEvt_MouseY_K2Node_InputAxisKeyEvent_2");

	ABP_DeathCam_C_InpAxisKeyEvt_MouseY_K2Node_InputAxisKeyEvent_2_Params params;
	params.AxisValue = AxisValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DeathCam.BP_DeathCam_C.S_UpdateNetLocation
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 Location                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_DeathCam_C::S_UpdateNetLocation(const struct FVector& Location)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DeathCam.BP_DeathCam_C.S_UpdateNetLocation");

	ABP_DeathCam_C_S_UpdateNetLocation_Params params;
	params.Location = Location;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DeathCam.BP_DeathCam_C.OC_AttachToEntity
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Defeated                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            TeamID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_DeathCam_C::OC_AttachToEntity(bool Defeated, int TeamID)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DeathCam.BP_DeathCam_C.OC_AttachToEntity");

	ABP_DeathCam_C_OC_AttachToEntity_Params params;
	params.Defeated = Defeated;
	params.TeamID = TeamID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DeathCam.BP_DeathCam_C.CloseTeammenu
// (BlueprintCallable, BlueprintEvent)

void ABP_DeathCam_C::CloseTeammenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DeathCam.BP_DeathCam_C.CloseTeammenu");

	ABP_DeathCam_C_CloseTeammenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DeathCam.BP_DeathCam_C.ExecuteUbergraph_BP_DeathCam
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_DeathCam_C::ExecuteUbergraph_BP_DeathCam(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DeathCam.BP_DeathCam_C.ExecuteUbergraph_BP_DeathCam");

	ABP_DeathCam_C_ExecuteUbergraph_BP_DeathCam_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
