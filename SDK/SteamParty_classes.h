#pragma once

// Name: BlazingSails, Version: 1.481.81

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Classes
//---------------------------------------------------------------------------

// Class SteamParty.CreateSessionGameCallbackProxy
// 0x0080 (0x00A8 - 0x0028)
class UCreateSessionGameCallbackProxy : public UOnlineBlueprintCallProxyBase
{
public:
	struct FScriptMulticastDelegate                    OnSuccess;                                                // 0x0028(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnFailure;                                                // 0x0038(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0x60];                                      // 0x0048(0x0060) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SteamParty.CreateSessionGameCallbackProxy");
		return ptr;
	}


	class UCreateSessionGameCallbackProxy* STATIC_CreateSessionGame(class UObject* WorldContextObject, class APlayerController* PlayerController, int PublicConnections, bool bUseLAN, const struct FString& InGameType, bool AutoStartSession);
};


// Class SteamParty.CreateSessionPartyCallbackProxy
// 0x0080 (0x00A8 - 0x0028)
class UCreateSessionPartyCallbackProxy : public UOnlineBlueprintCallProxyBase
{
public:
	struct FScriptMulticastDelegate                    OnSuccess;                                                // 0x0028(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnFailure;                                                // 0x0038(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0x60];                                      // 0x0048(0x0060) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SteamParty.CreateSessionPartyCallbackProxy");
		return ptr;
	}


	class UCreateSessionPartyCallbackProxy* STATIC_CreateSessionParty(class UObject* WorldContextObject, class APlayerController* PlayerController, int PublicConnections, bool bUseLAN, const struct FString& InGameType, bool AutoStartSession);
};


// Class SteamParty.DestroySessionGameCallbackProxy
// 0x0040 (0x0068 - 0x0028)
class UDestroySessionGameCallbackProxy : public UOnlineBlueprintCallProxyBase
{
public:
	struct FScriptMulticastDelegate                    OnSuccess;                                                // 0x0028(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnFailure;                                                // 0x0038(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0x20];                                      // 0x0048(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SteamParty.DestroySessionGameCallbackProxy");
		return ptr;
	}


	class UDestroySessionGameCallbackProxy* STATIC_DestroySessionGame(class APlayerController* PlayerController);
};


// Class SteamParty.DestroySessionPartyCallbackProxy
// 0x0040 (0x0068 - 0x0028)
class UDestroySessionPartyCallbackProxy : public UOnlineBlueprintCallProxyBase
{
public:
	struct FScriptMulticastDelegate                    OnSuccess;                                                // 0x0028(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnFailure;                                                // 0x0038(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0x20];                                      // 0x0048(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SteamParty.DestroySessionPartyCallbackProxy");
		return ptr;
	}


	class UDestroySessionPartyCallbackProxy* STATIC_DestroySessionParty(class APlayerController* PlayerController);
};


// Class SteamParty.DummyPlayerController
// 0x0000 (0x0678 - 0x0678)
class ADummyPlayerController : public APlayerController
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SteamParty.DummyPlayerController");
		return ptr;
	}

};


// Class SteamParty.EndSessionGameCallbackProxy
// 0x0040 (0x0068 - 0x0028)
class UEndSessionGameCallbackProxy : public UOnlineBlueprintCallProxyBase
{
public:
	struct FScriptMulticastDelegate                    OnSuccess;                                                // 0x0028(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnFailure;                                                // 0x0038(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0x20];                                      // 0x0048(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SteamParty.EndSessionGameCallbackProxy");
		return ptr;
	}


	class UEndSessionGameCallbackProxy* STATIC_EndSessionGame(class APlayerController* PlayerController);
};


// Class SteamParty.EndSessionPartyCallbackProxy
// 0x0040 (0x0068 - 0x0028)
class UEndSessionPartyCallbackProxy : public UOnlineBlueprintCallProxyBase
{
public:
	struct FScriptMulticastDelegate                    OnSuccess;                                                // 0x0028(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnFailure;                                                // 0x0038(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0x20];                                      // 0x0048(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SteamParty.EndSessionPartyCallbackProxy");
		return ptr;
	}


	class UEndSessionPartyCallbackProxy* STATIC_EndSessionParty(class APlayerController* PlayerController);
};


