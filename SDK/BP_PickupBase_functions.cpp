
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

// Function BP_PickupBase.BP_PickupBase_C.FloatMode
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Enable                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PickupBase_C::FloatMode(bool Enable)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PickupBase.BP_PickupBase_C.FloatMode");

	ABP_PickupBase_C_FloatMode_Params params;
	params.Enable = Enable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PickupBase.BP_PickupBase_C.HighLightObject
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor            Color                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PickupBase_C::HighLightObject(const struct FLinearColor& Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PickupBase.BP_PickupBase_C.HighLightObject");

	ABP_PickupBase_C_HighLightObject_Params params;
	params.Color = Color;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PickupBase.BP_PickupBase_C.ShowHideOutline
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ShowOutline                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           NoRoom                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PickupBase_C::ShowHideOutline(bool ShowOutline, bool NoRoom)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PickupBase.BP_PickupBase_C.ShowHideOutline");

	ABP_PickupBase_C_ShowHideOutline_Params params;
	params.ShowOutline = ShowOutline;
	params.NoRoom = NoRoom;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PickupBase.BP_PickupBase_C.CheckIfPlayerHasRoom
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           EnoughRoom                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_PickupBase_C::CheckIfPlayerHasRoom(bool* EnoughRoom)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PickupBase.BP_PickupBase_C.CheckIfPlayerHasRoom");

	ABP_PickupBase_C_CheckIfPlayerHasRoom_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (EnoughRoom != nullptr)
		*EnoughRoom = params.EnoughRoom;
}


// Function BP_PickupBase.BP_PickupBase_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_PickupBase_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PickupBase.BP_PickupBase_C.UserConstructionScript");

	ABP_PickupBase_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PickupBase.BP_PickupBase_C.UpdateAmount
// (BlueprintCallable, BlueprintEvent)

void ABP_PickupBase_C::UpdateAmount()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PickupBase.BP_PickupBase_C.UpdateAmount");

	ABP_PickupBase_C_UpdateAmount_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PickupBase.BP_PickupBase_C.Activate
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_Character_C*         LocalCharacterRef              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PickupBase_C::Activate(class ABP_Character_C* LocalCharacterRef)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PickupBase.BP_PickupBase_C.Activate");

	ABP_PickupBase_C_Activate_Params params;
	params.LocalCharacterRef = LocalCharacterRef;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PickupBase.BP_PickupBase_C.S_Activate
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)

void ABP_PickupBase_C::S_Activate()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PickupBase.BP_PickupBase_C.S_Activate");

	ABP_PickupBase_C_S_Activate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PickupBase.BP_PickupBase_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PickupBase_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PickupBase.BP_PickupBase_C.ReceiveTick");

	ABP_PickupBase_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PickupBase.BP_PickupBase_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_PickupBase_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PickupBase.BP_PickupBase_C.ReceiveBeginPlay");

	ABP_PickupBase_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PickupBase.BP_PickupBase_C.ExecuteUbergraph_BP_PickupBase
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PickupBase_C::ExecuteUbergraph_BP_PickupBase(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PickupBase.BP_PickupBase_C.ExecuteUbergraph_BP_PickupBase");

	ABP_PickupBase_C_ExecuteUbergraph_BP_PickupBase_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
