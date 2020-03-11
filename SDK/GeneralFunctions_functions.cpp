
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

// Function GeneralFunctions.GeneralFunctions_C.CheckIfTeamIsDefeated
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Team                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Defeated                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UGeneralFunctions_C::STATIC_CheckIfTeamIsDefeated(int Team, class UObject* __WorldContext, bool* Defeated)
{
	static auto fn = UObject::FindObject<UFunction>("Function GeneralFunctions.GeneralFunctions_C.CheckIfTeamIsDefeated");

	UGeneralFunctions_C_CheckIfTeamIsDefeated_Params params;
	params.Team = Team;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Defeated != nullptr)
		*Defeated = params.Defeated;
}


// Function GeneralFunctions.GeneralFunctions_C.GetMostCommonElementInActorArray
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class AActor*>          Array                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Index                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            AmountOfTimes                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class AActor*                  Actor                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UGeneralFunctions_C::STATIC_GetMostCommonElementInActorArray(class UObject* __WorldContext, TArray<class AActor*>* Array, int* Index, int* AmountOfTimes, class AActor** Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function GeneralFunctions.GeneralFunctions_C.GetMostCommonElementInActorArray");

	UGeneralFunctions_C_GetMostCommonElementInActorArray_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Array != nullptr)
		*Array = params.Array;
	if (Index != nullptr)
		*Index = params.Index;
	if (AmountOfTimes != nullptr)
		*AmountOfTimes = params.AmountOfTimes;
	if (Actor != nullptr)
		*Actor = params.Actor;
}


// Function GeneralFunctions.GeneralFunctions_C.GetScar
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Scar                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UTexture2D*              RGB                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class UTexture2D*              Alpha                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UGeneralFunctions_C::STATIC_GetScar(int Scar, class UObject* __WorldContext, class UTexture2D** RGB, class UTexture2D** Alpha)
{
	static auto fn = UObject::FindObject<UFunction>("Function GeneralFunctions.GeneralFunctions_C.GetScar");

	UGeneralFunctions_C_GetScar_Params params;
	params.Scar = Scar;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (RGB != nullptr)
		*RGB = params.RGB;
	if (Alpha != nullptr)
		*Alpha = params.Alpha;
}


