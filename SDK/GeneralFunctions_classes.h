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

// BlueprintGeneratedClass GeneralFunctions.GeneralFunctions_C
// 0x0000 (0x0028 - 0x0028)
class UGeneralFunctions_C : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GeneralFunctions.GeneralFunctions_C");
		return ptr;
	}


	void STATIC_CheckIfTeamIsDefeated(int Team, class UObject* __WorldContext, bool* Defeated);
	void STATIC_GetMostCommonElementInActorArray(class UObject* __WorldContext, TArray<class AActor*>* Array, int* Index, int* AmountOfTimes, class AActor** Actor);
	void STATIC_GetScar(int Scar, class UObject* __WorldContext, class UTexture2D** RGB, class UTexture2D** Alpha);
	void STATIC_OwnAllCullingVolumes(class UObject* __WorldContext);
	void STATIC_GetLookAtWindDirection(class UObject* __WorldContext, struct FText* WindDirection, TEnumAsByte<E_WindDirections>* DirectionEnum);
	void STATIC_AddScore(class APlayerState* PlayerState, int ScoreAmount, TEnumAsByte<E_ScoreType> ScoreType, bool FromServer_, class ABP_Controller_C* Controller, class UObject* __WorldContext);
	void STATIC_CheckIfChildActorsAreReady(class UObject* __WorldContext, TArray<class UObject*>* ChildActors, bool* Ready);
	void STATIC_CheckIfCrewHasRoom(int TeamID, bool FromClient, class UObject* __WorldContext, bool* HasRoom, int* AvailableSlots, int* FilledSlots);
	void STATIC_CreateDistortionWave(const struct FVector& Location, float WaveSpeed, float WaveMaxRadius, bool AttachToActorComponent, class USceneComponent* AttachComponent, class UObject* __WorldContext);
	void STATIC_SetKeyBind(TEnumAsByte<E_Actions> Action, const struct FKey& Key, TEnumAsByte<E_KeybindCategories> Category, class UObject* __WorldContext, bool* Succesful_, TEnumAsByte<E_Actions>* ConflictingAction);
	void STATIC_GetKeyBind(TEnumAsByte<E_Actions> Action, class UObject* __WorldContext, struct FKey* Key);
	void STATIC_PostTopScreenMessage(class UClass* Widget, class UObject* __WorldContext);
	void STATIC_GetWaterHeight(const struct FVector& Location, class UObject* __WorldContext, float* WaterHeight);
	void STATIC_GetClothingInfo(int ClothingItemIndex, class UObject* __WorldContext, class UStaticMesh** StaticMesh, class USkeletalMesh** SkeletalMesh, class UTexture2D** Texture, struct FString* ClothingItemName, int* Price, class UTexture2D** Icon, TEnumAsByte<E_ClothingCategories>* Category);
	void STATIC_GetDatatableAmount(class UDataTable* DataTable, class UObject* __WorldContext, int* Amount);
	void STATIC_GetFaceInfo(int FaceIndex, class UObject* __WorldContext, class UTexture2D** FaceTexture, struct FString* FaceName);
	void STATIC_GetUpgradeInfo(int Upgrade, class UObject* __WorldContext, class UClass** UpgradeBlueprint);
	void STATIC_SortItems(class UObject* __WorldContext, TArray<struct FST_InventoryArray>* ItemArray, TArray<struct FST_InventoryArray>* SortedArray);
	struct FLinearColor STATIC_GetItemCategoryAndColor(TEnumAsByte<E_Items> Item, class UObject* __WorldContext, TEnumAsByte<E_ItemCategories>* Category);
	void STATIC_CheckIfInventoryHasItem(TEnumAsByte<E_Items> Item, class UInventory_C* InventoryRef, class UObject* __WorldContext, bool* HasItem, int* Amount);
	void STATIC_GetItemInfo(TEnumAsByte<E_Items> Item, class UObject* __WorldContext, class UTexture2D** Icon, int* Weight, class UClass** ItemObject, bool* throwable, TEnumAsByte<E_ItemCategories>* Category);
	void STATIC_FindCrew(int TeamID, class UObject* __WorldContext, int* TeamFirstName, int* TeamSecondaryNameRow, int* TeamSecondaryNameIndex, int* FlagColorRow, class ABP_Controller_C** LeaderControllerRed, struct FText* ShipName);
	void STATIC_GetCrewInfo(int FirstNameRow, int SecondaryNameRow, int SecondaryNameIndex, int ColorSetRow, class UObject* __WorldContext, struct FString* FirstName, struct FString* SecondaryName, struct FLinearColor* BaseColor, struct FLinearColor* AccentColor, class UTexture2D** emblem, struct FText* FullName);
	void STATIC_GenerateCrew(class UObject* __WorldContext, int* FirstCrewName, int* SecondaryCrewName, int* SecondaryCrewNameIndex, int* Colorset);
	void STATIC_CheckIfEnoughRoom(class ABP_Character_C* Character, TEnumAsByte<E_Items> Item, int Amount, class UObject* __WorldContext, bool* EnoughRoom);
	void STATIC_GetWeaponInfo(int ItemID, class UObject* __WorldContext, class UClass** WeaponClass, class UTexture2D** Icon, struct FText* Weapon_Name, TEnumAsByte<E_Items>* AmmoType, struct FVector* FPSOffset, float* AimZoomMultiplier, class UAnimMontage** ReloadAnimation, bool* HideCharacter, TEnumAsByte<E_Tiers>* Tier, struct FText* Description, int* ClipSize, struct FRotator* FPSOffsetRot);
	void STATIC_LeaveUIMode(class UObject* __WorldContext);
	void STATIC_EnterUIMode(bool EnableMouseCursor, bool DontDisableGameInput, bool CenterMouseCursor, class UObject* __WorldContext);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
