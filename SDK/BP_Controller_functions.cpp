
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

// Function BP_Controller.BP_Controller_C.PlaySoundAtLocation
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 Location                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class USoundBase*              Sound                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Volume                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Controller_C::PlaySoundAtLocation(const struct FVector& Location, class USoundBase* Sound, float Volume)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Controller.BP_Controller_C.PlaySoundAtLocation");

	ABP_Controller_C_PlaySoundAtLocation_Params params;
	params.Location = Location;
	params.Sound = Sound;
	params.Volume = Volume;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Controller.BP_Controller_C.InitAttractMode
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_Controller_C::InitAttractMode()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Controller.BP_Controller_C.InitAttractMode");

	ABP_Controller_C_InitAttractMode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Controller.BP_Controller_C.SwitchMenu
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_InGameInterfaces> Menu                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Controller_C::SwitchMenu(TEnumAsByte<E_InGameInterfaces> Menu)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Controller.BP_Controller_C.SwitchMenu");

	ABP_Controller_C_SwitchMenu_Params params;
	params.Menu = Menu;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Controller.BP_Controller_C.ShipDetect
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_Controller_C::ShipDetect()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Controller.BP_Controller_C.ShipDetect");

	ABP_Controller_C_ShipDetect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Controller.BP_Controller_C.SetPlayerName
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 PlayerName                     (Parm, OutParm, ZeroConstructor)

void ABP_Controller_C::SetPlayerName(struct FString* PlayerName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Controller.BP_Controller_C.SetPlayerName");

	ABP_Controller_C_SetPlayerName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PlayerName != nullptr)
		*PlayerName = params.PlayerName;
}


// Function BP_Controller.BP_Controller_C.ServerCleanUp
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_Controller_C::ServerCleanUp()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Controller.BP_Controller_C.ServerCleanUp");

	ABP_Controller_C_ServerCleanUp_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Controller.BP_Controller_C.RespawnCharacter
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_Controller_C::RespawnCharacter()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Controller.BP_Controller_C.RespawnCharacter");

	ABP_Controller_C_RespawnCharacter_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Controller.BP_Controller_C.OnRep_PlayerColor
// (BlueprintCallable, BlueprintEvent)

void ABP_Controller_C::OnRep_PlayerColor()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Controller.BP_Controller_C.OnRep_PlayerColor");

	ABP_Controller_C_OnRep_PlayerColor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Controller.BP_Controller_C.ApplyOptions
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_Controller_C::ApplyOptions()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Controller.BP_Controller_C.ApplyOptions");

	ABP_Controller_C_ApplyOptions_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Controller.BP_Controller_C.LerpToCameraSmoothly
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCameraComponent*        StartCameraRef                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UCameraComponent*        DestinationCameraRef           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void ABP_Controller_C::LerpToCameraSmoothly(class UCameraComponent* StartCameraRef, class UCameraComponent* DestinationCameraRef)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Controller.BP_Controller_C.LerpToCameraSmoothly");

	ABP_Controller_C_LerpToCameraSmoothly_Params params;
	params.StartCameraRef = StartCameraRef;
	params.DestinationCameraRef = DestinationCameraRef;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Controller.BP_Controller_C.SetTeamPlayerColor
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            TeamID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Controller_C::SetTeamPlayerColor(int TeamID)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Controller.BP_Controller_C.SetTeamPlayerColor");

	ABP_Controller_C_SetTeamPlayerColor_Params params;
	params.TeamID = TeamID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Controller.BP_Controller_C.CheckUnderWaterEffects
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_Controller_C::CheckUnderWaterEffects()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Controller.BP_Controller_C.CheckUnderWaterEffects");

	ABP_Controller_C_CheckUnderWaterEffects_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Controller.BP_Controller_C.OnRep_TeamID
// (BlueprintCallable, BlueprintEvent)

void ABP_Controller_C::OnRep_TeamID()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Controller.BP_Controller_C.OnRep_TeamID");

	ABP_Controller_C_OnRep_TeamID_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Controller.BP_Controller_C.CloseMenus
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           CloseWorldMap                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           CloseInGameMenu                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           CloseInventory                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           CloseContainer                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           CloseSpyglass                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           CloseCannonCHest               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           AnyMenuClosed                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_Controller_C::CloseMenus(bool CloseWorldMap, bool CloseInGameMenu, bool CloseInventory, bool CloseContainer, bool CloseSpyglass, bool CloseCannonCHest, bool* AnyMenuClosed)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Controller.BP_Controller_C.CloseMenus");

	ABP_Controller_C_CloseMenus_Params params;
	params.CloseWorldMap = CloseWorldMap;
	params.CloseInGameMenu = CloseInGameMenu;
	params.CloseInventory = CloseInventory;
	params.CloseContainer = CloseContainer;
	params.CloseSpyglass = CloseSpyglass;
	params.CloseCannonCHest = CloseCannonCHest;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AnyMenuClosed != nullptr)
		*AnyMenuClosed = params.AnyMenuClosed;
}


