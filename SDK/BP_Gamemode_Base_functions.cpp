
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

// Function BP_Gamemode_Base.BP_Gamemode_Base_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_Gamemode_Base_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Gamemode_Base.BP_Gamemode_Base_C.UserConstructionScript");

	ABP_Gamemode_Base_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Gamemode_Base.BP_Gamemode_Base_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_Gamemode_Base_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Gamemode_Base.BP_Gamemode_Base_C.ReceiveBeginPlay");

	ABP_Gamemode_Base_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Gamemode_Base.BP_Gamemode_Base_C.ExecuteUbergraph_BP_Gamemode_Base
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Gamemode_Base_C::ExecuteUbergraph_BP_Gamemode_Base(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Gamemode_Base.BP_Gamemode_Base_C.ExecuteUbergraph_BP_Gamemode_Base");

	ABP_Gamemode_Base_C_ExecuteUbergraph_BP_Gamemode_Base_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
