#pragma once

#include "../SDK.h"

// Name: BlazingSails, Version: 1.481.81

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function BP_GameInstance.BP_GameInstance_C.LoadOptions
struct UBP_GameInstance_C_LoadOptions_Params
{
};

// Function BP_GameInstance.BP_GameInstance_C.SaveOptions
struct UBP_GameInstance_C_SaveOptions_Params
{
};

// Function BP_GameInstance.BP_GameInstance_C.LoadBanList
struct UBP_GameInstance_C_LoadBanList_Params
{
};

// Function BP_GameInstance.BP_GameInstance_C.SaveBanList
struct UBP_GameInstance_C_SaveBanList_Params
{
};

// Function BP_GameInstance.BP_GameInstance_C.CheckIfPlayerHasItemUnlocked
struct UBP_GameInstance_C_CheckIfPlayerHasItemUnlocked_Params
{
	int                                                ItemIndex;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<E_ClothingCategories>                  ClothingCategory;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               HasItem;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_GameInstance.BP_GameInstance_C.AddUsedCode
struct UBP_GameInstance_C_AddUsedCode_Params
{
	struct FText                                       Code;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_GameInstance.BP_GameInstance_C.RemoveGold
struct UBP_GameInstance_C_RemoveGold_Params
{
	int                                                GoldAmount;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_GameInstance.BP_GameInstance_C.AddScore
struct UBP_GameInstance_C_AddScore_Params
{
	int                                                Score;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_GameInstance.BP_GameInstance_C.AddGold
struct UBP_GameInstance_C_AddGold_Params
{
	int                                                GoldAmount;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_GameInstance.BP_GameInstance_C.SpawnActor
struct UBP_GameInstance_C_SpawnActor_Params
{
	class UClass*                                      ActorClass;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FTransform                                  Transform;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	class AActor*                                      Actor;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_GameInstance.BP_GameInstance_C.SaveData
struct UBP_GameInstance_C_SaveData_Params
{
};

// Function BP_GameInstance.BP_GameInstance_C.LoadData
struct UBP_GameInstance_C_LoadData_Params
{
};

// Function BP_GameInstance.BP_GameInstance_C.ReceiveShutdown
struct UBP_GameInstance_C_ReceiveShutdown_Params
{
};

// Function BP_GameInstance.BP_GameInstance_C.UpdateSessionPlayerAmount
struct UBP_GameInstance_C_UpdateSessionPlayerAmount_Params
{
	int                                                PlayerAmount;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_GameInstance.BP_GameInstance_C.ReceiveInit
struct UBP_GameInstance_C_ReceiveInit_Params
{
};

// Function BP_GameInstance.BP_GameInstance_C.ResetKeysAzerty
struct UBP_GameInstance_C_ResetKeysAzerty_Params
{
};

// Function BP_GameInstance.BP_GameInstance_C.ResetKeysQuerty
struct UBP_GameInstance_C_ResetKeysQuerty_Params
{
};

// Function BP_GameInstance.BP_GameInstance_C.AddCustomPlayerStateData_2
struct UBP_GameInstance_C_AddCustomPlayerStateData_2_Params
{
	class ASteamBeaconPlayerState*                     InPlayerState;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_GameInstance.BP_GameInstance_C.ExecuteUbergraph_BP_GameInstance
struct UBP_GameInstance_C_ExecuteUbergraph_BP_GameInstance_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
