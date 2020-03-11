
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

// Function BP_VehicleSteeringWheel.BP_VehicleSteeringWheel_C.SetShipTurnRotation
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_VehicleSteeringWheel_C::SetShipTurnRotation()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VehicleSteeringWheel.BP_VehicleSteeringWheel_C.SetShipTurnRotation");

	ABP_VehicleSteeringWheel_C_SetShipTurnRotation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_VehicleSteeringWheel.BP_VehicleSteeringWheel_C.OnRep_SteeringLeft
// (BlueprintCallable, BlueprintEvent)

void ABP_VehicleSteeringWheel_C::OnRep_SteeringLeft()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VehicleSteeringWheel.BP_VehicleSteeringWheel_C.OnRep_SteeringLeft");

	ABP_VehicleSteeringWheel_C_OnRep_SteeringLeft_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_VehicleSteeringWheel.BP_VehicleSteeringWheel_C.OnRep_SteeringRight
// (BlueprintCallable, BlueprintEvent)

void ABP_VehicleSteeringWheel_C::OnRep_SteeringRight()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VehicleSteeringWheel.BP_VehicleSteeringWheel_C.OnRep_SteeringRight");

	ABP_VehicleSteeringWheel_C_OnRep_SteeringRight_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_VehicleSteeringWheel.BP_VehicleSteeringWheel_C.CheckWheelState
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          ForwardPosition                (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          BackWardPosition               (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_VehicleSteeringWheel_C::CheckWheelState(float* ForwardPosition, float* BackWardPosition)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VehicleSteeringWheel.BP_VehicleSteeringWheel_C.CheckWheelState");

	ABP_VehicleSteeringWheel_C_CheckWheelState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ForwardPosition != nullptr)
		*ForwardPosition = params.ForwardPosition;
	if (BackWardPosition != nullptr)
		*BackWardPosition = params.BackWardPosition;
}


// Function BP_VehicleSteeringWheel.BP_VehicleSteeringWheel_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_VehicleSteeringWheel_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VehicleSteeringWheel.BP_VehicleSteeringWheel_C.UserConstructionScript");

	ABP_VehicleSteeringWheel_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_VehicleSteeringWheel.BP_VehicleSteeringWheel_C.InpActEvt_Jump_K2Node_InputActionEvent_1
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_VehicleSteeringWheel_C::InpActEvt_Jump_K2Node_InputActionEvent_1(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VehicleSteeringWheel.BP_VehicleSteeringWheel_C.InpActEvt_Jump_K2Node_InputActionEvent_1");

	ABP_VehicleSteeringWheel_C_InpActEvt_Jump_K2Node_InputActionEvent_1_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_VehicleSteeringWheel.BP_VehicleSteeringWheel_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_VehicleSteeringWheel_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VehicleSteeringWheel.BP_VehicleSteeringWheel_C.ReceiveBeginPlay");

	ABP_VehicleSteeringWheel_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_VehicleSteeringWheel.BP_VehicleSteeringWheel_C.InpAxisKeyEvt_MouseX_K2Node_InputAxisKeyEvent_1
// (BlueprintEvent)
// Parameters:
// float                          AxisValue                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_VehicleSteeringWheel_C::InpAxisKeyEvt_MouseX_K2Node_InputAxisKeyEvent_1(float AxisValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VehicleSteeringWheel.BP_VehicleSteeringWheel_C.InpAxisKeyEvt_MouseX_K2Node_InputAxisKeyEvent_1");

	ABP_VehicleSteeringWheel_C_InpAxisKeyEvt_MouseX_K2Node_InputAxisKeyEvent_1_Params params;
	params.AxisValue = AxisValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_VehicleSteeringWheel.BP_VehicleSteeringWheel_C.InpAxisKeyEvt_MouseY_K2Node_InputAxisKeyEvent_2
// (BlueprintEvent)
// Parameters:
// float                          AxisValue                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_VehicleSteeringWheel_C::InpAxisKeyEvt_MouseY_K2Node_InputAxisKeyEvent_2(float AxisValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VehicleSteeringWheel.BP_VehicleSteeringWheel_C.InpAxisKeyEvt_MouseY_K2Node_InputAxisKeyEvent_2");

	ABP_VehicleSteeringWheel_C_InpAxisKeyEvt_MouseY_K2Node_InputAxisKeyEvent_2_Params params;
	params.AxisValue = AxisValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_VehicleSteeringWheel.BP_VehicleSteeringWheel_C.S_ShipSteerRight
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)

