
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

// Function BP_UI_CrewLobbyManager.BP_UI_CrewLobbyManager_C.GetPartySize
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            Amount                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_UI_CrewLobbyManager_C::GetPartySize(int* Amount)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UI_CrewLobbyManager.BP_UI_CrewLobbyManager_C.GetPartySize");

	ABP_UI_CrewLobbyManager_C_GetPartySize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Amount != nullptr)
		*Amount = params.Amount;
}


// Function BP_UI_CrewLobbyManager.BP_UI_CrewLobbyManager_C.UpdateCrewPanels
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_UI_CrewLobbyManager_C::UpdateCrewPanels()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UI_CrewLobbyManager.BP_UI_CrewLobbyManager_C.UpdateCrewPanels");

	ABP_UI_CrewLobbyManager_C_UpdateCrewPanels_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_UI_CrewLobbyManager.BP_UI_CrewLobbyManager_C.ToggleCrewVisible
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bCrewVisible                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bShowInfo                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_UI_CrewLobbyManager_C::ToggleCrewVisible(bool bCrewVisible, bool bShowInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UI_CrewLobbyManager.BP_UI_CrewLobbyManager_C.ToggleCrewVisible");

	ABP_UI_CrewLobbyManager_C_ToggleCrewVisible_Params params;
	params.bCrewVisible = bCrewVisible;
	params.bShowInfo = bShowInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_UI_CrewLobbyManager.BP_UI_CrewLobbyManager_C.RegisterCrewSlot
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_UI_CrewMember_C*     CrewSlot                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_UI_CrewLobbyManager_C::RegisterCrewSlot(class ABP_UI_CrewMember_C* CrewSlot)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UI_CrewLobbyManager.BP_UI_CrewLobbyManager_C.RegisterCrewSlot");

	ABP_UI_CrewLobbyManager_C_RegisterCrewSlot_Params params;
	params.CrewSlot = CrewSlot;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_UI_CrewLobbyManager.BP_UI_CrewLobbyManager_C.ChangePlayersVisible
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bVisible                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_UI_CrewLobbyManager_C::ChangePlayersVisible(bool bVisible)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UI_CrewLobbyManager.BP_UI_CrewLobbyManager_C.ChangePlayersVisible");

	ABP_UI_CrewLobbyManager_C_ChangePlayersVisible_Params params;
	params.bVisible = bVisible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_UI_CrewLobbyManager.BP_UI_CrewLobbyManager_C.HandlePlayerLeft
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ASteamBeaconPlayerState* BeaconPlayerState              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_UI_CrewLobbyManager_C::HandlePlayerLeft(class ASteamBeaconPlayerState* BeaconPlayerState)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UI_CrewLobbyManager.BP_UI_CrewLobbyManager_C.HandlePlayerLeft");

	ABP_UI_CrewLobbyManager_C_HandlePlayerLeft_Params params;
	params.BeaconPlayerState = BeaconPlayerState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_UI_CrewLobbyManager.BP_UI_CrewLobbyManager_C.HandlePlayerJoined
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ASteamBeaconPlayerState* PlayerBeacon                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_UI_CrewLobbyManager_C::HandlePlayerJoined(class ASteamBeaconPlayerState* PlayerBeacon)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UI_CrewLobbyManager.BP_UI_CrewLobbyManager_C.HandlePlayerJoined");

	ABP_UI_CrewLobbyManager_C_HandlePlayerJoined_Params params;
	params.PlayerBeacon = PlayerBeacon;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_UI_CrewLobbyManager.BP_UI_CrewLobbyManager_C.ChangeCrewMemberVisualizer
// (Private, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            PlayerIndex                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void ABP_UI_CrewLobbyManager_C::ChangeCrewMemberVisualizer(int PlayerIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UI_CrewLobbyManager.BP_UI_CrewLobbyManager_C.ChangeCrewMemberVisualizer");

	ABP_UI_CrewLobbyManager_C_ChangeCrewMemberVisualizer_Params params;
	params.PlayerIndex = PlayerIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_UI_CrewLobbyManager.BP_UI_CrewLobbyManager_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_UI_CrewLobbyManager_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UI_CrewLobbyManager.BP_UI_CrewLobbyManager_C.UserConstructionScript");

	ABP_UI_CrewLobbyManager_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_UI_CrewLobbyManager.BP_UI_CrewLobbyManager_C.BndEvt__SteamParty_K2Node_ComponentBoundEvent_3_EmptyDelegate__DelegateSignature
// (BlueprintEvent)

void ABP_UI_CrewLobbyManager_C::BndEvt__SteamParty_K2Node_ComponentBoundEvent_3_EmptyDelegate__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UI_CrewLobbyManager.BP_UI_CrewLobbyManager_C.BndEvt__SteamParty_K2Node_ComponentBoundEvent_3_EmptyDelegate__DelegateSignature");

	ABP_UI_CrewLobbyManager_C_BndEvt__SteamParty_K2Node_ComponentBoundEvent_3_EmptyDelegate__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_UI_CrewLobbyManager.BP_UI_CrewLobbyManager_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_UI_CrewLobbyManager_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UI_CrewLobbyManager.BP_UI_CrewLobbyManager_C.ReceiveBeginPlay");

	ABP_UI_CrewLobbyManager_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_UI_CrewLobbyManager.BP_UI_CrewLobbyManager_C.BndEvt__SteamParty_K2Node_ComponentBoundEvent_2_OnPlayerInviteReceivedSteamPartyDelegate__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// struct FUniqueNetIdRepl        InPlayerUniqueId               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FString                 InFriendName                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void ABP_UI_CrewLobbyManager_C::BndEvt__SteamParty_K2Node_ComponentBoundEvent_2_OnPlayerInviteReceivedSteamPartyDelegate__DelegateSignature(const struct FUniqueNetIdRepl& InPlayerUniqueId, const struct FString& InFriendName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UI_CrewLobbyManager.BP_UI_CrewLobbyManager_C.BndEvt__SteamParty_K2Node_ComponentBoundEvent_2_OnPlayerInviteReceivedSteamPartyDelegate__DelegateSignature");

	ABP_UI_CrewLobbyManager_C_BndEvt__SteamParty_K2Node_ComponentBoundEvent_2_OnPlayerInviteReceivedSteamPartyDelegate__DelegateSignature_Params params;
	params.InPlayerUniqueId = InPlayerUniqueId;
	params.InFriendName = InFriendName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_UI_CrewLobbyManager.BP_UI_CrewLobbyManager_C.BndEvt__SteamParty_K2Node_ComponentBoundEvent_5_OnPlayerUniqueIdSteamPartyDelegate__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// struct FUniqueNetIdRepl        InPlayerUniqueId               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void ABP_UI_CrewLobbyManager_C::BndEvt__SteamParty_K2Node_ComponentBoundEvent_5_OnPlayerUniqueIdSteamPartyDelegate__DelegateSignature(const struct FUniqueNetIdRepl& InPlayerUniqueId)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UI_CrewLobbyManager.BP_UI_CrewLobbyManager_C.BndEvt__SteamParty_K2Node_ComponentBoundEvent_5_OnPlayerUniqueIdSteamPartyDelegate__DelegateSignature");

	ABP_UI_CrewLobbyManager_C_BndEvt__SteamParty_K2Node_ComponentBoundEvent_5_OnPlayerUniqueIdSteamPartyDelegate__DelegateSignature_Params params;
	params.InPlayerUniqueId = InPlayerUniqueId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_UI_CrewLobbyManager.BP_UI_CrewLobbyManager_C.BndEvt__SteamParty_K2Node_ComponentBoundEvent_6_OnPlayerUpdateSteamPartyDelegate__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class ASteamBeaconPlayerState* InPlayerBeaconState            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_UI_CrewLobbyManager_C::BndEvt__SteamParty_K2Node_ComponentBoundEvent_6_OnPlayerUpdateSteamPartyDelegate__DelegateSignature(class ASteamBeaconPlayerState* InPlayerBeaconState)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UI_CrewLobbyManager.BP_UI_CrewLobbyManager_C.BndEvt__SteamParty_K2Node_ComponentBoundEvent_6_OnPlayerUpdateSteamPartyDelegate__DelegateSignature");

	ABP_UI_CrewLobbyManager_C_BndEvt__SteamParty_K2Node_ComponentBoundEvent_6_OnPlayerUpdateSteamPartyDelegate__DelegateSignature_Params params;
	params.InPlayerBeaconState = InPlayerBeaconState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_UI_CrewLobbyManager.BP_UI_CrewLobbyManager_C.BndEvt__SteamParty_K2Node_ComponentBoundEvent_4_EmptyDelegate__DelegateSignature
// (BlueprintEvent)

void ABP_UI_CrewLobbyManager_C::BndEvt__SteamParty_K2Node_ComponentBoundEvent_4_EmptyDelegate__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UI_CrewLobbyManager.BP_UI_CrewLobbyManager_C.BndEvt__SteamParty_K2Node_ComponentBoundEvent_4_EmptyDelegate__DelegateSignature");

	ABP_UI_CrewLobbyManager_C_BndEvt__SteamParty_K2Node_ComponentBoundEvent_4_EmptyDelegate__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_UI_CrewLobbyManager.BP_UI_CrewLobbyManager_C.BndEvt__SteamParty_K2Node_ComponentBoundEvent_1_OnPlayerUpdateSteamPartyDelegate__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class ASteamBeaconPlayerState* InPlayerBeaconState            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_UI_CrewLobbyManager_C::BndEvt__SteamParty_K2Node_ComponentBoundEvent_1_OnPlayerUpdateSteamPartyDelegate__DelegateSignature(class ASteamBeaconPlayerState* InPlayerBeaconState)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UI_CrewLobbyManager.BP_UI_CrewLobbyManager_C.BndEvt__SteamParty_K2Node_ComponentBoundEvent_1_OnPlayerUpdateSteamPartyDelegate__DelegateSignature");

	ABP_UI_CrewLobbyManager_C_BndEvt__SteamParty_K2Node_ComponentBoundEvent_1_OnPlayerUpdateSteamPartyDelegate__DelegateSignature_Params params;
	params.InPlayerBeaconState = InPlayerBeaconState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_UI_CrewLobbyManager.BP_UI_CrewLobbyManager_C.BndEvt__SteamParty_K2Node_ComponentBoundEvent_0_OnPlayerUpdateSteamPartyDelegate__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class ASteamBeaconPlayerState* InPlayerBeaconState            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_UI_CrewLobbyManager_C::BndEvt__SteamParty_K2Node_ComponentBoundEvent_0_OnPlayerUpdateSteamPartyDelegate__DelegateSignature(class ASteamBeaconPlayerState* InPlayerBeaconState)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UI_CrewLobbyManager.BP_UI_CrewLobbyManager_C.BndEvt__SteamParty_K2Node_ComponentBoundEvent_0_OnPlayerUpdateSteamPartyDelegate__DelegateSignature");

	ABP_UI_CrewLobbyManager_C_BndEvt__SteamParty_K2Node_ComponentBoundEvent_0_OnPlayerUpdateSteamPartyDelegate__DelegateSignature_Params params;
	params.InPlayerBeaconState = InPlayerBeaconState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_UI_CrewLobbyManager.BP_UI_CrewLobbyManager_C.ExecuteUbergraph_BP_UI_CrewLobbyManager
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_UI_CrewLobbyManager_C::ExecuteUbergraph_BP_UI_CrewLobbyManager(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UI_CrewLobbyManager.BP_UI_CrewLobbyManager_C.ExecuteUbergraph_BP_UI_CrewLobbyManager");

	ABP_UI_CrewLobbyManager_C_ExecuteUbergraph_BP_UI_CrewLobbyManager_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
