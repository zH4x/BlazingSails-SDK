
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

// Function BP_GameState.BP_GameState_C.BroadcastAnnouncement
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   Message                        (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           NotificationSound              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_GameState_C::BroadcastAnnouncement(const struct FText& Message, bool NotificationSound)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameState.BP_GameState_C.BroadcastAnnouncement");

	ABP_GameState_C_BroadcastAnnouncement_Params params;
	params.Message = Message;
	params.NotificationSound = NotificationSound;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GameState.BP_GameState_C.RefreshSpawnPoints
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_GameState_C::RefreshSpawnPoints()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameState.BP_GameState_C.RefreshSpawnPoints");

	ABP_GameState_C_RefreshSpawnPoints_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GameState.BP_GameState_C.TransferGoldFromTeamToTeam
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            FromTeam                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            ToTeam                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_GameState_C::TransferGoldFromTeamToTeam(int FromTeam, int ToTeam)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameState.BP_GameState_C.TransferGoldFromTeamToTeam");

	ABP_GameState_C_TransferGoldFromTeamToTeam_Params params;
	params.FromTeam = FromTeam;
	params.ToTeam = ToTeam;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GameState.BP_GameState_C.AddGoldToCrew
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            GoldAmount                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            TeamID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_GameState_C::AddGoldToCrew(int GoldAmount, int TeamID)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameState.BP_GameState_C.AddGoldToCrew");

	ABP_GameState_C_AddGoldToCrew_Params params;
	params.GoldAmount = GoldAmount;
	params.TeamID = TeamID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GameState.BP_GameState_C.OnRep_DefeatedTeams
// (BlueprintCallable, BlueprintEvent)

void ABP_GameState_C::OnRep_DefeatedTeams()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameState.BP_GameState_C.OnRep_DefeatedTeams");

	ABP_GameState_C_OnRep_DefeatedTeams_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GameState.BP_GameState_C.OnRep_TimeOfDay
// (BlueprintCallable, BlueprintEvent)

void ABP_GameState_C::OnRep_TimeOfDay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameState.BP_GameState_C.OnRep_TimeOfDay");

	ABP_GameState_C_OnRep_TimeOfDay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GameState.BP_GameState_C.OnRep_RemainingTeams
// (BlueprintCallable, BlueprintEvent)

void ABP_GameState_C::OnRep_RemainingTeams()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameState.BP_GameState_C.OnRep_RemainingTeams");

	ABP_GameState_C_OnRep_RemainingTeams_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GameState.BP_GameState_C.OnRep_Teams
// (BlueprintCallable, BlueprintEvent)

void ABP_GameState_C::OnRep_Teams()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameState.BP_GameState_C.OnRep_Teams");

	ABP_GameState_C_OnRep_Teams_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GameState.BP_GameState_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_GameState_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameState.BP_GameState_C.UserConstructionScript");

	ABP_GameState_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GameState.BP_GameState_C.ClaimSpawnPoint
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_BoatSpawn_C*         SpawnPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class ABP_Controller_C*        Controller                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_GameState_C::ClaimSpawnPoint(class ABP_BoatSpawn_C* SpawnPoint, class ABP_Controller_C* Controller)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameState.BP_GameState_C.ClaimSpawnPoint");

	ABP_GameState_C_ClaimSpawnPoint_Params params;
	params.SpawnPoint = SpawnPoint;
	params.Controller = Controller;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GameState.BP_GameState_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_GameState_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameState.BP_GameState_C.ReceiveTick");

	ABP_GameState_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GameState.BP_GameState_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_GameState_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameState.BP_GameState_C.ReceiveBeginPlay");

	ABP_GameState_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GameState.BP_GameState_C.ExecuteUbergraph_BP_GameState
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_GameState_C::ExecuteUbergraph_BP_GameState(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameState.BP_GameState_C.ExecuteUbergraph_BP_GameState");

	ABP_GameState_C_ExecuteUbergraph_BP_GameState_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
