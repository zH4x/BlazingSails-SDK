
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

// Function BP_CameraManager.BP_CameraManager_C.InitializeVoiceChat
// (Private, BlueprintCallable, BlueprintEvent)

void ABP_CameraManager_C::InitializeVoiceChat()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CameraManager.BP_CameraManager_C.InitializeVoiceChat");

	ABP_CameraManager_C_InitializeVoiceChat_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CameraManager.BP_CameraManager_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_CameraManager_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CameraManager.BP_CameraManager_C.UserConstructionScript");

	ABP_CameraManager_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CameraManager.BP_CameraManager_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_CameraManager_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CameraManager.BP_CameraManager_C.ReceiveBeginPlay");

	ABP_CameraManager_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CameraManager.BP_CameraManager_C.ReceiveActorBeginOverlap
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_CameraManager_C::ReceiveActorBeginOverlap(class AActor* OtherActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CameraManager.BP_CameraManager_C.ReceiveActorBeginOverlap");

	ABP_CameraManager_C_ReceiveActorBeginOverlap_Params params;
	params.OtherActor = OtherActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CameraManager.BP_CameraManager_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_CameraManager_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CameraManager.BP_CameraManager_C.ReceiveTick");

	ABP_CameraManager_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CameraManager.BP_CameraManager_C.ReceiveActorEndOverlap
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_CameraManager_C::ReceiveActorEndOverlap(class AActor* OtherActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CameraManager.BP_CameraManager_C.ReceiveActorEndOverlap");

	ABP_CameraManager_C_ReceiveActorEndOverlap_Params params;
	params.OtherActor = OtherActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CameraManager.BP_CameraManager_C.ExecuteUbergraph_BP_CameraManager
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_CameraManager_C::ExecuteUbergraph_BP_CameraManager(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CameraManager.BP_CameraManager_C.ExecuteUbergraph_BP_CameraManager");

	ABP_CameraManager_C_ExecuteUbergraph_BP_CameraManager_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
