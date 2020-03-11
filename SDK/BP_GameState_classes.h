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

// BlueprintGeneratedClass BP_GameState.BP_GameState_C
// 0x00D9 (0x0461 - 0x0388)
class ABP_GameState_C : public AGameState
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0388(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0390(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	TArray<struct FST_Team>                            Teams;                                                    // 0x0398(0x0010) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance)
	class ABP_CoreGameMode_C*                          GameModeRef;                                              // 0x03A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	TArray<class ABP_Controller_C*>                    ConnectedControllers;                                     // 0x03B0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	int                                                TeamIndex;                                                // 0x03C0(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                ConnectedPlayers;                                         // 0x03C4(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                BuoyIndex;                                                // 0x03C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                RemainingShips;                                           // 0x03CC(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              GameTime;                                                 // 0x03D0(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              StartTimer;                                               // 0x03D4(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               PreGame;                                                  // 0x03D8(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x03D9(0x0007) MISSED OFFSET
	TArray<class ABP_Controller_C*>                    DeadTeamMembers;                                          // 0x03E0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	TArray<struct FST_WayPointMarker>                  WaypointMarkers;                                          // 0x03F0(0x0010) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance)
	TEnumAsByte<E_TimesOfDay>                          TimeOfDay;                                                // 0x0400(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               SetTimeOfDay;                                             // 0x0401(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               EndOfGame;                                                // 0x0402(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x5];                                       // 0x0403(0x0005) MISSED OFFSET
	TArray<struct FST_Team>                            DefeatedTeams;                                            // 0x0408(0x0010) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FST_Team>                            UndefeatedTeams;                                          // 0x0418(0x0010) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance)
	float                                              Level;                                                    // 0x0428(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SkinColor;                                                // 0x042C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               FairMatch;                                                // 0x0430(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               TODScalarsSet;                                            // 0x0431(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               TODWaterMaterialSet;                                      // 0x0432(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x1];                                       // 0x0433(0x0001) MISSED OFFSET
	int                                                HostUniquePlayerID;                                       // 0x0434(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                MaxPlayerPerCrew;                                         // 0x0438(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x043C(0x0004) MISSED OFFSET
	TArray<class ABP_BoatSpawn_C*>                     BoatSpawnPoints;                                          // 0x0440(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	float                                              SpawnScreenTimer;                                         // 0x0450(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               UseNewWater;                                              // 0x0454(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x0455(0x0003) MISSED OFFSET
	class AWaterPlane_C*                               WaterPlane;                                               // 0x0458(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	bool                                               InSpawnSelect;                                            // 0x0460(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_GameState.BP_GameState_C");
		return ptr;
	}


	void BroadcastAnnouncement(const struct FText& Message, bool NotificationSound);
	void RefreshSpawnPoints();
	void TransferGoldFromTeamToTeam(int FromTeam, int ToTeam);
	void AddGoldToCrew(int GoldAmount, int TeamID);
	void OnRep_DefeatedTeams();
	void OnRep_TimeOfDay();
	void OnRep_RemainingTeams();
	void OnRep_Teams();
	void UserConstructionScript();
	void ClaimSpawnPoint(class ABP_BoatSpawn_C* SpawnPoint, class ABP_Controller_C* Controller);
	void ReceiveTick(float DeltaSeconds);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_GameState(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
