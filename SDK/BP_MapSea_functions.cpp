
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

// Function BP_MapSea.BP_MapSea_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_MapSea_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapSea.BP_MapSea_C.UserConstructionScript");

	ABP_MapSea_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
