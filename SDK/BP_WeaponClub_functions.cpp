
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

// Function BP_WeaponClub.BP_WeaponClub_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_WeaponClub_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WeaponClub.BP_WeaponClub_C.UserConstructionScript");

	ABP_WeaponClub_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WeaponClub.BP_WeaponClub_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_WeaponClub_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WeaponClub.BP_WeaponClub_C.ReceiveBeginPlay");

	ABP_WeaponClub_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WeaponClub.BP_WeaponClub_C.ExecuteUbergraph_BP_WeaponClub
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_WeaponClub_C::ExecuteUbergraph_BP_WeaponClub(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WeaponClub.BP_WeaponClub_C.ExecuteUbergraph_BP_WeaponClub");

	ABP_WeaponClub_C_ExecuteUbergraph_BP_WeaponClub_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