void ABP_VehicleSteeringWheel_C::S_ShipSteerRight()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VehicleSteeringWheel.BP_VehicleSteeringWheel_C.S_ShipSteerRight");

	ABP_VehicleSteeringWheel_C_S_ShipSteerRight_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_VehicleSteeringWheel.BP_VehicleSteeringWheel_C.S_ShipStopSteerRight
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)

void ABP_VehicleSteeringWheel_C::S_ShipStopSteerRight()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VehicleSteeringWheel.BP_VehicleSteeringWheel_C.S_ShipStopSteerRight");

	ABP_VehicleSteeringWheel_C_S_ShipStopSteerRight_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_VehicleSteeringWheel.BP_VehicleSteeringWheel_C.S_ShipSteerLeft
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)

void ABP_VehicleSteeringWheel_C::S_ShipSteerLeft()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VehicleSteeringWheel.BP_VehicleSteeringWheel_C.S_ShipSteerLeft");

	ABP_VehicleSteeringWheel_C_S_ShipSteerLeft_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_VehicleSteeringWheel.BP_VehicleSteeringWheel_C.S_ShipStopSteerLeft
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)

void ABP_VehicleSteeringWheel_C::S_ShipStopSteerLeft()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VehicleSteeringWheel.BP_VehicleSteeringWheel_C.S_ShipStopSteerLeft");

	ABP_VehicleSteeringWheel_C_S_ShipStopSteerLeft_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_VehicleSteeringWheel.BP_VehicleSteeringWheel_C.S_StopWheel
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)

void ABP_VehicleSteeringWheel_C::S_StopWheel()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VehicleSteeringWheel.BP_VehicleSteeringWheel_C.S_StopWheel");

	ABP_VehicleSteeringWheel_C_S_StopWheel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_VehicleSteeringWheel.BP_VehicleSteeringWheel_C.Reset
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)

void ABP_VehicleSteeringWheel_C::Reset()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VehicleSteeringWheel.BP_VehicleSteeringWheel_C.Reset");

	ABP_VehicleSteeringWheel_C_Reset_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_VehicleSteeringWheel.BP_VehicleSteeringWheel_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_VehicleSteeringWheel_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VehicleSteeringWheel.BP_VehicleSteeringWheel_C.ReceiveTick");

	ABP_VehicleSteeringWheel_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_VehicleSteeringWheel.BP_VehicleSteeringWheel_C.UnOccupied
// (BlueprintCallable, BlueprintEvent)

void ABP_VehicleSteeringWheel_C::UnOccupied()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VehicleSteeringWheel.BP_VehicleSteeringWheel_C.UnOccupied");

	ABP_VehicleSteeringWheel_C_UnOccupied_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_VehicleSteeringWheel.BP_VehicleSteeringWheel_C.S_AnchorDrop
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)

void ABP_VehicleSteeringWheel_C::S_AnchorDrop()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VehicleSteeringWheel.BP_VehicleSteeringWheel_C.S_AnchorDrop");

	ABP_VehicleSteeringWheel_C_S_AnchorDrop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_VehicleSteeringWheel.BP_VehicleSteeringWheel_C.MC_AnchorDrop
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)

void ABP_VehicleSteeringWheel_C::MC_AnchorDrop()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VehicleSteeringWheel.BP_VehicleSteeringWheel_C.MC_AnchorDrop");

	ABP_VehicleSteeringWheel_C_MC_AnchorDrop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_VehicleSteeringWheel.BP_VehicleSteeringWheel_C.S_ReverseShip
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)

void ABP_VehicleSteeringWheel_C::S_ReverseShip()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VehicleSteeringWheel.BP_VehicleSteeringWheel_C.S_ReverseShip");

	ABP_VehicleSteeringWheel_C_S_ReverseShip_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_VehicleSteeringWheel.BP_VehicleSteeringWheel_C.S_StopReverseShip
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)

void ABP_VehicleSteeringWheel_C::S_StopReverseShip()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VehicleSteeringWheel.BP_VehicleSteeringWheel_C.S_StopReverseShip");

	ABP_VehicleSteeringWheel_C_S_StopReverseShip_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_VehicleSteeringWheel.BP_VehicleSteeringWheel_C.S_SetWheelRotation
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Rotation                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_VehicleSteeringWheel_C::S_SetWheelRotation(int Rotation)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VehicleSteeringWheel.BP_VehicleSteeringWheel_C.S_SetWheelRotation");

	ABP_VehicleSteeringWheel_C_S_SetWheelRotation_Params params;
	params.Rotation = Rotation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_VehicleSteeringWheel.BP_VehicleSteeringWheel_C.MC_SetWheelRotation
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            WheelRotation                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_VehicleSteeringWheel_C::MC_SetWheelRotation(int WheelRotation)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VehicleSteeringWheel.BP_VehicleSteeringWheel_C.MC_SetWheelRotation");

	ABP_VehicleSteeringWheel_C_MC_SetWheelRotation_Params params;
	params.WheelRotation = WheelRotation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_VehicleSteeringWheel.BP_VehicleSteeringWheel_C.ResetWheelRotation
