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

// Function GUGTools.GenericBFL.GUG_GetCollisionFaceIndexLocation
struct UGenericBFL_GUG_GetCollisionFaceIndexLocation_Params
{
	class AActor*                                      InActor;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	class UStaticMesh*                                 StaticMesh;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                FaceIndex;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bSuccess;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GUGTools.GenericBFL.GUG_ExecConsoleCommandOnWorld
struct UGenericBFL_GUG_ExecConsoleCommandOnWorld_Params
{
	class UWorld*                                      InWorld;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     Cmd;                                                      // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GUGTools.GenericBFL.GUG_ExecConsoleCommandOnActorWorld
struct UGenericBFL_GUG_ExecConsoleCommandOnActorWorld_Params
{
	class AActor*                                      InActor;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     Cmd;                                                      // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GUGTools.GenericBFL.GUG_ExecConsoleCommand
struct UGenericBFL_GUG_ExecConsoleCommand_Params
{
	struct FString                                     Cmd;                                                      // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