// Function GeneralFunctions.GeneralFunctions_C.OwnAllCullingVolumes
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGeneralFunctions_C::STATIC_OwnAllCullingVolumes(class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function GeneralFunctions.GeneralFunctions_C.OwnAllCullingVolumes");

	UGeneralFunctions_C_OwnAllCullingVolumes_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GeneralFunctions.GeneralFunctions_C.GetLookAtWindDirection
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   WindDirection                  (Parm, OutParm)
// TEnumAsByte<E_WindDirections>  DirectionEnum                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UGeneralFunctions_C::STATIC_GetLookAtWindDirection(class UObject* __WorldContext, struct FText* WindDirection, TEnumAsByte<E_WindDirections>* DirectionEnum)
{
	static auto fn = UObject::FindObject<UFunction>("Function GeneralFunctions.GeneralFunctions_C.GetLookAtWindDirection");

	UGeneralFunctions_C_GetLookAtWindDirection_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (WindDirection != nullptr)
		*WindDirection = params.WindDirection;
	if (DirectionEnum != nullptr)
		*DirectionEnum = params.DirectionEnum;
}


// Function GeneralFunctions.GeneralFunctions_C.AddScore
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerState*            PlayerState                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            ScoreAmount                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<E_ScoreType>       ScoreType                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           FromServer_                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class ABP_Controller_C*        Controller                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGeneralFunctions_C::STATIC_AddScore(class APlayerState* PlayerState, int ScoreAmount, TEnumAsByte<E_ScoreType> ScoreType, bool FromServer_, class ABP_Controller_C* Controller, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function GeneralFunctions.GeneralFunctions_C.AddScore");

	UGeneralFunctions_C_AddScore_Params params;
	params.PlayerState = PlayerState;
	params.ScoreAmount = ScoreAmount;
	params.ScoreType = ScoreType;
	params.FromServer_ = FromServer_;
	params.Controller = Controller;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GeneralFunctions.GeneralFunctions_C.CheckIfChildActorsAreReady
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UObject*>         ChildActors                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Ready                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UGeneralFunctions_C::STATIC_CheckIfChildActorsAreReady(class UObject* __WorldContext, TArray<class UObject*>* ChildActors, bool* Ready)
{
	static auto fn = UObject::FindObject<UFunction>("Function GeneralFunctions.GeneralFunctions_C.CheckIfChildActorsAreReady");

	UGeneralFunctions_C_CheckIfChildActorsAreReady_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ChildActors != nullptr)
		*ChildActors = params.ChildActors;
	if (Ready != nullptr)
		*Ready = params.Ready;
}


// Function GeneralFunctions.GeneralFunctions_C.CheckIfCrewHasRoom
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            TeamID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           FromClient                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           HasRoom                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            AvailableSlots                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            FilledSlots                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UGeneralFunctions_C::STATIC_CheckIfCrewHasRoom(int TeamID, bool FromClient, class UObject* __WorldContext, bool* HasRoom, int* AvailableSlots, int* FilledSlots)
{
	static auto fn = UObject::FindObject<UFunction>("Function GeneralFunctions.GeneralFunctions_C.CheckIfCrewHasRoom");

	UGeneralFunctions_C_CheckIfCrewHasRoom_Params params;
	params.TeamID = TeamID;
	params.FromClient = FromClient;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (HasRoom != nullptr)
		*HasRoom = params.HasRoom;
	if (AvailableSlots != nullptr)
		*AvailableSlots = params.AvailableSlots;
	if (FilledSlots != nullptr)
		*FilledSlots = params.FilledSlots;
}


// Function GeneralFunctions.GeneralFunctions_C.CreateDistortionWave
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 Location                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          WaveSpeed                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          WaveMaxRadius                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           AttachToActorComponent         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class USceneComponent*         AttachComponent                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGeneralFunctions_C::STATIC_CreateDistortionWave(const struct FVector& Location, float WaveSpeed, float WaveMaxRadius, bool AttachToActorComponent, class USceneComponent* AttachComponent, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function GeneralFunctions.GeneralFunctions_C.CreateDistortionWave");

	UGeneralFunctions_C_CreateDistortionWave_Params params;
	params.Location = Location;
	params.WaveSpeed = WaveSpeed;
	params.WaveMaxRadius = WaveMaxRadius;
	params.AttachToActorComponent = AttachToActorComponent;
	params.AttachComponent = AttachComponent;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GeneralFunctions.GeneralFunctions_C.SetKeyBind
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_Actions>         Action                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)
// TEnumAsByte<E_KeybindCategories> Category                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Succesful_                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<E_Actions>         ConflictingAction              (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UGeneralFunctions_C::STATIC_SetKeyBind(TEnumAsByte<E_Actions> Action, const struct FKey& Key, TEnumAsByte<E_KeybindCategories> Category, class UObject* __WorldContext, bool* Succesful_, TEnumAsByte<E_Actions>* ConflictingAction)
{
	static auto fn = UObject::FindObject<UFunction>("Function GeneralFunctions.GeneralFunctions_C.SetKeyBind");

	UGeneralFunctions_C_SetKeyBind_Params params;
	params.Action = Action;
	params.Key = Key;
	params.Category = Category;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Succesful_ != nullptr)
		*Succesful_ = params.Succesful_;
	if (ConflictingAction != nullptr)
		*ConflictingAction = params.ConflictingAction;
}


// Function GeneralFunctions.GeneralFunctions_C.GetKeyBind
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_Actions>         Action                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FKey                    Key                            (Parm, OutParm)

void UGeneralFunctions_C::STATIC_GetKeyBind(TEnumAsByte<E_Actions> Action, class UObject* __WorldContext, struct FKey* Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function GeneralFunctions.GeneralFunctions_C.GetKeyBind");

	UGeneralFunctions_C_GetKeyBind_Params params;
	params.Action = Action;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Key != nullptr)
		*Key = params.Key;
}


