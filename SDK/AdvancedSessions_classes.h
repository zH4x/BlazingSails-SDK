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

// Class AdvancedSessions.AdvancedExternalUILibrary
// 0x0000 (0x0028 - 0x0028)
class UAdvancedExternalUILibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AdvancedSessions.AdvancedExternalUILibrary");
		return ptr;
	}


	void STATIC_ShowWebURLUI(const struct FString& URLToShow, bool bEmbedded, bool bShowBackground, bool bShowCloseButton, int OffsetX, int OffsetY, int SizeX, int SizeY, EBlueprintResultSwitch* Result, TArray<struct FString>* AllowedDomains);
	void STATIC_ShowProfileUI(const struct FBPUniqueNetId& PlayerViewingProfile, const struct FBPUniqueNetId& PlayerToViewProfileOf, EBlueprintResultSwitch* Result);
	void STATIC_ShowLeaderBoardUI(const struct FString& LeaderboardName, EBlueprintResultSwitch* Result);
	void STATIC_ShowInviteUI(class APlayerController* PlayerController, EBlueprintResultSwitch* Result);
	void STATIC_ShowFriendsUI(class APlayerController* PlayerController, EBlueprintResultSwitch* Result);
	void STATIC_ShowAccountUpgradeUI(const struct FBPUniqueNetId& PlayerRequestingAccountUpgradeUI, EBlueprintResultSwitch* Result);
	void STATIC_CloseWebURLUI();
};


// Class AdvancedSessions.AdvancedFriendsGameInstance
// 0x0080 (0x04D0 - 0x0450)
class UAdvancedFriendsGameInstance : public USteamBeaconGameInstance
{
public:
	bool                                               bCallFriendInterfaceEventsOnPlayerControllers;            // 0x0450(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bCallIdentityInterfaceEventsOnPlayerControllers;          // 0x0451(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bCallVoiceInterfaceEventsOnPlayerControllers;             // 0x0452(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bEnableTalkingStatusDelegate;                             // 0x0453(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7C];                                      // 0x0454(0x007C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AdvancedSessions.AdvancedFriendsGameInstance");
		return ptr;
	}


	void OnSessionInviteReceived(int LocalPlayerNum, const struct FBPUniqueNetId& PersonInviting, const struct FString& AppId, const struct FBlueprintSessionResult& SessionToJoin);
	void OnSessionInviteAccepted(int LocalPlayerNum, const struct FBPUniqueNetId& PersonInvited, const struct FBlueprintSessionResult& SessionToJoin);
	void OnPlayerTalkingStateChanged(const struct FBPUniqueNetId& PlayerId, bool bIsTalking);
	void OnPlayerLoginStatusChanged(int PlayerNum, EBPLoginStatus PreviousStatus, EBPLoginStatus NewStatus, const struct FBPUniqueNetId& NewPlayerUniqueNetID);
	void OnPlayerLoginChanged(int PlayerNum);
};


// Class AdvancedSessions.AdvancedFriendsInterface
// 0x0000 (0x0028 - 0x0028)
class UAdvancedFriendsInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AdvancedSessions.AdvancedFriendsInterface");
		return ptr;
	}


	void OnSessionInviteReceived(const struct FBPUniqueNetId& PersonInviting, const struct FBlueprintSessionResult& SearchResult);
	void OnSessionInviteAccepted(const struct FBPUniqueNetId& PersonInvited, const struct FBlueprintSessionResult& SearchResult);
	void OnPlayerVoiceStateChanged(const struct FBPUniqueNetId& PlayerId, bool bIsTalking);
	void OnPlayerLoginStatusChanged(EBPLoginStatus PreviousStatus, EBPLoginStatus NewStatus, const struct FBPUniqueNetId& PlayerUniqueNetID);
	void OnPlayerLoginChanged(int PlayerNum);
};


