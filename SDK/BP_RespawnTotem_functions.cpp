
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

// Function BP_RespawnTotem.BP_RespawnTotem_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_RespawnTotem_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RespawnTotem.BP_RespawnTotem_C.UserConstructionScript");

	ABP_RespawnTotem_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_RespawnTotem.BP_RespawnTotem_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_RespawnTotem_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RespawnTotem.BP_RespawnTotem_C.ReceiveBeginPlay");

	ABP_RespawnTotem_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_RespawnTotem.BP_RespawnTotem_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_RespawnTotem_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RespawnTotem.BP_RespawnTotem_C.ReceiveTick");

	ABP_RespawnTotem_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_RespawnTotem.BP_RespawnTotem_C.refresh
// (BlueprintCallable, BlueprintEvent)

void ABP_RespawnTotem_C::refresh()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RespawnTotem.BP_RespawnTotem_C.refresh");

	ABP_RespawnTotem_C_refresh_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_RespawnTotem.BP_RespawnTotem_C.Teleport
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_Character_C*         Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_RespawnTotem_C::Teleport(class ABP_Character_C* Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RespawnTotem.BP_RespawnTotem_C.Teleport");

	ABP_RespawnTotem_C_Teleport_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_RespawnTotem.BP_RespawnTotem_C.ExecuteUbergraph_BP_RespawnTotem
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_RespawnTotem_C::ExecuteUbergraph_BP_RespawnTotem(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RespawnTotem.BP_RespawnTotem_C.ExecuteUbergraph_BP_RespawnTotem");

	ABP_RespawnTotem_C_ExecuteUbergraph_BP_RespawnTotem_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
