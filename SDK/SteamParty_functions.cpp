
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

// Function SteamParty.CreateSessionGameCallbackProxy.CreateSessionGame
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// class APlayerController*       PlayerController               (Parm, ZeroConstructor, IsPlainOldData)
// int                            PublicConnections              (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bUseLAN                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 InGameType                     (Parm, ZeroConstructor)
// bool                           AutoStartSession               (Parm, ZeroConstructor, IsPlainOldData)
// class UCreateSessionGameCallbackProxy* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCreateSessionGameCallbackProxy* UCreateSessionGameCallbackProxy::STATIC_CreateSessionGame(class UObject* WorldContextObject, class APlayerController* PlayerController, int PublicConnections, bool bUseLAN, const struct FString& InGameType, bool AutoStartSession)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamParty.CreateSessionGameCallbackProxy.CreateSessionGame");

	UCreateSessionGameCallbackProxy_CreateSessionGame_Params params;
	params.WorldContextObject = WorldContextObject;
	params.PlayerController = PlayerController;
	params.PublicConnections = PublicConnections;
	params.bUseLAN = bUseLAN;
	params.InGameType = InGameType;
	params.AutoStartSession = AutoStartSession;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SteamParty.CreateSessionPartyCallbackProxy.CreateSessionParty
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// class APlayerController*       PlayerController               (Parm, ZeroConstructor, IsPlainOldData)
// int                            PublicConnections              (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bUseLAN                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 InGameType                     (Parm, ZeroConstructor)
// bool                           AutoStartSession               (Parm, ZeroConstructor, IsPlainOldData)
// class UCreateSessionPartyCallbackProxy* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCreateSessionPartyCallbackProxy* UCreateSessionPartyCallbackProxy::STATIC_CreateSessionParty(class UObject* WorldContextObject, class APlayerController* PlayerController, int PublicConnections, bool bUseLAN, const struct FString& InGameType, bool AutoStartSession)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamParty.CreateSessionPartyCallbackProxy.CreateSessionParty");

	UCreateSessionPartyCallbackProxy_CreateSessionParty_Params params;
	params.WorldContextObject = WorldContextObject;
	params.PlayerController = PlayerController;
	params.PublicConnections = PublicConnections;
	params.bUseLAN = bUseLAN;
	params.InGameType = InGameType;
	params.AutoStartSession = AutoStartSession;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SteamParty.DestroySessionGameCallbackProxy.DestroySessionGame
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class APlayerController*       PlayerController               (Parm, ZeroConstructor, IsPlainOldData)
// class UDestroySessionGameCallbackProxy* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UDestroySessionGameCallbackProxy* UDestroySessionGameCallbackProxy::STATIC_DestroySessionGame(class APlayerController* PlayerController)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamParty.DestroySessionGameCallbackProxy.DestroySessionGame");

	UDestroySessionGameCallbackProxy_DestroySessionGame_Params params;
	params.PlayerController = PlayerController;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SteamParty.DestroySessionPartyCallbackProxy.DestroySessionParty
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class APlayerController*       PlayerController               (Parm, ZeroConstructor, IsPlainOldData)
// class UDestroySessionPartyCallbackProxy* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UDestroySessionPartyCallbackProxy* UDestroySessionPartyCallbackProxy::STATIC_DestroySessionParty(class APlayerController* PlayerController)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamParty.DestroySessionPartyCallbackProxy.DestroySessionParty");

	UDestroySessionPartyCallbackProxy_DestroySessionParty_Params params;
	params.PlayerController = PlayerController;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SteamParty.EndSessionGameCallbackProxy.EndSessionGame
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class APlayerController*       PlayerController               (Parm, ZeroConstructor, IsPlainOldData)
// class UEndSessionGameCallbackProxy* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UEndSessionGameCallbackProxy* UEndSessionGameCallbackProxy::STATIC_EndSessionGame(class APlayerController* PlayerController)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamParty.EndSessionGameCallbackProxy.EndSessionGame");

	UEndSessionGameCallbackProxy_EndSessionGame_Params params;
	params.PlayerController = PlayerController;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SteamParty.EndSessionPartyCallbackProxy.EndSessionParty
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class APlayerController*       PlayerController               (Parm, ZeroConstructor, IsPlainOldData)
// class UEndSessionPartyCallbackProxy* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UEndSessionPartyCallbackProxy* UEndSessionPartyCallbackProxy::STATIC_EndSessionParty(class APlayerController* PlayerController)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamParty.EndSessionPartyCallbackProxy.EndSessionParty");

	UEndSessionPartyCallbackProxy_EndSessionParty_Params params;
	params.PlayerController = PlayerController;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SteamParty.FindSessionsGameCallbackProxy.GetGameType
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FBlueprintSessionResult Result                         (ConstParm, Parm, OutParm, ReferenceParm)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UFindSessionsGameCallbackProxy::STATIC_GetGameType(const struct FBlueprintSessionResult& Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamParty.FindSessionsGameCallbackProxy.GetGameType");

	UFindSessionsGameCallbackProxy_GetGameType_Params params;
	params.Result = Result;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SteamParty.FindSessionsGameCallbackProxy.FindSessionsGame
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// class APlayerController*       PlayerController               (Parm, ZeroConstructor, IsPlainOldData)
// int                            MaxResults                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bUseLAN                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 InGameType                     (Parm, ZeroConstructor)
// class UFindSessionsGameCallbackProxy* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UFindSessionsGameCallbackProxy* UFindSessionsGameCallbackProxy::STATIC_FindSessionsGame(class UObject* WorldContextObject, class APlayerController* PlayerController, int MaxResults, bool bUseLAN, const struct FString& InGameType)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamParty.FindSessionsGameCallbackProxy.FindSessionsGame");

	UFindSessionsGameCallbackProxy_FindSessionsGame_Params params;
	params.WorldContextObject = WorldContextObject;
	params.PlayerController = PlayerController;
	params.MaxResults = MaxResults;
	params.bUseLAN = bUseLAN;
	params.InGameType = InGameType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SteamParty.FindSessionsPartyCallbackProxy.GetGameType
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FBlueprintSessionResult Result                         (ConstParm, Parm, OutParm, ReferenceParm)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UFindSessionsPartyCallbackProxy::STATIC_GetGameType(const struct FBlueprintSessionResult& Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamParty.FindSessionsPartyCallbackProxy.GetGameType");

	UFindSessionsPartyCallbackProxy_GetGameType_Params params;
	params.Result = Result;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SteamParty.FindSessionsPartyCallbackProxy.FindSessionsParty
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// class APlayerController*       PlayerController               (Parm, ZeroConstructor, IsPlainOldData)
// int                            MaxResults                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bUseLAN                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 InGameType                     (Parm, ZeroConstructor)
// class UFindSessionsPartyCallbackProxy* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UFindSessionsPartyCallbackProxy* UFindSessionsPartyCallbackProxy::STATIC_FindSessionsParty(class UObject* WorldContextObject, class APlayerController* PlayerController, int MaxResults, bool bUseLAN, const struct FString& InGameType)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamParty.FindSessionsPartyCallbackProxy.FindSessionsParty");

	UFindSessionsPartyCallbackProxy_FindSessionsParty_Params params;
	params.WorldContextObject = WorldContextObject;
	params.PlayerController = PlayerController;
	params.MaxResults = MaxResults;
	params.bUseLAN = bUseLAN;
	params.InGameType = InGameType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SteamParty.InviteSessionCallbackProxy.InviteSessionCallback
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class APlayerController*       PlayerController               (Parm, ZeroConstructor, IsPlainOldData)
// class UInviteSessionCallbackProxy* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UInviteSessionCallbackProxy* UInviteSessionCallbackProxy::STATIC_InviteSessionCallback(class APlayerController* PlayerController)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamParty.InviteSessionCallbackProxy.InviteSessionCallback");

	UInviteSessionCallbackProxy_InviteSessionCallback_Params params;
	params.PlayerController = PlayerController;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SteamParty.JoinSessionGameCallbackProxy.JoinSessionGame
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// class APlayerController*       PlayerController               (Parm, ZeroConstructor, IsPlainOldData)
// struct FBlueprintSessionResult SearchResult                   (ConstParm, Parm, OutParm, ReferenceParm)
// class UJoinSessionGameCallbackProxy* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UJoinSessionGameCallbackProxy* UJoinSessionGameCallbackProxy::STATIC_JoinSessionGame(class UObject* WorldContextObject, class APlayerController* PlayerController, const struct FBlueprintSessionResult& SearchResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamParty.JoinSessionGameCallbackProxy.JoinSessionGame");

	UJoinSessionGameCallbackProxy_JoinSessionGame_Params params;
	params.WorldContextObject = WorldContextObject;
	params.PlayerController = PlayerController;
	params.SearchResult = SearchResult;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SteamParty.JoinSessionPartyCallbackProxy.JoinSessionParty
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// class APlayerController*       PlayerController               (Parm, ZeroConstructor, IsPlainOldData)
// struct FBlueprintSessionResult SearchResult                   (ConstParm, Parm, OutParm, ReferenceParm)
// class UJoinSessionPartyCallbackProxy* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UJoinSessionPartyCallbackProxy* UJoinSessionPartyCallbackProxy::STATIC_JoinSessionParty(class UObject* WorldContextObject, class APlayerController* PlayerController, const struct FBlueprintSessionResult& SearchResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamParty.JoinSessionPartyCallbackProxy.JoinSessionParty");

	UJoinSessionPartyCallbackProxy_JoinSessionParty_Params params;
	params.WorldContextObject = WorldContextObject;
	params.PlayerController = PlayerController;
	params.SearchResult = SearchResult;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SteamParty.StartSessionGameCallbackProxy.StartSessionGame
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class APlayerController*       PlayerController               (Parm, ZeroConstructor, IsPlainOldData)
// class UStartSessionGameCallbackProxy* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UStartSessionGameCallbackProxy* UStartSessionGameCallbackProxy::STATIC_StartSessionGame(class APlayerController* PlayerController)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamParty.StartSessionGameCallbackProxy.StartSessionGame");

	UStartSessionGameCallbackProxy_StartSessionGame_Params params;
	params.PlayerController = PlayerController;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SteamParty.StartSessionPartyCallbackProxy.StartSessionParty
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class APlayerController*       PlayerController               (Parm, ZeroConstructor, IsPlainOldData)
// class UStartSessionPartyCallbackProxy* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UStartSessionPartyCallbackProxy* UStartSessionPartyCallbackProxy::STATIC_StartSessionParty(class APlayerController* PlayerController)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamParty.StartSessionPartyCallbackProxy.StartSessionParty");

	UStartSessionPartyCallbackProxy_StartSessionParty_Params params;
	params.PlayerController = PlayerController;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SteamParty.SteamBeaconClient.ServerSetHandshakeComplete
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)

void ASteamBeaconClient::ServerSetHandshakeComplete()
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamParty.SteamBeaconClient.ServerSetHandshakeComplete");

	ASteamBeaconClient_ServerSetHandshakeComplete_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SteamParty.SteamBeaconClient.OnRep_PlayerState
// (Native, Public)

void ASteamBeaconClient::OnRep_PlayerState()
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamParty.SteamBeaconClient.OnRep_PlayerState");

	ASteamBeaconClient_OnRep_PlayerState_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SteamParty.SteamBeaconClient.OnRep_LobbyState
// (Native, Public)

void ASteamBeaconClient::OnRep_LobbyState()
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamParty.SteamBeaconClient.OnRep_LobbyState");

	ASteamBeaconClient_OnRep_LobbyState_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SteamParty.SteamBeaconClient.OnPartyDisbanded
// (Net, NetReliable, Native, Event, Public, NetClient)

void ASteamBeaconClient::OnPartyDisbanded()
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamParty.SteamBeaconClient.OnPartyDisbanded");

	ASteamBeaconClient_OnPartyDisbanded_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SteamParty.SteamBeaconClient.LeaveParty
// (Native, Public, BlueprintCallable)

void ASteamBeaconClient::LeaveParty()
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamParty.SteamBeaconClient.LeaveParty");

	ASteamBeaconClient_LeaveParty_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SteamParty.SteamBeaconClient.KickFromParty
// (Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FUniqueNetIdRepl        PlayerToKick                   (ConstParm, Parm, OutParm, ReferenceParm)
// struct FText                   Reason                         (ConstParm, Parm)

void ASteamBeaconClient::KickFromParty(const struct FUniqueNetIdRepl& PlayerToKick, const struct FText& Reason)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamParty.SteamBeaconClient.KickFromParty");

	ASteamBeaconClient_KickFromParty_Params params;
	params.PlayerToKick = PlayerToKick;
	params.Reason = Reason;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SteamParty.SteamBeaconClient.GetPlayerState
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class ASteamBeaconPlayerState* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class ASteamBeaconPlayerState* ASteamBeaconClient::GetPlayerState()
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamParty.SteamBeaconClient.GetPlayerState");

	ASteamBeaconClient_GetPlayerState_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SteamParty.SteamBeaconClient.GetPartyState
// (Native, Public, BlueprintCallable)
// Parameters:
// class ASteamBeaconState*       ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class ASteamBeaconState* ASteamBeaconClient::GetPartyState()
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamParty.SteamBeaconClient.GetPartyState");

	ASteamBeaconClient_GetPartyState_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SteamParty.SteamBeaconClient.ClientJoinGameSession
// (Net, NetReliable, Native, Event, Public, NetClient)
// Parameters:
// struct FSteamBeaconSessionResult InSearchResult                 (Parm)
// bool                           bIsPartyHostCreatingServer     (Parm, ZeroConstructor, IsPlainOldData)

void ASteamBeaconClient::ClientJoinGameSession(const struct FSteamBeaconSessionResult& InSearchResult, bool bIsPartyHostCreatingServer)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamParty.SteamBeaconClient.ClientJoinGameSession");

	ASteamBeaconClient_ClientJoinGameSession_Params params;
	params.InSearchResult = InSearchResult;
	params.bIsPartyHostCreatingServer = bIsPartyHostCreatingServer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SteamParty.SteamBeaconClient.ClientJoinGameServer
// (Net, NetReliable, Native, Event, Public, NetClient)
// Parameters:
// struct FString                 GameServerURL                  (Parm, ZeroConstructor)

void ASteamBeaconClient::ClientJoinGameServer(const struct FString& GameServerURL)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamParty.SteamBeaconClient.ClientJoinGameServer");

	ASteamBeaconClient_ClientJoinGameServer_Params params;
	params.GameServerURL = GameServerURL;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SteamParty.SteamBeaconClient.ChatToPartyMember
// (Native, Public, BlueprintCallable)
// Parameters:
// class ASteamBeaconPlayerState* InPlayer                       (Parm, ZeroConstructor, IsPlainOldData)

void ASteamBeaconClient::ChatToPartyMember(class ASteamBeaconPlayerState* InPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamParty.SteamBeaconClient.ChatToPartyMember");

	ASteamBeaconClient_ChatToPartyMember_Params params;
	params.InPlayer = InPlayer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SteamParty.SteamBeaconGameInstance.SendPartySessionInviteToFriend
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class APlayerController*       PlayerController               (Parm, ZeroConstructor, IsPlainOldData)
// struct FUniqueNetIdRepl        FriendUniqueNetId              (ConstParm, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool USteamBeaconGameInstance::SendPartySessionInviteToFriend(class APlayerController* PlayerController, const struct FUniqueNetIdRepl& FriendUniqueNetId)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamParty.SteamBeaconGameInstance.SendPartySessionInviteToFriend");

	USteamBeaconGameInstance_SendPartySessionInviteToFriend_Params params;
	params.PlayerController = PlayerController;
	params.FriendUniqueNetId = FriendUniqueNetId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SteamParty.SteamBeaconGameInstance.SavePartyInfo
// (Native, Public, BlueprintCallable)

void USteamBeaconGameInstance::SavePartyInfo()
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamParty.SteamBeaconGameInstance.SavePartyInfo");

	USteamBeaconGameInstance_SavePartyInfo_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SteamParty.SteamBeaconGameInstance.RestorePartyInfo
// (Native, Public, BlueprintCallable)

void USteamBeaconGameInstance::RestorePartyInfo()
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamParty.SteamBeaconGameInstance.RestorePartyInfo");

	USteamBeaconGameInstance_RestorePartyInfo_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SteamParty.SteamBeaconGameInstance.RemoveSteamPlayerSession
// (Native, Public, BlueprintCallable)
// Parameters:
// class APlayerState*            InPlayerState                  (Parm, ZeroConstructor, IsPlainOldData)

void USteamBeaconGameInstance::RemoveSteamPlayerSession(class APlayerState* InPlayerState)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamParty.SteamBeaconGameInstance.RemoveSteamPlayerSession");

	USteamBeaconGameInstance_RemoveSteamPlayerSession_Params params;
	params.InPlayerState = InPlayerState;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction SteamParty.SteamBeaconGameInstance.OnJoinGameSessionComplete__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// bool                           bWasSuccessful                 (Parm, ZeroConstructor, IsPlainOldData)

void USteamBeaconGameInstance::OnJoinGameSessionComplete__DelegateSignature(bool bWasSuccessful)
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction SteamParty.SteamBeaconGameInstance.OnJoinGameSessionComplete__DelegateSignature");

	USteamBeaconGameInstance_OnJoinGameSessionComplete__DelegateSignature_Params params;
	params.bWasSuccessful = bWasSuccessful;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction SteamParty.SteamBeaconGameInstance.OnCreateGameSessionCompleted__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// bool                           bWasSuccessful                 (Parm, ZeroConstructor, IsPlainOldData)

void USteamBeaconGameInstance::OnCreateGameSessionCompleted__DelegateSignature(bool bWasSuccessful)
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction SteamParty.SteamBeaconGameInstance.OnCreateGameSessionCompleted__DelegateSignature");

	USteamBeaconGameInstance_OnCreateGameSessionCompleted__DelegateSignature_Params params;
	params.bWasSuccessful = bWasSuccessful;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SteamParty.SteamBeaconGameInstance.JoinSessionFromSteamBeacon
// (Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FSteamBeaconSessionResult InSearchResult                 (ConstParm, Parm, OutParm, ReferenceParm)
// bool                           bIsPartyHostCreatingServer     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool USteamBeaconGameInstance::JoinSessionFromSteamBeacon(const struct FSteamBeaconSessionResult& InSearchResult, bool bIsPartyHostCreatingServer)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamParty.SteamBeaconGameInstance.JoinSessionFromSteamBeacon");

	USteamBeaconGameInstance_JoinSessionFromSteamBeacon_Params params;
	params.InSearchResult = InSearchResult;
	params.bIsPartyHostCreatingServer = bIsPartyHostCreatingServer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SteamParty.SteamBeaconGameInstance.JoinPartyToSessionBP
// (Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FBlueprintSessionResult InSearchResult                 (Parm, OutParm, ReferenceParm)

void USteamBeaconGameInstance::JoinPartyToSessionBP(struct FBlueprintSessionResult* InSearchResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamParty.SteamBeaconGameInstance.JoinPartyToSessionBP");

	USteamBeaconGameInstance_JoinPartyToSessionBP_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (InSearchResult != nullptr)
		*InSearchResult = params.InSearchResult;
}


// Function SteamParty.SteamBeaconGameInstance.JoinPartyToHostGameSession
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool USteamBeaconGameInstance::JoinPartyToHostGameSession()
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamParty.SteamBeaconGameInstance.JoinPartyToHostGameSession");

	USteamBeaconGameInstance_JoinPartyToHostGameSession_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SteamParty.SteamBeaconGameInstance.JoinFriendPartySession
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FUniqueNetIdRepl        FriendUniqueNetId              (ConstParm, Parm, OutParm, ReferenceParm)

void USteamBeaconGameInstance::JoinFriendPartySession(const struct FUniqueNetIdRepl& FriendUniqueNetId)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamParty.SteamBeaconGameInstance.JoinFriendPartySession");

	USteamBeaconGameInstance_JoinFriendPartySession_Params params;
	params.FriendUniqueNetId = FriendUniqueNetId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SteamParty.SteamBeaconGameInstance.IsPartyLeader
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool USteamBeaconGameInstance::IsPartyLeader()
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamParty.SteamBeaconGameInstance.IsPartyLeader");

	USteamBeaconGameInstance_IsPartyLeader_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SteamParty.SteamBeaconGameInstance.IsPartyFull
// (Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool USteamBeaconGameInstance::IsPartyFull()
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamParty.SteamBeaconGameInstance.IsPartyFull");

	USteamBeaconGameInstance_IsPartyFull_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SteamParty.SteamBeaconGameInstance.IsInParty
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool USteamBeaconGameInstance::IsInParty()
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamParty.SteamBeaconGameInstance.IsInParty");

	USteamBeaconGameInstance_IsInParty_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SteamParty.SteamBeaconGameInstance.HostParty
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            MaxPlayers                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool USteamBeaconGameInstance::HostParty(int MaxPlayers)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamParty.SteamBeaconGameInstance.HostParty");

	USteamBeaconGameInstance_HostParty_Params params;
	params.MaxPlayers = MaxPlayers;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SteamParty.SteamBeaconGameInstance.HostGame
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            MaxPlayers                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool USteamBeaconGameInstance::HostGame(int MaxPlayers)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamParty.SteamBeaconGameInstance.HostGame");

	USteamBeaconGameInstance_HostGame_Params params;
	params.MaxPlayers = MaxPlayers;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SteamParty.SteamBeaconGameInstance.GetSteamFriendAvatar
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FUniqueNetIdRepl        FriendUniqueNetId              (ConstParm, Parm, OutParm, ReferenceParm)
// ESteamAvatarSize               InAvatarSize                   (Parm, ZeroConstructor, IsPlainOldData)
// class UTexture2D*              ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UTexture2D* USteamBeaconGameInstance::GetSteamFriendAvatar(const struct FUniqueNetIdRepl& FriendUniqueNetId, ESteamAvatarSize InAvatarSize)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamParty.SteamBeaconGameInstance.GetSteamFriendAvatar");

	USteamBeaconGameInstance_GetSteamFriendAvatar_Params params;
	params.FriendUniqueNetId = FriendUniqueNetId;
	params.InAvatarSize = InAvatarSize;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SteamParty.SteamBeaconGameInstance.GetPlayerIdString
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FUniqueNetIdRepl        UniqueNetId                    (ConstParm, Parm, OutParm, ReferenceParm)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString USteamBeaconGameInstance::GetPlayerIdString(const struct FUniqueNetIdRepl& UniqueNetId)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamParty.SteamBeaconGameInstance.GetPlayerIdString");

	USteamBeaconGameInstance_GetPlayerIdString_Params params;
	params.UniqueNetId = UniqueNetId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SteamParty.SteamBeaconGameInstance.GetPartyCount
// (Native, Public, BlueprintCallable)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int USteamBeaconGameInstance::GetPartyCount()
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamParty.SteamBeaconGameInstance.GetPartyCount");

	USteamBeaconGameInstance_GetPartyCount_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SteamParty.SteamBeaconGameInstance.GetMaxPartyCount
// (Native, Public, BlueprintCallable)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int USteamBeaconGameInstance::GetMaxPartyCount()
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamParty.SteamBeaconGameInstance.GetMaxPartyCount");

	USteamBeaconGameInstance_GetMaxPartyCount_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SteamParty.SteamBeaconGameInstance.GetHostCurrentGameSessionId
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString USteamBeaconGameInstance::GetHostCurrentGameSessionId()
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamParty.SteamBeaconGameInstance.GetHostCurrentGameSessionId");

	USteamBeaconGameInstance_GetHostCurrentGameSessionId_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SteamParty.SteamBeaconGameInstance.DumpDebugParty
// (Native, Public, BlueprintCallable)

void USteamBeaconGameInstance::DumpDebugParty()
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamParty.SteamBeaconGameInstance.DumpDebugParty");

	USteamBeaconGameInstance_DumpDebugParty_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SteamParty.SteamBeaconGameInstance.DisbandParty
// (Final, Native, Public, BlueprintCallable)

void USteamBeaconGameInstance::DisbandParty()
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamParty.SteamBeaconGameInstance.DisbandParty");

	USteamBeaconGameInstance_DisbandParty_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SteamParty.SteamBeaconGameInstance.DirectTravelToGameSession
// (Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 ServerURL                      (Parm, ZeroConstructor)

void USteamBeaconGameInstance::DirectTravelToGameSession(const struct FString& ServerURL)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamParty.SteamBeaconGameInstance.DirectTravelToGameSession");

	USteamBeaconGameInstance_DirectTravelToGameSession_Params params;
	params.ServerURL = ServerURL;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SteamParty.SteamBeaconGameInstance.DestroyGameSession
// (Final, Native, Public, BlueprintCallable)

void USteamBeaconGameInstance::DestroyGameSession()
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamParty.SteamBeaconGameInstance.DestroyGameSession");

	USteamBeaconGameInstance_DestroyGameSession_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SteamParty.SteamBeaconGameInstance.ClearPartyBeacons
// (Native, Public, BlueprintCallable)

void USteamBeaconGameInstance::ClearPartyBeacons()
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamParty.SteamBeaconGameInstance.ClearPartyBeacons");

	USteamBeaconGameInstance_ClearPartyBeacons_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SteamParty.SteamBeaconGameInstance.AddCustomPlayerStateData
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// class ASteamBeaconPlayerState* InPlayerState                  (Parm, ZeroConstructor, IsPlainOldData)

void USteamBeaconGameInstance::AddCustomPlayerStateData(class ASteamBeaconPlayerState* InPlayerState)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamParty.SteamBeaconGameInstance.AddCustomPlayerStateData");

	USteamBeaconGameInstance_AddCustomPlayerStateData_Params params;
	params.InPlayerState = InPlayerState;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SteamParty.SteamBeaconGameInstance.AcceptPartyInvite
// (Native, Public, BlueprintCallable)

void USteamBeaconGameInstance::AcceptPartyInvite()
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamParty.SteamBeaconGameInstance.AcceptPartyInvite");

	USteamBeaconGameInstance_AcceptPartyInvite_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SteamParty.SteamBeaconHost.GetPartyState
// (Native, Public, BlueprintCallable)
// Parameters:
// class ASteamBeaconState*       ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class ASteamBeaconState* ASteamBeaconHost::GetPartyState()
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamParty.SteamBeaconHost.GetPartyState");

	ASteamBeaconHost_GetPartyState_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SteamParty.SteamBeaconHost.DisbandParty
// (Native, Public, BlueprintCallable)

void ASteamBeaconHost::DisbandParty()
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamParty.SteamBeaconHost.DisbandParty");

	ASteamBeaconHost_DisbandParty_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SteamParty.SteamBeaconPlayerController.UnMutePlayerVoice
// (Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FUniqueNetIdRepl        PlayerId                       (ConstParm, Parm, OutParm, ReferenceParm)

void ASteamBeaconPlayerController::UnMutePlayerVoice(const struct FUniqueNetIdRepl& PlayerId)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamParty.SteamBeaconPlayerController.UnMutePlayerVoice");

	ASteamBeaconPlayerController_UnMutePlayerVoice_Params params;
	params.PlayerId = PlayerId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SteamParty.SteamBeaconPlayerController.StopPlayerTalking
// (Final, Native, Public, BlueprintCallable)

void ASteamBeaconPlayerController::StopPlayerTalking()
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamParty.SteamBeaconPlayerController.StopPlayerTalking");

	ASteamBeaconPlayerController_StopPlayerTalking_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SteamParty.SteamBeaconPlayerController.StartPlayerTalking
// (Final, Native, Public, BlueprintCallable)

void ASteamBeaconPlayerController::StartPlayerTalking()
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamParty.SteamBeaconPlayerController.StartPlayerTalking");

	ASteamBeaconPlayerController_StartPlayerTalking_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SteamParty.SteamBeaconPlayerController.MutePlayerVoice
// (Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FUniqueNetIdRepl        PlayerId                       (ConstParm, Parm, OutParm, ReferenceParm)

void ASteamBeaconPlayerController::MutePlayerVoice(const struct FUniqueNetIdRepl& PlayerId)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamParty.SteamBeaconPlayerController.MutePlayerVoice");

	ASteamBeaconPlayerController_MutePlayerVoice_Params params;
	params.PlayerId = PlayerId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SteamParty.SteamBeaconPlayerController.IsPlayerVoiceMuted
// (Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FUniqueNetIdRepl        PlayerId                       (ConstParm, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ASteamBeaconPlayerController::IsPlayerVoiceMuted(const struct FUniqueNetIdRepl& PlayerId)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamParty.SteamBeaconPlayerController.IsPlayerVoiceMuted");

	ASteamBeaconPlayerController_IsPlayerVoiceMuted_Params params;
	params.PlayerId = PlayerId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SteamParty.SteamBeaconPlayerController.IsPlayerControllerUniqueIdMatch
// (Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FUniqueNetIdRepl        PlayerId                       (ConstParm, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ASteamBeaconPlayerController::IsPlayerControllerUniqueIdMatch(const struct FUniqueNetIdRepl& PlayerId)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamParty.SteamBeaconPlayerController.IsPlayerControllerUniqueIdMatch");

	ASteamBeaconPlayerController_IsPlayerControllerUniqueIdMatch_Params params;
	params.PlayerId = PlayerId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SteamParty.SteamBeaconPlayerController.BPEvent_PlayerStateChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// class ASteamBeaconPlayerState* InPlayerBeaconStateChanged     (Parm, ZeroConstructor, IsPlainOldData)

void ASteamBeaconPlayerController::BPEvent_PlayerStateChanged(class ASteamBeaconPlayerState* InPlayerBeaconStateChanged)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamParty.SteamBeaconPlayerController.BPEvent_PlayerStateChanged");

	ASteamBeaconPlayerController_BPEvent_PlayerStateChanged_Params params;
	params.InPlayerBeaconStateChanged = InPlayerBeaconStateChanged;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SteamParty.SteamBeaconPlayerController.BPEvent_PlayerLeftParty
// (Event, Public, BlueprintEvent)
// Parameters:
// class ASteamBeaconPlayerState* InPlayerStateLeft              (Parm, ZeroConstructor, IsPlainOldData)

void ASteamBeaconPlayerController::BPEvent_PlayerLeftParty(class ASteamBeaconPlayerState* InPlayerStateLeft)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamParty.SteamBeaconPlayerController.BPEvent_PlayerLeftParty");

	ASteamBeaconPlayerController_BPEvent_PlayerLeftParty_Params params;
	params.InPlayerStateLeft = InPlayerStateLeft;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SteamParty.SteamBeaconPlayerController.BPEvent_PlayerJoinedParty
// (Event, Public, BlueprintEvent)
// Parameters:
// class ASteamBeaconPlayerState* InPlayerStateJoined            (Parm, ZeroConstructor, IsPlainOldData)

void ASteamBeaconPlayerController::BPEvent_PlayerJoinedParty(class ASteamBeaconPlayerState* InPlayerStateJoined)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamParty.SteamBeaconPlayerController.BPEvent_PlayerJoinedParty");

	ASteamBeaconPlayerController_BPEvent_PlayerJoinedParty_Params params;
	params.InPlayerStateJoined = InPlayerStateJoined;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SteamParty.SteamBeaconPlayerController.BPEvent_PartyStateChanged
// (Event, Public, BlueprintEvent)

void ASteamBeaconPlayerController::BPEvent_PartyStateChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamParty.SteamBeaconPlayerController.BPEvent_PartyStateChanged");

	ASteamBeaconPlayerController_BPEvent_PartyStateChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SteamParty.SteamBeaconPlayerController.BPEvent_PartyOwnerChanged
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FUniqueNetIdRepl        InUniqueId                     (ConstParm, Parm, OutParm, ReferenceParm)

void ASteamBeaconPlayerController::BPEvent_PartyOwnerChanged(const struct FUniqueNetIdRepl& InUniqueId)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamParty.SteamBeaconPlayerController.BPEvent_PartyOwnerChanged");

	ASteamBeaconPlayerController_BPEvent_PartyOwnerChanged_Params params;
	params.InUniqueId = InUniqueId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SteamParty.SteamBeaconPlayerController.BPEvent_PartyJoiningGame
// (Event, Public, BlueprintEvent)

void ASteamBeaconPlayerController::BPEvent_PartyJoiningGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamParty.SteamBeaconPlayerController.BPEvent_PartyJoiningGame");

	ASteamBeaconPlayerController_BPEvent_PartyJoiningGame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SteamParty.SteamBeaconPlayerController.BPEvent_PartyInviteReceived
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FString                 FriendName                     (Parm, ZeroConstructor)

void ASteamBeaconPlayerController::BPEvent_PartyInviteReceived(const struct FString& FriendName)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamParty.SteamBeaconPlayerController.BPEvent_PartyInviteReceived");

	ASteamBeaconPlayerController_BPEvent_PartyInviteReceived_Params params;
	params.FriendName = FriendName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SteamParty.SteamBeaconPlayerController.BPEvent_PartyHostReconnecting
// (Event, Public, BlueprintEvent)

void ASteamBeaconPlayerController::BPEvent_PartyHostReconnecting()
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamParty.SteamBeaconPlayerController.BPEvent_PartyHostReconnecting");

	ASteamBeaconPlayerController_BPEvent_PartyHostReconnecting_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SteamParty.SteamBeaconPlayerController.BPEvent_PartyHostConnectionFailure
// (Event, Public, BlueprintEvent)

void ASteamBeaconPlayerController::BPEvent_PartyHostConnectionFailure()
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamParty.SteamBeaconPlayerController.BPEvent_PartyHostConnectionFailure");

	ASteamBeaconPlayerController_BPEvent_PartyHostConnectionFailure_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SteamParty.SteamBeaconPlayerController.BPEvent_ChatMessageReceived
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FPartyMessage           InPartyMessage                 (Parm)

void ASteamBeaconPlayerController::BPEvent_ChatMessageReceived(const struct FPartyMessage& InPartyMessage)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamParty.SteamBeaconPlayerController.BPEvent_ChatMessageReceived");

	ASteamBeaconPlayerController_BPEvent_ChatMessageReceived_Params params;
	params.InPartyMessage = InPartyMessage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SteamParty.SteamBeaconPlayerState.SpawnConvertedPlayerState
// (Native, Public, BlueprintCallable)
// Parameters:
// class APlayerState*            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class APlayerState* ASteamBeaconPlayerState::SpawnConvertedPlayerState()
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamParty.SteamBeaconPlayerState.SpawnConvertedPlayerState");

	ASteamBeaconPlayerState_SpawnConvertedPlayerState_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SteamParty.SteamBeaconPlayerState.ServerSetPlayerProfileLevel
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
// Parameters:
// int                            InPlayerProfileLevel           (Parm, ZeroConstructor, IsPlainOldData)

void ASteamBeaconPlayerState::ServerSetPlayerProfileLevel(int InPlayerProfileLevel)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamParty.SteamBeaconPlayerState.ServerSetPlayerProfileLevel");

	ASteamBeaconPlayerState_ServerSetPlayerProfileLevel_Params params;
	params.InPlayerProfileLevel = InPlayerProfileLevel;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SteamParty.SteamBeaconPlayerState.ServerSendPartyMessage
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
// Parameters:
// struct FPartyMessage           ChatMessage                    (Parm)

void ASteamBeaconPlayerState::ServerSendPartyMessage(const struct FPartyMessage& ChatMessage)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamParty.SteamBeaconPlayerState.ServerSendPartyMessage");

	ASteamBeaconPlayerState_ServerSendPartyMessage_Params params;
	params.ChatMessage = ChatMessage;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SteamParty.SteamBeaconPlayerState.SendPartyMessage
// (Native, Public, BlueprintCallable)
// Parameters:
// struct FPartyMessage           ChatMessage                    (Parm)

void ASteamBeaconPlayerState::SendPartyMessage(const struct FPartyMessage& ChatMessage)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamParty.SteamBeaconPlayerState.SendPartyMessage");

	ASteamBeaconPlayerState_SendPartyMessage_Params params;
	params.ChatMessage = ChatMessage;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SteamParty.SteamBeaconPlayerState.OnPartyMessageReceived
// (Net, NetReliable, Native, Event, NetMulticast, Public, BlueprintCallable)
// Parameters:
// struct FPartyMessage           InPartyMessage                 (Parm)

void ASteamBeaconPlayerState::OnPartyMessageReceived(const struct FPartyMessage& InPartyMessage)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamParty.SteamBeaconPlayerState.OnPartyMessageReceived");

	ASteamBeaconPlayerState_OnPartyMessageReceived_Params params;
	params.InPartyMessage = InPartyMessage;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SteamParty.SteamBeaconPlayerState.IsPlayerPartyLeader
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class APlayerState*            InPlayerState                  (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ASteamBeaconPlayerState::IsPlayerPartyLeader(class APlayerState* InPlayerState)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamParty.SteamBeaconPlayerState.IsPlayerPartyLeader");

	ASteamBeaconPlayerState_IsPlayerPartyLeader_Params params;
	params.InPlayerState = InPlayerState;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SteamParty.SteamBeaconPlayerState.IsPlayer
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class APlayerState*            InPlayerState                  (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ASteamBeaconPlayerState::IsPlayer(class APlayerState* InPlayerState)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamParty.SteamBeaconPlayerState.IsPlayer");

	ASteamBeaconPlayerState_IsPlayer_Params params;
	params.InPlayerState = InPlayerState;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SteamParty.SteamBeaconPlayerState.IsPartyLeader
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ASteamBeaconPlayerState::IsPartyLeader()
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamParty.SteamBeaconPlayerState.IsPartyLeader");

	ASteamBeaconPlayerState_IsPartyLeader_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SteamParty.SteamBeaconPlayerState.InitializePlayerStateData
// (Native, Event, Public, BlueprintEvent)

void ASteamBeaconPlayerState::InitializePlayerStateData()
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamParty.SteamBeaconPlayerState.InitializePlayerStateData");

	ASteamBeaconPlayerState_InitializePlayerStateData_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SteamParty.SteamBeaconPlayerState.GetPlayerUniqueId
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FUniqueNetIdRepl        ReturnValue                    (Parm, OutParm, ReturnParm)

struct FUniqueNetIdRepl ASteamBeaconPlayerState::GetPlayerUniqueId()
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamParty.SteamBeaconPlayerState.GetPlayerUniqueId");

	ASteamBeaconPlayerState_GetPlayerUniqueId_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SteamParty.SteamBeaconPlayerState.GetDisplayName
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText ASteamBeaconPlayerState::GetDisplayName()
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamParty.SteamBeaconPlayerState.GetDisplayName");

	ASteamBeaconPlayerState_GetDisplayName_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SteamParty.SteamBeaconState.RemoveAllPlayers
// (Final, Native, Public, BlueprintCallable)

void ASteamBeaconState::RemoveAllPlayers()
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamParty.SteamBeaconState.RemoveAllPlayers");

	ASteamBeaconState_RemoveAllPlayers_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SteamParty.SteamBeaconState.OnRep_PartyOwnerUniqueId
// (Native, Public)

void ASteamBeaconState::OnRep_PartyOwnerUniqueId()
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamParty.SteamBeaconState.OnRep_PartyOwnerUniqueId");

	ASteamBeaconState_OnRep_PartyOwnerUniqueId_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SteamParty.SteamBeaconState.OnLobbyStateInfoUpdated_NetRefresh
// (Native, Public)

void ASteamBeaconState::OnLobbyStateInfoUpdated_NetRefresh()
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamParty.SteamBeaconState.OnLobbyStateInfoUpdated_NetRefresh");

	ASteamBeaconState_OnLobbyStateInfoUpdated_NetRefresh_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SteamParty.SteamBeaconState.OnLobbyStateInfoUpdated
// (Net, NetReliable, Native, Event, NetMulticast, Public)

void ASteamBeaconState::OnLobbyStateInfoUpdated()
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamParty.SteamBeaconState.OnLobbyStateInfoUpdated");

	ASteamBeaconState_OnLobbyStateInfoUpdated_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SteamParty.SteamBeaconState.GetPartyPlayer
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FUniqueNetIdRepl        UniqueId                       (ConstParm, Parm, OutParm, ReferenceParm)
// class ASteamBeaconPlayerState* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class ASteamBeaconPlayerState* ASteamBeaconState::GetPartyPlayer(const struct FUniqueNetIdRepl& UniqueId)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamParty.SteamBeaconState.GetPartyPlayer");

	ASteamBeaconState_GetPartyPlayer_Params params;
	params.UniqueId = UniqueId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SteamParty.SteamBeaconState.GetPartyLeader
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class ASteamBeaconPlayerState* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class ASteamBeaconPlayerState* ASteamBeaconState::GetPartyLeader()
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamParty.SteamBeaconState.GetPartyLeader");

	ASteamBeaconState_GetPartyLeader_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SteamParty.SteamBeaconState.GetAllPartyMembers
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<class ASteamBeaconPlayerState*> InPlayerArray                  (Parm, OutParm, ZeroConstructor, ReferenceParm)

void ASteamBeaconState::GetAllPartyMembers(TArray<class ASteamBeaconPlayerState*>* InPlayerArray)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamParty.SteamBeaconState.GetAllPartyMembers");

	ASteamBeaconState_GetAllPartyMembers_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (InPlayerArray != nullptr)
		*InPlayerArray = params.InPlayerArray;
}


// Function SteamParty.SteamGetFriendsCallbackProxy.RequestSteamFriendsList
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// class APlayerController*       PlayerController               (Parm, ZeroConstructor, IsPlainOldData)
// class USteamGetFriendsCallbackProxy* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class USteamGetFriendsCallbackProxy* USteamGetFriendsCallbackProxy::STATIC_RequestSteamFriendsList(class UObject* WorldContextObject, class APlayerController* PlayerController)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamParty.SteamGetFriendsCallbackProxy.RequestSteamFriendsList");

	USteamGetFriendsCallbackProxy_RequestSteamFriendsList_Params params;
	params.WorldContextObject = WorldContextObject;
	params.PlayerController = PlayerController;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SteamParty.SteamPartyComponent.UnMutePlayerVoice
// (Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FUniqueNetIdRepl        PlayerId                       (ConstParm, Parm, OutParm, ReferenceParm)

void USteamPartyComponent::UnMutePlayerVoice(const struct FUniqueNetIdRepl& PlayerId)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamParty.SteamPartyComponent.UnMutePlayerVoice");

	USteamPartyComponent_UnMutePlayerVoice_Params params;
	params.PlayerId = PlayerId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SteamParty.SteamPartyComponent.StopPlayerTalking
// (Final, Native, Public, BlueprintCallable)

void USteamPartyComponent::StopPlayerTalking()
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamParty.SteamPartyComponent.StopPlayerTalking");

	USteamPartyComponent_StopPlayerTalking_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SteamParty.SteamPartyComponent.StartPlayerTalking
// (Final, Native, Public, BlueprintCallable)

void USteamPartyComponent::StartPlayerTalking()
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamParty.SteamPartyComponent.StartPlayerTalking");

	USteamPartyComponent_StartPlayerTalking_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SteamParty.SteamPartyComponent.MutePlayerVoice
// (Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FUniqueNetIdRepl        PlayerId                       (ConstParm, Parm, OutParm, ReferenceParm)

void USteamPartyComponent::MutePlayerVoice(const struct FUniqueNetIdRepl& PlayerId)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamParty.SteamPartyComponent.MutePlayerVoice");

	USteamPartyComponent_MutePlayerVoice_Params params;
	params.PlayerId = PlayerId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SteamParty.SteamPartyComponent.IsPlayerVoiceMuted
// (Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FUniqueNetIdRepl        PlayerId                       (ConstParm, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool USteamPartyComponent::IsPlayerVoiceMuted(const struct FUniqueNetIdRepl& PlayerId)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamParty.SteamPartyComponent.IsPlayerVoiceMuted");

	USteamPartyComponent_IsPlayerVoiceMuted_Params params;
	params.PlayerId = PlayerId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SteamParty.SteamPartyComponent.IsPlayerControllerUniqueIdMatch
// (Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FUniqueNetIdRepl        PlayerId                       (ConstParm, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool USteamPartyComponent::IsPlayerControllerUniqueIdMatch(const struct FUniqueNetIdRepl& PlayerId)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamParty.SteamPartyComponent.IsPlayerControllerUniqueIdMatch");

	USteamPartyComponent_IsPlayerControllerUniqueIdMatch_Params params;
	params.PlayerId = PlayerId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SteamParty.SteamPartyComponent.GetPartyPlayer
// (Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FUniqueNetIdRepl        PlayerId                       (ConstParm, Parm, OutParm, ReferenceParm)
// class ASteamBeaconPlayerState* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class ASteamBeaconPlayerState* USteamPartyComponent::GetPartyPlayer(const struct FUniqueNetIdRepl& PlayerId)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamParty.SteamPartyComponent.GetPartyPlayer");

	USteamPartyComponent_GetPartyPlayer_Params params;
	params.PlayerId = PlayerId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SteamParty.SteamPartyComponent.GetPartyLeader
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class ASteamBeaconPlayerState* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class ASteamBeaconPlayerState* USteamPartyComponent::GetPartyLeader()
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamParty.SteamPartyComponent.GetPartyLeader");

	USteamPartyComponent_GetPartyLeader_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SteamParty.SteamPartyComponent.GetAllPartyMembers
// (Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<class ASteamBeaconPlayerState*> InPlayerArray                  (Parm, OutParm, ZeroConstructor, ReferenceParm)

void USteamPartyComponent::GetAllPartyMembers(TArray<class ASteamBeaconPlayerState*>* InPlayerArray)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamParty.SteamPartyComponent.GetAllPartyMembers");

	USteamPartyComponent_GetAllPartyMembers_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (InPlayerArray != nullptr)
		*InPlayerArray = params.InPlayerArray;
}


// Function SteamParty.SteamPartyFunctionLibrary.SendSessionInviteToFriend
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FUniqueNetIdRepl        FriendUniqueNetId              (ConstParm, Parm, OutParm, ReferenceParm)
// bool                           bIsParty                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool USteamPartyFunctionLibrary::STATIC_SendSessionInviteToFriend(const struct FUniqueNetIdRepl& FriendUniqueNetId, bool bIsParty)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamParty.SteamPartyFunctionLibrary.SendSessionInviteToFriend");

	USteamPartyFunctionLibrary_SendSessionInviteToFriend_Params params;
	params.FriendUniqueNetId = FriendUniqueNetId;
	params.bIsParty = bIsParty;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SteamParty.SteamPartyFunctionLibrary.JoinFriendPartySession
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FUniqueNetIdRepl        FriendUniqueNetId              (ConstParm, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool USteamPartyFunctionLibrary::STATIC_JoinFriendPartySession(const struct FUniqueNetIdRepl& FriendUniqueNetId)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamParty.SteamPartyFunctionLibrary.JoinFriendPartySession");

	USteamPartyFunctionLibrary_JoinFriendPartySession_Params params;
	params.FriendUniqueNetId = FriendUniqueNetId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SteamParty.SteamPartyFunctionLibrary.IsUniqueIdEqual
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FUniqueNetIdRepl        FirstUniqueNetId               (ConstParm, Parm, OutParm, ReferenceParm)
// struct FUniqueNetIdRepl        SecondUniqueNetId              (ConstParm, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool USteamPartyFunctionLibrary::STATIC_IsUniqueIdEqual(const struct FUniqueNetIdRepl& FirstUniqueNetId, const struct FUniqueNetIdRepl& SecondUniqueNetId)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamParty.SteamPartyFunctionLibrary.IsUniqueIdEqual");

	USteamPartyFunctionLibrary_IsUniqueIdEqual_Params params;
	params.FirstUniqueNetId = FirstUniqueNetId;
	params.SecondUniqueNetId = SecondUniqueNetId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SteamParty.SteamPartyFunctionLibrary.GetUniqueNetId
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class APlayerState*            PlayerState                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FUniqueNetIdRepl        ReturnValue                    (Parm, OutParm, ReturnParm)

struct FUniqueNetIdRepl USteamPartyFunctionLibrary::STATIC_GetUniqueNetId(class APlayerState* PlayerState)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamParty.SteamPartyFunctionLibrary.GetUniqueNetId");

	USteamPartyFunctionLibrary_GetUniqueNetId_Params params;
	params.PlayerState = PlayerState;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SteamParty.SteamPartyFunctionLibrary.GetSteamFriendAvatar
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FUniqueNetIdRepl        FriendUniqueNetId              (ConstParm, Parm, OutParm, ReferenceParm)
// ESteamAvatarSize               InAvatarSize                   (Parm, ZeroConstructor, IsPlainOldData)
// class UTexture2D*              ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UTexture2D* USteamPartyFunctionLibrary::STATIC_GetSteamFriendAvatar(const struct FUniqueNetIdRepl& FriendUniqueNetId, ESteamAvatarSize InAvatarSize)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamParty.SteamPartyFunctionLibrary.GetSteamFriendAvatar");

	USteamPartyFunctionLibrary_GetSteamFriendAvatar_Params params;
	params.FriendUniqueNetId = FriendUniqueNetId;
	params.InAvatarSize = InAvatarSize;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SteamParty.UpdateSessionGameCallbackProxy.UpdateSessionGame
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int                            MaxPlayers                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           PublicSearchable               (Parm, ZeroConstructor, IsPlainOldData)
// bool                           AllowInvites                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           JoinViaPresence                (Parm, ZeroConstructor, IsPlainOldData)
// bool                           JoinViaPresenceFriendsOnly     (Parm, ZeroConstructor, IsPlainOldData)
// class UUpdateSessionGameCallbackProxy* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UUpdateSessionGameCallbackProxy* UUpdateSessionGameCallbackProxy::STATIC_UpdateSessionGame(int MaxPlayers, bool PublicSearchable, bool AllowInvites, bool JoinViaPresence, bool JoinViaPresenceFriendsOnly)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamParty.UpdateSessionGameCallbackProxy.UpdateSessionGame");

	UUpdateSessionGameCallbackProxy_UpdateSessionGame_Params params;
	params.MaxPlayers = MaxPlayers;
	params.PublicSearchable = PublicSearchable;
	params.AllowInvites = AllowInvites;
	params.JoinViaPresence = JoinViaPresence;
	params.JoinViaPresenceFriendsOnly = JoinViaPresenceFriendsOnly;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SteamParty.UpdateSessionPartyCallbackProxy.UpdateSessionParty
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int                            MaxPlayers                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           PublicSearchable               (Parm, ZeroConstructor, IsPlainOldData)
// bool                           AllowInvites                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           JoinViaPresence                (Parm, ZeroConstructor, IsPlainOldData)
// bool                           JoinViaPresenceFriendsOnly     (Parm, ZeroConstructor, IsPlainOldData)
// class UUpdateSessionPartyCallbackProxy* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UUpdateSessionPartyCallbackProxy* UUpdateSessionPartyCallbackProxy::STATIC_UpdateSessionParty(int MaxPlayers, bool PublicSearchable, bool AllowInvites, bool JoinViaPresence, bool JoinViaPresenceFriendsOnly)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamParty.UpdateSessionPartyCallbackProxy.UpdateSessionParty");

	UUpdateSessionPartyCallbackProxy_UpdateSessionParty_Params params;
	params.MaxPlayers = MaxPlayers;
	params.PublicSearchable = PublicSearchable;
	params.AllowInvites = AllowInvites;
	params.JoinViaPresence = JoinViaPresence;
	params.JoinViaPresenceFriendsOnly = JoinViaPresenceFriendsOnly;

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
