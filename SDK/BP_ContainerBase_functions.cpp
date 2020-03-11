
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

// Function BP_ContainerBase.BP_ContainerBase_C.OnRep_InitialLocation
// (BlueprintCallable, BlueprintEvent)

void ABP_ContainerBase_C::OnRep_InitialLocation()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ContainerBase.BP_ContainerBase_C.OnRep_InitialLocation");

	ABP_ContainerBase_C_OnRep_InitialLocation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ContainerBase.BP_ContainerBase_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_ContainerBase_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ContainerBase.BP_ContainerBase_C.UserConstructionScript");

	ABP_ContainerBase_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ContainerBase.BP_ContainerBase_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_ContainerBase_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ContainerBase.BP_ContainerBase_C.ReceiveBeginPlay");

	ABP_ContainerBase_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ContainerBase.BP_ContainerBase_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ContainerBase_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ContainerBase.BP_ContainerBase_C.ReceiveTick");

	ABP_ContainerBase_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ContainerBase.BP_ContainerBase_C.Init
// (BlueprintCallable, BlueprintEvent)

void ABP_ContainerBase_C::Init()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ContainerBase.BP_ContainerBase_C.Init");

	ABP_ContainerBase_C_Init_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ContainerBase.BP_ContainerBase_C.Activate
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_Character_C*         LocalCharacterRef              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ContainerBase_C::Activate(class ABP_Character_C* LocalCharacterRef)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ContainerBase.BP_ContainerBase_C.Activate");

	ABP_ContainerBase_C_Activate_Params params;
	params.LocalCharacterRef = LocalCharacterRef;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ContainerBase.BP_ContainerBase_C.S_Activate
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)

void ABP_ContainerBase_C::S_Activate()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ContainerBase.BP_ContainerBase_C.S_Activate");

	ABP_ContainerBase_C_S_Activate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ContainerBase.BP_ContainerBase_C.StopActivate
// (BlueprintCallable, BlueprintEvent)

void ABP_ContainerBase_C::StopActivate()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ContainerBase.BP_ContainerBase_C.StopActivate");

	ABP_ContainerBase_C_StopActivate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ContainerBase.BP_ContainerBase_C.ExecuteUbergraph_BP_ContainerBase
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ContainerBase_C::ExecuteUbergraph_BP_ContainerBase(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ContainerBase.BP_ContainerBase_C.ExecuteUbergraph_BP_ContainerBase");

	ABP_ContainerBase_C_ExecuteUbergraph_BP_ContainerBase_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
