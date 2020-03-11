
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

// Function BP_PickupExplosiveBarrel.BP_PickupExplosiveBarrel_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_PickupExplosiveBarrel_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PickupExplosiveBarrel.BP_PickupExplosiveBarrel_C.UserConstructionScript");

	ABP_PickupExplosiveBarrel_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PickupExplosiveBarrel.BP_PickupExplosiveBarrel_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_PickupExplosiveBarrel_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PickupExplosiveBarrel.BP_PickupExplosiveBarrel_C.ReceiveBeginPlay");

	ABP_PickupExplosiveBarrel_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PickupExplosiveBarrel.BP_PickupExplosiveBarrel_C.S_Activate
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)

void ABP_PickupExplosiveBarrel_C::S_Activate()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PickupExplosiveBarrel.BP_PickupExplosiveBarrel_C.S_Activate");

	ABP_PickupExplosiveBarrel_C_S_Activate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PickupExplosiveBarrel.BP_PickupExplosiveBarrel_C.Explode
// (BlueprintCallable, BlueprintEvent)

void ABP_PickupExplosiveBarrel_C::Explode()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PickupExplosiveBarrel.BP_PickupExplosiveBarrel_C.Explode");

	ABP_PickupExplosiveBarrel_C_Explode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PickupExplosiveBarrel.BP_PickupExplosiveBarrel_C.MC_Effects
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)

void ABP_PickupExplosiveBarrel_C::MC_Effects()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PickupExplosiveBarrel.BP_PickupExplosiveBarrel_C.MC_Effects");

	ABP_PickupExplosiveBarrel_C_MC_Effects_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PickupExplosiveBarrel.BP_PickupExplosiveBarrel_C.S_Explode
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_Controller_C*        ControllerRef                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PickupExplosiveBarrel_C::S_Explode(class ABP_Controller_C* ControllerRef)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PickupExplosiveBarrel.BP_PickupExplosiveBarrel_C.S_Explode");

	ABP_PickupExplosiveBarrel_C_S_Explode_Params params;
	params.ControllerRef = ControllerRef;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PickupExplosiveBarrel.BP_PickupExplosiveBarrel_C.ExecuteUbergraph_BP_PickupExplosiveBarrel
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PickupExplosiveBarrel_C::ExecuteUbergraph_BP_PickupExplosiveBarrel(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PickupExplosiveBarrel.BP_PickupExplosiveBarrel_C.ExecuteUbergraph_BP_PickupExplosiveBarrel");

	ABP_PickupExplosiveBarrel_C_ExecuteUbergraph_BP_PickupExplosiveBarrel_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