// Class SteamParty.FindSessionsGameCallbackProxy
// 0x0070 (0x0098 - 0x0028)
class UFindSessionsGameCallbackProxy : public UOnlineBlueprintCallProxyBase
{
public:
	struct FScriptMulticastDelegate                    OnSuccess;                                                // 0x0028(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnFailure;                                                // 0x0038(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0x50];                                      // 0x0048(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SteamParty.FindSessionsGameCallbackProxy");
		return ptr;
	}


	struct FString STATIC_GetGameType(const struct FBlueprintSessionResult& Result);
	class UFindSessionsGameCallbackProxy* STATIC_FindSessionsGame(class UObject* WorldContextObject, class APlayerController* PlayerController, int MaxResults, bool bUseLAN, const struct FString& InGameType);
};


// Class SteamParty.FindSessionsPartyCallbackProxy
// 0x0070 (0x0098 - 0x0028)
class UFindSessionsPartyCallbackProxy : public UOnlineBlueprintCallProxyBase
{
public:
	struct FScriptMulticastDelegate                    OnSuccess;                                                // 0x0028(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnFailure;                                                // 0x0038(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0x50];                                      // 0x0048(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SteamParty.FindSessionsPartyCallbackProxy");
		return ptr;
	}


	struct FString STATIC_GetGameType(const struct FBlueprintSessionResult& Result);
	class UFindSessionsPartyCallbackProxy* STATIC_FindSessionsParty(class UObject* WorldContextObject, class APlayerController* PlayerController, int MaxResults, bool bUseLAN, const struct FString& InGameType);
};


// Class SteamParty.InviteSessionCallbackProxy
// 0x0088 (0x00B0 - 0x0028)
class UInviteSessionCallbackProxy : public UOnlineBlueprintCallProxyBase
{
public:
	struct FScriptMulticastDelegate                    OnInviteReceived;                                         // 0x0028(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0x78];                                      // 0x0038(0x0078) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SteamParty.InviteSessionCallbackProxy");
		return ptr;
	}


	class UInviteSessionCallbackProxy* STATIC_InviteSessionCallback(class APlayerController* PlayerController);
};


// Class SteamParty.JoinSessionGameCallbackProxy
// 0x0100 (0x0128 - 0x0028)
class UJoinSessionGameCallbackProxy : public UOnlineBlueprintCallProxyBase
{
public:
	struct FScriptMulticastDelegate                    OnSuccess;                                                // 0x0028(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnFailure;                                                // 0x0038(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0xE0];                                      // 0x0048(0x00E0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SteamParty.JoinSessionGameCallbackProxy");
		return ptr;
	}


	class UJoinSessionGameCallbackProxy* STATIC_JoinSessionGame(class UObject* WorldContextObject, class APlayerController* PlayerController, const struct FBlueprintSessionResult& SearchResult);
};


// Class SteamParty.JoinSessionPartyCallbackProxy
// 0x0100 (0x0128 - 0x0028)
class UJoinSessionPartyCallbackProxy : public UOnlineBlueprintCallProxyBase
{
public:
	struct FScriptMulticastDelegate                    OnSuccess;                                                // 0x0028(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnFailure;                                                // 0x0038(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0xE0];                                      // 0x0048(0x00E0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SteamParty.JoinSessionPartyCallbackProxy");
		return ptr;
	}


	class UJoinSessionPartyCallbackProxy* STATIC_JoinSessionParty(class UObject* WorldContextObject, class APlayerController* PlayerController, const struct FBlueprintSessionResult& SearchResult);
};


