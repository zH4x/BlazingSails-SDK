
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

// Function MovingBaseAttach.MovingBaseAttach_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AMovingBaseAttach_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function MovingBaseAttach.MovingBaseAttach_C.UserConstructionScript");

	AMovingBaseAttach_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MovingBaseAttach.MovingBaseAttach_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AMovingBaseAttach_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function MovingBaseAttach.MovingBaseAttach_C.ReceiveTick");

	AMovingBaseAttach_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MovingBaseAttach.MovingBaseAttach_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AMovingBaseAttach_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function MovingBaseAttach.MovingBaseAttach_C.ReceiveBeginPlay");

	AMovingBaseAttach_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MovingBaseAttach.MovingBaseAttach_C.PreCheckCollision
// (BlueprintCallable, BlueprintEvent)

void AMovingBaseAttach_C::PreCheckCollision()
{
	static auto fn = UObject::FindObject<UFunction>("Function MovingBaseAttach.MovingBaseAttach_C.PreCheckCollision");

	AMovingBaseAttach_C_PreCheckCollision_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MovingBaseAttach.MovingBaseAttach_C.ExecuteUbergraph_MovingBaseAttach
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AMovingBaseAttach_C::ExecuteUbergraph_MovingBaseAttach(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function MovingBaseAttach.MovingBaseAttach_C.ExecuteUbergraph_MovingBaseAttach");

	AMovingBaseAttach_C_ExecuteUbergraph_MovingBaseAttach_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
