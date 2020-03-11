#pragma once

// Name: BlazingSails, Version: 1.481.81

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_MatchmakingManager.BP_MatchmakingManager_C
// 0x0000 (0x0128 - 0x0128)
class UBP_MatchmakingManager_C : public UMatchmakingManager
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_MatchmakingManager.BP_MatchmakingManager_C");
		return ptr;
	}


	void CalculateServerRelevance(const struct FBlueprintSessionResult& Session, struct FST_MatchmakingServerRelevance* MatchmakingRelevance);
	void Matchmake(TArray<struct FBlueprintSessionResult>* Sessions, struct FST_MatchmakingServerRelevance* Match, struct FST_MatchmakingServerRelevance* BackupMatch);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