// Class SteamParty.StartSessionGameCallbackProxy
// 0x0040 (0x0068 - 0x0028)
class UStartSessionGameCallbackProxy : public UOnlineBlueprintCallProxyBase
{
public:
	struct FScriptMulticastDelegate                    OnSuccess;                                                // 0x0028(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnFailure;                                                // 0x0038(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0x20];                                      // 0x0048(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SteamParty.StartSessionGameCallbackProxy");
		return ptr;
	}


	class UStartSessionGameCallbackProxy* STATIC_StartSessionGame(class APlayerController* PlayerController);
};


// Class SteamParty.StartSessionPartyCallbackProxy
// 0x0040 (0x0068 - 0x0028)
class UStartSessionPartyCallbackProxy : public UOnlineBlueprintCallProxyBase
{
public:
	struct FScriptMulticastDelegate                    OnSuccess;                                                // 0x0028(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnFailure;                                                // 0x0038(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0x20];                                      // 0x0048(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SteamParty.StartSessionPartyCallbackProxy");
		return ptr;
	}


	class UStartSessionPartyCallbackProxy* STATIC_StartSessionParty(class APlayerController* PlayerController);
};


// Class SteamParty.SteamBeaconClient
// 0x0030 (0x0458 - 0x0428)
class ASteamBeaconClient : public ALobbyBeaconClient
{
public:
	bool                                               bHasHandShakeCompleted;                                   // 0x0428(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0429(0x0007) MISSED OFFSET
	class ASteamBeaconState*                           BeaconLobbyState;                                         // 0x0430(0x0008) (Net, ZeroConstructor, IsPlainOldData)
	class ASteamBeaconPlayerState*                     BeaconPlayerState;                                        // 0x0438(0x0008) (Net, ZeroConstructor, IsPlainOldData)
	bool                                               bHasRegisterComponentsCompleted;                          // 0x0440(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x17];                                      // 0x0441(0x0017) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SteamParty.SteamBeaconClient");
		return ptr;
	}


	void ServerSetHandshakeComplete();
	void OnRep_PlayerState();
	void OnRep_LobbyState();
	void OnPartyDisbanded();
	void LeaveParty();
	void KickFromParty(const struct FUniqueNetIdRepl& PlayerToKick, const struct FText& Reason);
	class ASteamBeaconPlayerState* GetPlayerState();
	class ASteamBeaconState* GetPartyState();
	void ClientJoinGameSession(const struct FSteamBeaconSessionResult& InSearchResult, bool bIsPartyHostCreatingServer);
	void ClientJoinGameServer(const struct FString& GameServerURL);
	void ChatToPartyMember(class ASteamBeaconPlayerState* InPlayer);
};


