
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

// Function BP_VoiceChatSource.BP_VoiceChatSource_C.ShouldShowVoiceIcon
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           bShouldShow                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_VoiceChatSource_C::ShouldShowVoiceIcon(bool* bShouldShow)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VoiceChatSource.BP_VoiceChatSource_C.ShouldShowVoiceIcon");

	ABP_VoiceChatSource_C_ShouldShowVoiceIcon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bShouldShow != nullptr)
		*bShouldShow = params.bShouldShow;
}


// Function BP_VoiceChatSource.BP_VoiceChatSource_C.CullRegisterIfNeeded
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_VoiceChatSource_C::CullRegisterIfNeeded()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VoiceChatSource.BP_VoiceChatSource_C.CullRegisterIfNeeded");

	ABP_VoiceChatSource_C_CullRegisterIfNeeded_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_VoiceChatSource.BP_VoiceChatSource_C.ToggleTalkerMuted
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FBPUniqueNetId          UniqueNetId                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                           bMute                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bIsSystemWide                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_VoiceChatSource_C::ToggleTalkerMuted(const struct FBPUniqueNetId& UniqueNetId, bool bMute, bool bIsSystemWide)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VoiceChatSource.BP_VoiceChatSource_C.ToggleTalkerMuted");

	ABP_VoiceChatSource_C_ToggleTalkerMuted_Params params;
	params.UniqueNetId = UniqueNetId;
	params.bMute = bMute;
	params.bIsSystemWide = bIsSystemWide;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_VoiceChatSource.BP_VoiceChatSource_C.ToggleTalkerRegistered
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FBPUniqueNetId          UniqueNetId                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                           bEnable                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_VoiceChatSource_C::ToggleTalkerRegistered(const struct FBPUniqueNetId& UniqueNetId, bool bEnable)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VoiceChatSource.BP_VoiceChatSource_C.ToggleTalkerRegistered");

	ABP_VoiceChatSource_C_ToggleTalkerRegistered_Params params;
	params.UniqueNetId = UniqueNetId;
	params.bEnable = bEnable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_VoiceChatSource.BP_VoiceChatSource_C.ResetRemoteTalker
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_VoiceChatSource_C::ResetRemoteTalker()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VoiceChatSource.BP_VoiceChatSource_C.ResetRemoteTalker");

	ABP_VoiceChatSource_C_ResetRemoteTalker_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_VoiceChatSource.BP_VoiceChatSource_C.BindLocalEvents
// (Private, BlueprintCallable, BlueprintEvent)

void ABP_VoiceChatSource_C::BindLocalEvents()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VoiceChatSource.BP_VoiceChatSource_C.BindLocalEvents");

	ABP_VoiceChatSource_C_BindLocalEvents_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_VoiceChatSource.BP_VoiceChatSource_C.BindRemoteEvents
// (Private, BlueprintCallable, BlueprintEvent)

void ABP_VoiceChatSource_C::BindRemoteEvents()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VoiceChatSource.BP_VoiceChatSource_C.BindRemoteEvents");

	ABP_VoiceChatSource_C_BindRemoteEvents_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_VoiceChatSource.BP_VoiceChatSource_C.ChangeTalkEnabled
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bEnableTalking                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_VoiceChatSource_C::ChangeTalkEnabled(bool bEnableTalking)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VoiceChatSource.BP_VoiceChatSource_C.ChangeTalkEnabled");

	ABP_VoiceChatSource_C_ChangeTalkEnabled_Params params;
	params.bEnableTalking = bEnableTalking;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_VoiceChatSource.BP_VoiceChatSource_C.CheckIsTryingToTalk
// (Private, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           bIsTalking                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_VoiceChatSource_C::CheckIsTryingToTalk(bool* bIsTalking)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VoiceChatSource.BP_VoiceChatSource_C.CheckIsTryingToTalk");

	ABP_VoiceChatSource_C_CheckIsTryingToTalk_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bIsTalking != nullptr)
		*bIsTalking = params.bIsTalking;
}


