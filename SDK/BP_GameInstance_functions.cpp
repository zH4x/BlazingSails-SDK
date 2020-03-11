
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

// Function BP_GameInstance.BP_GameInstance_C.LoadOptions
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_GameInstance_C::LoadOptions()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameInstance.BP_GameInstance_C.LoadOptions");

	UBP_GameInstance_C_LoadOptions_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GameInstance.BP_GameInstance_C.SaveOptions
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_GameInstance_C::SaveOptions()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameInstance.BP_GameInstance_C.SaveOptions");

	UBP_GameInstance_C_SaveOptions_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GameInstance.BP_GameInstance_C.LoadBanList
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_GameInstance_C::LoadBanList()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameInstance.BP_GameInstance_C.LoadBanList");

	UBP_GameInstance_C_LoadBanList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GameInstance.BP_GameInstance_C.SaveBanList
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_GameInstance_C::SaveBanList()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameInstance.BP_GameInstance_C.SaveBanList");

	UBP_GameInstance_C_SaveBanList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GameInstance.BP_GameInstance_C.CheckIfPlayerHasItemUnlocked
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ItemIndex                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<E_ClothingCategories> ClothingCategory               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           HasItem                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_GameInstance_C::CheckIfPlayerHasItemUnlocked(int ItemIndex, TEnumAsByte<E_ClothingCategories> ClothingCategory, bool* HasItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameInstance.BP_GameInstance_C.CheckIfPlayerHasItemUnlocked");

	UBP_GameInstance_C_CheckIfPlayerHasItemUnlocked_Params params;
	params.ItemIndex = ItemIndex;
	params.ClothingCategory = ClothingCategory;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (HasItem != nullptr)
		*HasItem = params.HasItem;
}


// Function BP_GameInstance.BP_GameInstance_C.AddUsedCode
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   Code                           (BlueprintVisible, BlueprintReadOnly, Parm)

void UBP_GameInstance_C::AddUsedCode(const struct FText& Code)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameInstance.BP_GameInstance_C.AddUsedCode");

	UBP_GameInstance_C_AddUsedCode_Params params;
	params.Code = Code;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GameInstance.BP_GameInstance_C.RemoveGold
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            GoldAmount                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_GameInstance_C::RemoveGold(int GoldAmount)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameInstance.BP_GameInstance_C.RemoveGold");

	UBP_GameInstance_C_RemoveGold_Params params;
	params.GoldAmount = GoldAmount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GameInstance.BP_GameInstance_C.AddScore
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Score                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_GameInstance_C::AddScore(int Score)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameInstance.BP_GameInstance_C.AddScore");

	UBP_GameInstance_C_AddScore_Params params;
	params.Score = Score;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GameInstance.BP_GameInstance_C.AddGold
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            GoldAmount                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_GameInstance_C::AddGold(int GoldAmount)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameInstance.BP_GameInstance_C.AddGold");

	UBP_GameInstance_C_AddGold_Params params;
	params.GoldAmount = GoldAmount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GameInstance.BP_GameInstance_C.SpawnActor
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  ActorClass                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FTransform              Transform                      (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// class AActor*                  Actor                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_GameInstance_C::SpawnActor(class UClass* ActorClass, const struct FTransform& Transform, class AActor** Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameInstance.BP_GameInstance_C.SpawnActor");

	UBP_GameInstance_C_SpawnActor_Params params;
	params.ActorClass = ActorClass;
	params.Transform = Transform;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Actor != nullptr)
		*Actor = params.Actor;
}


// Function BP_GameInstance.BP_GameInstance_C.SaveData
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_GameInstance_C::SaveData()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameInstance.BP_GameInstance_C.SaveData");

	UBP_GameInstance_C_SaveData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GameInstance.BP_GameInstance_C.LoadData
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_GameInstance_C::LoadData()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameInstance.BP_GameInstance_C.LoadData");

	UBP_GameInstance_C_LoadData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GameInstance.BP_GameInstance_C.ReceiveShutdown
// (Event, Public, BlueprintEvent)

void UBP_GameInstance_C::ReceiveShutdown()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameInstance.BP_GameInstance_C.ReceiveShutdown");

	UBP_GameInstance_C_ReceiveShutdown_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GameInstance.BP_GameInstance_C.UpdateSessionPlayerAmount
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            PlayerAmount                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_GameInstance_C::UpdateSessionPlayerAmount(int PlayerAmount)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameInstance.BP_GameInstance_C.UpdateSessionPlayerAmount");

	UBP_GameInstance_C_UpdateSessionPlayerAmount_Params params;
	params.PlayerAmount = PlayerAmount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GameInstance.BP_GameInstance_C.ReceiveInit
// (Event, Public, BlueprintEvent)

void UBP_GameInstance_C::ReceiveInit()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameInstance.BP_GameInstance_C.ReceiveInit");

	UBP_GameInstance_C_ReceiveInit_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GameInstance.BP_GameInstance_C.ResetKeysAzerty
// (BlueprintCallable, BlueprintEvent)

void UBP_GameInstance_C::ResetKeysAzerty()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameInstance.BP_GameInstance_C.ResetKeysAzerty");

	UBP_GameInstance_C_ResetKeysAzerty_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GameInstance.BP_GameInstance_C.ResetKeysQuerty
// (BlueprintCallable, BlueprintEvent)

void UBP_GameInstance_C::ResetKeysQuerty()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameInstance.BP_GameInstance_C.ResetKeysQuerty");

	UBP_GameInstance_C_ResetKeysQuerty_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GameInstance.BP_GameInstance_C.AddCustomPlayerStateData_2
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ASteamBeaconPlayerState* InPlayerState                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_GameInstance_C::AddCustomPlayerStateData_2(class ASteamBeaconPlayerState* InPlayerState)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameInstance.BP_GameInstance_C.AddCustomPlayerStateData_2");

	UBP_GameInstance_C_AddCustomPlayerStateData_2_Params params;
	params.InPlayerState = InPlayerState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GameInstance.BP_GameInstance_C.ExecuteUbergraph_BP_GameInstance
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_GameInstance_C::ExecuteUbergraph_BP_GameInstance(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameInstance.BP_GameInstance_C.ExecuteUbergraph_BP_GameInstance");

	UBP_GameInstance_C_ExecuteUbergraph_BP_GameInstance_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