// Function GeneralFunctions.GeneralFunctions_C.PostTopScreenMessage
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGeneralFunctions_C::STATIC_PostTopScreenMessage(class UClass* Widget, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function GeneralFunctions.GeneralFunctions_C.PostTopScreenMessage");

	UGeneralFunctions_C_PostTopScreenMessage_Params params;
	params.Widget = Widget;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GeneralFunctions.GeneralFunctions_C.GetWaterHeight
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 Location                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          WaterHeight                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UGeneralFunctions_C::STATIC_GetWaterHeight(const struct FVector& Location, class UObject* __WorldContext, float* WaterHeight)
{
	static auto fn = UObject::FindObject<UFunction>("Function GeneralFunctions.GeneralFunctions_C.GetWaterHeight");

	UGeneralFunctions_C_GetWaterHeight_Params params;
	params.Location = Location;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (WaterHeight != nullptr)
		*WaterHeight = params.WaterHeight;
}


// Function GeneralFunctions.GeneralFunctions_C.GetClothingInfo
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ClothingItemIndex              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UStaticMesh*             StaticMesh                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class USkeletalMesh*           SkeletalMesh                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class UTexture2D*              Texture                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FString                 ClothingItemName               (Parm, OutParm, ZeroConstructor)
// int                            Price                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class UTexture2D*              Icon                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<E_ClothingCategories> Category                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UGeneralFunctions_C::STATIC_GetClothingInfo(int ClothingItemIndex, class UObject* __WorldContext, class UStaticMesh** StaticMesh, class USkeletalMesh** SkeletalMesh, class UTexture2D** Texture, struct FString* ClothingItemName, int* Price, class UTexture2D** Icon, TEnumAsByte<E_ClothingCategories>* Category)
{
	static auto fn = UObject::FindObject<UFunction>("Function GeneralFunctions.GeneralFunctions_C.GetClothingInfo");

	UGeneralFunctions_C_GetClothingInfo_Params params;
	params.ClothingItemIndex = ClothingItemIndex;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (StaticMesh != nullptr)
		*StaticMesh = params.StaticMesh;
	if (SkeletalMesh != nullptr)
		*SkeletalMesh = params.SkeletalMesh;
	if (Texture != nullptr)
		*Texture = params.Texture;
	if (ClothingItemName != nullptr)
		*ClothingItemName = params.ClothingItemName;
	if (Price != nullptr)
		*Price = params.Price;
	if (Icon != nullptr)
		*Icon = params.Icon;
	if (Category != nullptr)
		*Category = params.Category;
}


// Function GeneralFunctions.GeneralFunctions_C.GetDatatableAmount
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UDataTable*              DataTable                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Amount                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UGeneralFunctions_C::STATIC_GetDatatableAmount(class UDataTable* DataTable, class UObject* __WorldContext, int* Amount)
{
	static auto fn = UObject::FindObject<UFunction>("Function GeneralFunctions.GeneralFunctions_C.GetDatatableAmount");

	UGeneralFunctions_C_GetDatatableAmount_Params params;
	params.DataTable = DataTable;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Amount != nullptr)
		*Amount = params.Amount;
}


// Function GeneralFunctions.GeneralFunctions_C.GetFaceInfo
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            FaceIndex                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UTexture2D*              FaceTexture                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FString                 FaceName                       (Parm, OutParm, ZeroConstructor)

void UGeneralFunctions_C::STATIC_GetFaceInfo(int FaceIndex, class UObject* __WorldContext, class UTexture2D** FaceTexture, struct FString* FaceName)
{
	static auto fn = UObject::FindObject<UFunction>("Function GeneralFunctions.GeneralFunctions_C.GetFaceInfo");

	UGeneralFunctions_C_GetFaceInfo_Params params;
	params.FaceIndex = FaceIndex;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (FaceTexture != nullptr)
		*FaceTexture = params.FaceTexture;
	if (FaceName != nullptr)
		*FaceName = params.FaceName;
}


