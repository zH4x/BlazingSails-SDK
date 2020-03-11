#pragma once

// Name: BlazingSails, Version: 1.481.81

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// UserDefinedStruct ST_Command.ST_Command
// 0x0040
struct FST_Command
{
	class UClass*                                      Action_13_9B120A634C7D3ED24EA147AA37791790;               // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	bool                                               ServerOnly_8_809B22A747159E9EAB5D94AF170042DE;            // 0x0008(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0009(0x0007) MISSED OFFSET
	struct FText                                       ChatMessage_12_7690DBE64897533DCC2016B759E884BF;          // 0x0010(0x0018) (Edit, BlueprintVisible)
	struct FText                                       Info_16_97A5264C4B2871B68BFF14A844B2F86C;                 // 0x0028(0x0018) (Edit, BlueprintVisible)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
