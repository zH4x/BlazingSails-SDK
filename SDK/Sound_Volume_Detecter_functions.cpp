
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

// Function Sound_Volume_Detecter.Sound_Volume_Detecter_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ASound_Volume_Detecter_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Sound_Volume_Detecter.Sound_Volume_Detecter_C.UserConstructionScript");

	ASound_Volume_Detecter_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Sound_Volume_Detecter.Sound_Volume_Detecter_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ASound_Volume_Detecter_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Sound_Volume_Detecter.Sound_Volume_Detecter_C.ReceiveBeginPlay");

	ASound_Volume_Detecter_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Sound_Volume_Detecter.Sound_Volume_Detecter_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ASound_Volume_Detecter_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function Sound_Volume_Detecter.Sound_Volume_Detecter_C.ReceiveTick");

	ASound_Volume_Detecter_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Sound_Volume_Detecter.Sound_Volume_Detecter_C.ExecuteUbergraph_Sound_Volume_Detecter
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ASound_Volume_Detecter_C::ExecuteUbergraph_Sound_Volume_Detecter(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Sound_Volume_Detecter.Sound_Volume_Detecter_C.ExecuteUbergraph_Sound_Volume_Detecter");

	ASound_Volume_Detecter_C_ExecuteUbergraph_Sound_Volume_Detecter_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
