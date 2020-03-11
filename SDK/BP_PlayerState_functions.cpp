
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

// Function BP_PlayerState.BP_PlayerState_C.OnRep_IsModerator
// (BlueprintCallable, BlueprintEvent)

void ABP_PlayerState_C::OnRep_IsModerator()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerState.BP_PlayerState_C.OnRep_IsModerator");

	ABP_PlayerState_C_OnRep_IsModerator_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerState.BP_PlayerState_C.OnRep_SelectedSpawnPoint
// (BlueprintCallable, BlueprintEvent)

void ABP_PlayerState_C::OnRep_SelectedSpawnPoint()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerState.BP_PlayerState_C.OnRep_SelectedSpawnPoint");

	ABP_PlayerState_C_OnRep_SelectedSpawnPoint_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerState.BP_PlayerState_C.VoiceChat_Initialize
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_PlayerState_C::VoiceChat_Initialize()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerState.BP_PlayerState_C.VoiceChat_Initialize");

	ABP_PlayerState_C_VoiceChat_Initialize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerState.BP_PlayerState_C.VoiceChat_PushToTalk
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bIsTryingToTalk                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerState_C::VoiceChat_PushToTalk(bool bIsTryingToTalk)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerState.BP_PlayerState_C.VoiceChat_PushToTalk");

	ABP_PlayerState_C_VoiceChat_PushToTalk_Params params;
	params.bIsTryingToTalk = bIsTryingToTalk;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerState.BP_PlayerState_C.OnRep_IsDead
// (HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_PlayerState_C::OnRep_IsDead()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerState.BP_PlayerState_C.OnRep_IsDead");

	ABP_PlayerState_C_OnRep_IsDead_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerState.BP_PlayerState_C.ChangeRepairScore
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Score                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerState_C::ChangeRepairScore(int Score)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerState.BP_PlayerState_C.ChangeRepairScore");

	ABP_PlayerState_C_ChangeRepairScore_Params params;
	params.Score = Score;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerState.BP_PlayerState_C.ChangeScore
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Score                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerState_C::ChangeScore(int Score)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerState.BP_PlayerState_C.ChangeScore");

	ABP_PlayerState_C_ChangeScore_Params params;
	params.Score = Score;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerState.BP_PlayerState_C.OnRep_TeamPlayerColor
// (BlueprintCallable, BlueprintEvent)

void ABP_PlayerState_C::OnRep_TeamPlayerColor()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerState.BP_PlayerState_C.OnRep_TeamPlayerColor");

	ABP_PlayerState_C_OnRep_TeamPlayerColor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerState.BP_PlayerState_C.OnRep_Health
// (BlueprintCallable, BlueprintEvent)

void ABP_PlayerState_C::OnRep_Health()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerState.BP_PlayerState_C.OnRep_Health");

	ABP_PlayerState_C_OnRep_Health_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerState.BP_PlayerState_C.OnRep_TeamID
// (BlueprintCallable, BlueprintEvent)

void ABP_PlayerState_C::OnRep_TeamID()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerState.BP_PlayerState_C.OnRep_TeamID");

	ABP_PlayerState_C_OnRep_TeamID_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerState.BP_PlayerState_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_PlayerState_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerState.BP_PlayerState_C.UserConstructionScript");

	ABP_PlayerState_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerState.BP_PlayerState_C.MC_InitializeVoiceChat
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)

void ABP_PlayerState_C::MC_InitializeVoiceChat()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerState.BP_PlayerState_C.MC_InitializeVoiceChat");

	ABP_PlayerState_C_MC_InitializeVoiceChat_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerState.BP_PlayerState_C.S_SetIsTryingToTalk
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bIsTryingToTalk                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerState_C::S_SetIsTryingToTalk(bool bIsTryingToTalk)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerState.BP_PlayerState_C.S_SetIsTryingToTalk");

	ABP_PlayerState_C_S_SetIsTryingToTalk_Params params;
	params.bIsTryingToTalk = bIsTryingToTalk;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerState.BP_PlayerState_C.MC_SetIsTryingToTalk
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bIsTryingToTalk                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerState_C::MC_SetIsTryingToTalk(bool bIsTryingToTalk)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerState.BP_PlayerState_C.MC_SetIsTryingToTalk");

	ABP_PlayerState_C_MC_SetIsTryingToTalk_Params params;
	params.bIsTryingToTalk = bIsTryingToTalk;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerState.BP_PlayerState_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerState_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerState.BP_PlayerState_C.ReceiveTick");

	ABP_PlayerState_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerState.BP_PlayerState_C.S_AddScore
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Score                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerState_C::S_AddScore(int Score)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerState.BP_PlayerState_C.S_AddScore");

	ABP_PlayerState_C_S_AddScore_Params params;
	params.Score = Score;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerState.BP_PlayerState_C.S_AddRepairScore
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Score                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerState_C::S_AddRepairScore(int Score)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerState.BP_PlayerState_C.S_AddRepairScore");

	ABP_PlayerState_C_S_AddRepairScore_Params params;
	params.Score = Score;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerState.BP_PlayerState_C.AddScore
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Score                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerState_C::AddScore(int Score)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerState.BP_PlayerState_C.AddScore");

	ABP_PlayerState_C_AddScore_Params params;
	params.Score = Score;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerState.BP_PlayerState_C.AddRepairScore
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Score                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerState_C::AddRepairScore(int Score)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerState.BP_PlayerState_C.AddRepairScore");

	ABP_PlayerState_C_AddRepairScore_Params params;
	params.Score = Score;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerState.BP_PlayerState_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<EEndPlayReason>    EndPlayReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerState_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerState.BP_PlayerState_C.ReceiveEndPlay");

	ABP_PlayerState_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerState.BP_PlayerState_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_PlayerState_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerState.BP_PlayerState_C.ReceiveBeginPlay");

	ABP_PlayerState_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerState.BP_PlayerState_C.SetSelectedSpawnPoint
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_BoatSpawn_C*         SpawnPointRef                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerState_C::SetSelectedSpawnPoint(class ABP_BoatSpawn_C* SpawnPointRef)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerState.BP_PlayerState_C.SetSelectedSpawnPoint");

	ABP_PlayerState_C_SetSelectedSpawnPoint_Params params;
	params.SpawnPointRef = SpawnPointRef;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerState.BP_PlayerState_C.ExecuteUbergraph_BP_PlayerState
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerState_C::ExecuteUbergraph_BP_PlayerState(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerState.BP_PlayerState_C.ExecuteUbergraph_BP_PlayerState");

	ABP_PlayerState_C_ExecuteUbergraph_BP_PlayerState_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerState.BP_PlayerState_C.OnPlayerRespawned__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ABP_PlayerState_C::OnPlayerRespawned__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerState.BP_PlayerState_C.OnPlayerRespawned__DelegateSignature");

	ABP_PlayerState_C_OnPlayerRespawned__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerState.BP_PlayerState_C.OnPlayerDied__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ABP_PlayerState_C::OnPlayerDied__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerState.BP_PlayerState_C.OnPlayerDied__DelegateSignature");

	ABP_PlayerState_C_OnPlayerDied__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerState.BP_PlayerState_C.OnPlayerChangedTeam__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ABP_PlayerState_C::OnPlayerChangedTeam__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerState.BP_PlayerState_C.OnPlayerChangedTeam__DelegateSignature");

	ABP_PlayerState_C_OnPlayerChangedTeam__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