// Class AdvancedSessions.AdvancedFriendsLibrary
// 0x0000 (0x0028 - 0x0028)
class UAdvancedFriendsLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AdvancedSessions.AdvancedFriendsLibrary");
		return ptr;
	}


	void STATIC_SendSessionInviteToFriends(class APlayerController* PlayerController, TArray<struct FBPUniqueNetId> Friends, EBlueprintResultSwitch* Result);
	void STATIC_SendSessionInviteToFriend(class APlayerController* PlayerController, const struct FBPUniqueNetId& FriendUniqueNetId, EBlueprintResultSwitch* Result);
	void STATIC_IsAFriend(class APlayerController* PlayerController, const struct FBPUniqueNetId& UniqueNetId, bool* IsFriend);
	void STATIC_GetStoredRecentPlayersList(const struct FBPUniqueNetId& UniqueNetId, TArray<struct FBPOnlineRecentPlayer>* PlayersList);
	void STATIC_GetStoredFriendsList(class APlayerController* PlayerController, TArray<struct FBPFriendInfo>* FriendsList);
	void STATIC_GetFriend(class APlayerController* PlayerController, const struct FBPUniqueNetId& FriendUniqueNetId, struct FBPFriendInfo* Friend);
};


// Class AdvancedSessions.AdvancedIdentityLibrary
// 0x0000 (0x0028 - 0x0028)
class UAdvancedIdentityLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AdvancedSessions.AdvancedIdentityLibrary");
		return ptr;
	}


	void STATIC_SetUserAccountAttribute(const struct FBPUserOnlineAccount& AccountInfo, const struct FString& AttributeName, const struct FString& NewAttributeValue, EBlueprintResultSwitch* Result);
	void STATIC_GetUserID(const struct FBPUserOnlineAccount& AccountInfo, struct FBPUniqueNetId* UniqueNetId);
	void STATIC_GetUserAccountRealName(const struct FBPUserOnlineAccount& AccountInfo, struct FString* UserName);
	void STATIC_GetUserAccountDisplayName(const struct FBPUserOnlineAccount& AccountInfo, struct FString* DisplayName);
	void STATIC_GetUserAccountAuthAttribute(const struct FBPUserOnlineAccount& AccountInfo, const struct FString& AttributeName, struct FString* AuthAttribute, EBlueprintResultSwitch* Result);
	void STATIC_GetUserAccountAttribute(const struct FBPUserOnlineAccount& AccountInfo, const struct FString& AttributeName, struct FString* AttributeValue, EBlueprintResultSwitch* Result);
	void STATIC_GetUserAccountAccessToken(const struct FBPUserOnlineAccount& AccountInfo, struct FString* AccessToken);
	void STATIC_GetUserAccount(const struct FBPUniqueNetId& UniqueNetId, struct FBPUserOnlineAccount* AccountInfo, EBlueprintResultSwitch* Result);
	void STATIC_GetPlayerNickname(const struct FBPUniqueNetId& UniqueNetId, struct FString* PlayerNickname);
	void STATIC_GetPlayerAuthToken(class APlayerController* PlayerController, struct FString* AuthToken, EBlueprintResultSwitch* Result);
	void STATIC_GetLoginStatus(const struct FBPUniqueNetId& UniqueNetId, EBPLoginStatus* LoginStatus, EBlueprintResultSwitch* Result);
	void STATIC_GetAllUserAccounts(TArray<struct FBPUserOnlineAccount>* AccountInfos, EBlueprintResultSwitch* Result);
};


