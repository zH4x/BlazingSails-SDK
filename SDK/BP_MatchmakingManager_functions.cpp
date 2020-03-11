
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

// Function BP_MatchmakingManager.BP_MatchmakingManager_C.CalculateServerRelevance
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FBlueprintSessionResult Session                        (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FST_MatchmakingServerRelevance MatchmakingRelevance           (Parm, OutParm)

void UBP_MatchmakingManager_C::CalculateServerRelevance(const struct FBlueprintSessionResult& Session, struct FST_MatchmakingServerRelevance* MatchmakingRelevance)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MatchmakingManager.BP_MatchmakingManager_C.CalculateServerRelevance");

	UBP_MatchmakingManager_C_CalculateServerRelevance_Params params;
	params.Session = Session;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MatchmakingRelevance != nullptr)
		*MatchmakingRelevance = params.MatchmakingRelevance;
}


// Function BP_MatchmakingManager.BP_MatchmakingManager_C.Matchmake
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FBlueprintSessionResult> Sessions                       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// struct FST_MatchmakingServerRelevance Match                          (Parm, OutParm)
// struct FST_MatchmakingServerRelevance BackupMatch                    (Parm, OutParm)

void UBP_MatchmakingManager_C::Matchmake(TArray<struct FBlueprintSessionResult>* Sessions, struct FST_MatchmakingServerRelevance* Match, struct FST_MatchmakingServerRelevance* BackupMatch)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MatchmakingManager.BP_MatchmakingManager_C.Matchmake");

	UBP_MatchmakingManager_C_Matchmake_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Sessions != nullptr)
		*Sessions = params.Sessions;
	if (Match != nullptr)
		*Match = params.Match;
	if (BackupMatch != nullptr)
		*BackupMatch = params.BackupMatch;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
