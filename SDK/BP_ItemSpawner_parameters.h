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

// Function BP_ItemSpawner.BP_ItemSpawner_C.UserConstructionScript
struct ABP_ItemSpawner_C_UserConstructionScript_Params
{
};

// Function BP_ItemSpawner.BP_ItemSpawner_C.SpawnItem
struct ABP_ItemSpawner_C_SpawnItem_Params
{
	struct FTransform                                  SpawnTransform;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float                                              SpawnTime;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      ItemToSpawn;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                MinAmount;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                MaxAmount;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ItemSpawner.BP_ItemSpawner_C.ExecuteUbergraph_BP_ItemSpawner
struct ABP_ItemSpawner_C_ExecuteUbergraph_BP_ItemSpawner_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