// Function GeneralFunctions.GeneralFunctions_C.GetUpgradeInfo
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Upgrade                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UClass*                  UpgradeBlueprint               (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UGeneralFunctions_C::STATIC_GetUpgradeInfo(int Upgrade, class UObject* __WorldContext, class UClass** UpgradeBlueprint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GeneralFunctions.GeneralFunctions_C.GetUpgradeInfo");

	UGeneralFunctions_C_GetUpgradeInfo_Params params;
	params.Upgrade = Upgrade;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (UpgradeBlueprint != nullptr)
		*UpgradeBlueprint = params.UpgradeBlueprint;
}


// Function GeneralFunctions.GeneralFunctions_C.SortItems
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FST_InventoryArray> ItemArray                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FST_InventoryArray> SortedArray                    (Parm, OutParm, ZeroConstructor)

void UGeneralFunctions_C::STATIC_SortItems(class UObject* __WorldContext, TArray<struct FST_InventoryArray>* ItemArray, TArray<struct FST_InventoryArray>* SortedArray)
{
	static auto fn = UObject::FindObject<UFunction>("Function GeneralFunctions.GeneralFunctions_C.SortItems");

	UGeneralFunctions_C_SortItems_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ItemArray != nullptr)
		*ItemArray = params.ItemArray;
	if (SortedArray != nullptr)
		*SortedArray = params.SortedArray;
}


// Function GeneralFunctions.GeneralFunctions_C.GetItemCategoryAndColor
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_Items>           Item                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<E_ItemCategories>  Category                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FLinearColor UGeneralFunctions_C::STATIC_GetItemCategoryAndColor(TEnumAsByte<E_Items> Item, class UObject* __WorldContext, TEnumAsByte<E_ItemCategories>* Category)
{
	static auto fn = UObject::FindObject<UFunction>("Function GeneralFunctions.GeneralFunctions_C.GetItemCategoryAndColor");

	UGeneralFunctions_C_GetItemCategoryAndColor_Params params;
	params.Item = Item;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Category != nullptr)
		*Category = params.Category;

	return params.ReturnValue;
}


// Function GeneralFunctions.GeneralFunctions_C.CheckIfInventoryHasItem
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_Items>           Item                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UInventory_C*            InventoryRef                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           HasItem                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            Amount                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UGeneralFunctions_C::STATIC_CheckIfInventoryHasItem(TEnumAsByte<E_Items> Item, class UInventory_C* InventoryRef, class UObject* __WorldContext, bool* HasItem, int* Amount)
{
	static auto fn = UObject::FindObject<UFunction>("Function GeneralFunctions.GeneralFunctions_C.CheckIfInventoryHasItem");

	UGeneralFunctions_C_CheckIfInventoryHasItem_Params params;
	params.Item = Item;
	params.InventoryRef = InventoryRef;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (HasItem != nullptr)
		*HasItem = params.HasItem;
	if (Amount != nullptr)
		*Amount = params.Amount;
}


// Function GeneralFunctions.GeneralFunctions_C.GetItemInfo
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_Items>           Item                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UTexture2D*              Icon                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            Weight                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class UClass*                  ItemObject                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           throwable                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<E_ItemCategories>  Category                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UGeneralFunctions_C::STATIC_GetItemInfo(TEnumAsByte<E_Items> Item, class UObject* __WorldContext, class UTexture2D** Icon, int* Weight, class UClass** ItemObject, bool* throwable, TEnumAsByte<E_ItemCategories>* Category)
{
	static auto fn = UObject::FindObject<UFunction>("Function GeneralFunctions.GeneralFunctions_C.GetItemInfo");

	UGeneralFunctions_C_GetItemInfo_Params params;
	params.Item = Item;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Icon != nullptr)
		*Icon = params.Icon;
	if (Weight != nullptr)
		*Weight = params.Weight;
	if (ItemObject != nullptr)
		*ItemObject = params.ItemObject;
	if (throwable != nullptr)
		*throwable = params.throwable;
	if (Category != nullptr)
		*Category = params.Category;
}


