
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

// Function BP_CannonBallChestNew.BP_CannonBallChestNew_C.GiveCannonballs
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_CannonBallChestNew_C::GiveCannonballs()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CannonBallChestNew.BP_CannonBallChestNew_C.GiveCannonballs");

	ABP_CannonBallChestNew_C_GiveCannonballs_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CannonBallChestNew.BP_CannonBallChestNew_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_CannonBallChestNew_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CannonBallChestNew.BP_CannonBallChestNew_C.UserConstructionScript");

	ABP_CannonBallChestNew_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CannonBallChestNew.BP_CannonBallChestNew_C.CloseChest
// (BlueprintCallable, BlueprintEvent)

void ABP_CannonBallChestNew_C::CloseChest()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CannonBallChestNew.BP_CannonBallChestNew_C.CloseChest");

	ABP_CannonBallChestNew_C_CloseChest_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CannonBallChestNew.BP_CannonBallChestNew_C.ShowReceivedIndicator
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            CannonballAmount               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            AntiSailAmount                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_CannonBallChestNew_C::ShowReceivedIndicator(int CannonballAmount, int AntiSailAmount)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CannonBallChestNew.BP_CannonBallChestNew_C.ShowReceivedIndicator");

	ABP_CannonBallChestNew_C_ShowReceivedIndicator_Params params;
	params.CannonballAmount = CannonballAmount;
	params.AntiSailAmount = AntiSailAmount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CannonBallChestNew.BP_CannonBallChestNew_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_CannonBallChestNew_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CannonBallChestNew.BP_CannonBallChestNew_C.ReceiveTick");

	ABP_CannonBallChestNew_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CannonBallChestNew.BP_CannonBallChestNew_C.S_Activate
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)

void ABP_CannonBallChestNew_C::S_Activate()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CannonBallChestNew.BP_CannonBallChestNew_C.S_Activate");

	ABP_CannonBallChestNew_C_S_Activate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CannonBallChestNew.BP_CannonBallChestNew_C.Activate
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_Character_C*         LocalCharacterRef              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_CannonBallChestNew_C::Activate(class ABP_Character_C* LocalCharacterRef)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CannonBallChestNew.BP_CannonBallChestNew_C.Activate");

	ABP_CannonBallChestNew_C_Activate_Params params;
	params.LocalCharacterRef = LocalCharacterRef;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CannonBallChestNew.BP_CannonBallChestNew_C.ExecuteUbergraph_BP_CannonBallChestNew
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_CannonBallChestNew_C::ExecuteUbergraph_BP_CannonBallChestNew(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CannonBallChestNew.BP_CannonBallChestNew_C.ExecuteUbergraph_BP_CannonBallChestNew");

	ABP_CannonBallChestNew_C_ExecuteUbergraph_BP_CannonBallChestNew_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
