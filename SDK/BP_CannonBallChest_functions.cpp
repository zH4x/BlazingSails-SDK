
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

// Function BP_CannonBallChest.BP_CannonBallChest_C.GiveCannonballs
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_CannonBallChest_C::GiveCannonballs()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CannonBallChest.BP_CannonBallChest_C.GiveCannonballs");

	ABP_CannonBallChest_C_GiveCannonballs_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CannonBallChest.BP_CannonBallChest_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_CannonBallChest_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CannonBallChest.BP_CannonBallChest_C.UserConstructionScript");

	ABP_CannonBallChest_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CannonBallChest.BP_CannonBallChest_C.ShowReceivedIndicator
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            CannonballAmount               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            AntiSailAmount                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_CannonBallChest_C::ShowReceivedIndicator(int CannonballAmount, int AntiSailAmount)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CannonBallChest.BP_CannonBallChest_C.ShowReceivedIndicator");

	ABP_CannonBallChest_C_ShowReceivedIndicator_Params params;
	params.CannonballAmount = CannonballAmount;
	params.AntiSailAmount = AntiSailAmount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CannonBallChest.BP_CannonBallChest_C.CloseChest
// (BlueprintCallable, BlueprintEvent)

void ABP_CannonBallChest_C::CloseChest()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CannonBallChest.BP_CannonBallChest_C.CloseChest");

	ABP_CannonBallChest_C_CloseChest_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CannonBallChest.BP_CannonBallChest_C.Activate
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_Character_C*         LocalCharacterRef              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_CannonBallChest_C::Activate(class ABP_Character_C* LocalCharacterRef)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CannonBallChest.BP_CannonBallChest_C.Activate");

	ABP_CannonBallChest_C_Activate_Params params;
	params.LocalCharacterRef = LocalCharacterRef;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CannonBallChest.BP_CannonBallChest_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_CannonBallChest_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CannonBallChest.BP_CannonBallChest_C.ReceiveTick");

	ABP_CannonBallChest_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CannonBallChest.BP_CannonBallChest_C.S_Activate
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)

void ABP_CannonBallChest_C::S_Activate()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CannonBallChest.BP_CannonBallChest_C.S_Activate");

	ABP_CannonBallChest_C_S_Activate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CannonBallChest.BP_CannonBallChest_C.ExecuteUbergraph_BP_CannonBallChest
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_CannonBallChest_C::ExecuteUbergraph_BP_CannonBallChest(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CannonBallChest.BP_CannonBallChest_C.ExecuteUbergraph_BP_CannonBallChest");

	ABP_CannonBallChest_C_ExecuteUbergraph_BP_CannonBallChest_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
