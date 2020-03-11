
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

// Function GUGTools.GenericBFL.GUG_GetCollisionFaceIndexLocation
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class AActor*                  InActor                        (Parm, ZeroConstructor, IsPlainOldData)
// class UStaticMesh*             StaticMesh                     (Parm, ZeroConstructor, IsPlainOldData)
// int                            FaceIndex                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bSuccess                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector UGenericBFL::STATIC_GUG_GetCollisionFaceIndexLocation(class AActor* InActor, class UStaticMesh* StaticMesh, int FaceIndex, bool* bSuccess)
{
	static auto fn = UObject::FindObject<UFunction>("Function GUGTools.GenericBFL.GUG_GetCollisionFaceIndexLocation");

	UGenericBFL_GUG_GetCollisionFaceIndexLocation_Params params;
	params.InActor = InActor;
	params.StaticMesh = StaticMesh;
	params.FaceIndex = FaceIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bSuccess != nullptr)
		*bSuccess = params.bSuccess;

	return params.ReturnValue;
}


// Function GUGTools.GenericBFL.GUG_ExecConsoleCommandOnWorld
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UWorld*                  InWorld                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 Cmd                            (Parm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UGenericBFL::STATIC_GUG_ExecConsoleCommandOnWorld(class UWorld* InWorld, const struct FString& Cmd)
{
	static auto fn = UObject::FindObject<UFunction>("Function GUGTools.GenericBFL.GUG_ExecConsoleCommandOnWorld");

	UGenericBFL_GUG_ExecConsoleCommandOnWorld_Params params;
	params.InWorld = InWorld;
	params.Cmd = Cmd;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GUGTools.GenericBFL.GUG_ExecConsoleCommandOnActorWorld
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AActor*                  InActor                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 Cmd                            (Parm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UGenericBFL::STATIC_GUG_ExecConsoleCommandOnActorWorld(class AActor* InActor, const struct FString& Cmd)
{
	static auto fn = UObject::FindObject<UFunction>("Function GUGTools.GenericBFL.GUG_ExecConsoleCommandOnActorWorld");

	UGenericBFL_GUG_ExecConsoleCommandOnActorWorld_Params params;
	params.InActor = InActor;
	params.Cmd = Cmd;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GUGTools.GenericBFL.GUG_ExecConsoleCommand
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 Cmd                            (Parm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UGenericBFL::STATIC_GUG_ExecConsoleCommand(const struct FString& Cmd)
{
	static auto fn = UObject::FindObject<UFunction>("Function GUGTools.GenericBFL.GUG_ExecConsoleCommand");

	UGenericBFL_GUG_ExecConsoleCommand_Params params;
	params.Cmd = Cmd;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
