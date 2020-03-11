#pragma once

#include "../SDK.h"

// Name: BlazingSails, Version: 1.481.81

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function WaterSettings.WaterSettings_C.ChangeSeaState
struct AWaterSettings_C_ChangeSeaState_Params
{
	TEnumAsByte<EWindSpeeds>                           NewWindSpeed;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EFetchLengths>                         NewFetchLength;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              TransitionTimeSeconds;                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WaterSettings.WaterSettings_C.GenWareParamArrays
struct AWaterSettings_C_GenWareParamArrays_Params
{
	TArray<float>                                      A;                                                        // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<float>                                      k1;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<float>                                      k2;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<float>                                      omega;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	int                                                WindSpeedIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                FetchIndex;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WaterSettings.WaterSettings_C.GerstnerWaveDeltaQ
struct AWaterSettings_C_GerstnerWaveDeltaQ_Params
{
	int                                                WaveIndex;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   InitialLocation;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     deltaOut;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Q_Out;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WaterSettings.WaterSettings_C.GerstnerWaveDeltaOnly
struct AWaterSettings_C_GerstnerWaveDeltaOnly_Params
{
	int                                                WaveIndex;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   InitialLocation;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     deltaOut;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WaterSettings.WaterSettings_C.CalculateDeltaOnly
struct AWaterSettings_C_CalculateDeltaOnly_Params
{
	struct FVector2D                                   InitialLocation;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ZoneWaterHeight;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Accuracy_10_28_;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Delta;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WaterSettings.WaterSettings_C.CalculateDeltaNormal
struct AWaterSettings_C_CalculateDeltaNormal_Params
{
	struct FVector2D                                   InitialLocation;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Accuracy_10_100_;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Delta;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Normal;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WaterSettings.WaterSettings_C.UserConstructionScript
struct AWaterSettings_C_UserConstructionScript_Params
{
};

// Function WaterSettings.WaterSettings_C.ReceiveBeginPlay
struct AWaterSettings_C_ReceiveBeginPlay_Params
{
};

// Function WaterSettings.WaterSettings_C.ConstructionEvent
struct AWaterSettings_C_ConstructionEvent_Params
{
};

// Function WaterSettings.WaterSettings_C.ReceiveTick
struct AWaterSettings_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WaterSettings.WaterSettings_C.ExecuteUbergraph_WaterSettings
struct AWaterSettings_C_ExecuteUbergraph_WaterSettings_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
