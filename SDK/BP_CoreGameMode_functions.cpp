
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

// Function BP_CoreGameMode.BP_CoreGameMode_C.Event_Teams
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_CoreGameMode_C::Event_Teams()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CoreGameMode.BP_CoreGameMode_C.Event_Teams");

	ABP_CoreGameMode_C_Event_Teams_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CoreGameMode.BP_CoreGameMode_C.GetPreferedSpawnPointFromTeam
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            TeamID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class ABP_BoatSpawn_C*         BoatSpawnPoint                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_CoreGameMode_C::GetPreferedSpawnPointFromTeam(int TeamID, class ABP_BoatSpawn_C** BoatSpawnPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CoreGameMode.BP_CoreGameMode_C.GetPreferedSpawnPointFromTeam");

	ABP_CoreGameMode_C_GetPreferedSpawnPointFromTeam_Params params;
	params.TeamID = TeamID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (BoatSpawnPoint != nullptr)
		*BoatSpawnPoint = params.BoatSpawnPoint;
}


// Function BP_CoreGameMode.BP_CoreGameMode_C.CheckIfPlayerIsBanned
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_Controller_C*        ControllerRef                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Banned                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_CoreGameMode_C::CheckIfPlayerIsBanned(class ABP_Controller_C* ControllerRef, bool* Banned)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CoreGameMode.BP_CoreGameMode_C.CheckIfPlayerIsBanned");

	ABP_CoreGameMode_C_CheckIfPlayerIsBanned_Params params;
	params.ControllerRef = ControllerRef;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Banned != nullptr)
		*Banned = params.Banned;
}


// Function BP_CoreGameMode.BP_CoreGameMode_C.KickBanPlayer
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            PlayerId                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Banned_                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 UniqueNetId                    (Parm, OutParm, ZeroConstructor)

void ABP_CoreGameMode_C::KickBanPlayer(int PlayerId, bool Banned_, struct FString* UniqueNetId)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CoreGameMode.BP_CoreGameMode_C.KickBanPlayer");

	ABP_CoreGameMode_C_KickBanPlayer_Params params;
	params.PlayerId = PlayerId;
	params.Banned_ = Banned_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (UniqueNetId != nullptr)
		*UniqueNetId = params.UniqueNetId;
}


// Function BP_CoreGameMode.BP_CoreGameMode_C.GetUndefeatedTeamsArray
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FST_Team>        UndefeatedTeamsArray           (Parm, OutParm, ZeroConstructor)

void ABP_CoreGameMode_C::GetUndefeatedTeamsArray(TArray<struct FST_Team>* UndefeatedTeamsArray)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CoreGameMode.BP_CoreGameMode_C.GetUndefeatedTeamsArray");

	ABP_CoreGameMode_C_GetUndefeatedTeamsArray_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (UndefeatedTeamsArray != nullptr)
		*UndefeatedTeamsArray = params.UndefeatedTeamsArray;
}


// Function BP_CoreGameMode.BP_CoreGameMode_C.PrepareTeamsForFair
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_CoreGameMode_C::PrepareTeamsForFair()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CoreGameMode.BP_CoreGameMode_C.PrepareTeamsForFair");

	ABP_CoreGameMode_C_PrepareTeamsForFair_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CoreGameMode.BP_CoreGameMode_C.DefeatTeam
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Team                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_CoreGameMode_C::DefeatTeam(int Team)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CoreGameMode.BP_CoreGameMode_C.DefeatTeam");

	ABP_CoreGameMode_C_DefeatTeam_Params params;
	params.Team = Team;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CoreGameMode.BP_CoreGameMode_C.DisplayPings
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_CoreGameMode_C::DisplayPings()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CoreGameMode.BP_CoreGameMode_C.DisplayPings");

	ABP_CoreGameMode_C_DisplayPings_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CoreGameMode.BP_CoreGameMode_C.StartGame
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_CoreGameMode_C::StartGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CoreGameMode.BP_CoreGameMode_C.StartGame");

	ABP_CoreGameMode_C_StartGame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CoreGameMode.BP_CoreGameMode_C.CheckIfCrewIsEmpty
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            CrewID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           CrewIsEmpty                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_CoreGameMode_C::CheckIfCrewIsEmpty(int CrewID, bool* CrewIsEmpty)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CoreGameMode.BP_CoreGameMode_C.CheckIfCrewIsEmpty");

	ABP_CoreGameMode_C_CheckIfCrewIsEmpty_Params params;
	params.CrewID = CrewID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CrewIsEmpty != nullptr)
		*CrewIsEmpty = params.CrewIsEmpty;
}


