
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

// Function BP_MainMenuCOntroller.BP_MainMenuCOntroller_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_MainMenuCOntroller_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MainMenuCOntroller.BP_MainMenuCOntroller_C.UserConstructionScript");

	ABP_MainMenuCOntroller_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MainMenuCOntroller.BP_MainMenuCOntroller_C.InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_2
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_MainMenuCOntroller_C::InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_2(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MainMenuCOntroller.BP_MainMenuCOntroller_C.InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_2");

	ABP_MainMenuCOntroller_C_InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_2_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MainMenuCOntroller.BP_MainMenuCOntroller_C.InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_1
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_MainMenuCOntroller_C::InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_1(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MainMenuCOntroller.BP_MainMenuCOntroller_C.InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_1");

	ABP_MainMenuCOntroller_C_InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_1_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MainMenuCOntroller.BP_MainMenuCOntroller_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_MainMenuCOntroller_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MainMenuCOntroller.BP_MainMenuCOntroller_C.ReceiveBeginPlay");

	ABP_MainMenuCOntroller_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MainMenuCOntroller.BP_MainMenuCOntroller_C.InpAxisKeyEvt_MouseX_K2Node_InputAxisKeyEvent_1
// (BlueprintEvent)
// Parameters:
// float                          AxisValue                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MainMenuCOntroller_C::InpAxisKeyEvt_MouseX_K2Node_InputAxisKeyEvent_1(float AxisValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MainMenuCOntroller.BP_MainMenuCOntroller_C.InpAxisKeyEvt_MouseX_K2Node_InputAxisKeyEvent_1");

	ABP_MainMenuCOntroller_C_InpAxisKeyEvt_MouseX_K2Node_InputAxisKeyEvent_1_Params params;
	params.AxisValue = AxisValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MainMenuCOntroller.BP_MainMenuCOntroller_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MainMenuCOntroller_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MainMenuCOntroller.BP_MainMenuCOntroller_C.ReceiveTick");

	ABP_MainMenuCOntroller_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MainMenuCOntroller.BP_MainMenuCOntroller_C.OC_CreateAndAddWaterCullingVolume
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_BoatMeshBase_C*      BoatMeshBaseRef                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MainMenuCOntroller_C::OC_CreateAndAddWaterCullingVolume(class ABP_BoatMeshBase_C* BoatMeshBaseRef)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MainMenuCOntroller.BP_MainMenuCOntroller_C.OC_CreateAndAddWaterCullingVolume");

	ABP_MainMenuCOntroller_C_OC_CreateAndAddWaterCullingVolume_Params params;
	params.BoatMeshBaseRef = BoatMeshBaseRef;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MainMenuCOntroller.BP_MainMenuCOntroller_C.ExecuteUbergraph_BP_MainMenuCOntroller
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MainMenuCOntroller_C::ExecuteUbergraph_BP_MainMenuCOntroller(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MainMenuCOntroller.BP_MainMenuCOntroller_C.ExecuteUbergraph_BP_MainMenuCOntroller");

	ABP_MainMenuCOntroller_C_ExecuteUbergraph_BP_MainMenuCOntroller_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
