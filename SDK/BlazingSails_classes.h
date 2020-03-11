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

// Class BlazingSails.BsController
// 0x0000 (0x0678 - 0x0678)
class ABsController : public APlayerController
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class BlazingSails.BsController");
		return ptr;
	}

};


// Class BlazingSails.MatchmakingManager
// 0x0038 (0x0128 - 0x00F0)
class UMatchmakingManager : public UActorComponent
{
public:
	struct FString                                     Region;                                                   // 0x00F0(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, EditConst)
	int                                                MaxPing;                                                  // 0x0100(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, EditConst, IsPlainOldData)
	int                                                MinPing;                                                  // 0x0104(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, EditConst, IsPlainOldData)
	float                                              PingWeight;                                               // 0x0108(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, EditConst, IsPlainOldData)
	float                                              MinFillRatio;                                             // 0x010C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, EditConst, IsPlainOldData)
	float                                              MaxFillRatio;                                             // 0x0110(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, EditConst, IsPlainOldData)
	float                                              FillRatioWeight;                                          // 0x0114(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, EditConst, IsPlainOldData)
	bool                                               bRequireVAC;                                              // 0x0118(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, EditConst, IsPlainOldData)
	bool                                               bIgnoreInProgress;                                        // 0x0119(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x011A(0x0002) MISSED OFFSET
	float                                              InProgressWeight;                                         // 0x011C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, EditConst, IsPlainOldData)
	int                                                TimeOfDay;                                                // 0x0120(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0124(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class BlazingSails.MatchmakingManager");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
