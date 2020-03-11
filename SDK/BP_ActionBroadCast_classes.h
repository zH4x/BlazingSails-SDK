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

// BlueprintGeneratedClass BP_ActionBroadCast.BP_ActionBroadCast_C
// 0x0009 (0x0369 - 0x0360)
class ABP_ActionBroadCast_C : public ABP_ActionBase_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0360(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	bool                                               NotificationSound;                                        // 0x0368(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_ActionBroadCast.BP_ActionBroadCast_C");
		return ptr;
	}


	void UserConstructionScript();
	void StartAction();
	void ExecuteUbergraph_BP_ActionBroadCast(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
