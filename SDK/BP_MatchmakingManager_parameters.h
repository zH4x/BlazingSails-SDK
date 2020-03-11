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

// Function BP_MatchmakingManager.BP_MatchmakingManager_C.CalculateServerRelevance
struct UBP_MatchmakingManager_C_CalculateServerRelevance_Params
{
	struct FBlueprintSessionResult                     Session;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FST_MatchmakingServerRelevance              MatchmakingRelevance;                                     // (Parm, OutParm)
};

// Function BP_MatchmakingManager.BP_MatchmakingManager_C.Matchmake
struct UBP_MatchmakingManager_C_Matchmake_Params
{
	TArray<struct FBlueprintSessionResult>             Sessions;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	struct FST_MatchmakingServerRelevance              Match;                                                    // (Parm, OutParm)
	struct FST_MatchmakingServerRelevance              BackupMatch;                                              // (Parm, OutParm)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
