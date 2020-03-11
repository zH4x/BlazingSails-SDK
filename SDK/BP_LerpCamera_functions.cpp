
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

// Function BP_LerpCamera.BP_LerpCamera_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_LerpCamera_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LerpCamera.BP_LerpCamera_C.UserConstructionScript");

	ABP_LerpCamera_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
