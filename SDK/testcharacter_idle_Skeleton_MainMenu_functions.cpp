
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

// Function testcharacter_idle_Skeleton_MainMenu.testcharacter_idle_Skeleton_MainMenu_C.BlueprintUpdateAnimation
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaTimeX                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Utestcharacter_idle_Skeleton_MainMenu_C::BlueprintUpdateAnimation(float DeltaTimeX)
{
	static auto fn = UObject::FindObject<UFunction>("Function testcharacter_idle_Skeleton_MainMenu.testcharacter_idle_Skeleton_MainMenu_C.BlueprintUpdateAnimation");

	Utestcharacter_idle_Skeleton_MainMenu_C_BlueprintUpdateAnimation_Params params;
	params.DeltaTimeX = DeltaTimeX;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function testcharacter_idle_Skeleton_MainMenu.testcharacter_idle_Skeleton_MainMenu_C.ExecuteUbergraph_testcharacter_idle_Skeleton_MainMenu
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Utestcharacter_idle_Skeleton_MainMenu_C::ExecuteUbergraph_testcharacter_idle_Skeleton_MainMenu(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function testcharacter_idle_Skeleton_MainMenu.testcharacter_idle_Skeleton_MainMenu_C.ExecuteUbergraph_testcharacter_idle_Skeleton_MainMenu");

	Utestcharacter_idle_Skeleton_MainMenu_C_ExecuteUbergraph_testcharacter_idle_Skeleton_MainMenu_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
