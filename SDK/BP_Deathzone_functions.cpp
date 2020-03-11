
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

// Function BP_Deathzone.BP_Deathzone_C.SetZoneMusic
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USoundBase*              Song                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Deathzone_C::SetZoneMusic(class USoundBase* Song)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Deathzone.BP_Deathzone_C.SetZoneMusic");

	ABP_Deathzone_C_SetZoneMusic_Params params;
	params.Song = Song;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Deathzone.BP_Deathzone_C.ClosestPointToDeathzoneEdge
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 Closest_Location_To_Circle     (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           Outside_of_Zone_               (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           IsCloseToDeadzone              (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_Deathzone_C::ClosestPointToDeathzoneEdge(struct FVector* Closest_Location_To_Circle, bool* Outside_of_Zone_, bool* IsCloseToDeadzone)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Deathzone.BP_Deathzone_C.ClosestPointToDeathzoneEdge");

	ABP_Deathzone_C_ClosestPointToDeathzoneEdge_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Closest_Location_To_Circle != nullptr)
		*Closest_Location_To_Circle = params.Closest_Location_To_Circle;
	if (Outside_of_Zone_ != nullptr)
		*Outside_of_Zone_ = params.Outside_of_Zone_;
	if (IsCloseToDeadzone != nullptr)
		*IsCloseToDeadzone = params.IsCloseToDeadzone;
}


// Function BP_Deathzone.BP_Deathzone_C.OnRep_CurrentPhase
// (BlueprintCallable, BlueprintEvent)

void ABP_Deathzone_C::OnRep_CurrentPhase()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Deathzone.BP_Deathzone_C.OnRep_CurrentPhase");

	ABP_Deathzone_C_OnRep_CurrentPhase_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Deathzone.BP_Deathzone_C.GenerateNextRandomCircle
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 NextCircleLocation             (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           CorrectNextCircleLocation      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_Deathzone_C::GenerateNextRandomCircle(struct FVector* NextCircleLocation, bool* CorrectNextCircleLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Deathzone.BP_Deathzone_C.GenerateNextRandomCircle");

	ABP_Deathzone_C_GenerateNextRandomCircle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NextCircleLocation != nullptr)
		*NextCircleLocation = params.NextCircleLocation;
	if (CorrectNextCircleLocation != nullptr)
		*CorrectNextCircleLocation = params.CorrectNextCircleLocation;
}


// Function BP_Deathzone.BP_Deathzone_C.CheckIfCrateIsSpawnedInWater
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 CrateSpawnLocation             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           InWater                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Location                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_Deathzone_C::CheckIfCrateIsSpawnedInWater(const struct FVector& CrateSpawnLocation, bool* InWater, struct FVector* Location)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Deathzone.BP_Deathzone_C.CheckIfCrateIsSpawnedInWater");

	ABP_Deathzone_C_CheckIfCrateIsSpawnedInWater_Params params;
	params.CrateSpawnLocation = CrateSpawnLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (InWater != nullptr)
		*InWater = params.InWater;
	if (Location != nullptr)
		*Location = params.Location;
}


// Function BP_Deathzone.BP_Deathzone_C.GenerateRandomPointInCircle
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 RandomPoint                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_Deathzone_C::GenerateRandomPointInCircle(struct FVector* RandomPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Deathzone.BP_Deathzone_C.GenerateRandomPointInCircle");

	ABP_Deathzone_C_GenerateRandomPointInCircle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (RandomPoint != nullptr)
		*RandomPoint = params.RandomPoint;
}


// Function BP_Deathzone.BP_Deathzone_C.DeadzonePercent
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 Position                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          inZoneFloat                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_Deathzone_C::DeadzonePercent(const struct FVector& Position, float* inZoneFloat)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Deathzone.BP_Deathzone_C.DeadzonePercent");

	ABP_Deathzone_C_DeadzonePercent_Params params;
	params.Position = Position;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (inZoneFloat != nullptr)
		*inZoneFloat = params.inZoneFloat;
}


// Function BP_Deathzone.BP_Deathzone_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_Deathzone_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Deathzone.BP_Deathzone_C.UserConstructionScript");

	ABP_Deathzone_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Deathzone.BP_Deathzone_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Deathzone_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Deathzone.BP_Deathzone_C.ReceiveTick");

	ABP_Deathzone_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Deathzone.BP_Deathzone_C.CloseGate
// (BlueprintCallable, BlueprintEvent)

void ABP_Deathzone_C::CloseGate()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Deathzone.BP_Deathzone_C.CloseGate");

	ABP_Deathzone_C_CloseGate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Deathzone.BP_Deathzone_C.MC_SetDeadZone
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            DeadzoneX                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            DeadZoneY                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            DeadZoneScale                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Countdown                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Collapsing                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           FinalZone                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            InnerDeadZoneX                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            InnerDeadZoneY                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            InnerDeadZoneRadius            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Falloff                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Deathzone_C::MC_SetDeadZone(int DeadzoneX, int DeadZoneY, int DeadZoneScale, int Countdown, bool Collapsing, bool FinalZone, int InnerDeadZoneX, int InnerDeadZoneY, int InnerDeadZoneRadius, float Falloff)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Deathzone.BP_Deathzone_C.MC_SetDeadZone");

	ABP_Deathzone_C_MC_SetDeadZone_Params params;
	params.DeadzoneX = DeadzoneX;
	params.DeadZoneY = DeadZoneY;
	params.DeadZoneScale = DeadZoneScale;
	params.Countdown = Countdown;
	params.Collapsing = Collapsing;
	params.FinalZone = FinalZone;
	params.InnerDeadZoneX = InnerDeadZoneX;
	params.InnerDeadZoneY = InnerDeadZoneY;
	params.InnerDeadZoneRadius = InnerDeadZoneRadius;
	params.Falloff = Falloff;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Deathzone.BP_Deathzone_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_Deathzone_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Deathzone.BP_Deathzone_C.ReceiveBeginPlay");

	ABP_Deathzone_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Deathzone.BP_Deathzone_C.ReInitZone
// (BlueprintCallable, BlueprintEvent)

void ABP_Deathzone_C::ReInitZone()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Deathzone.BP_Deathzone_C.ReInitZone");

	ABP_Deathzone_C_ReInitZone_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Deathzone.BP_Deathzone_C.ExecuteUbergraph_BP_Deathzone
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Deathzone_C::ExecuteUbergraph_BP_Deathzone(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Deathzone.BP_Deathzone_C.ExecuteUbergraph_BP_Deathzone");

	ABP_Deathzone_C_ExecuteUbergraph_BP_Deathzone_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