// Class AdvancedSessions.AdvancedSessionsLibrary
// 0x0000 (0x0028 - 0x0028)
class UAdvancedSessionsLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AdvancedSessions.AdvancedSessionsLibrary");
		return ptr;
	}


	void STATIC_UniqueNetIdToString(const struct FBPUniqueNetId& UniqueNetId, struct FString* String);
	void STATIC_SetPlayerName(class APlayerController* PlayerController, const struct FString& PlayerName);
	struct FSessionsSearchSetting STATIC_MakeLiteralSessionSearchProperty(const struct FSessionPropertyKeyPair& SessionSearchProperty, EOnlineComparisonOpRedux ComparisonOp);
	struct FSessionPropertyKeyPair STATIC_MakeLiteralSessionPropertyString(const struct FName& Key, const struct FString& Value);
	struct FSessionPropertyKeyPair STATIC_MakeLiteralSessionPropertyInt(const struct FName& Key, int Value);
	struct FSessionPropertyKeyPair STATIC_MakeLiteralSessionPropertyFloat(const struct FName& Key, float Value);
	struct FSessionPropertyKeyPair STATIC_MakeLiteralSessionPropertyByte(const struct FName& Key, unsigned char Value);
	struct FSessionPropertyKeyPair STATIC_MakeLiteralSessionPropertyBool(const struct FName& Key, bool Value);
	bool STATIC_IsValidUniqueNetID(const struct FBPUniqueNetId& UniqueNetId);
	bool STATIC_IsValidSession(const struct FBlueprintSessionResult& SessionResult);
	void STATIC_IsPlayerInSession(const struct FBPUniqueNetId& PlayerToCheck, bool* bIsInSession);
	bool STATIC_HasOnlineSubsystem(const struct FName& SubSystemName);
	void STATIC_GetUniqueNetIDFromPlayerState(class APlayerState* PlayerState, struct FBPUniqueNetId* UniqueNetId);
	void STATIC_GetUniqueNetId(class APlayerController* PlayerController, struct FBPUniqueNetId* UniqueNetId);
	void STATIC_GetUniqueBuildID(const struct FBlueprintSessionResult& SessionResult, int* UniqueBuildId);
	void STATIC_GetSessionState(EBPOnlineSessionState* SessionState);
	void STATIC_GetSessionSettings(int* NumConnections, int* NumPrivateConnections, bool* bIsLan, bool* bIsDedicated, bool* bAllowInvites, bool* bAllowJoinInProgress, bool* bIsAnticheatEnabled, int* BuildUniqueID, TArray<struct FSessionPropertyKeyPair>* ExtraSettings, EBlueprintResultSwitch* Result);
	void STATIC_GetSessionPropertyString(TArray<struct FSessionPropertyKeyPair> ExtraSettings, const struct FName& SettingName, ESessionSettingSearchResult* SearchResult, struct FString* SettingValue);
	struct FName STATIC_GetSessionPropertyKey(const struct FSessionPropertyKeyPair& SessionProperty);
	void STATIC_GetSessionPropertyInt(TArray<struct FSessionPropertyKeyPair> ExtraSettings, const struct FName& SettingName, ESessionSettingSearchResult* SearchResult, int* SettingValue);
	void STATIC_GetSessionPropertyFloat(TArray<struct FSessionPropertyKeyPair> ExtraSettings, const struct FName& SettingName, ESessionSettingSearchResult* SearchResult, float* SettingValue);
	void STATIC_GetSessionPropertyByte(TArray<struct FSessionPropertyKeyPair> ExtraSettings, const struct FName& SettingName, ESessionSettingSearchResult* SearchResult, unsigned char* SettingValue);
	void STATIC_GetSessionPropertyBool(TArray<struct FSessionPropertyKeyPair> ExtraSettings, const struct FName& SettingName, ESessionSettingSearchResult* SearchResult, bool* SettingValue);
	void STATIC_GetPlayerName(class APlayerController* PlayerController, struct FString* PlayerName);
	void STATIC_GetNumberOfNetworkPlayers(class UObject* WorldContextObject, int* NumNetPlayers);
	void STATIC_GetNetPlayerIndex(class APlayerController* PlayerController, int* NetPlayerIndex);
	void STATIC_GetExtraSettings(const struct FBlueprintSessionResult& SessionResult, TArray<struct FSessionPropertyKeyPair>* ExtraSettings);
	void STATIC_GetCurrentUniqueBuildID(int* UniqueBuildId);
	void STATIC_FindSessionPropertyIndexByName(TArray<struct FSessionPropertyKeyPair> ExtraSettings, const struct FName& SettingName, EBlueprintResultSwitch* Result, int* OutIndex);
	void STATIC_FindSessionPropertyByName(TArray<struct FSessionPropertyKeyPair> ExtraSettings, const struct FName& SettingsName, EBlueprintResultSwitch* Result, struct FSessionPropertyKeyPair* OutProperty);
	bool STATIC_EqualEqual_UNetIDUnetID(const struct FBPUniqueNetId& A, const struct FBPUniqueNetId& B);
	void STATIC_AddOrModifyExtraSettings(TArray<struct FSessionPropertyKeyPair>* SettingsArray, TArray<struct FSessionPropertyKeyPair>* NewOrChangedSettings, TArray<struct FSessionPropertyKeyPair>* ModifiedSettingsArray);
};