// Function GeneralFunctions.GeneralFunctions_C.FindCrew
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            TeamID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            TeamFirstName                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            TeamSecondaryNameRow           (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            TeamSecondaryNameIndex         (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            FlagColorRow                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class ABP_Controller_C*        LeaderControllerRed            (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FText                   ShipName                       (Parm, OutParm)

void UGeneralFunctions_C::STATIC_FindCrew(int TeamID, class UObject* __WorldContext, int* TeamFirstName, int* TeamSecondaryNameRow, int* TeamSecondaryNameIndex, int* FlagColorRow, class ABP_Controller_C** LeaderControllerRed, struct FText* ShipName)
{
	static auto fn = UObject::FindObject<UFunction>("Function GeneralFunctions.GeneralFunctions_C.FindCrew");

	UGeneralFunctions_C_FindCrew_Params params;
	params.TeamID = TeamID;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (TeamFirstName != nullptr)
		*TeamFirstName = params.TeamFirstName;
	if (TeamSecondaryNameRow != nullptr)
		*TeamSecondaryNameRow = params.TeamSecondaryNameRow;
	if (TeamSecondaryNameIndex != nullptr)
		*TeamSecondaryNameIndex = params.TeamSecondaryNameIndex;
	if (FlagColorRow != nullptr)
		*FlagColorRow = params.FlagColorRow;
	if (LeaderControllerRed != nullptr)
		*LeaderControllerRed = params.LeaderControllerRed;
	if (ShipName != nullptr)
		*ShipName = params.ShipName;
}


// Function GeneralFunctions.GeneralFunctions_C.GetCrewInfo
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            FirstNameRow                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            SecondaryNameRow               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            SecondaryNameIndex             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            ColorSetRow                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 FirstName                      (Parm, OutParm, ZeroConstructor)
// struct FString                 SecondaryName                  (Parm, OutParm, ZeroConstructor)
// struct FLinearColor            BaseColor                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor            AccentColor                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class UTexture2D*              emblem                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FText                   FullName                       (Parm, OutParm)

void UGeneralFunctions_C::STATIC_GetCrewInfo(int FirstNameRow, int SecondaryNameRow, int SecondaryNameIndex, int ColorSetRow, class UObject* __WorldContext, struct FString* FirstName, struct FString* SecondaryName, struct FLinearColor* BaseColor, struct FLinearColor* AccentColor, class UTexture2D** emblem, struct FText* FullName)
{
	static auto fn = UObject::FindObject<UFunction>("Function GeneralFunctions.GeneralFunctions_C.GetCrewInfo");

	UGeneralFunctions_C_GetCrewInfo_Params params;
	params.FirstNameRow = FirstNameRow;
	params.SecondaryNameRow = SecondaryNameRow;
	params.SecondaryNameIndex = SecondaryNameIndex;
	params.ColorSetRow = ColorSetRow;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (FirstName != nullptr)
		*FirstName = params.FirstName;
	if (SecondaryName != nullptr)
		*SecondaryName = params.SecondaryName;
	if (BaseColor != nullptr)
		*BaseColor = params.BaseColor;
	if (AccentColor != nullptr)
		*AccentColor = params.AccentColor;
	if (emblem != nullptr)
		*emblem = params.emblem;
	if (FullName != nullptr)
		*FullName = params.FullName;
}


// Function GeneralFunctions.GeneralFunctions_C.GenerateCrew
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            FirstCrewName                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            SecondaryCrewName              (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            SecondaryCrewNameIndex         (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            Colorset                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UGeneralFunctions_C::STATIC_GenerateCrew(class UObject* __WorldContext, int* FirstCrewName, int* SecondaryCrewName, int* SecondaryCrewNameIndex, int* Colorset)
{
	static auto fn = UObject::FindObject<UFunction>("Function GeneralFunctions.GeneralFunctions_C.GenerateCrew");

	UGeneralFunctions_C_GenerateCrew_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (FirstCrewName != nullptr)
		*FirstCrewName = params.FirstCrewName;
	if (SecondaryCrewName != nullptr)
		*SecondaryCrewName = params.SecondaryCrewName;
	if (SecondaryCrewNameIndex != nullptr)
		*SecondaryCrewNameIndex = params.SecondaryCrewNameIndex;
	if (Colorset != nullptr)
		*Colorset = params.Colorset;
}


// Function GeneralFunctions.GeneralFunctions_C.CheckIfEnoughRoom
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_Character_C*         Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<E_Items>           Item                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Amount                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           EnoughRoom                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UGeneralFunctions_C::STATIC_CheckIfEnoughRoom(class ABP_Character_C* Character, TEnumAsByte<E_Items> Item, int Amount, class UObject* __WorldContext, bool* EnoughRoom)
{
	static auto fn = UObject::FindObject<UFunction>("Function GeneralFunctions.GeneralFunctions_C.CheckIfEnoughRoom");

	UGeneralFunctions_C_CheckIfEnoughRoom_Params params;
	params.Character = Character;
	params.Item = Item;
	params.Amount = Amount;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (EnoughRoom != nullptr)
		*EnoughRoom = params.EnoughRoom;
}


// Function GeneralFunctions.GeneralFunctions_C.GetWeaponInfo
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ItemID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UClass*                  WeaponClass                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class UTexture2D*              Icon                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FText                   Weapon_Name                    (Parm, OutParm)
// TEnumAsByte<E_Items>           AmmoType                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FVector                 FPSOffset                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          AimZoomMultiplier              (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class UAnimMontage*            ReloadAnimation                (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           HideCharacter                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<E_Tiers>           Tier                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FText                   Description                    (Parm, OutParm)
// int                            ClipSize                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FRotator                FPSOffsetRot                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UGeneralFunctions_C::STATIC_GetWeaponInfo(int ItemID, class UObject* __WorldContext, class UClass** WeaponClass, class UTexture2D** Icon, struct FText* Weapon_Name, TEnumAsByte<E_Items>* AmmoType, struct FVector* FPSOffset, float* AimZoomMultiplier, class UAnimMontage** ReloadAnimation, bool* HideCharacter, TEnumAsByte<E_Tiers>* Tier, struct FText* Description, int* ClipSize, struct FRotator* FPSOffsetRot)
{
	static auto fn = UObject::FindObject<UFunction>("Function GeneralFunctions.GeneralFunctions_C.GetWeaponInfo");

	UGeneralFunctions_C_GetWeaponInfo_Params params;
	params.ItemID = ItemID;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (WeaponClass != nullptr)
		*WeaponClass = params.WeaponClass;
	if (Icon != nullptr)
		*Icon = params.Icon;
	if (Weapon_Name != nullptr)
		*Weapon_Name = params.Weapon_Name;
	if (AmmoType != nullptr)
		*AmmoType = params.AmmoType;
	if (FPSOffset != nullptr)
		*FPSOffset = params.FPSOffset;
	if (AimZoomMultiplier != nullptr)
		*AimZoomMultiplier = params.AimZoomMultiplier;
	if (ReloadAnimation != nullptr)
		*ReloadAnimation = params.ReloadAnimation;
	if (HideCharacter != nullptr)
		*HideCharacter = params.HideCharacter;
	if (Tier != nullptr)
		*Tier = params.Tier;
	if (Description != nullptr)
		*Description = params.Description;
	if (ClipSize != nullptr)
		*ClipSize = params.ClipSize;
	if (FPSOffsetRot != nullptr)
		*FPSOffsetRot = params.FPSOffsetRot;
}


// Function GeneralFunctions.GeneralFunctions_C.LeaveUIMode
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGeneralFunctions_C::STATIC_LeaveUIMode(class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function GeneralFunctions.GeneralFunctions_C.LeaveUIMode");

	UGeneralFunctions_C_LeaveUIMode_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GeneralFunctions.GeneralFunctions_C.EnterUIMode
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           EnableMouseCursor              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           DontDisableGameInput           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           CenterMouseCursor              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGeneralFunctions_C::STATIC_EnterUIMode(bool EnableMouseCursor, bool DontDisableGameInput, bool CenterMouseCursor, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function GeneralFunctions.GeneralFunctions_C.EnterUIMode");

	UGeneralFunctions_C_EnterUIMode_Params params;
	params.EnableMouseCursor = EnableMouseCursor;
	params.DontDisableGameInput = DontDisableGameInput;
	params.CenterMouseCursor = CenterMouseCursor;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
