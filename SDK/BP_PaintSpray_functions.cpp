
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

// Function BP_PaintSpray.BP_PaintSpray_C.OnRep_Team
// (BlueprintCallable, BlueprintEvent)

void ABP_PaintSpray_C::OnRep_Team()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PaintSpray.BP_PaintSpray_C.OnRep_Team");

	ABP_PaintSpray_C_OnRep_Team_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PaintSpray.BP_PaintSpray_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_PaintSpray_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PaintSpray.BP_PaintSpray_C.UserConstructionScript");

	ABP_PaintSpray_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PaintSpray.BP_PaintSpray_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_PaintSpray_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PaintSpray.BP_PaintSpray_C.ReceiveBeginPlay");

	ABP_PaintSpray_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PaintSpray.BP_PaintSpray_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PaintSpray_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PaintSpray.BP_PaintSpray_C.ReceiveTick");

	ABP_PaintSpray_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PaintSpray.BP_PaintSpray_C.Remove
// (BlueprintCallable, BlueprintEvent)

void ABP_PaintSpray_C::Remove()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PaintSpray.BP_PaintSpray_C.Remove");

	ABP_PaintSpray_C_Remove_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PaintSpray.BP_PaintSpray_C.SetEmblemAndColor
// (BlueprintCallable, BlueprintEvent)

void ABP_PaintSpray_C::SetEmblemAndColor()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PaintSpray.BP_PaintSpray_C.SetEmblemAndColor");

	ABP_PaintSpray_C_SetEmblemAndColor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PaintSpray.BP_PaintSpray_C.ExecuteUbergraph_BP_PaintSpray
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PaintSpray_C::ExecuteUbergraph_BP_PaintSpray(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PaintSpray.BP_PaintSpray_C.ExecuteUbergraph_BP_PaintSpray");

	ABP_PaintSpray_C_ExecuteUbergraph_BP_PaintSpray_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
