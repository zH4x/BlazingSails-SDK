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

// BlueprintGeneratedClass SG_Banlist.SG_Banlist_C
// 0x0010 (0x0038 - 0x0028)
class USG_Banlist_C : public USaveGame
{
public:
	TArray<struct FST_BanListEntry>                    BannedPlayerList;                                         // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass SG_Banlist.SG_Banlist_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
