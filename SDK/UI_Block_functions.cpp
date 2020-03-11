
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

// Function UI_Block.UI_Block_C.SetOpacityAndColor
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FLinearColor            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FLinearColor UUI_Block_C::SetOpacityAndColor()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Block.UI_Block_C.SetOpacityAndColor");

	UUI_Block_C_SetOpacityAndColor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_Block.UI_Block_C.ShowBlock
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UUI_Block_C::ShowBlock()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Block.UI_Block_C.ShowBlock");

	UUI_Block_C_ShowBlock_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_Block.UI_Block_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_Block_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Block.UI_Block_C.Construct");

	UUI_Block_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Block.UI_Block_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float                          InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_Block_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Block.UI_Block_C.Tick");

	UUI_Block_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Block.UI_Block_C.ExecuteUbergraph_UI_Block
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_Block_C::ExecuteUbergraph_UI_Block(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Block.UI_Block_C.ExecuteUbergraph_UI_Block");

	UUI_Block_C_ExecuteUbergraph_UI_Block_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