// Function BP_CoreGameMode.BP_CoreGameMode_C.ClearEmptyCrews
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_CoreGameMode_C::ClearEmptyCrews()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CoreGameMode.BP_CoreGameMode_C.ClearEmptyCrews");

	ABP_CoreGameMode_C_ClearEmptyCrews_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CoreGameMode.BP_CoreGameMode_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_CoreGameMode_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CoreGameMode.BP_CoreGameMode_C.UserConstructionScript");

	ABP_CoreGameMode_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CoreGameMode.BP_CoreGameMode_C.OnFailure_D04F3F4047CD2F1B9C80B780DAFC498D
// (BlueprintCallable, BlueprintEvent)

void ABP_CoreGameMode_C::OnFailure_D04F3F4047CD2F1B9C80B780DAFC498D()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CoreGameMode.BP_CoreGameMode_C.OnFailure_D04F3F4047CD2F1B9C80B780DAFC498D");

	ABP_CoreGameMode_C_OnFailure_D04F3F4047CD2F1B9C80B780DAFC498D_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CoreGameMode.BP_CoreGameMode_C.OnSuccess_D04F3F4047CD2F1B9C80B780DAFC498D
// (BlueprintCallable, BlueprintEvent)

void ABP_CoreGameMode_C::OnSuccess_D04F3F4047CD2F1B9C80B780DAFC498D()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CoreGameMode.BP_CoreGameMode_C.OnSuccess_D04F3F4047CD2F1B9C80B780DAFC498D");

	ABP_CoreGameMode_C_OnSuccess_D04F3F4047CD2F1B9C80B780DAFC498D_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CoreGameMode.BP_CoreGameMode_C.OnFailure_6716420744C0014FE83E3BAF8996ABB2
// (BlueprintCallable, BlueprintEvent)

void ABP_CoreGameMode_C::OnFailure_6716420744C0014FE83E3BAF8996ABB2()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CoreGameMode.BP_CoreGameMode_C.OnFailure_6716420744C0014FE83E3BAF8996ABB2");

	ABP_CoreGameMode_C_OnFailure_6716420744C0014FE83E3BAF8996ABB2_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CoreGameMode.BP_CoreGameMode_C.OnSuccess_6716420744C0014FE83E3BAF8996ABB2
// (BlueprintCallable, BlueprintEvent)

void ABP_CoreGameMode_C::OnSuccess_6716420744C0014FE83E3BAF8996ABB2()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CoreGameMode.BP_CoreGameMode_C.OnSuccess_6716420744C0014FE83E3BAF8996ABB2");

	ABP_CoreGameMode_C_OnSuccess_6716420744C0014FE83E3BAF8996ABB2_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CoreGameMode.BP_CoreGameMode_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_CoreGameMode_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CoreGameMode.BP_CoreGameMode_C.ReceiveBeginPlay");

	ABP_CoreGameMode_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CoreGameMode.BP_CoreGameMode_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_CoreGameMode_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CoreGameMode.BP_CoreGameMode_C.ReceiveTick");

	ABP_CoreGameMode_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CoreGameMode.BP_CoreGameMode_C.K2_PostLogin