// Class AdvancedSessions.AdvancedVoiceLibrary
// 0x0000 (0x0028 - 0x0028)
class UAdvancedVoiceLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AdvancedSessions.AdvancedVoiceLibrary");
		return ptr;
	}


	bool STATIC_UnRegisterRemoteTalker(const struct FBPUniqueNetId& UniqueNetId);
	void STATIC_UnRegisterLocalTalker(unsigned char LocalPlayerNum);
	void STATIC_UnRegisterAllLocalTalkers();
	bool STATIC_UnMuteRemoteTalker(unsigned char LocalUserNum, const struct FBPUniqueNetId& UniqueNetId, bool bIsSystemWide);
	void STATIC_StopNetworkedVoice(unsigned char LocalPlayerNum);
	void STATIC_StartNetworkedVoice(unsigned char LocalPlayerNum);
	void STATIC_RemoveAllRemoteTalkers();
	bool STATIC_RegisterRemoteTalker(const struct FBPUniqueNetId& UniqueNetId);
	bool STATIC_RegisterLocalTalker(unsigned char LocalPlayerNum);
	void STATIC_RegisterAllLocalTalkers();
	bool STATIC_MuteRemoteTalker(unsigned char LocalUserNum, const struct FBPUniqueNetId& UniqueNetId, bool bIsSystemWide);
	bool STATIC_IsRemotePlayerTalking(const struct FBPUniqueNetId& UniqueNetId);
	bool STATIC_IsPlayerMuted(unsigned char LocalUserNumChecking, const struct FBPUniqueNetId& UniqueNetId);
	bool STATIC_IsLocalPlayerTalking(unsigned char LocalPlayerNum);
	void STATIC_IsHeadsetPresent(unsigned char LocalPlayerNum, bool* bHasHeadset);
	void STATIC_GetNumLocalTalkers(int* NumLocalTalkers);
};


// Class AdvancedSessions.CancelFindSessionsCallbackProxy
// 0x0048 (0x0070 - 0x0028)
class UCancelFindSessionsCallbackProxy : public UOnlineBlueprintCallProxyBase
{
public:
	struct FScriptMulticastDelegate                    OnSuccess;                                                // 0x0028(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnFailure;                                                // 0x0038(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0x28];                                      // 0x0048(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AdvancedSessions.CancelFindSessionsCallbackProxy");
		return ptr;
	}


	class UCancelFindSessionsCallbackProxy* STATIC_CancelFindSessions(class UObject* WorldContextObject, class APlayerController* PlayerController);
};


// Class AdvancedSessions.CreateSessionCallbackProxyAdvanced
// 0x0088 (0x00B0 - 0x0028)
class UCreateSessionCallbackProxyAdvanced : public UOnlineBlueprintCallProxyBase
{
public:
	struct FScriptMulticastDelegate                    OnSuccess;                                                // 0x0028(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnFailure;                                                // 0x0038(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0x68];                                      // 0x0048(0x0068) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AdvancedSessions.CreateSessionCallbackProxyAdvanced");
		return ptr;
	}


	class UCreateSessionCallbackProxyAdvanced* STATIC_CreateAdvancedSession(class UObject* WorldContextObject, TArray<struct FSessionPropertyKeyPair> ExtraSettings, class APlayerController* PlayerController, int PublicConnections, int PrivateConnections, bool bUseLAN, bool bAllowInvites, bool bIsDedicatedServer, bool bUsePresence, bool bAllowJoinViaPresence, bool bAllowJoinViaPresenceFriendsOnly, bool bAntiCheatProtected, bool bUsesStats, bool bShouldAdvertise);
	class UCreateSessionCallbackProxyAdvanced* STATIC_CreateAdvancedDedicatedSession(class UObject* WorldContextObject, TArray<struct FSessionPropertyKeyPair> ExtraSettings, int PublicConnections, int PrivateConnections, bool bUseLAN, bool bAllowInvites, bool bAntiCheatProtected, bool bUsesStats, bool bShouldAdvertise);
};


