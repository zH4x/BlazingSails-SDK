
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

// Function BP_IconBase.BP_IconBase_C.OnRep_TeamPlayerColor
// (BlueprintCallable, BlueprintEvent)

void ABP_IconBase_C::OnRep_TeamPlayerColor()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_IconBase.BP_IconBase_C.OnRep_TeamPlayerColor");

	ABP_IconBase_C_OnRep_TeamPlayerColor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_IconBase.BP_IconBase_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_IconBase_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_IconBase.BP_IconBase_C.UserConstructionScript");

	ABP_IconBase_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_IconBase.BP_IconBase_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_IconBase_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_IconBase.BP_IconBase_C.ReceiveBeginPlay");

	ABP_IconBase_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_IconBase.BP_IconBase_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_IconBase_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_IconBase.BP_IconBase_C.ReceiveTick");

	ABP_IconBase_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_IconBase.BP_IconBase_C.SetIconProperties
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            IconScale                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_IconBase_C::SetIconProperties(int IconScale)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_IconBase.BP_IconBase_C.SetIconProperties");

	ABP_IconBase_C_SetIconProperties_Params params;
	params.IconScale = IconScale;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_IconBase.BP_IconBase_C.SetWidget
// (BlueprintCallable, BlueprintEvent)

void ABP_IconBase_C::SetWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_IconBase.BP_IconBase_C.SetWidget");

	ABP_IconBase_C_SetWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_IconBase.BP_IconBase_C.MC_SetDeathIcon
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)

void ABP_IconBase_C::MC_SetDeathIcon()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_IconBase.BP_IconBase_C.MC_SetDeathIcon");

	ABP_IconBase_C_MC_SetDeathIcon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_IconBase.BP_IconBase_C.ExecuteUbergraph_BP_IconBase
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_IconBase_C::ExecuteUbergraph_BP_IconBase(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_IconBase.BP_IconBase_C.ExecuteUbergraph_BP_IconBase");

	ABP_IconBase_C_ExecuteUbergraph_BP_IconBase_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
