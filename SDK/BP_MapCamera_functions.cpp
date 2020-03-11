
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

// Function BP_MapCamera.BP_MapCamera_C.TeleportActorToPlayerForRelevancy
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_MapCamera_C::TeleportActorToPlayerForRelevancy()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapCamera.BP_MapCamera_C.TeleportActorToPlayerForRelevancy");

	ABP_MapCamera_C_TeleportActorToPlayerForRelevancy_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MapCamera.BP_MapCamera_C.SaveLocAndZoom
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_MapCamera_C::SaveLocAndZoom()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapCamera.BP_MapCamera_C.SaveLocAndZoom");

	ABP_MapCamera_C_SaveLocAndZoom_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MapCamera.BP_MapCamera_C.FindAndShowIcons
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_MapCamera_C::FindAndShowIcons()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapCamera.BP_MapCamera_C.FindAndShowIcons");

	ABP_MapCamera_C_FindAndShowIcons_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MapCamera.BP_MapCamera_C.SetIconPosition
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_IconBase_C*          Icon                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MapCamera_C::SetIconPosition(class ABP_IconBase_C* Icon)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapCamera.BP_MapCamera_C.SetIconPosition");

	ABP_MapCamera_C_SetIconPosition_Params params;
	params.Icon = Icon;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MapCamera.BP_MapCamera_C.GetFocusPoint
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 FocusPoint                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_MapCamera_C::GetFocusPoint(struct FVector* FocusPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapCamera.BP_MapCamera_C.GetFocusPoint");

	ABP_MapCamera_C_GetFocusPoint_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (FocusPoint != nullptr)
		*FocusPoint = params.FocusPoint;
}


// Function BP_MapCamera.BP_MapCamera_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_MapCamera_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapCamera.BP_MapCamera_C.UserConstructionScript");

	ABP_MapCamera_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MapCamera.BP_MapCamera_C.InpActEvt_PrimaryFire_K2Node_InputActionEvent_3
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_MapCamera_C::InpActEvt_PrimaryFire_K2Node_InputActionEvent_3(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapCamera.BP_MapCamera_C.InpActEvt_PrimaryFire_K2Node_InputActionEvent_3");

	ABP_MapCamera_C_InpActEvt_PrimaryFire_K2Node_InputActionEvent_3_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MapCamera.BP_MapCamera_C.InpActEvt_PrimaryFire_K2Node_InputActionEvent_2
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_MapCamera_C::InpActEvt_PrimaryFire_K2Node_InputActionEvent_2(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapCamera.BP_MapCamera_C.InpActEvt_PrimaryFire_K2Node_InputActionEvent_2");

	ABP_MapCamera_C_InpActEvt_PrimaryFire_K2Node_InputActionEvent_2_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MapCamera.BP_MapCamera_C.InpActEvt_SecondaryFire_K2Node_InputActionEvent_1
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_MapCamera_C::InpActEvt_SecondaryFire_K2Node_InputActionEvent_1(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapCamera.BP_MapCamera_C.InpActEvt_SecondaryFire_K2Node_InputActionEvent_1");

	ABP_MapCamera_C_InpActEvt_SecondaryFire_K2Node_InputActionEvent_1_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MapCamera.BP_MapCamera_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_MapCamera_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapCamera.BP_MapCamera_C.ReceiveBeginPlay");

	ABP_MapCamera_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MapCamera.BP_MapCamera_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MapCamera_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapCamera.BP_MapCamera_C.ReceiveTick");

	ABP_MapCamera_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MapCamera.BP_MapCamera_C.OC_SetStartLocation
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)

void ABP_MapCamera_C::OC_SetStartLocation()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapCamera.BP_MapCamera_C.OC_SetStartLocation");

	ABP_MapCamera_C_OC_SetStartLocation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MapCamera.BP_MapCamera_C.OC_HideIcons
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)

void ABP_MapCamera_C::OC_HideIcons()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapCamera.BP_MapCamera_C.OC_HideIcons");

	ABP_MapCamera_C_OC_HideIcons_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MapCamera.BP_MapCamera_C.S_PlaceMarker
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 Location                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            PlayerId                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            TeamID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            TeamPlayerColor                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MapCamera_C::S_PlaceMarker(const struct FVector& Location, int PlayerId, int TeamID, int TeamPlayerColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapCamera.BP_MapCamera_C.S_PlaceMarker");

	ABP_MapCamera_C_S_PlaceMarker_Params params;
	params.Location = Location;
	params.PlayerId = PlayerId;
	params.TeamID = TeamID;
	params.TeamPlayerColor = TeamPlayerColor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MapCamera.BP_MapCamera_C.DragPressed
// (BlueprintCallable, BlueprintEvent)

void ABP_MapCamera_C::DragPressed()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapCamera.BP_MapCamera_C.DragPressed");

	ABP_MapCamera_C_DragPressed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MapCamera.BP_MapCamera_C.DragReleased
// (BlueprintCallable, BlueprintEvent)

void ABP_MapCamera_C::DragReleased()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapCamera.BP_MapCamera_C.DragReleased");

	ABP_MapCamera_C_DragReleased_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MapCamera.BP_MapCamera_C.ZoomIn
// (BlueprintCallable, BlueprintEvent)

void ABP_MapCamera_C::ZoomIn()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapCamera.BP_MapCamera_C.ZoomIn");

	ABP_MapCamera_C_ZoomIn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MapCamera.BP_MapCamera_C.ZoomOut
// (BlueprintCallable, BlueprintEvent)

void ABP_MapCamera_C::ZoomOut()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapCamera.BP_MapCamera_C.ZoomOut");

	ABP_MapCamera_C_ZoomOut_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MapCamera.BP_MapCamera_C.PlaceMarker
// (BlueprintCallable, BlueprintEvent)

void ABP_MapCamera_C::PlaceMarker()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapCamera.BP_MapCamera_C.PlaceMarker");

	ABP_MapCamera_C_PlaceMarker_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MapCamera.BP_MapCamera_C.RefreshIcons
// (BlueprintCallable, BlueprintEvent)

void ABP_MapCamera_C::RefreshIcons()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapCamera.BP_MapCamera_C.RefreshIcons");

	ABP_MapCamera_C_RefreshIcons_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MapCamera.BP_MapCamera_C.SetStartLocation
// (BlueprintCallable, BlueprintEvent)

void ABP_MapCamera_C::SetStartLocation()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapCamera.BP_MapCamera_C.SetStartLocation");

	ABP_MapCamera_C_SetStartLocation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MapCamera.BP_MapCamera_C.ExecuteUbergraph_BP_MapCamera
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MapCamera_C::ExecuteUbergraph_BP_MapCamera(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapCamera.BP_MapCamera_C.ExecuteUbergraph_BP_MapCamera");

	ABP_MapCamera_C_ExecuteUbergraph_BP_MapCamera_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
