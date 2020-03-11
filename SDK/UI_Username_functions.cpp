
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

// Function UI_Username.UI_Username_C.ShowVoiceChatIcon
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UUI_Username_C::ShowVoiceChatIcon()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Username.UI_Username_C.ShowVoiceChatIcon");

	UUI_Username_C_ShowVoiceChatIcon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_Username.UI_Username_C.SetUsernameVisibility
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UUI_Username_C::SetUsernameVisibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Username.UI_Username_C.SetUsernameVisibility");

	UUI_Username_C_SetUsernameVisibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_Username.UI_Username_C.GetPrestigeRank
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            Level                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Rank                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UUI_Username_C::GetPrestigeRank(int Level, int* Rank)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Username.UI_Username_C.GetPrestigeRank");

	UUI_Username_C_GetPrestigeRank_Params params;
	params.Level = Level;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Rank != nullptr)
		*Rank = params.Rank;
}


// Function UI_Username.UI_Username_C.GetLevel
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            LevelInput                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Level                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UUI_Username_C::GetLevel(int LevelInput, int* Level)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Username.UI_Username_C.GetLevel");

	UUI_Username_C_GetLevel_Params params;
	params.LevelInput = LevelInput;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Level != nullptr)
		*Level = params.Level;
}


// Function UI_Username.UI_Username_C.SetPrestigeRankColor
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FSlateColor             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FSlateColor UUI_Username_C::SetPrestigeRankColor()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Username.UI_Username_C.SetPrestigeRankColor");

	UUI_Username_C_SetPrestigeRankColor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_Username.UI_Username_C.ShowTitle
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UUI_Username_C::ShowTitle()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Username.UI_Username_C.ShowTitle");

	UUI_Username_C_ShowTitle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_Username.UI_Username_C.SetTitle
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UUI_Username_C::SetTitle()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Username.UI_Username_C.SetTitle");

	UUI_Username_C_SetTitle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_Username.UI_Username_C.SetLevel
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UUI_Username_C::SetLevel()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Username.UI_Username_C.SetLevel");

	UUI_Username_C_SetLevel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_Username.UI_Username_C.ShowIcon
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UUI_Username_C::ShowIcon()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Username.UI_Username_C.ShowIcon");

	UUI_Username_C_ShowIcon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_Username.UI_Username_C.ShowName
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UUI_Username_C::ShowName()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Username.UI_Username_C.ShowName");

	UUI_Username_C_ShowName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_Username.UI_Username_C.SetColor
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FSlateColor             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FSlateColor UUI_Username_C::SetColor()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Username.UI_Username_C.SetColor");

	UUI_Username_C_SetColor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_Username.UI_Username_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_Username_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Username.UI_Username_C.Construct");

	UUI_Username_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Username.UI_Username_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float                          InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_Username_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Username.UI_Username_C.Tick");

	UUI_Username_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Username.UI_Username_C.ExecuteUbergraph_UI_Username
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_Username_C::ExecuteUbergraph_UI_Username(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Username.UI_Username_C.ExecuteUbergraph_UI_Username");

	UUI_Username_C_ExecuteUbergraph_UI_Username_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