// (BlueprintCallable, BlueprintEvent)

void ABP_VehicleSteeringWheel_C::ResetWheelRotation()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VehicleSteeringWheel.BP_VehicleSteeringWheel_C.ResetWheelRotation");

	ABP_VehicleSteeringWheel_C_ResetWheelRotation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_VehicleSteeringWheel.BP_VehicleSteeringWheel_C.LoadKeys
// (BlueprintCallable, BlueprintEvent)

void ABP_VehicleSteeringWheel_C::LoadKeys()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VehicleSteeringWheel.BP_VehicleSteeringWheel_C.LoadKeys");

	ABP_VehicleSteeringWheel_C_LoadKeys_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_VehicleSteeringWheel.BP_VehicleSteeringWheel_C.Resetkeys
// (BlueprintCallable, BlueprintEvent)

void ABP_VehicleSteeringWheel_C::Resetkeys()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VehicleSteeringWheel.BP_VehicleSteeringWheel_C.Resetkeys");

	ABP_VehicleSteeringWheel_C_Resetkeys_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_VehicleSteeringWheel.BP_VehicleSteeringWheel_C.RefreshKeys
// (BlueprintCallable, BlueprintEvent)

void ABP_VehicleSteeringWheel_C::RefreshKeys()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VehicleSteeringWheel.BP_VehicleSteeringWheel_C.RefreshKeys");

	ABP_VehicleSteeringWheel_C_RefreshKeys_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_VehicleSteeringWheel.BP_VehicleSteeringWheel_C.OnRepOccupied
// (BlueprintCallable, BlueprintEvent)

void ABP_VehicleSteeringWheel_C::OnRepOccupied()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VehicleSteeringWheel.BP_VehicleSteeringWheel_C.OnRepOccupied");

	ABP_VehicleSteeringWheel_C_OnRepOccupied_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_VehicleSteeringWheel.BP_VehicleSteeringWheel_C.MC_ResetSpringArm
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)

void ABP_VehicleSteeringWheel_C::MC_ResetSpringArm()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VehicleSteeringWheel.BP_VehicleSteeringWheel_C.MC_ResetSpringArm");

	ABP_VehicleSteeringWheel_C_MC_ResetSpringArm_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_VehicleSteeringWheel.BP_VehicleSteeringWheel_C.AnchorDrop
// (BlueprintCallable, BlueprintEvent)

void ABP_VehicleSteeringWheel_C::AnchorDrop()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VehicleSteeringWheel.BP_VehicleSteeringWheel_C.AnchorDrop");

	ABP_VehicleSteeringWheel_C_AnchorDrop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_VehicleSteeringWheel.BP_VehicleSteeringWheel_C.SetAnchorReady
// (BlueprintCallable, BlueprintEvent)

void ABP_VehicleSteeringWheel_C::SetAnchorReady()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VehicleSteeringWheel.BP_VehicleSteeringWheel_C.SetAnchorReady");

	ABP_VehicleSteeringWheel_C_SetAnchorReady_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_VehicleSteeringWheel.BP_VehicleSteeringWheel_C.MC_UpgradeSteeringWheel
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)

void ABP_VehicleSteeringWheel_C::MC_UpgradeSteeringWheel()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VehicleSteeringWheel.BP_VehicleSteeringWheel_C.MC_UpgradeSteeringWheel");

	ABP_VehicleSteeringWheel_C_MC_UpgradeSteeringWheel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_VehicleSteeringWheel.BP_VehicleSteeringWheel_C.ExecuteUbergraph_BP_VehicleSteeringWheel
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_VehicleSteeringWheel_C::ExecuteUbergraph_BP_VehicleSteeringWheel(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VehicleSteeringWheel.BP_VehicleSteeringWheel_C.ExecuteUbergraph_BP_VehicleSteeringWheel");

	ABP_VehicleSteeringWheel_C_ExecuteUbergraph_BP_VehicleSteeringWheel_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
