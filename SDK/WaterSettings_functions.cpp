
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

// Function WaterSettings.WaterSettings_C.ChangeSeaState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EWindSpeeds>       NewWindSpeed                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EFetchLengths>     NewFetchLength                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          TransitionTimeSeconds          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AWaterSettings_C::ChangeSeaState(TEnumAsByte<EWindSpeeds> NewWindSpeed, TEnumAsByte<EFetchLengths> NewFetchLength, float TransitionTimeSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function WaterSettings.WaterSettings_C.ChangeSeaState");

	AWaterSettings_C_ChangeSeaState_Params params;
	params.NewWindSpeed = NewWindSpeed;
	params.NewFetchLength = NewFetchLength;
	params.TransitionTimeSeconds = TransitionTimeSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WaterSettings.WaterSettings_C.GenWareParamArrays
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<float>                  A                              (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<float>                  k1                             (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<float>                  k2                             (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<float>                  omega                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// int                            WindSpeedIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            FetchIndex                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AWaterSettings_C::GenWareParamArrays(int WindSpeedIndex, int FetchIndex, TArray<float>* A, TArray<float>* k1, TArray<float>* k2, TArray<float>* omega)
{
	static auto fn = UObject::FindObject<UFunction>("Function WaterSettings.WaterSettings_C.GenWareParamArrays");

	AWaterSettings_C_GenWareParamArrays_Params params;
	params.WindSpeedIndex = WindSpeedIndex;
	params.FetchIndex = FetchIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (A != nullptr)
		*A = params.A;
	if (k1 != nullptr)
		*k1 = params.k1;
	if (k2 != nullptr)
		*k2 = params.k2;
	if (omega != nullptr)
		*omega = params.omega;
}


// Function WaterSettings.WaterSettings_C.GerstnerWaveDeltaQ
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            WaveIndex                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector2D               InitialLocation                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 deltaOut                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Q_Out                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AWaterSettings_C::GerstnerWaveDeltaQ(int WaveIndex, const struct FVector2D& InitialLocation, struct FVector* deltaOut, struct FVector* Q_Out)
{
	static auto fn = UObject::FindObject<UFunction>("Function WaterSettings.WaterSettings_C.GerstnerWaveDeltaQ");

	AWaterSettings_C_GerstnerWaveDeltaQ_Params params;
	params.WaveIndex = WaveIndex;
	params.InitialLocation = InitialLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (deltaOut != nullptr)
		*deltaOut = params.deltaOut;
	if (Q_Out != nullptr)
		*Q_Out = params.Q_Out;
}


// Function WaterSettings.WaterSettings_C.GerstnerWaveDeltaOnly
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            WaveIndex                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector2D               InitialLocation                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 deltaOut                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AWaterSettings_C::GerstnerWaveDeltaOnly(int WaveIndex, const struct FVector2D& InitialLocation, struct FVector* deltaOut)
{
	static auto fn = UObject::FindObject<UFunction>("Function WaterSettings.WaterSettings_C.GerstnerWaveDeltaOnly");

	AWaterSettings_C_GerstnerWaveDeltaOnly_Params params;
	params.WaveIndex = WaveIndex;
	params.InitialLocation = InitialLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (deltaOut != nullptr)
		*deltaOut = params.deltaOut;
}


// Function WaterSettings.WaterSettings_C.CalculateDeltaOnly
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D               InitialLocation                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          ZoneWaterHeight                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Accuracy_10_28_                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Delta                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AWaterSettings_C::CalculateDeltaOnly(const struct FVector2D& InitialLocation, float ZoneWaterHeight, int Accuracy_10_28_, struct FVector* Delta)
{
	static auto fn = UObject::FindObject<UFunction>("Function WaterSettings.WaterSettings_C.CalculateDeltaOnly");

	AWaterSettings_C_CalculateDeltaOnly_Params params;
	params.InitialLocation = InitialLocation;
	params.ZoneWaterHeight = ZoneWaterHeight;
	params.Accuracy_10_28_ = Accuracy_10_28_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Delta != nullptr)
		*Delta = params.Delta;
}


// Function WaterSettings.WaterSettings_C.CalculateDeltaNormal
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D               InitialLocation                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Accuracy_10_100_               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Delta                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Normal                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AWaterSettings_C::CalculateDeltaNormal(const struct FVector2D& InitialLocation, int Accuracy_10_100_, struct FVector* Delta, struct FVector* Normal)
{
	static auto fn = UObject::FindObject<UFunction>("Function WaterSettings.WaterSettings_C.CalculateDeltaNormal");

	AWaterSettings_C_CalculateDeltaNormal_Params params;
	params.InitialLocation = InitialLocation;
	params.Accuracy_10_100_ = Accuracy_10_100_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Delta != nullptr)
		*Delta = params.Delta;
	if (Normal != nullptr)
		*Normal = params.Normal;
}


// Function WaterSettings.WaterSettings_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AWaterSettings_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function WaterSettings.WaterSettings_C.UserConstructionScript");

	AWaterSettings_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WaterSettings.WaterSettings_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AWaterSettings_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function WaterSettings.WaterSettings_C.ReceiveBeginPlay");

	AWaterSettings_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WaterSettings.WaterSettings_C.ConstructionEvent
// (BlueprintCallable, BlueprintEvent)

void AWaterSettings_C::ConstructionEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function WaterSettings.WaterSettings_C.ConstructionEvent");

	AWaterSettings_C_ConstructionEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WaterSettings.WaterSettings_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AWaterSettings_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function WaterSettings.WaterSettings_C.ReceiveTick");

	AWaterSettings_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WaterSettings.WaterSettings_C.ExecuteUbergraph_WaterSettings
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AWaterSettings_C::ExecuteUbergraph_WaterSettings(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WaterSettings.WaterSettings_C.ExecuteUbergraph_WaterSettings");

	AWaterSettings_C_ExecuteUbergraph_WaterSettings_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