// Class SteamParty.SteamBeaconGameInstance
// 0x03B0 (0x0450 - 0x00A0)
class USteamBeaconGameInstance : public UGameInstance
{
public:
	struct FScriptMulticastDelegate                    OnPreLoadMapSteamParty;                                   // 0x00A0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	int                                                MaxPartyCount;                                            // 0x00B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x00B4(0x0004) MISSED OFFSET
	class UClass*                                      LobbyBeaconPlayerStateClass;                              // 0x00B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               VoiceChatEnabled;                                         // 0x00C0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               IsPartyHostCreatingServer;                                // 0x00C1(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x00C2(0x0002) MISSED OFFSET
	float                                              PartyHostGameTravelDelay;                                 // 0x00C4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                PartyHostGameTravelMaxRetries;                            // 0x00C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                CurrentTravelRetries;                                     // 0x00CC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EPartyStatus                                       PartyStatus;                                              // 0x00D0(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x00D1(0x0007) MISSED OFFSET
	class ASteamBeaconHost*                            BeaconHostObject;                                         // 0x00D8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class ASteamBeaconListener*                        BeaconHostListener;                                       // 0x00E0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class ASteamBeaconClient*                          BeaconClient;                                             // 0x00E8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x68];                                      // 0x00F0(0x0068) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnCreateGameSessionCompleted;                             // 0x0158(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnJoinGameSessionComplete;                                // 0x0168(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData04[0x2D8];                                     // 0x0178(0x02D8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SteamParty.SteamBeaconGameInstance");
		return ptr;
	}


	bool SendPartySessionInviteToFriend(class APlayerController* PlayerController, const struct FUniqueNetIdRepl& FriendUniqueNetId);
	void SavePartyInfo();
	void RestorePartyInfo();
	void RemoveSteamPlayerSession(class APlayerState* InPlayerState);
	void OnJoinGameSessionComplete__DelegateSignature(bool bWasSuccessful);
	void OnCreateGameSessionCompleted__DelegateSignature(bool bWasSuccessful);
	bool JoinSessionFromSteamBeacon(const struct FSteamBeaconSessionResult& InSearchResult, bool bIsPartyHostCreatingServer);
	void JoinPartyToSessionBP(struct FBlueprintSessionResult* InSearchResult);
	bool JoinPartyToHostGameSession();
	void JoinFriendPartySession(const struct FUniqueNetIdRepl& FriendUniqueNetId);
	bool IsPartyLeader();
	bool IsPartyFull();
	bool IsInParty();
	bool HostParty(int MaxPlayers);
	bool HostGame(int MaxPlayers);
	class UTexture2D* GetSteamFriendAvatar(const struct FUniqueNetIdRepl& FriendUniqueNetId, ESteamAvatarSize InAvatarSize);
	struct FString GetPlayerIdString(const struct FUniqueNetIdRepl& UniqueNetId);
	int GetPartyCount();
	int GetMaxPartyCount();
	struct FString GetHostCurrentGameSessionId();
	void DumpDebugParty();
	void DisbandParty();
	void DirectTravelToGameSession(const struct FString& ServerURL);
	void DestroyGameSession();
	void ClearPartyBeacons();
	void AddCustomPlayerStateData(class ASteamBeaconPlayerState* InPlayerState);
	void AcceptPartyInvite();
};


// Class SteamParty.SteamBeaconGameSession
// 0x0110 (0x0450 - 0x0340)
class ASteamBeaconGameSession : public AGameSession
{
public:
	unsigned char                                      UnknownData00[0x110];                                     // 0x0340(0x0110) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SteamParty.SteamBeaconGameSession");
		return ptr;
	}

};


// Class SteamParty.SteamBeaconHost
// 0x0008 (0x0390 - 0x0388)
class ASteamBeaconHost : public ALobbyBeaconHost
{
public:
	bool                                               bIsDisbandingParty;                                       // 0x0388(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bIsJoiningGame;                                           // 0x0389(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bIsLevelChanging;                                         // 0x038A(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x5];                                       // 0x038B(0x0005) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SteamParty.SteamBeaconHost");
		return ptr;
	}


	class ASteamBeaconState* GetPartyState();
	void DisbandParty();
};


// Class SteamParty.SteamBeaconListener
// 0x0000 (0x0408 - 0x0408)
class ASteamBeaconListener : public AOnlineBeaconHost
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SteamParty.SteamBeaconListener");
		return ptr;
	}

};


// Class SteamParty.SteamBeaconPlayerController
// 0x0028 (0x06A0 - 0x0678)
class ASteamBeaconPlayerController : public APlayerController
{
public:
	class ASteamBeaconState*                           PartyBeaconState;                                         // 0x0678(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x18];                                      // 0x0680(0x0018) MISSED OFFSET
	bool                                               IsPushToTalk;                                             // 0x0698(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0699(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SteamParty.SteamBeaconPlayerController");
		return ptr;
	}


	void UnMutePlayerVoice(const struct FUniqueNetIdRepl& PlayerId);
	void StopPlayerTalking();
	void StartPlayerTalking();
	void MutePlayerVoice(const struct FUniqueNetIdRepl& PlayerId);
	bool IsPlayerVoiceMuted(const struct FUniqueNetIdRepl& PlayerId);
	bool IsPlayerControllerUniqueIdMatch(const struct FUniqueNetIdRepl& PlayerId);
	void BPEvent_PlayerStateChanged(class ASteamBeaconPlayerState* InPlayerBeaconStateChanged);
	void BPEvent_PlayerLeftParty(class ASteamBeaconPlayerState* InPlayerStateLeft);
	void BPEvent_PlayerJoinedParty(class ASteamBeaconPlayerState* InPlayerStateJoined);
	void BPEvent_PartyStateChanged();
	void BPEvent_PartyOwnerChanged(const struct FUniqueNetIdRepl& InUniqueId);
	void BPEvent_PartyJoiningGame();
	void BPEvent_PartyInviteReceived(const struct FString& FriendName);
	void BPEvent_PartyHostReconnecting();
	void BPEvent_PartyHostConnectionFailure();
	void BPEvent_ChatMessageReceived(const struct FPartyMessage& InPartyMessage);
};


