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

// Function GeneralFunctions.GeneralFunctions_C.CheckIfTeamIsDefeated
struct UGeneralFunctions_C_CheckIfTeamIsDefeated_Params
{
	int                                                Team;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Defeated;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function GeneralFunctions.GeneralFunctions_C.GetMostCommonElementInActorArray
struct UGeneralFunctions_C_GetMostCommonElementInActorArray_Params
{
	TArray<class AActor*>                              Array;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Index;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                AmountOfTimes;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Actor;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function GeneralFunctions.GeneralFunctions_C.GetScar
struct UGeneralFunctions_C_GetScar_Params
{
	int                                                Scar;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  RGB;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  Alpha;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function GeneralFunctions.GeneralFunctions_C.OwnAllCullingVolumes
struct UGeneralFunctions_C_OwnAllCullingVolumes_Params
{
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GeneralFunctions.GeneralFunctions_C.GetLookAtWindDirection
struct UGeneralFunctions_C_GetLookAtWindDirection_Params
{
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       WindDirection;                                            // (Parm, OutParm)
	TEnumAsByte<E_WindDirections>                      DirectionEnum;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function GeneralFunctions.GeneralFunctions_C.AddScore
struct UGeneralFunctions_C_AddScore_Params
{
	class APlayerState*                                PlayerState;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ScoreAmount;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<E_ScoreType>                           ScoreType;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               FromServer_;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class ABP_Controller_C*                            Controller;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GeneralFunctions.GeneralFunctions_C.CheckIfChildActorsAreReady
struct UGeneralFunctions_C_CheckIfChildActorsAreReady_Params
{
	TArray<class UObject*>                             ChildActors;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Ready;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function GeneralFunctions.GeneralFunctions_C.CheckIfCrewHasRoom
struct UGeneralFunctions_C_CheckIfCrewHasRoom_Params
{
	int                                                TeamID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               FromClient;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               HasRoom;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                AvailableSlots;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                FilledSlots;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function GeneralFunctions.GeneralFunctions_C.CreateDistortionWave
struct UGeneralFunctions_C_CreateDistortionWave_Params
{
	struct FVector                                     Location;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              WaveSpeed;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              WaveMaxRadius;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               AttachToActorComponent;                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             AttachComponent;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GeneralFunctions.GeneralFunctions_C.SetKeyBind
struct UGeneralFunctions_C_SetKeyBind_Params
{
	TEnumAsByte<E_Actions>                             Action;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
	TEnumAsByte<E_KeybindCategories>                   Category;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Succesful_;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<E_Actions>                             ConflictingAction;                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function GeneralFunctions.GeneralFunctions_C.GetKeyBind
struct UGeneralFunctions_C_GetKeyBind_Params
{
	TEnumAsByte<E_Actions>                             Action;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FKey                                        Key;                                                      // (Parm, OutParm)
};

// Function GeneralFunctions.GeneralFunctions_C.PostTopScreenMessage
struct UGeneralFunctions_C_PostTopScreenMessage_Params
{
	class UClass*                                      Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GeneralFunctions.GeneralFunctions_C.GetWaterHeight
struct UGeneralFunctions_C_GetWaterHeight_Params
{
	struct FVector                                     Location;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              WaterHeight;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function GeneralFunctions.GeneralFunctions_C.GetClothingInfo
struct UGeneralFunctions_C_GetClothingInfo_Params
{
	int                                                ClothingItemIndex;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UStaticMesh*                                 StaticMesh;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class USkeletalMesh*                               SkeletalMesh;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  Texture;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ClothingItemName;                                         // (Parm, OutParm, ZeroConstructor)
	int                                                Price;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  Icon;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<E_ClothingCategories>                  Category;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function GeneralFunctions.GeneralFunctions_C.GetDatatableAmount
struct UGeneralFunctions_C_GetDatatableAmount_Params
{
	class UDataTable*                                  DataTable;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Amount;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function GeneralFunctions.GeneralFunctions_C.GetFaceInfo
struct UGeneralFunctions_C_GetFaceInfo_Params
{
	int                                                FaceIndex;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  FaceTexture;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FString                                     FaceName;                                                 // (Parm, OutParm, ZeroConstructor)
};

// Function GeneralFunctions.GeneralFunctions_C.GetUpgradeInfo
struct UGeneralFunctions_C_GetUpgradeInfo_Params
{
	int                                                Upgrade;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      UpgradeBlueprint;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function GeneralFunctions.GeneralFunctions_C.SortItems
struct UGeneralFunctions_C_SortItems_Params
{
	TArray<struct FST_InventoryArray>                  ItemArray;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FST_InventoryArray>                  SortedArray;                                              // (Parm, OutParm, ZeroConstructor)
};

// Function GeneralFunctions.GeneralFunctions_C.GetItemCategoryAndColor
struct UGeneralFunctions_C_GetItemCategoryAndColor_Params
{
	TEnumAsByte<E_Items>                               Item;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<E_ItemCategories>                      Category;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GeneralFunctions.GeneralFunctions_C.CheckIfInventoryHasItem
struct UGeneralFunctions_C_CheckIfInventoryHasItem_Params
{
	TEnumAsByte<E_Items>                               Item;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UInventory_C*                                InventoryRef;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               HasItem;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                Amount;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function GeneralFunctions.GeneralFunctions_C.GetItemInfo
struct UGeneralFunctions_C_GetItemInfo_Params
{
	TEnumAsByte<E_Items>                               Item;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  Icon;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                Weight;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      ItemObject;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               throwable;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<E_ItemCategories>                      Category;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function GeneralFunctions.GeneralFunctions_C.FindCrew
struct UGeneralFunctions_C_FindCrew_Params
{
	int                                                TeamID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                TeamFirstName;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                TeamSecondaryNameRow;                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                TeamSecondaryNameIndex;                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                FlagColorRow;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class ABP_Controller_C*                            LeaderControllerRed;                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FText                                       ShipName;                                                 // (Parm, OutParm)
};

// Function GeneralFunctions.GeneralFunctions_C.GetCrewInfo
struct UGeneralFunctions_C_GetCrewInfo_Params
{
	int                                                FirstNameRow;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                SecondaryNameRow;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                SecondaryNameIndex;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ColorSetRow;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     FirstName;                                                // (Parm, OutParm, ZeroConstructor)
	struct FString                                     SecondaryName;                                            // (Parm, OutParm, ZeroConstructor)
	struct FLinearColor                                BaseColor;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                AccentColor;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  emblem;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FText                                       FullName;                                                 // (Parm, OutParm)
};

// Function GeneralFunctions.GeneralFunctions_C.GenerateCrew
struct UGeneralFunctions_C_GenerateCrew_Params
{
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                FirstCrewName;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                SecondaryCrewName;                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                SecondaryCrewNameIndex;                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                Colorset;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function GeneralFunctions.GeneralFunctions_C.CheckIfEnoughRoom
struct UGeneralFunctions_C_CheckIfEnoughRoom_Params
{
	class ABP_Character_C*                             Character;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<E_Items>                               Item;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Amount;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               EnoughRoom;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function GeneralFunctions.GeneralFunctions_C.GetWeaponInfo
struct UGeneralFunctions_C_GetWeaponInfo_Params
{
	int                                                ItemID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      WeaponClass;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  Icon;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FText                                       Weapon_Name;                                              // (Parm, OutParm)
	TEnumAsByte<E_Items>                               AmmoType;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     FPSOffset;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              AimZoomMultiplier;                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                ReloadAnimation;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               HideCharacter;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<E_Tiers>                               Tier;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FText                                       Description;                                              // (Parm, OutParm)
	int                                                ClipSize;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    FPSOffsetRot;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function GeneralFunctions.GeneralFunctions_C.LeaveUIMode
struct UGeneralFunctions_C_LeaveUIMode_Params
{
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GeneralFunctions.GeneralFunctions_C.EnterUIMode
struct UGeneralFunctions_C_EnterUIMode_Params
{
	bool                                               EnableMouseCursor;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               DontDisableGameInput;                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               CenterMouseCursor;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