// Class AdvancedSessions.EndSessionCallbackProxy
// 0x0048 (0x0070 - 0x0028)
class UEndSessionCallbackProxy : public UOnlineBlueprintCallProxyBase
{
public:
	struct FScriptMulticastDelegate                    OnSuccess;                                                // 0x0028(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnFailure;                                                // 0x0038(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0x28];                                      // 0x0048(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AdvancedSessions.EndSessionCallbackProxy");
		return ptr;
	}


	class UEndSessionCallbackProxy* STATIC_EndSession(class UObject* WorldContextObject, class APlayerController* PlayerController);
};


// Class AdvancedSessions.FindFriendSessionCallbackProxy
// 0x0068 (0x0090 - 0x0028)
class UFindFriendSessionCallbackProxy : public UOnlineBlueprintCallProxyBase
{
public:
	struct FScriptMulticastDelegate                    OnSuccess;                                                // 0x0028(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnFailure;                                                // 0x0038(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0x48];                                      // 0x0048(0x0048) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AdvancedSessions.FindFriendSessionCallbackProxy");
		return ptr;
	}


	class UFindFriendSessionCallbackProxy* STATIC_FindFriendSession(class UObject* WorldContextObject, class APlayerController* PlayerController, const struct FBPUniqueNetId& FriendUniqueNetId);
};


// Class AdvancedSessions.FindSessionsCallbackProxyAdvanced
// 0x00A0 (0x00C8 - 0x0028)
class UFindSessionsCallbackProxyAdvanced : public UOnlineBlueprintCallProxyBase
{
public:
	struct FScriptMulticastDelegate                    OnSuccess;                                                // 0x0028(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnFailure;                                                // 0x0038(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0x80];                                      // 0x0048(0x0080) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AdvancedSessions.FindSessionsCallbackProxyAdvanced");
		return ptr;
	}


	class UFindSessionsCallbackProxyAdvanced* STATIC_FindSessionsAdvanced(class UObject* WorldContextObject, class APlayerController* PlayerController, int MaxResults, bool bUseLAN, EBPServerPresenceSearchType ServerTypeToSearch, TArray<struct FSessionsSearchSetting> Filters, bool bEmptyServersOnly, bool bNonEmptyServersOnly, bool bSecureServersOnly, int MinSlotsAvailable);
	void STATIC_FilterSessionResults(TArray<struct FBlueprintSessionResult> SessionResults, TArray<struct FSessionsSearchSetting> Filters, TArray<struct FBlueprintSessionResult>* FilteredResults);
};


// Class AdvancedSessions.GetFriendsCallbackProxy
// 0x0040 (0x0068 - 0x0028)
class UGetFriendsCallbackProxy : public UOnlineBlueprintCallProxyBase
{
public:
	struct FScriptMulticastDelegate                    OnSuccess;                                                // 0x0028(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnFailure;                                                // 0x0038(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0x20];                                      // 0x0048(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AdvancedSessions.GetFriendsCallbackProxy");
		return ptr;
	}


	class UGetFriendsCallbackProxy* STATIC_GetAndStoreFriendsList(class UObject* WorldContextObject, class APlayerController* PlayerController);
};