// Class SteamParty.SteamBeaconPlayerState
// 0x0030 (0x0400 - 0x03D0)
class ASteamBeaconPlayerState : public ALobbyBeaconPlayerState
{
public:
	int                                                PlayerProfileLevel;                                       // 0x03D0(0x0004) (BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1C];                                      // 0x03D4(0x001C) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnPlayerTalkingStateChanged;                              // 0x03F0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SteamParty.SteamBeaconPlayerState");
		return ptr;
	}


	class APlayerState* SpawnConvertedPlayerState();
	void ServerSetPlayerProfileLevel(int InPlayerProfileLevel);
	void ServerSendPartyMessage(const struct FPartyMessage& ChatMessage);
	void SendPartyMessage(const struct FPartyMessage& ChatMessage);
	void OnPartyMessageReceived(const struct FPartyMessage& InPartyMessage);
	bool IsPlayerPartyLeader(class APlayerState* InPlayerState);
	bool IsPlayer(class APlayerState* InPlayerState);
	bool IsPartyLeader();
	void InitializePlayerStateData();
	struct FUniqueNetIdRepl GetPlayerUniqueId();
	struct FText GetDisplayName();
};


// Class SteamParty.SteamBeaconState
// 0x0058 (0x04D0 - 0x0478)
class ASteamBeaconState : public ALobbyBeaconState
{
public:
	struct FUniqueNetIdRepl                            PartyOwnerUniqueId;                                       // 0x0478(0x0028) (Net)
	unsigned char                                      UnknownData00[0x30];                                      // 0x04A0(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SteamParty.SteamBeaconState");
		return ptr;
	}


	void RemoveAllPlayers();
	void OnRep_PartyOwnerUniqueId();
	void OnLobbyStateInfoUpdated_NetRefresh();
	void OnLobbyStateInfoUpdated();
	class ASteamBeaconPlayerState* GetPartyPlayer(const struct FUniqueNetIdRepl& UniqueId);
	class ASteamBeaconPlayerState* GetPartyLeader();
	void GetAllPartyMembers(TArray<class ASteamBeaconPlayerState*>* InPlayerArray);
};


// Class SteamParty.SteamGetFriendsCallbackProxy
// 0x0040 (0x0068 - 0x0028)
class USteamGetFriendsCallbackProxy : public UOnlineBlueprintCallProxyBase
{
public:
	struct FScriptMulticastDelegate                    OnSuccess;                                                // 0x0028(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnFailure;                                                // 0x0038(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0x20];                                      // 0x0048(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SteamParty.SteamGetFriendsCallbackProxy");
		return ptr;
	}


	class USteamGetFriendsCallbackProxy* STATIC_RequestSteamFriendsList(class UObject* WorldContextObject, class APlayerController* PlayerController);
};


