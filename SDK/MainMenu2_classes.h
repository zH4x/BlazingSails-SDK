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

// BlueprintGeneratedClass MainMenu2.MainMenu2_C
// 0x0008 (0x0338 - 0x0330)
class AMainMenu2_C : public ALevelScriptActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0330(0x0008) (ZeroConstructor, Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass MainMenu2.MainMenu2_C");
		return ptr;
	}


	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void ExecuteUbergraph_MainMenu2(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