// Function BP_Controller.BP_Controller_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_Controller_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Controller.BP_Controller_C.UserConstructionScript");

	ABP_Controller_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Controller.BP_Controller_C.InpActEvt_SplitItem_K2Node_InputActionEvent_10
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_Controller_C::InpActEvt_SplitItem_K2Node_InputActionEvent_10(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Controller.BP_Controller_C.InpActEvt_SplitItem_K2Node_InputActionEvent_10");

	ABP_Controller_C_InpActEvt_SplitItem_K2Node_InputActionEvent_10_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Controller.BP_Controller_C.InpActEvt_SplitItem_K2Node_InputActionEvent_9
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_Controller_C::InpActEvt_SplitItem_K2Node_InputActionEvent_9(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Controller.BP_Controller_C.InpActEvt_SplitItem_K2Node_InputActionEvent_9");

	ABP_Controller_C_InpActEvt_SplitItem_K2Node_InputActionEvent_9_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Controller.BP_Controller_C.InpActEvt_V_K2Node_InputKeyEvent_8
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_Controller_C::InpActEvt_V_K2Node_InputKeyEvent_8(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Controller.BP_Controller_C.InpActEvt_V_K2Node_InputKeyEvent_8");

	ABP_Controller_C_InpActEvt_V_K2Node_InputKeyEvent_8_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Controller.BP_Controller_C.InpActEvt_V_K2Node_InputKeyEvent_7
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_Controller_C::InpActEvt_V_K2Node_InputKeyEvent_7(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Controller.BP_Controller_C.InpActEvt_V_K2Node_InputKeyEvent_7");

	ABP_Controller_C_InpActEvt_V_K2Node_InputKeyEvent_7_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Controller.BP_Controller_C.InpActEvt_IngameMenu_K2Node_InputActionEvent_8
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_Controller_C::InpActEvt_IngameMenu_K2Node_InputActionEvent_8(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Controller.BP_Controller_C.InpActEvt_IngameMenu_K2Node_InputActionEvent_8");

	ABP_Controller_C_InpActEvt_IngameMenu_K2Node_InputActionEvent_8_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Controller.BP_Controller_C.InpActEvt_SecondaryFire_K2Node_InputActionEvent_7
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_Controller_C::InpActEvt_SecondaryFire_K2Node_InputActionEvent_7(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Controller.BP_Controller_C.InpActEvt_SecondaryFire_K2Node_InputActionEvent_7");

	ABP_Controller_C_InpActEvt_SecondaryFire_K2Node_InputActionEvent_7_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Controller.BP_Controller_C.InpActEvt_MouseScrollDown_K2Node_InputKeyEvent_6
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_Controller_C::InpActEvt_MouseScrollDown_K2Node_InputKeyEvent_6(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Controller.BP_Controller_C.InpActEvt_MouseScrollDown_K2Node_InputKeyEvent_6");

	ABP_Controller_C_InpActEvt_MouseScrollDown_K2Node_InputKeyEvent_6_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Controller.BP_Controller_C.InpActEvt_MouseScrollUp_K2Node_InputKeyEvent_5
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_Controller_C::InpActEvt_MouseScrollUp_K2Node_InputKeyEvent_5(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Controller.BP_Controller_C.InpActEvt_MouseScrollUp_K2Node_InputKeyEvent_5");

	ABP_Controller_C_InpActEvt_MouseScrollUp_K2Node_InputKeyEvent_5_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Controller.BP_Controller_C.InpActEvt_PrimaryFire_K2Node_InputActionEvent_6
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_Controller_C::InpActEvt_PrimaryFire_K2Node_InputActionEvent_6(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Controller.BP_Controller_C.InpActEvt_PrimaryFire_K2Node_InputActionEvent_6");

	ABP_Controller_C_InpActEvt_PrimaryFire_K2Node_InputActionEvent_6_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Controller.BP_Controller_C.InpActEvt_PrimaryFire_K2Node_InputActionEvent_5
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_Controller_C::InpActEvt_PrimaryFire_K2Node_InputActionEvent_5(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Controller.BP_Controller_C.InpActEvt_PrimaryFire_K2Node_InputActionEvent_5");

	ABP_Controller_C_InpActEvt_PrimaryFire_K2Node_InputActionEvent_5_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Controller.BP_Controller_C.InpActEvt_Multiply_K2Node_InputKeyEvent_4
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_Controller_C::InpActEvt_Multiply_K2Node_InputKeyEvent_4(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Controller.BP_Controller_C.InpActEvt_Multiply_K2Node_InputKeyEvent_4");

	ABP_Controller_C_InpActEvt_Multiply_K2Node_InputKeyEvent_4_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Controller.BP_Controller_C.InpActEvt_WorldMap_K2Node_InputActionEvent_4
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_Controller_C::InpActEvt_WorldMap_K2Node_InputActionEvent_4(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Controller.BP_Controller_C.InpActEvt_WorldMap_K2Node_InputActionEvent_4");

	ABP_Controller_C_InpActEvt_WorldMap_K2Node_InputActionEvent_4_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Controller.BP_Controller_C.InpActEvt_EnterChatMessage_K2Node_InputActionEvent_3
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_Controller_C::InpActEvt_EnterChatMessage_K2Node_InputActionEvent_3(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Controller.BP_Controller_C.InpActEvt_EnterChatMessage_K2Node_InputActionEvent_3");

	ABP_Controller_C_InpActEvt_EnterChatMessage_K2Node_InputActionEvent_3_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Controller.BP_Controller_C.InpActEvt_BackSpace_K2Node_InputKeyEvent_3
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_Controller_C::InpActEvt_BackSpace_K2Node_InputKeyEvent_3(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Controller.BP_Controller_C.InpActEvt_BackSpace_K2Node_InputKeyEvent_3");

	ABP_Controller_C_InpActEvt_BackSpace_K2Node_InputKeyEvent_3_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Controller.BP_Controller_C.InpActEvt_MouseScrollDown_K2Node_InputKeyEvent_2
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_Controller_C::InpActEvt_MouseScrollDown_K2Node_InputKeyEvent_2(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Controller.BP_Controller_C.InpActEvt_MouseScrollDown_K2Node_InputKeyEvent_2");

	ABP_Controller_C_InpActEvt_MouseScrollDown_K2Node_InputKeyEvent_2_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Controller.BP_Controller_C.InpActEvt_MouseScrollUp_K2Node_InputKeyEvent_1
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_Controller_C::InpActEvt_MouseScrollUp_K2Node_InputKeyEvent_1(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Controller.BP_Controller_C.InpActEvt_MouseScrollUp_K2Node_InputKeyEvent_1");

	ABP_Controller_C_InpActEvt_MouseScrollUp_K2Node_InputKeyEvent_1_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Controller.BP_Controller_C.InpActEvt_Scoreboard_K2Node_InputActionEvent_2
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_Controller_C::InpActEvt_Scoreboard_K2Node_InputActionEvent_2(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Controller.BP_Controller_C.InpActEvt_Scoreboard_K2Node_InputActionEvent_2");

	ABP_Controller_C_InpActEvt_Scoreboard_K2Node_InputActionEvent_2_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Controller.BP_Controller_C.InpActEvt_Scoreboard_K2Node_InputActionEvent_1
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_Controller_C::InpActEvt_Scoreboard_K2Node_InputActionEvent_1(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Controller.BP_Controller_C.InpActEvt_Scoreboard_K2Node_InputActionEvent_1");

	ABP_Controller_C_InpActEvt_Scoreboard_K2Node_InputActionEvent_1_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Controller.BP_Controller_C.OnFailure_A78C3F8E4DD6BF4B1DA279B4A6FDF8F0
// (BlueprintCallable, BlueprintEvent)

void ABP_Controller_C::OnFailure_A78C3F8E4DD6BF4B1DA279B4A6FDF8F0()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Controller.BP_Controller_C.OnFailure_A78C3F8E4DD6BF4B1DA279B4A6FDF8F0");

	ABP_Controller_C_OnFailure_A78C3F8E4DD6BF4B1DA279B4A6FDF8F0_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Controller.BP_Controller_C.OnSuccess_A78C3F8E4DD6BF4B1DA279B4A6FDF8F0
// (BlueprintCallable, BlueprintEvent)

void ABP_Controller_C::OnSuccess_A78C3F8E4DD6BF4B1DA279B4A6FDF8F0()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Controller.BP_Controller_C.OnSuccess_A78C3F8E4DD6BF4B1DA279B4A6FDF8F0");

	ABP_Controller_C_OnSuccess_A78C3F8E4DD6BF4B1DA279B4A6FDF8F0_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Controller.BP_Controller_C.S_SetCharacterControllerRef
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)

void ABP_Controller_C::S_SetCharacterControllerRef()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Controller.BP_Controller_C.S_SetCharacterControllerRef");

	ABP_Controller_C_S_SetCharacterControllerRef_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Controller.BP_Controller_C.S_SetTeamID
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            TeamID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Controller_C::S_SetTeamID(int TeamID)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Controller.BP_Controller_C.S_SetTeamID");

	ABP_Controller_C_S_SetTeamID_Params params;
	params.TeamID = TeamID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Controller.BP_Controller_C.OC_CloseAllMenus
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)

void ABP_Controller_C::OC_CloseAllMenus()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Controller.BP_Controller_C.OC_CloseAllMenus");

	ABP_Controller_C_OC_CloseAllMenus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Controller.BP_Controller_C.SetDefeated
// (BlueprintCallable, BlueprintEvent)

void ABP_Controller_C::SetDefeated()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Controller.BP_Controller_C.SetDefeated");

	ABP_Controller_C_SetDefeated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Controller.BP_Controller_C.OC_WinningScreen
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            WinningTeam                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Controller_C::OC_WinningScreen(int WinningTeam)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Controller.BP_Controller_C.OC_WinningScreen");

	ABP_Controller_C_OC_WinningScreen_Params params;
	params.WinningTeam = WinningTeam;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Controller.BP_Controller_C.ParseTeamID
// (BlueprintCallable, BlueprintEvent)

void ABP_Controller_C::ParseTeamID()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Controller.BP_Controller_C.ParseTeamID");

	ABP_Controller_C_ParseTeamID_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Controller.BP_Controller_C.SetPlayerColor
// (BlueprintCallable, BlueprintEvent)

void ABP_Controller_C::SetPlayerColor()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Controller.BP_Controller_C.SetPlayerColor");

	ABP_Controller_C_SetPlayerColor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Controller.BP_Controller_C.RefreshPlayerColor
// (BlueprintCallable, BlueprintEvent)

void ABP_Controller_C::RefreshPlayerColor()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Controller.BP_Controller_C.RefreshPlayerColor");

	ABP_Controller_C_RefreshPlayerColor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Controller.BP_Controller_C.RefreshIDAndColor
// (BlueprintCallable, BlueprintEvent)

void ABP_Controller_C::RefreshIDAndColor()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Controller.BP_Controller_C.RefreshIDAndColor");

	ABP_Controller_C_RefreshIDAndColor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Controller.BP_Controller_C.S_AddGoldToTeam
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Amount                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Controller_C::S_AddGoldToTeam(int Amount)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Controller.BP_Controller_C.S_AddGoldToTeam");

	ABP_Controller_C_S_AddGoldToTeam_Params params;
	params.Amount = Amount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Controller.BP_Controller_C.S_VoiceLine
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   VoiceLineRowName               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Controller_C::S_VoiceLine(const struct FName& VoiceLineRowName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Controller.BP_Controller_C.S_VoiceLine");

	ABP_Controller_C_S_VoiceLine_Params params;
	params.VoiceLineRowName = VoiceLineRowName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Controller.BP_Controller_C.OC_LoadShipCustomisation
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)

void ABP_Controller_C::OC_LoadShipCustomisation()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Controller.BP_Controller_C.OC_LoadShipCustomisation");

	ABP_Controller_C_OC_LoadShipCustomisation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Controller.BP_Controller_C.S_LoadShipCustomisation
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            HullColor                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            SailColor                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            emblem                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            bowfigure                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            FlagColor                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            RopeColor                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            FlagEmblem                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            LampColor                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            SailEmblemBottom               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            SailColorBottom                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Controller_C::S_LoadShipCustomisation(int HullColor, int SailColor, int emblem, int bowfigure, int FlagColor, int RopeColor, int FlagEmblem, int LampColor, int SailEmblemBottom, int SailColorBottom)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Controller.BP_Controller_C.S_LoadShipCustomisation");

	ABP_Controller_C_S_LoadShipCustomisation_Params params;
	params.HullColor = HullColor;
	params.SailColor = SailColor;
	params.emblem = emblem;
	params.bowfigure = bowfigure;
	params.FlagColor = FlagColor;
	params.RopeColor = RopeColor;
	params.FlagEmblem = FlagEmblem;
	params.LampColor = LampColor;
	params.SailEmblemBottom = SailEmblemBottom;
	params.SailColorBottom = SailColorBottom;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Controller.BP_Controller_C.OC_AddScore
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Score                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Controller_C::OC_AddScore(int Score)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Controller.BP_Controller_C.OC_AddScore");

	ABP_Controller_C_OC_AddScore_Params params;
	params.Score = Score;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Controller.BP_Controller_C.AddScore
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Score                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Controller_C::AddScore(int Score)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Controller.BP_Controller_C.AddScore");

	ABP_Controller_C_AddScore_Params params;
	params.Score = Score;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Controller.BP_Controller_C.OC_CreateCrew
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)

void ABP_Controller_C::OC_CreateCrew()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Controller.BP_Controller_C.OC_CreateCrew");

	ABP_Controller_C_OC_CreateCrew_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Controller.BP_Controller_C.S_CreateCrew
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   ShipName                       (BlueprintVisible, BlueprintReadOnly, Parm)
// int                            teamColor                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            FlagEmblem                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Controller_C::S_CreateCrew(const struct FText& ShipName, int teamColor, int FlagEmblem)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Controller.BP_Controller_C.S_CreateCrew");

	ABP_Controller_C_S_CreateCrew_Params params;
	params.ShipName = ShipName;
	params.teamColor = teamColor;
	params.FlagEmblem = FlagEmblem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Controller.BP_Controller_C.SetTeamID
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            TeamID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Controller_C::SetTeamID(int TeamID)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Controller.BP_Controller_C.SetTeamID");

	ABP_Controller_C_SetTeamID_Params params;
	params.TeamID = TeamID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Controller.BP_Controller_C.OC_CloseTeamMenu
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)

void ABP_Controller_C::OC_CloseTeamMenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Controller.BP_Controller_C.OC_CloseTeamMenu");

	ABP_Controller_C_OC_CloseTeamMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Controller.BP_Controller_C.SetSelectedSpawnPoint
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_BoatSpawn_C*         SpawnPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Controller_C::SetSelectedSpawnPoint(class ABP_BoatSpawn_C* SpawnPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Controller.BP_Controller_C.SetSelectedSpawnPoint");

	ABP_Controller_C_SetSelectedSpawnPoint_Params params;
	params.SpawnPoint = SpawnPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Controller.BP_Controller_C.S_SetSelectedSpawnPoint
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_BoatSpawn_C*         SpawnPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Controller_C::S_SetSelectedSpawnPoint(class ABP_BoatSpawn_C* SpawnPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Controller.BP_Controller_C.S_SetSelectedSpawnPoint");

	ABP_Controller_C_S_SetSelectedSpawnPoint_Params params;
	params.SpawnPoint = SpawnPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Controller.BP_Controller_C.DamageCannonBlockChain
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            DamageAmount                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class ABP_VehicleCannon_C*     Cannonref                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Controller_C::DamageCannonBlockChain(int DamageAmount, class ABP_VehicleCannon_C* Cannonref)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Controller.BP_Controller_C.DamageCannonBlockChain");

	ABP_Controller_C_DamageCannonBlockChain_Params params;
	params.DamageAmount = DamageAmount;
	params.Cannonref = Cannonref;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Controller.BP_Controller_C.S_DamageCannonBlockChain
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            DamageAmount                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class ABP_VehicleCannon_C*     Cannonref                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Controller_C::S_DamageCannonBlockChain(int DamageAmount, class ABP_VehicleCannon_C* Cannonref)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Controller.BP_Controller_C.S_DamageCannonBlockChain");

	ABP_Controller_C_S_DamageCannonBlockChain_Params params;
	params.DamageAmount = DamageAmount;
	params.Cannonref = Cannonref;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Controller.BP_Controller_C.S_SetFairIndex
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Controller_C::S_SetFairIndex(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Controller.BP_Controller_C.S_SetFairIndex");

	ABP_Controller_C_S_SetFairIndex_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Controller.BP_Controller_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_Controller_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Controller.BP_Controller_C.ReceiveBeginPlay");

	ABP_Controller_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Controller.BP_Controller_C.LeaveIngameMenu
// (BlueprintCallable, BlueprintEvent)

void ABP_Controller_C::LeaveIngameMenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Controller.BP_Controller_C.LeaveIngameMenu");

	ABP_Controller_C_LeaveIngameMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Controller.BP_Controller_C.OC_RemoveAllWidgets
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)

void ABP_Controller_C::OC_RemoveAllWidgets()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Controller.BP_Controller_C.OC_RemoveAllWidgets");

	ABP_Controller_C_OC_RemoveAllWidgets_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Controller.BP_Controller_C.OC_RemoveSpawnScreen
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)

void ABP_Controller_C::OC_RemoveSpawnScreen()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Controller.BP_Controller_C.OC_RemoveSpawnScreen");

	ABP_Controller_C_OC_RemoveSpawnScreen_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Controller.BP_Controller_C.RefreshHUD
// (BlueprintCallable, BlueprintEvent)

void ABP_Controller_C::RefreshHUD()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Controller.BP_Controller_C.RefreshHUD");

	ABP_Controller_C_RefreshHUD_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Controller.BP_Controller_C.OC_PrepareForBattle
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)

void ABP_Controller_C::OC_PrepareForBattle()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Controller.BP_Controller_C.OC_PrepareForBattle");

	ABP_Controller_C_OC_PrepareForBattle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Controller.BP_Controller_C.OC_RemoveCustomWidget
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)

void ABP_Controller_C::OC_RemoveCustomWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Controller.BP_Controller_C.OC_RemoveCustomWidget");

	ABP_Controller_C_OC_RemoveCustomWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Controller.BP_Controller_C.OC_AddCustomWidget
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Controller_C::OC_AddCustomWidget(class UClass* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Controller.BP_Controller_C.OC_AddCustomWidget");

	ABP_Controller_C_OC_AddCustomWidget_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Controller.BP_Controller_C.OC_RefreshHUD
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)

void ABP_Controller_C::OC_RefreshHUD()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Controller.BP_Controller_C.OC_RefreshHUD");

	ABP_Controller_C_OC_RefreshHUD_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Controller.BP_Controller_C.CloseInGameMenu
// (BlueprintCallable, BlueprintEvent)

void ABP_Controller_C::CloseInGameMenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Controller.BP_Controller_C.CloseInGameMenu");

	ABP_Controller_C_CloseInGameMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Controller.BP_Controller_C.OpenInGameMenu
// (BlueprintCallable, BlueprintEvent)

void ABP_Controller_C::OpenInGameMenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Controller.BP_Controller_C.OpenInGameMenu");

	ABP_Controller_C_OpenInGameMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Controller.BP_Controller_C.OC_InterruptInteraction
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)

void ABP_Controller_C::OC_InterruptInteraction()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Controller.BP_Controller_C.OC_InterruptInteraction");

	ABP_Controller_C_OC_InterruptInteraction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Controller.BP_Controller_C.OC_StopLocalInteract
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)

void ABP_Controller_C::OC_StopLocalInteract()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Controller.BP_Controller_C.OC_StopLocalInteract");

	ABP_Controller_C_OC_StopLocalInteract_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Controller.BP_Controller_C.LeaveVehicle
// (BlueprintCallable, BlueprintEvent)

void ABP_Controller_C::LeaveVehicle()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Controller.BP_Controller_C.LeaveVehicle");

	ABP_Controller_C_LeaveVehicle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Controller.BP_Controller_C.OC_ReturnToCharacter
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsDead                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Controller_C::OC_ReturnToCharacter(bool IsDead)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Controller.BP_Controller_C.OC_ReturnToCharacter");

	ABP_Controller_C_OC_ReturnToCharacter_Params params;
	params.IsDead = IsDead;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Controller.BP_Controller_C.S_LockVehicle
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_VehicleBase_C*       VehicleRef                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Controller_C::S_LockVehicle(class ABP_VehicleBase_C* VehicleRef)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Controller.BP_Controller_C.S_LockVehicle");

	ABP_Controller_C_S_LockVehicle_Params params;
	params.VehicleRef = VehicleRef;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Controller.BP_Controller_C.InteractReleased
// (BlueprintCallable, BlueprintEvent)

void ABP_Controller_C::InteractReleased()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Controller.BP_Controller_C.InteractReleased");

	ABP_Controller_C_InteractReleased_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Controller.BP_Controller_C.InteractPressed
// (BlueprintCallable, BlueprintEvent)

void ABP_Controller_C::InteractPressed()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Controller.BP_Controller_C.InteractPressed");

	ABP_Controller_C_InteractPressed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Controller.BP_Controller_C.LocalVehicleEject
// (BlueprintCallable, BlueprintEvent)

void ABP_Controller_C::LocalVehicleEject()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Controller.BP_Controller_C.LocalVehicleEject");

	ABP_Controller_C_LocalVehicleEject_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Controller.BP_Controller_C.S_EngageFromServer
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_InteractableBase_C*  Interactable                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Controller_C::S_EngageFromServer(class ABP_InteractableBase_C* Interactable)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Controller.BP_Controller_C.S_EngageFromServer");

	ABP_Controller_C_S_EngageFromServer_Params params;
	params.Interactable = Interactable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Controller.BP_Controller_C.S_StopInteract
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_InteractableBase_C*  InteractableRef                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Controller_C::S_StopInteract(class ABP_InteractableBase_C* InteractableRef)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Controller.BP_Controller_C.S_StopInteract");

	ABP_Controller_C_S_StopInteract_Params params;
	params.InteractableRef = InteractableRef;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Controller.BP_Controller_C.EnterVehicle
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_VehicleBase_C*       VehicleRef                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Controller_C::EnterVehicle(class ABP_VehicleBase_C* VehicleRef)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Controller.BP_Controller_C.EnterVehicle");

	ABP_Controller_C_EnterVehicle_Params params;
	params.VehicleRef = VehicleRef;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Controller.BP_Controller_C.S_LeaveVehicle
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)

void ABP_Controller_C::S_LeaveVehicle()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Controller.BP_Controller_C.S_LeaveVehicle");

	ABP_Controller_C_S_LeaveVehicle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Controller.BP_Controller_C.S_EnterVehicle
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_VehicleBase_C*       VehicleRef                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Controller_C::S_EnterVehicle(class ABP_VehicleBase_C* VehicleRef)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Controller.BP_Controller_C.S_EnterVehicle");

	ABP_Controller_C_S_EnterVehicle_Params params;
	params.VehicleRef = VehicleRef;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Controller.BP_Controller_C.S_Interact
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_InteractableBase_C*  InteractableRef                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Controller_C::S_Interact(class ABP_InteractableBase_C* InteractableRef)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Controller.BP_Controller_C.S_Interact");

	ABP_Controller_C_S_Interact_Params params;
	params.InteractableRef = InteractableRef;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Controller.BP_Controller_C.OpenWorldMap
// (BlueprintCallable, BlueprintEvent)

void ABP_Controller_C::OpenWorldMap()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Controller.BP_Controller_C.OpenWorldMap");

	ABP_Controller_C_OpenWorldMap_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Controller.BP_Controller_C.S_RemoveMarker
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)

void ABP_Controller_C::S_RemoveMarker()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Controller.BP_Controller_C.S_RemoveMarker");

	ABP_Controller_C_S_RemoveMarker_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Controller.BP_Controller_C.S_LeaveMapCamera
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)

void ABP_Controller_C::S_LeaveMapCamera()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Controller.BP_Controller_C.S_LeaveMapCamera");

	ABP_Controller_C_S_LeaveMapCamera_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Controller.BP_Controller_C.S_EnterMapCamera
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)

void ABP_Controller_C::S_EnterMapCamera()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Controller.BP_Controller_C.S_EnterMapCamera");

	ABP_Controller_C_S_EnterMapCamera_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Controller.BP_Controller_C.CloseWorldMap
// (BlueprintCallable, BlueprintEvent)

void ABP_Controller_C::CloseWorldMap()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Controller.BP_Controller_C.CloseWorldMap");

	ABP_Controller_C_CloseWorldMap_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Controller.BP_Controller_C.EnterSpectatorCam
// (BlueprintCallable, BlueprintEvent)

void ABP_Controller_C::EnterSpectatorCam()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Controller.BP_Controller_C.EnterSpectatorCam");

	ABP_Controller_C_EnterSpectatorCam_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Controller.BP_Controller_C.SwitchToDefeatScreen
// (BlueprintCallable, BlueprintEvent)

void ABP_Controller_C::SwitchToDefeatScreen()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Controller.BP_Controller_C.SwitchToDefeatScreen");

	ABP_Controller_C_SwitchToDefeatScreen_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Controller.BP_Controller_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<EEndPlayReason>    EndPlayReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Controller_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Controller.BP_Controller_C.ReceiveEndPlay");

	ABP_Controller_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Controller.BP_Controller_C.ReceiveDestroyed
// (Event, Public, BlueprintEvent)

void ABP_Controller_C::ReceiveDestroyed()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Controller.BP_Controller_C.ReceiveDestroyed");

	ABP_Controller_C_ReceiveDestroyed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Controller.BP_Controller_C.S_MidGameSpawn
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)

void ABP_Controller_C::S_MidGameSpawn()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Controller.BP_Controller_C.S_MidGameSpawn");

	ABP_Controller_C_S_MidGameSpawn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Controller.BP_Controller_C.OC_DeathEffect
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)

void ABP_Controller_C::OC_DeathEffect()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Controller.BP_Controller_C.OC_DeathEffect");

	ABP_Controller_C_OC_DeathEffect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Controller.BP_Controller_C.OC_RemoveDeathScreen
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)

void ABP_Controller_C::OC_RemoveDeathScreen()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Controller.BP_Controller_C.OC_RemoveDeathScreen");

	ABP_Controller_C_OC_RemoveDeathScreen_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Controller.BP_Controller_C.OC_CharacterDeath
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 KillerPlayerName               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// float                          RespawnTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           headshot                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Defeated                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Controller_C::OC_CharacterDeath(const struct FString& KillerPlayerName, float RespawnTime, bool headshot, bool Defeated)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Controller.BP_Controller_C.OC_CharacterDeath");

	ABP_Controller_C_OC_CharacterDeath_Params params;
	params.KillerPlayerName = KillerPlayerName;
	params.RespawnTime = RespawnTime;
	params.headshot = headshot;
	params.Defeated = Defeated;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Controller.BP_Controller_C.CharacterDeath
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 KillerPlayerName               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// bool                           headshot                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class ABP_Character_C*         KillerCharacterRef             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            AttackerTeamID                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Controller_C::CharacterDeath(const struct FString& KillerPlayerName, bool headshot, class ABP_Character_C* KillerCharacterRef, int AttackerTeamID)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Controller.BP_Controller_C.CharacterDeath");

	ABP_Controller_C_CharacterDeath_Params params;
	params.KillerPlayerName = KillerPlayerName;
	params.headshot = headshot;
	params.KillerCharacterRef = KillerCharacterRef;
	params.AttackerTeamID = AttackerTeamID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Controller.BP_Controller_C.Respawn
// (BlueprintCallable, BlueprintEvent)

void ABP_Controller_C::Respawn()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Controller.BP_Controller_C.Respawn");

	ABP_Controller_C_Respawn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Controller.BP_Controller_C.OverRideCullingOwnerPlayer
// (BlueprintCallable, BlueprintEvent)

void ABP_Controller_C::OverRideCullingOwnerPlayer()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Controller.BP_Controller_C.OverRideCullingOwnerPlayer");

	ABP_Controller_C_OverRideCullingOwnerPlayer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Controller.BP_Controller_C.OverRideCullingOwnerVehicle
// (BlueprintCallable, BlueprintEvent)

void ABP_Controller_C::OverRideCullingOwnerVehicle()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Controller.BP_Controller_C.OverRideCullingOwnerVehicle");

	ABP_Controller_C_OverRideCullingOwnerVehicle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Controller.BP_Controller_C.S_SetBannedPlayerList
// (Net, NetReliable, NetServer, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FST_BanListEntry> BannedPlayerList               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void ABP_Controller_C::S_SetBannedPlayerList(TArray<struct FST_BanListEntry> BannedPlayerList)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Controller.BP_Controller_C.S_SetBannedPlayerList");

	ABP_Controller_C_S_SetBannedPlayerList_Params params;
	params.BannedPlayerList = BannedPlayerList;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Controller.BP_Controller_C.Resetkeys
// (BlueprintCallable, BlueprintEvent)

void ABP_Controller_C::Resetkeys()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Controller.BP_Controller_C.Resetkeys");

	ABP_Controller_C_Resetkeys_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Controller.BP_Controller_C.ResetCharacterKeys
// (BlueprintCallable, BlueprintEvent)

void ABP_Controller_C::ResetCharacterKeys()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Controller.BP_Controller_C.ResetCharacterKeys");

	ABP_Controller_C_ResetCharacterKeys_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Controller.BP_Controller_C.LoadKeys
// (BlueprintCallable, BlueprintEvent)

void ABP_Controller_C::LoadKeys()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Controller.BP_Controller_C.LoadKeys");

	ABP_Controller_C_LoadKeys_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Controller.BP_Controller_C.OC_SyncGameTime
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)

void ABP_Controller_C::OC_SyncGameTime()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Controller.BP_Controller_C.OC_SyncGameTime");

	ABP_Controller_C_OC_SyncGameTime_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Controller.BP_Controller_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Controller_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Controller.BP_Controller_C.ReceiveTick");

	ABP_Controller_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Controller.BP_Controller_C.UpdateBoatTrail
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Speed                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UMaterialInstanceDynamic* TrailDynMat                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Controller_C::UpdateBoatTrail(float Speed, class UMaterialInstanceDynamic* TrailDynMat)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Controller.BP_Controller_C.UpdateBoatTrail");

	ABP_Controller_C_UpdateBoatTrail_Params params;
	params.Speed = Speed;
	params.TrailDynMat = TrailDynMat;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Controller.BP_Controller_C.RemoveWaterCullingVolume
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_BoatMeshBase_C*      BoatMeshBaseRef                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Controller_C::RemoveWaterCullingVolume(class ABP_BoatMeshBase_C* BoatMeshBaseRef)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Controller.BP_Controller_C.RemoveWaterCullingVolume");

	ABP_Controller_C_RemoveWaterCullingVolume_Params params;
	params.BoatMeshBaseRef = BoatMeshBaseRef;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Controller.BP_Controller_C.OC_CreateAndAddWaterCullingVolume
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_BoatMeshBase_C*      BoatMeshBaseRef                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Controller_C::OC_CreateAndAddWaterCullingVolume(class ABP_BoatMeshBase_C* BoatMeshBaseRef)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Controller.BP_Controller_C.OC_CreateAndAddWaterCullingVolume");

	ABP_Controller_C_OC_CreateAndAddWaterCullingVolume_Params params;
	params.BoatMeshBaseRef = BoatMeshBaseRef;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Controller.BP_Controller_C.OC_AddNewChatMessage
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FST_SimpleMessage       ChatMessage                    (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           TeamChat                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           FormatText                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           FullColorMessage               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Controller_C::OC_AddNewChatMessage(const struct FST_SimpleMessage& ChatMessage, bool TeamChat, bool FormatText, bool FullColorMessage)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Controller.BP_Controller_C.OC_AddNewChatMessage");

	ABP_Controller_C_OC_AddNewChatMessage_Params params;
	params.ChatMessage = ChatMessage;
	params.TeamChat = TeamChat;
	params.FormatText = FormatText;
	params.FullColorMessage = FullColorMessage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Controller.BP_Controller_C.S_AddNewChatMessage
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FST_SimpleMessage       ChatMessage                    (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           TeamChat                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           FormatText                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Controller_C::S_AddNewChatMessage(const struct FST_SimpleMessage& ChatMessage, bool TeamChat, bool FormatText)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Controller.BP_Controller_C.S_AddNewChatMessage");

	ABP_Controller_C_S_AddNewChatMessage_Params params;
	params.ChatMessage = ChatMessage;
	params.TeamChat = TeamChat;
	params.FormatText = FormatText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Controller.BP_Controller_C.CloseChat
// (BlueprintCallable, BlueprintEvent)

void ABP_Controller_C::CloseChat()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Controller.BP_Controller_C.CloseChat");

	ABP_Controller_C_CloseChat_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Controller.BP_Controller_C.OC_HitIndicator
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           headshot                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            DamageAmount                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsLow                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 HitLocation                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Controller_C::OC_HitIndicator(bool headshot, int DamageAmount, bool IsLow, const struct FVector& HitLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Controller.BP_Controller_C.OC_HitIndicator");

	ABP_Controller_C_OC_HitIndicator_Params params;
	params.headshot = headshot;
	params.DamageAmount = DamageAmount;
	params.IsLow = IsLow;
	params.HitLocation = HitLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Controller.BP_Controller_C.DamageSelf
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            DamageAmount                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Controller_C::DamageSelf(int DamageAmount)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Controller.BP_Controller_C.DamageSelf");

	ABP_Controller_C_DamageSelf_Params params;
	params.DamageAmount = DamageAmount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Controller.BP_Controller_C.S_CreateRandomHullDamage
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_BoatMeshBase_C*      BoatRef                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            DamageAmount                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Controller_C::S_CreateRandomHullDamage(class ABP_BoatMeshBase_C* BoatRef, int DamageAmount)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Controller.BP_Controller_C.S_CreateRandomHullDamage");

	ABP_Controller_C_S_CreateRandomHullDamage_Params params;
	params.BoatRef = BoatRef;
	params.DamageAmount = DamageAmount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Controller.BP_Controller_C.CreateRandomHullDamage
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_BoatMeshBase_C*      BoatRef                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            DamageAmount                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Controller_C::CreateRandomHullDamage(class ABP_BoatMeshBase_C* BoatRef, int DamageAmount)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Controller.BP_Controller_C.CreateRandomHullDamage");

	ABP_Controller_C_CreateRandomHullDamage_Params params;
	params.BoatRef = BoatRef;
	params.DamageAmount = DamageAmount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Controller.BP_Controller_C.S_DamageHull
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            DamageAmount                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<E_DamageType>      DamageType                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 RelativeLocation               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ImpactNormal                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class ABP_BoatMeshBase_C*      BoatRef                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Controller_C::S_DamageHull(int DamageAmount, TEnumAsByte<E_DamageType> DamageType, const struct FVector& RelativeLocation, const struct FVector& ImpactNormal, class ABP_BoatMeshBase_C* BoatRef)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Controller.BP_Controller_C.S_DamageHull");

	ABP_Controller_C_S_DamageHull_Params params;
	params.DamageAmount = DamageAmount;
	params.DamageType = DamageType;
	params.RelativeLocation = RelativeLocation;
	params.ImpactNormal = ImpactNormal;
	params.BoatRef = BoatRef;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Controller.BP_Controller_C.S_DamageSail
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_MastBase_C*          MastRef                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            damage                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Controller_C::S_DamageSail(class ABP_MastBase_C* MastRef, int damage)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Controller.BP_Controller_C.S_DamageSail");

	ABP_Controller_C_S_DamageSail_Params params;
	params.MastRef = MastRef;
	params.damage = damage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Controller.BP_Controller_C.DamageHull
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            DamageAmount                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<E_DamageType>      DamageType                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 RelativeLocation               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ImpactNormal                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class ABP_BoatMeshBase_C*      BoatRef                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ActualDamageLocation           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Controller_C::DamageHull(int DamageAmount, TEnumAsByte<E_DamageType> DamageType, const struct FVector& RelativeLocation, const struct FVector& ImpactNormal, class ABP_BoatMeshBase_C* BoatRef, const struct FVector& ActualDamageLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Controller.BP_Controller_C.DamageHull");

	ABP_Controller_C_DamageHull_Params params;
	params.DamageAmount = DamageAmount;
	params.DamageType = DamageType;
	params.RelativeLocation = RelativeLocation;
	params.ImpactNormal = ImpactNormal;
	params.BoatRef = BoatRef;
	params.ActualDamageLocation = ActualDamageLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Controller.BP_Controller_C.DamageSail
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            damage                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class ABP_MastBase_C*          MastRef                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 DamageLocation                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Controller_C::DamageSail(int damage, class ABP_MastBase_C* MastRef, const struct FVector& DamageLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Controller.BP_Controller_C.DamageSail");

	ABP_Controller_C_DamageSail_Params params;
	params.damage = damage;
	params.MastRef = MastRef;
	params.DamageLocation = DamageLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Controller.BP_Controller_C.DamagePlayer
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            DamageAmount                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class ABP_Character_C*         PlayerToDamageRef              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           headshot                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 DamageLocation                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           DamageOwnTeamAlso              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Controller_C::DamagePlayer(int DamageAmount, class ABP_Character_C* PlayerToDamageRef, bool headshot, const struct FVector& DamageLocation, bool DamageOwnTeamAlso)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Controller.BP_Controller_C.DamagePlayer");

	ABP_Controller_C_DamagePlayer_Params params;
	params.DamageAmount = DamageAmount;
	params.PlayerToDamageRef = PlayerToDamageRef;
	params.headshot = headshot;
	params.DamageLocation = DamageLocation;
	params.DamageOwnTeamAlso = DamageOwnTeamAlso;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Controller.BP_Controller_C.S_DamagePlayer
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            DamageAmount                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class ABP_Character_C*         PlayerRef                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           headshot                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           SelfDamage                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Controller_C::S_DamagePlayer(int DamageAmount, class ABP_Character_C* PlayerRef, bool headshot, bool SelfDamage)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Controller.BP_Controller_C.S_DamagePlayer");

	ABP_Controller_C_S_DamagePlayer_Params params;
	params.DamageAmount = DamageAmount;
	params.PlayerRef = PlayerRef;
	params.headshot = headshot;
	params.SelfDamage = SelfDamage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Controller.BP_Controller_C.AddKill
// (BlueprintCallable, BlueprintEvent)

void ABP_Controller_C::AddKill()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Controller.BP_Controller_C.AddKill");

	ABP_Controller_C_AddKill_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Controller.BP_Controller_C.S_DestroyCharacter
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)

void ABP_Controller_C::S_DestroyCharacter()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Controller.BP_Controller_C.S_DestroyCharacter");

	ABP_Controller_C_S_DestroyCharacter_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Controller.BP_Controller_C.HitIndicator
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           headshot                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            DamageAmount                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsLow                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 HitLocation                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Controller_C::HitIndicator(bool headshot, int DamageAmount, bool IsLow, const struct FVector& HitLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Controller.BP_Controller_C.HitIndicator");

	ABP_Controller_C_HitIndicator_Params params;
	params.headshot = headshot;
	params.DamageAmount = DamageAmount;
	params.IsLow = IsLow;
	params.HitLocation = HitLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Controller.BP_Controller_C.OC_KillInfo
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 PlayerName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void ABP_Controller_C::OC_KillInfo(const struct FString& PlayerName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Controller.BP_Controller_C.OC_KillInfo");

	ABP_Controller_C_OC_KillInfo_Params params;
	params.PlayerName = PlayerName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Controller.BP_Controller_C.OC_DamageEffects
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)

void ABP_Controller_C::OC_DamageEffects()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Controller.BP_Controller_C.OC_DamageEffects");

	ABP_Controller_C_OC_DamageEffects_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Controller.BP_Controller_C.OC_SpectatorCam
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)

void ABP_Controller_C::OC_SpectatorCam()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Controller.BP_Controller_C.OC_SpectatorCam");

	ABP_Controller_C_OC_SpectatorCam_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Controller.BP_Controller_C.OC_Teleport
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 Location                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Controller_C::OC_Teleport(const struct FVector& Location)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Controller.BP_Controller_C.OC_Teleport");

	ABP_Controller_C_OC_Teleport_Params params;
	params.Location = Location;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Controller.BP_Controller_C.S_PossesPlayer
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 Location                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Controller_C::S_PossesPlayer(const struct FVector& Location)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Controller.BP_Controller_C.S_PossesPlayer");

	ABP_Controller_C_S_PossesPlayer_Params params;
	params.Location = Location;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Controller.BP_Controller_C.S_SpawnSpectatorCam
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)

void ABP_Controller_C::S_SpawnSpectatorCam()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Controller.BP_Controller_C.S_SpawnSpectatorCam");

	ABP_Controller_C_S_SpawnSpectatorCam_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Controller.BP_Controller_C.S_PlaceMarker
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 Location                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Controller_C::S_PlaceMarker(const struct FVector& Location)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Controller.BP_Controller_C.S_PlaceMarker");

	ABP_Controller_C_S_PlaceMarker_Params params;
	params.Location = Location;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Controller.BP_Controller_C.PlaceMarker
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 Location                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            PlayerId                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            TeamID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            TeamPlayerColor                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Controller_C::PlaceMarker(const struct FVector& Location, int PlayerId, int TeamID, int TeamPlayerColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Controller.BP_Controller_C.PlaceMarker");

	ABP_Controller_C_PlaceMarker_Params params;
	params.Location = Location;
	params.PlayerId = PlayerId;
	params.TeamID = TeamID;
	params.TeamPlayerColor = TeamPlayerColor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Controller.BP_Controller_C.MC_ActivateInteractable
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_InteractableBase_C*  Interactable                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Controller_C::MC_ActivateInteractable(class ABP_InteractableBase_C* Interactable)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Controller.BP_Controller_C.MC_ActivateInteractable");

	ABP_Controller_C_MC_ActivateInteractable_Params params;
	params.Interactable = Interactable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Controller.BP_Controller_C.S_ActivateInteractable
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_InteractableBase_C*  Interactable                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Controller_C::S_ActivateInteractable(class ABP_InteractableBase_C* Interactable)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Controller.BP_Controller_C.S_ActivateInteractable");

	ABP_Controller_C_S_ActivateInteractable_Params params;
	params.Interactable = Interactable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Controller.BP_Controller_C.ActivateInteractable
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_InteractableBase_C*  Interactable                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Controller_C::ActivateInteractable(class ABP_InteractableBase_C* Interactable)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Controller.BP_Controller_C.ActivateInteractable");

	ABP_Controller_C_ActivateInteractable_Params params;
	params.Interactable = Interactable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Controller.BP_Controller_C.OpenCommandWheel
// (BlueprintCallable, BlueprintEvent)

void ABP_Controller_C::OpenCommandWheel()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Controller.BP_Controller_C.OpenCommandWheel");

	ABP_Controller_C_OpenCommandWheel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Controller.BP_Controller_C.CommandWheelReleased
// (BlueprintCallable, BlueprintEvent)

void ABP_Controller_C::CommandWheelReleased()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Controller.BP_Controller_C.CommandWheelReleased");

	ABP_Controller_C_CommandWheelReleased_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Controller.BP_Controller_C.CommandWheelPressed
// (BlueprintCallable, BlueprintEvent)

void ABP_Controller_C::CommandWheelPressed()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Controller.BP_Controller_C.CommandWheelPressed");

	ABP_Controller_C_CommandWheelPressed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Controller.BP_Controller_C.CloseCommandWheel
// (BlueprintCallable, BlueprintEvent)

void ABP_Controller_C::CloseCommandWheel()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Controller.BP_Controller_C.CloseCommandWheel");

	ABP_Controller_C_CloseCommandWheel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Controller.BP_Controller_C.S_ToggleModerator
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            PlayerId                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Controller_C::S_ToggleModerator(int PlayerId)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Controller.BP_Controller_C.S_ToggleModerator");

	ABP_Controller_C_S_ToggleModerator_Params params;
	params.PlayerId = PlayerId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Controller.BP_Controller_C.S_UpdateBanList
// (Net, NetReliable, NetServer, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FST_BanListEntry> Banlist                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void ABP_Controller_C::S_UpdateBanList(TArray<struct FST_BanListEntry> Banlist)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Controller.BP_Controller_C.S_UpdateBanList");

	ABP_Controller_C_S_UpdateBanList_Params params;
	params.Banlist = Banlist;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Controller.BP_Controller_C.OC_AddPlayerToBanList
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 UniqueNetId                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FText                   UserName                       (BlueprintVisible, BlueprintReadOnly, Parm)
// int                            PlayerId                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Controller_C::OC_AddPlayerToBanList(const struct FString& UniqueNetId, const struct FText& UserName, int PlayerId)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Controller.BP_Controller_C.OC_AddPlayerToBanList");

	ABP_Controller_C_OC_AddPlayerToBanList_Params params;
	params.UniqueNetId = UniqueNetId;
	params.UserName = UserName;
	params.PlayerId = PlayerId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Controller.BP_Controller_C.S_KickPlayer
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            PlayerId                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           AddToBanList                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   UserName                       (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_Controller_C::S_KickPlayer(int PlayerId, bool AddToBanList, const struct FText& UserName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Controller.BP_Controller_C.S_KickPlayer");

	ABP_Controller_C_S_KickPlayer_Params params;
	params.PlayerId = PlayerId;
	params.AddToBanList = AddToBanList;
	params.UserName = UserName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Controller.BP_Controller_C.OC_LeaveGame
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)

void ABP_Controller_C::OC_LeaveGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Controller.BP_Controller_C.OC_LeaveGame");

	ABP_Controller_C_OC_LeaveGame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Controller.BP_Controller_C.S_CommandAction
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  ActionClass                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   Information                    (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_Controller_C::S_CommandAction(class UClass* ActionClass, const struct FText& Information)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Controller.BP_Controller_C.S_CommandAction");

	ABP_Controller_C_S_CommandAction_Params params;
	params.ActionClass = ActionClass;
	params.Information = Information;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Controller.BP_Controller_C.CommandAction
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ServerCommand                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UClass*                  ActionClass                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   Information                    (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_Controller_C::CommandAction(bool ServerCommand, class UClass* ActionClass, const struct FText& Information)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Controller.BP_Controller_C.CommandAction");

	ABP_Controller_C_CommandAction_Params params;
	params.ServerCommand = ServerCommand;
	params.ActionClass = ActionClass;
	params.Information = Information;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Controller.BP_Controller_C.OC_BroadcastAnnouncement
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   Message                        (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           NotificationSound              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Controller_C::OC_BroadcastAnnouncement(const struct FText& Message, bool NotificationSound)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Controller.BP_Controller_C.OC_BroadcastAnnouncement");

	ABP_Controller_C_OC_BroadcastAnnouncement_Params params;
	params.Message = Message;
	params.NotificationSound = NotificationSound;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Controller.BP_Controller_C.PostTopScreenMessage
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Controller_C::PostTopScreenMessage(class UClass* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Controller.BP_Controller_C.PostTopScreenMessage");

	ABP_Controller_C_PostTopScreenMessage_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Controller.BP_Controller_C.ExecuteUbergraph_BP_Controller
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Controller_C::ExecuteUbergraph_BP_Controller(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Controller.BP_Controller_C.ExecuteUbergraph_BP_Controller");

	ABP_Controller_C_ExecuteUbergraph_BP_Controller_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