// Class SteamParty.SteamPartyComponent
// 0x00C8 (0x01B8 - 0x00F0)
class USteamPartyComponent : public UActorComponent
{
public:
	class ASteamBeaconState*                           PartyBeaconState;                                         // 0x00F0(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FScriptMulticastDelegate                    OnPlayerJoinedSteamParty;                                 // 0x00F8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnPlayerLeftSteamParty;                                   // 0x0108(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnPlayerChangedSteamParty;                                // 0x0118(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnPartyStateChangedSteamParty;                            // 0x0128(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnPartyOwnerChangedSteamParty;                            // 0x0138(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnPartyMessageSteamParty;                                 // 0x0148(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnPartyJoiningGameSteamParty;                             // 0x0158(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnPartyHostConnectionFailureSteamParty;                   // 0x0168(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnPartyHostReconnectingSteamParty;                        // 0x0178(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnPartyInviteReceivedSteamParty;                          // 0x0188(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	bool                                               IsPushToTalk;                                             // 0x0198(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1F];                                      // 0x0199(0x001F) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SteamParty.SteamPartyComponent");
		return ptr;
	}


	void UnMutePlayerVoice(const struct FUniqueNetIdRepl& PlayerId);
	void StopPlayerTalking();
	void StartPlayerTalking();
	void MutePlayerVoice(const struct FUniqueNetIdRepl& PlayerId);
	bool IsPlayerVoiceMuted(const struct FUniqueNetIdRepl& PlayerId);
	bool IsPlayerControllerUniqueIdMatch(const struct FUniqueNetIdRepl& PlayerId);
	class ASteamBeaconPlayerState* GetPartyPlayer(const struct FUniqueNetIdRepl& PlayerId);
	class ASteamBeaconPlayerState* GetPartyLeader();
	void GetAllPartyMembers(TArray<class ASteamBeaconPlayerState*>* InPlayerArray);
};


// Class SteamParty.SteamPartyFunctionLibrary
// 0x0000 (0x0028 - 0x0028)
class USteamPartyFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SteamParty.SteamPartyFunctionLibrary");
		return ptr;
	}


	bool STATIC_SendSessionInviteToFriend(const struct FUniqueNetIdRepl& FriendUniqueNetId, bool bIsParty);
	bool STATIC_JoinFriendPartySession(const struct FUniqueNetIdRepl& FriendUniqueNetId);
	bool STATIC_IsUniqueIdEqual(const struct FUniqueNetIdRepl& FirstUniqueNetId, const struct FUniqueNetIdRepl& SecondUniqueNetId);
	struct FUniqueNetIdRepl STATIC_GetUniqueNetId(class APlayerState* PlayerState);
	class UTexture2D* STATIC_GetSteamFriendAvatar(const struct FUniqueNetIdRepl& FriendUniqueNetId, ESteamAvatarSize InAvatarSize);
};


// Class SteamParty.SteamPartyNetDriver
// 0x0000 (0x06D8 - 0x06D8)
class USteamPartyNetDriver : public UIpNetDriver
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SteamParty.SteamPartyNetDriver");
		return ptr;
	}

};


// Class SteamParty.UpdateSessionGameCallbackProxy
// 0x0040 (0x0068 - 0x0028)
class UUpdateSessionGameCallbackProxy : public UOnlineBlueprintCallProxyBase
{
public:
	struct FScriptMulticastDelegate                    OnSuccess;                                                // 0x0028(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnFailure;                                                // 0x0038(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0x20];                                      // 0x0048(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SteamParty.UpdateSessionGameCallbackProxy");
		return ptr;
	}


	class UUpdateSessionGameCallbackProxy* STATIC_UpdateSessionGame(int MaxPlayers, bool PublicSearchable, bool AllowInvites, bool JoinViaPresence, bool JoinViaPresenceFriendsOnly);
};


// Class SteamParty.UpdateSessionPartyCallbackProxy
// 0x0040 (0x0068 - 0x0028)
class UUpdateSessionPartyCallbackProxy : public UOnlineBlueprintCallProxyBase
{
public:
	struct FScriptMulticastDelegate                    OnSuccess;                                                // 0x0028(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnFailure;                                                // 0x0038(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0x20];                                      // 0x0048(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SteamParty.UpdateSessionPartyCallbackProxy");
		return ptr;
	}


	class UUpdateSessionPartyCallbackProxy* STATIC_UpdateSessionParty(int MaxPlayers, bool PublicSearchable, bool AllowInvites, bool JoinViaPresence, bool JoinViaPresenceFriendsOnly);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
