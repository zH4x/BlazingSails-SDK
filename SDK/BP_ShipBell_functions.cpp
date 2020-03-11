
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

// Function BP_ShipBell.BP_ShipBell_C.RingBell
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_ShipBell_C::RingBell()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ShipBell.BP_ShipBell_C.RingBell");

	ABP_ShipBell_C_RingBell_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ShipBell.BP_ShipBell_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_ShipBell_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ShipBell.BP_ShipBell_C.UserConstructionScript");

	ABP_ShipBell_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ShipBell.BP_ShipBell_C.S_Activate
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)

void ABP_ShipBell_C::S_Activate()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ShipBell.BP_ShipBell_C.S_Activate");

	ABP_ShipBell_C_S_Activate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ShipBell.BP_ShipBell_C.Activate
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_Character_C*         LocalCharacterRef              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ShipBell_C::Activate(class ABP_Character_C* LocalCharacterRef)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ShipBell.BP_ShipBell_C.Activate");

	ABP_ShipBell_C_Activate_Params params;
	params.LocalCharacterRef = LocalCharacterRef;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ShipBell.BP_ShipBell_C.MC_Ring
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)

void ABP_ShipBell_C::MC_Ring()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ShipBell.BP_ShipBell_C.MC_Ring");

	ABP_ShipBell_C_MC_Ring_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ShipBell.BP_ShipBell_C.ExecuteUbergraph_BP_ShipBell
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ShipBell_C::ExecuteUbergraph_BP_ShipBell(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ShipBell.BP_ShipBell_C.ExecuteUbergraph_BP_ShipBell");

	ABP_ShipBell_C_ExecuteUbergraph_BP_ShipBell_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
