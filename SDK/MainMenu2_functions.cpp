
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

// Function MainMenu2.MainMenu2_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AMainMenu2_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMenu2.MainMenu2_C.ReceiveBeginPlay");

	AMainMenu2_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainMenu2.MainMenu2_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AMainMenu2_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMenu2.MainMenu2_C.ReceiveTick");

	AMainMenu2_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainMenu2.MainMenu2_C.ExecuteUbergraph_MainMenu2
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AMainMenu2_C::ExecuteUbergraph_MainMenu2(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMenu2.MainMenu2_C.ExecuteUbergraph_MainMenu2");

	AMainMenu2_C_ExecuteUbergraph_MainMenu2_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
