
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

// Function BP_EndGameRocksNew.BP_EndGameRocksNew_C.OnRep_Rock3Rotation
// (HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_EndGameRocksNew_C::OnRep_Rock3Rotation()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EndGameRocksNew.BP_EndGameRocksNew_C.OnRep_Rock3Rotation");

	ABP_EndGameRocksNew_C_OnRep_Rock3Rotation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_EndGameRocksNew.BP_EndGameRocksNew_C.OnRep_Rock1Rotation
// (HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_EndGameRocksNew_C::OnRep_Rock1Rotation()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EndGameRocksNew.BP_EndGameRocksNew_C.OnRep_Rock1Rotation");

	ABP_EndGameRocksNew_C_OnRep_Rock1Rotation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_EndGameRocksNew.BP_EndGameRocksNew_C.OnRep_Rock2Rotation
// (HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_EndGameRocksNew_C::OnRep_Rock2Rotation()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EndGameRocksNew.BP_EndGameRocksNew_C.OnRep_Rock2Rotation");

	ABP_EndGameRocksNew_C_OnRep_Rock2Rotation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_EndGameRocksNew.BP_EndGameRocksNew_C.CheckIfRockCanSpawn
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 Location                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           CanSpawn                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_EndGameRocksNew_C::CheckIfRockCanSpawn(const struct FVector& Location, bool* CanSpawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EndGameRocksNew.BP_EndGameRocksNew_C.CheckIfRockCanSpawn");

	ABP_EndGameRocksNew_C_CheckIfRockCanSpawn_Params params;
	params.Location = Location;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CanSpawn != nullptr)
		*CanSpawn = params.CanSpawn;
}


// Function BP_EndGameRocksNew.BP_EndGameRocksNew_C.CheckIfAllRocksHaveRisen
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_EndGameRocksNew_C::CheckIfAllRocksHaveRisen()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EndGameRocksNew.BP_EndGameRocksNew_C.CheckIfAllRocksHaveRisen");

	ABP_EndGameRocksNew_C_CheckIfAllRocksHaveRisen_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_EndGameRocksNew.BP_EndGameRocksNew_C.OnRep_RiseRock3
// (BlueprintCallable, BlueprintEvent)

void ABP_EndGameRocksNew_C::OnRep_RiseRock3()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EndGameRocksNew.BP_EndGameRocksNew_C.OnRep_RiseRock3");

	ABP_EndGameRocksNew_C_OnRep_RiseRock3_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_EndGameRocksNew.BP_EndGameRocksNew_C.OnRep_RiseRock2
// (BlueprintCallable, BlueprintEvent)

void ABP_EndGameRocksNew_C::OnRep_RiseRock2()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EndGameRocksNew.BP_EndGameRocksNew_C.OnRep_RiseRock2");

	ABP_EndGameRocksNew_C_OnRep_RiseRock2_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_EndGameRocksNew.BP_EndGameRocksNew_C.OnRep_RiseRocks
// (BlueprintCallable, BlueprintEvent)

void ABP_EndGameRocksNew_C::OnRep_RiseRocks()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EndGameRocksNew.BP_EndGameRocksNew_C.OnRep_RiseRocks");

	ABP_EndGameRocksNew_C_OnRep_RiseRocks_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_EndGameRocksNew.BP_EndGameRocksNew_C.OnRep_Rock3Location
// (HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_EndGameRocksNew_C::OnRep_Rock3Location()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EndGameRocksNew.BP_EndGameRocksNew_C.OnRep_Rock3Location");

	ABP_EndGameRocksNew_C_OnRep_Rock3Location_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_EndGameRocksNew.BP_EndGameRocksNew_C.OnRep_Rock2Location
// (HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_EndGameRocksNew_C::OnRep_Rock2Location()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EndGameRocksNew.BP_EndGameRocksNew_C.OnRep_Rock2Location");

	ABP_EndGameRocksNew_C_OnRep_Rock2Location_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_EndGameRocksNew.BP_EndGameRocksNew_C.OnRep_Rock1Location
// (HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_EndGameRocksNew_C::OnRep_Rock1Location()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EndGameRocksNew.BP_EndGameRocksNew_C.OnRep_Rock1Location");

	ABP_EndGameRocksNew_C_OnRep_Rock1Location_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_EndGameRocksNew.BP_EndGameRocksNew_C.GetRandomPointInCircle
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 Location                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_EndGameRocksNew_C::GetRandomPointInCircle(struct FVector* Location)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EndGameRocksNew.BP_EndGameRocksNew_C.GetRandomPointInCircle");

	ABP_EndGameRocksNew_C_GetRandomPointInCircle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Location != nullptr)
		*Location = params.Location;
}


// Function BP_EndGameRocksNew.BP_EndGameRocksNew_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_EndGameRocksNew_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EndGameRocksNew.BP_EndGameRocksNew_C.UserConstructionScript");

	ABP_EndGameRocksNew_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_EndGameRocksNew.BP_EndGameRocksNew_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_EndGameRocksNew_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EndGameRocksNew.BP_EndGameRocksNew_C.ReceiveBeginPlay");

	ABP_EndGameRocksNew_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_EndGameRocksNew.BP_EndGameRocksNew_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_EndGameRocksNew_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EndGameRocksNew.BP_EndGameRocksNew_C.ReceiveTick");

	ABP_EndGameRocksNew_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_EndGameRocksNew.BP_EndGameRocksNew_C.ExecuteUbergraph_BP_EndGameRocksNew
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_EndGameRocksNew_C::ExecuteUbergraph_BP_EndGameRocksNew(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EndGameRocksNew.BP_EndGameRocksNew_C.ExecuteUbergraph_BP_EndGameRocksNew");

	ABP_EndGameRocksNew_C_ExecuteUbergraph_BP_EndGameRocksNew_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