// (Event, Public, BlueprintEvent)
// Parameters:
// class APlayerController*       NewPlayer                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_CoreGameMode_C::K2_PostLogin(class APlayerController* NewPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CoreGameMode.BP_CoreGameMode_C.K2_PostLogin");

	ABP_CoreGameMode_C_K2_PostLogin_Params params;
	params.NewPlayer = NewPlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CoreGameMode.BP_CoreGameMode_C.K2_OnLogout
// (Event, Public, BlueprintEvent)
// Parameters:
// class AController*             ExitingController              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_CoreGameMode_C::K2_OnLogout(class AController* ExitingController)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CoreGameMode.BP_CoreGameMode_C.K2_OnLogout");

	ABP_CoreGameMode_C_K2_OnLogout_Params params;
	params.ExitingController = ExitingController;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CoreGameMode.BP_CoreGameMode_C.CreateNewTeam
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            TeamFirstName                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            TeamSecondaryName              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            TeamSecondaryNameIndex         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            teamColor                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class ABP_Controller_C*        PlayerController               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   ShipName                       (BlueprintVisible, BlueprintReadOnly, Parm)
// int                            FlagEmblem                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_CoreGameMode_C::CreateNewTeam(int TeamFirstName, int TeamSecondaryName, int TeamSecondaryNameIndex, int teamColor, class ABP_Controller_C* PlayerController, const struct FText& ShipName, int FlagEmblem)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CoreGameMode.BP_CoreGameMode_C.CreateNewTeam");

	ABP_CoreGameMode_C_CreateNewTeam_Params params;
	params.TeamFirstName = TeamFirstName;
	params.TeamSecondaryName = TeamSecondaryName;
	params.TeamSecondaryNameIndex = TeamSecondaryNameIndex;
	params.teamColor = teamColor;
	params.PlayerController = PlayerController;
	params.ShipName = ShipName;
	params.FlagEmblem = FlagEmblem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CoreGameMode.BP_CoreGameMode_C.RefreshHUDs
// (BlueprintCallable, BlueprintEvent)

void ABP_CoreGameMode_C::RefreshHUDs()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CoreGameMode.BP_CoreGameMode_C.RefreshHUDs");

	ABP_CoreGameMode_C_RefreshHUDs_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CoreGameMode.BP_CoreGameMode_C.AddNewChatMessage
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FST_SimpleMessage       ChatMessage                    (BlueprintVisible, BlueprintReadOnly, Parm)
// int                            TeamChatID                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           FormatText                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_CoreGameMode_C::AddNewChatMessage(const struct FST_SimpleMessage& ChatMessage, int TeamChatID, bool FormatText)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CoreGameMode.BP_CoreGameMode_C.AddNewChatMessage");

	ABP_CoreGameMode_C_AddNewChatMessage_Params params;
	params.ChatMessage = ChatMessage;
	params.TeamChatID = TeamChatID;
	params.FormatText = FormatText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CoreGameMode.BP_CoreGameMode_C.RestartLevel
// (BlueprintCallable, BlueprintEvent)

void ABP_CoreGameMode_C::RestartLevel()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CoreGameMode.BP_CoreGameMode_C.RestartLevel");

	ABP_CoreGameMode_C_RestartLevel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CoreGameMode.BP_CoreGameMode_C.CloseGameServer
// (BlueprintCallable, BlueprintEvent)

void ABP_CoreGameMode_C::CloseGameServer()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CoreGameMode.BP_CoreGameMode_C.CloseGameServer");

	ABP_CoreGameMode_C_CloseGameServer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CoreGameMode.BP_CoreGameMode_C.ExecuteUbergraph_BP_CoreGameMode
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_CoreGameMode_C::ExecuteUbergraph_BP_CoreGameMode(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CoreGameMode.BP_CoreGameMode_C.ExecuteUbergraph_BP_CoreGameMode");

	ABP_CoreGameMode_C_ExecuteUbergraph_BP_CoreGameMode_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