// Function BP_VoiceChatSource.BP_VoiceChatSource_C.CheckIsAllowedToTalk
// (Private, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           bIsAllowed                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_VoiceChatSource_C::CheckIsAllowedToTalk(bool* bIsAllowed)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VoiceChatSource.BP_VoiceChatSource_C.CheckIsAllowedToTalk");

	ABP_VoiceChatSource_C_CheckIsAllowedToTalk_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bIsAllowed != nullptr)
		*bIsAllowed = params.bIsAllowed;
}


// Function BP_VoiceChatSource.BP_VoiceChatSource_C.TryChangeVoiceChatActive
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bEnableVoiceInput              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_VoiceChatSource_C::TryChangeVoiceChatActive(bool bEnableVoiceInput)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VoiceChatSource.BP_VoiceChatSource_C.TryChangeVoiceChatActive");

	ABP_VoiceChatSource_C_TryChangeVoiceChatActive_Params params;
	params.bEnableVoiceInput = bEnableVoiceInput;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_VoiceChatSource.BP_VoiceChatSource_C.ChangeVoiceChatType
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EVoiceChatType>    VoiceChatType                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_VoiceChatSource_C::ChangeVoiceChatType(TEnumAsByte<EVoiceChatType> VoiceChatType)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VoiceChatSource.BP_VoiceChatSource_C.ChangeVoiceChatType");

	ABP_VoiceChatSource_C_ChangeVoiceChatType_Params params;
	params.VoiceChatType = VoiceChatType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_VoiceChatSource.BP_VoiceChatSource_C.SetShouldBeProximity
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bShouldBeProximity             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_VoiceChatSource_C::SetShouldBeProximity(bool bShouldBeProximity)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VoiceChatSource.BP_VoiceChatSource_C.SetShouldBeProximity");

	ABP_VoiceChatSource_C_SetShouldBeProximity_Params params;
	params.bShouldBeProximity = bShouldBeProximity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_VoiceChatSource.BP_VoiceChatSource_C.UpdateLocationToPawn
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_VoiceChatSource_C::UpdateLocationToPawn()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VoiceChatSource.BP_VoiceChatSource_C.UpdateLocationToPawn");

	ABP_VoiceChatSource_C_UpdateLocationToPawn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_VoiceChatSource.BP_VoiceChatSource_C.OnRep_bIsTalking
// (BlueprintCallable, BlueprintEvent)

void ABP_VoiceChatSource_C::OnRep_bIsTalking()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VoiceChatSource.BP_VoiceChatSource_C.OnRep_bIsTalking");

	ABP_VoiceChatSource_C_OnRep_bIsTalking_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_VoiceChatSource.BP_VoiceChatSource_C.Initialize
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bSuccess                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_VoiceChatSource_C::Initialize(bool* bSuccess)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VoiceChatSource.BP_VoiceChatSource_C.Initialize");

	ABP_VoiceChatSource_C_Initialize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bSuccess != nullptr)
		*bSuccess = params.bSuccess;
}


// Function BP_VoiceChatSource.BP_VoiceChatSource_C.InitializeRemote
// (Private, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bSuccess                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_VoiceChatSource_C::InitializeRemote(bool* bSuccess)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VoiceChatSource.BP_VoiceChatSource_C.InitializeRemote");

	ABP_VoiceChatSource_C_InitializeRemote_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bSuccess != nullptr)
		*bSuccess = params.bSuccess;
}


// Function BP_VoiceChatSource.BP_VoiceChatSource_C.InitializeLocal
// (Private, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bSuccess                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_VoiceChatSource_C::InitializeLocal(bool* bSuccess)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VoiceChatSource.BP_VoiceChatSource_C.InitializeLocal");

	ABP_VoiceChatSource_C_InitializeLocal_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bSuccess != nullptr)
		*bSuccess = params.bSuccess;
}


