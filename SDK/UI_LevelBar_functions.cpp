
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

// Function UI_LevelBar.UI_LevelBar_C.SetTitle
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UUI_LevelBar_C::SetTitle()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_LevelBar.UI_LevelBar_C.SetTitle");

	UUI_LevelBar_C_SetTitle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_LevelBar.UI_LevelBar_C.GetLevel
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            EntryLevel                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Level                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UUI_LevelBar_C::GetLevel(int EntryLevel, int* Level)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_LevelBar.UI_LevelBar_C.GetLevel");

	UUI_LevelBar_C_GetLevel_Params params;
	params.EntryLevel = EntryLevel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Level != nullptr)
		*Level = params.Level;
}


// Function UI_LevelBar.UI_LevelBar_C.GetPrestigeRank
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            RankLevel                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            PrestigeRank                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UUI_LevelBar_C::GetPrestigeRank(int RankLevel, int* PrestigeRank)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_LevelBar.UI_LevelBar_C.GetPrestigeRank");

	UUI_LevelBar_C_GetPrestigeRank_Params params;
	params.RankLevel = RankLevel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PrestigeRank != nullptr)
		*PrestigeRank = params.PrestigeRank;
}


// Function UI_LevelBar.UI_LevelBar_C.SetAmount
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UUI_LevelBar_C::SetAmount()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_LevelBar.UI_LevelBar_C.SetAmount");

	UUI_LevelBar_C_SetAmount_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_LevelBar.UI_LevelBar_C.SetPercentage
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UUI_LevelBar_C::SetPercentage()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_LevelBar.UI_LevelBar_C.SetPercentage");

	UUI_LevelBar_C_SetPercentage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_LevelBar.UI_LevelBar_C.SetLevel
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UUI_LevelBar_C::SetLevel()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_LevelBar.UI_LevelBar_C.SetLevel");

	UUI_LevelBar_C_SetLevel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_LevelBar.UI_LevelBar_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float                          InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_LevelBar_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_LevelBar.UI_LevelBar_C.Tick");

	UUI_LevelBar_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_LevelBar.UI_LevelBar_C.ExecuteUbergraph_UI_LevelBar
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_LevelBar_C::ExecuteUbergraph_UI_LevelBar(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_LevelBar.UI_LevelBar_C.ExecuteUbergraph_UI_LevelBar");

	UUI_LevelBar_C_ExecuteUbergraph_UI_LevelBar_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