// Class AdvancedSessions.GetRecentPlayersCallbackProxy
// 0x0060 (0x0088 - 0x0028)
class UGetRecentPlayersCallbackProxy : public UOnlineBlueprintCallProxyBase
{
public:
	struct FScriptMulticastDelegate                    OnSuccess;                                                // 0x0028(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnFailure;                                                // 0x0038(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0x40];                                      // 0x0048(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AdvancedSessions.GetRecentPlayersCallbackProxy");
		return ptr;
	}


	class UGetRecentPlayersCallbackProxy* STATIC_GetAndStoreRecentPlayersList(class UObject* WorldContextObject, const struct FBPUniqueNetId& UniqueNetId);
};


// Class AdvancedSessions.GetUserPrivilegeCallbackProxy
// 0x0050 (0x0078 - 0x0028)
class UGetUserPrivilegeCallbackProxy : public UOnlineBlueprintCallProxyBase
{
public:
	struct FScriptMulticastDelegate                    OnSuccess;                                                // 0x0028(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnFailure;                                                // 0x0038(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0x30];                                      // 0x0048(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AdvancedSessions.GetUserPrivilegeCallbackProxy");
		return ptr;
	}


	class UGetUserPrivilegeCallbackProxy* STATIC_GetUserPrivilege(class UObject* WorldContextObject, EBPUserPrivileges PrivilegeToCheck, const struct FBPUniqueNetId& PlayerUniqueNetID);
};


// Class AdvancedSessions.LoginUserCallbackProxy
// 0x0068 (0x0090 - 0x0028)
class ULoginUserCallbackProxy : public UOnlineBlueprintCallProxyBase
{
public:
	struct FScriptMulticastDelegate                    OnSuccess;                                                // 0x0028(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnFailure;                                                // 0x0038(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0x48];                                      // 0x0048(0x0048) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AdvancedSessions.LoginUserCallbackProxy");
		return ptr;
	}


	class ULoginUserCallbackProxy* STATIC_LoginUser(class UObject* WorldContextObject, class APlayerController* PlayerController, const struct FString& UserID, const struct FString& UserToken);
};


// Class AdvancedSessions.LogoutUserCallbackProxy
// 0x0048 (0x0070 - 0x0028)
class ULogoutUserCallbackProxy : public UOnlineBlueprintCallProxyBase
{
public:
	struct FScriptMulticastDelegate                    OnSuccess;                                                // 0x0028(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnFailure;                                                // 0x0038(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0x28];                                      // 0x0048(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AdvancedSessions.LogoutUserCallbackProxy");
		return ptr;
	}


	class ULogoutUserCallbackProxy* STATIC_LogoutUser(class UObject* WorldContextObject, class APlayerController* PlayerController);
};


// Class AdvancedSessions.SendFriendInviteCallbackProxy
// 0x0060 (0x0088 - 0x0028)
class USendFriendInviteCallbackProxy : public UOnlineBlueprintCallProxyBase
{
public:
	struct FScriptMulticastDelegate                    OnSuccess;                                                // 0x0028(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnFailure;                                                // 0x0038(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0x40];                                      // 0x0048(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AdvancedSessions.SendFriendInviteCallbackProxy");
		return ptr;
	}


	class USendFriendInviteCallbackProxy* STATIC_SendFriendInvite(class UObject* WorldContextObject, class APlayerController* PlayerController, const struct FBPUniqueNetId& UniqueNetIDInvited);
};


// Class AdvancedSessions.UpdateSessionCallbackProxyAdvanced
// 0x0068 (0x0090 - 0x0028)
class UUpdateSessionCallbackProxyAdvanced : public UOnlineBlueprintCallProxyBase
{
public:
	struct FScriptMulticastDelegate                    OnSuccess;                                                // 0x0028(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnFailure;                                                // 0x0038(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0x48];                                      // 0x0048(0x0048) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AdvancedSessions.UpdateSessionCallbackProxyAdvanced");
		return ptr;
	}


	class UUpdateSessionCallbackProxyAdvanced* STATIC_UpdateSession(class UObject* WorldContextObject, TArray<struct FSessionPropertyKeyPair> ExtraSettings, int PublicConnections, int PrivateConnections, bool bUseLAN, bool bAllowInvites, bool bAllowJoinInProgress, bool bRefreshOnlineData, bool bIsDedicatedServer);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