// Function BP_VoiceChatSource.BP_VoiceChatSource_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_VoiceChatSource_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VoiceChatSource.BP_VoiceChatSource_C.UserConstructionScript");

	ABP_VoiceChatSource_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_VoiceChatSource.BP_VoiceChatSource_C.S_SetIsTalking
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bIsTalking                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_VoiceChatSource_C::S_SetIsTalking(bool bIsTalking)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VoiceChatSource.BP_VoiceChatSource_C.S_SetIsTalking");

	ABP_VoiceChatSource_C_S_SetIsTalking_Params params;
	params.bIsTalking = bIsTalking;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_VoiceChatSource.BP_VoiceChatSource_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_VoiceChatSource_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VoiceChatSource.BP_VoiceChatSource_C.ReceiveTick");

	ABP_VoiceChatSource_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_VoiceChatSource.BP_VoiceChatSource_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<EEndPlayReason>    EndPlayReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_VoiceChatSource_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VoiceChatSource.BP_VoiceChatSource_C.ReceiveEndPlay");

	ABP_VoiceChatSource_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_VoiceChatSource.BP_VoiceChatSource_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_VoiceChatSource_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VoiceChatSource.BP_VoiceChatSource_C.ReceiveBeginPlay");

	ABP_VoiceChatSource_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_VoiceChatSource.BP_VoiceChatSource_C.ReceiveDestroyed
// (Event, Public, BlueprintEvent)

void ABP_VoiceChatSource_C::ReceiveDestroyed()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VoiceChatSource.BP_VoiceChatSource_C.ReceiveDestroyed");

	ABP_VoiceChatSource_C_ReceiveDestroyed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_VoiceChatSource.BP_VoiceChatSource_C.HandlePlayerChangedTeam
// (BlueprintCallable, BlueprintEvent)

void ABP_VoiceChatSource_C::HandlePlayerChangedTeam()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VoiceChatSource.BP_VoiceChatSource_C.HandlePlayerChangedTeam");

	ABP_VoiceChatSource_C_HandlePlayerChangedTeam_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_VoiceChatSource.BP_VoiceChatSource_C.HandlePlayerDied_Remote
// (BlueprintCallable, BlueprintEvent)

void ABP_VoiceChatSource_C::HandlePlayerDied_Remote()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VoiceChatSource.BP_VoiceChatSource_C.HandlePlayerDied_Remote");

	ABP_VoiceChatSource_C_HandlePlayerDied_Remote_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_VoiceChatSource.BP_VoiceChatSource_C.HandlePlayerRespawned_Remote
// (BlueprintCallable, BlueprintEvent)

void ABP_VoiceChatSource_C::HandlePlayerRespawned_Remote()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VoiceChatSource.BP_VoiceChatSource_C.HandlePlayerRespawned_Remote");

	ABP_VoiceChatSource_C_HandlePlayerRespawned_Remote_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_VoiceChatSource.BP_VoiceChatSource_C.ExecuteUbergraph_BP_VoiceChatSource
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_VoiceChatSource_C::ExecuteUbergraph_BP_VoiceChatSource(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VoiceChatSource.BP_VoiceChatSource_C.ExecuteUbergraph_BP_VoiceChatSource");

	ABP_VoiceChatSource_C_ExecuteUbergraph_BP_VoiceChatSource_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_VoiceChatSource.BP_VoiceChatSource_C.OnInitializeFailed__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ABP_VoiceChatSource_C::OnInitializeFailed__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VoiceChatSource.BP_VoiceChatSource_C.OnInitializeFailed__DelegateSignature");

	ABP_VoiceChatSource_C_OnInitializeFailed__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_VoiceChatSource.BP_VoiceChatSource_C.OnInitializeSuccess__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ABP_VoiceChatSource_C::OnInitializeSuccess__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VoiceChatSource.BP_VoiceChatSource_C.OnInitializeSuccess__DelegateSignature");

	ABP_VoiceChatSource_C_OnInitializeSuccess__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_VoiceChatSource.BP_VoiceChatSource_C.OnIsTalkingChanged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bNewStatus                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_VoiceChatSource_C::OnIsTalkingChanged__DelegateSignature(bool bNewStatus)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VoiceChatSource.BP_VoiceChatSource_C.OnIsTalkingChanged__DelegateSignature");

	ABP_VoiceChatSource_C_OnIsTalkingChanged__DelegateSignature_Params params;
	params.bNewStatus = bNewStatus;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
