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

// Function LowEntryExtendedStandardLibrary.LowEntryBitDataReader.SetPosition
struct ULowEntryBitDataReader_SetPosition_Params
{
	int                                                Position_;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function LowEntryExtendedStandardLibrary.LowEntryBitDataReader.Reset
struct ULowEntryBitDataReader_Reset_Params
{
};

// Function LowEntryExtendedStandardLibrary.LowEntryBitDataReader.Remaining
struct ULowEntryBitDataReader_Remaining_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function LowEntryExtendedStandardLibrary.LowEntryBitDataReader.GetStringUtf8Array
struct ULowEntryBitDataReader_GetStringUtf8Array_Params
{
	TArray<struct FString>                             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function LowEntryExtendedStandardLibrary.LowEntryBitDataReader.GetStringUtf8
struct ULowEntryBitDataReader_GetStringUtf8_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function LowEntryExtendedStandardLibrary.LowEntryBitDataReader.GetPositiveInteger3Array
struct ULowEntryBitDataReader_GetPositiveInteger3Array_Params
{
	TArray<int>                                        ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function LowEntryExtendedStandardLibrary.LowEntryBitDataReader.GetPositiveInteger3
struct ULowEntryBitDataReader_GetPositiveInteger3_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function LowEntryExtendedStandardLibrary.LowEntryBitDataReader.GetPositiveInteger2Array
struct ULowEntryBitDataReader_GetPositiveInteger2Array_Params
{
	TArray<int>                                        ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function LowEntryExtendedStandardLibrary.LowEntryBitDataReader.GetPositiveInteger2
struct ULowEntryBitDataReader_GetPositiveInteger2_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function LowEntryExtendedStandardLibrary.LowEntryBitDataReader.GetPositiveInteger1Array
struct ULowEntryBitDataReader_GetPositiveInteger1Array_Params
{
	TArray<int>                                        ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function LowEntryExtendedStandardLibrary.LowEntryBitDataReader.GetPositiveInteger1
struct ULowEntryBitDataReader_GetPositiveInteger1_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function LowEntryExtendedStandardLibrary.LowEntryBitDataReader.GetPosition
struct ULowEntryBitDataReader_GetPosition_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function LowEntryExtendedStandardLibrary.LowEntryBitDataReader.GetLongBytesArray
struct ULowEntryBitDataReader_GetLongBytesArray_Params
{
	TArray<class ULowEntryLong*>                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function LowEntryExtendedStandardLibrary.LowEntryBitDataReader.GetLongBytes
struct ULowEntryBitDataReader_GetLongBytes_Params
{
	class ULowEntryLong*                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function LowEntryExtendedStandardLibrary.LowEntryBitDataReader.GetIntegerMostSignificantBits
struct ULowEntryBitDataReader_GetIntegerMostSignificantBits_Params
{
	int                                                BitCount;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function LowEntryExtendedStandardLibrary.LowEntryBitDataReader.GetIntegerLeastSignificantBits
struct ULowEntryBitDataReader_GetIntegerLeastSignificantBits_Params
{
	int                                                BitCount;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function LowEntryExtendedStandardLibrary.LowEntryBitDataReader.GetIntegerArrayMostSignificantBits
struct ULowEntryBitDataReader_GetIntegerArrayMostSignificantBits_Params
{
	int                                                BitCount;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	TArray<int>                                        ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function LowEntryExtendedStandardLibrary.LowEntryBitDataReader.GetIntegerArrayLeastSignificantBits
struct ULowEntryBitDataReader_GetIntegerArrayLeastSignificantBits_Params
{
	int                                                BitCount;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	TArray<int>                                        ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function LowEntryExtendedStandardLibrary.LowEntryBitDataReader.GetIntegerArray
struct ULowEntryBitDataReader_GetIntegerArray_Params
{
	TArray<int>                                        ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function LowEntryExtendedStandardLibrary.LowEntryBitDataReader.GetInteger
struct ULowEntryBitDataReader_GetInteger_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function LowEntryExtendedStandardLibrary.LowEntryBitDataReader.GetFloatArray
struct ULowEntryBitDataReader_GetFloatArray_Params
{
	TArray<float>                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function LowEntryExtendedStandardLibrary.LowEntryBitDataReader.GetFloat
struct ULowEntryBitDataReader_GetFloat_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function LowEntryExtendedStandardLibrary.LowEntryBitDataReader.GetDoubleBytesArray
struct ULowEntryBitDataReader_GetDoubleBytesArray_Params
{
	TArray<class ULowEntryDouble*>                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function LowEntryExtendedStandardLibrary.LowEntryBitDataReader.GetDoubleBytes
struct ULowEntryBitDataReader_GetDoubleBytes_Params
{
	class ULowEntryDouble*                             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function LowEntryExtendedStandardLibrary.LowEntryBitDataReader.GetClone
struct ULowEntryBitDataReader_GetClone_Params
{
	class ULowEntryBitDataReader*                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function LowEntryExtendedStandardLibrary.LowEntryBitDataReader.GetByteMostSignificantBits
struct ULowEntryBitDataReader_GetByteMostSignificantBits_Params
{
	int                                                BitCount;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function LowEntryExtendedStandardLibrary.LowEntryBitDataReader.GetByteLeastSignificantBits
struct ULowEntryBitDataReader_GetByteLeastSignificantBits_Params
{
	int                                                BitCount;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function LowEntryExtendedStandardLibrary.LowEntryBitDataReader.GetByteArrayMostSignificantBits
struct ULowEntryBitDataReader_GetByteArrayMostSignificantBits_Params
{
	int                                                BitCount;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	TArray<unsigned char>                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function LowEntryExtendedStandardLibrary.LowEntryBitDataReader.GetByteArrayLeastSignificantBits
struct ULowEntryBitDataReader_GetByteArrayLeastSignificantBits_Params
{
	int                                                BitCount;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	TArray<unsigned char>                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function LowEntryExtendedStandardLibrary.LowEntryBitDataReader.GetByteArray
struct ULowEntryBitDataReader_GetByteArray_Params
{
	TArray<unsigned char>                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function LowEntryExtendedStandardLibrary.LowEntryBitDataReader.GetByte
struct ULowEntryBitDataReader_GetByte_Params
{
	unsigned char                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function LowEntryExtendedStandardLibrary.LowEntryBitDataReader.GetBooleanArray
struct ULowEntryBitDataReader_GetBooleanArray_Params
{
	TArray<bool>                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function LowEntryExtendedStandardLibrary.LowEntryBitDataReader.GetBoolean
struct ULowEntryBitDataReader_GetBoolean_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function LowEntryExtendedStandardLibrary.LowEntryBitDataReader.GetBitArray
struct ULowEntryBitDataReader_GetBitArray_Params
{
	TArray<bool>                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function LowEntryExtendedStandardLibrary.LowEntryBitDataReader.GetBit
struct ULowEntryBitDataReader_GetBit_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function LowEntryExtendedStandardLibrary.LowEntryBitDataReader.Empty
struct ULowEntryBitDataReader_Empty_Params
{
};

// Function LowEntryExtendedStandardLibrary.LowEntryBitDataWriter.AddStringUtf8Array
struct ULowEntryBitDataWriter_AddStringUtf8Array_Params
{
	TArray<struct FString>                             Value;                                                    // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function LowEntryExtendedStandardLibrary.LowEntryBitDataWriter.AddStringUtf8
struct ULowEntryBitDataWriter_AddStringUtf8_Params
{
	struct FString                                     Value;                                                    // (Parm, ZeroConstructor)
};

// Function LowEntryExtendedStandardLibrary.LowEntryBitDataWriter.AddPositiveInteger3Array
struct ULowEntryBitDataWriter_AddPositiveInteger3Array_Params
{
	TArray<int>                                        Value;                                                    // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function LowEntryExtendedStandardLibrary.LowEntryBitDataWriter.AddPositiveInteger3
struct ULowEntryBitDataWriter_AddPositiveInteger3_Params
{
	int                                                Value;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function LowEntryExtendedStandardLibrary.LowEntryBitDataWriter.AddPositiveInteger2Array
struct ULowEntryBitDataWriter_AddPositiveInteger2Array_Params
{
	TArray<int>                                        Value;                                                    // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function LowEntryExtendedStandardLibrary.LowEntryBitDataWriter.AddPositiveInteger2
struct ULowEntryBitDataWriter_AddPositiveInteger2_Params
{
	int                                                Value;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function LowEntryExtendedStandardLibrary.LowEntryBitDataWriter.AddPositiveInteger1Array
struct ULowEntryBitDataWriter_AddPositiveInteger1Array_Params
{
	TArray<int>                                        Value;                                                    // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function LowEntryExtendedStandardLibrary.LowEntryBitDataWriter.AddPositiveInteger1
struct ULowEntryBitDataWriter_AddPositiveInteger1_Params
{
	int                                                Value;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function LowEntryExtendedStandardLibrary.LowEntryBitDataWriter.AddLongBytesArray
struct ULowEntryBitDataWriter_AddLongBytesArray_Params
{
	TArray<class ULowEntryLong*>                       Value;                                                    // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function LowEntryExtendedStandardLibrary.LowEntryBitDataWriter.AddLongBytes
struct ULowEntryBitDataWriter_AddLongBytes_Params
{
	class ULowEntryLong*                               Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function LowEntryExtendedStandardLibrary.LowEntryBitDataWriter.AddIntegerMostSignificantBits
struct ULowEntryBitDataWriter_AddIntegerMostSignificantBits_Params
{
	int                                                Value;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	int                                                BitCount;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function LowEntryExtendedStandardLibrary.LowEntryBitDataWriter.AddIntegerLeastSignificantBits
struct ULowEntryBitDataWriter_AddIntegerLeastSignificantBits_Params
{
	int                                                Value;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	int                                                BitCount;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function LowEntryExtendedStandardLibrary.LowEntryBitDataWriter.AddIntegerArrayMostSignificantBits
struct ULowEntryBitDataWriter_AddIntegerArrayMostSignificantBits_Params
{
	TArray<int>                                        Value;                                                    // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	int                                                BitCount;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function LowEntryExtendedStandardLibrary.LowEntryBitDataWriter.AddIntegerArrayLeastSignificantBits
struct ULowEntryBitDataWriter_AddIntegerArrayLeastSignificantBits_Params
{
	TArray<int>                                        Value;                                                    // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	int                                                BitCount;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function LowEntryExtendedStandardLibrary.LowEntryBitDataWriter.AddIntegerArray
struct ULowEntryBitDataWriter_AddIntegerArray_Params
{
	TArray<int>                                        Value;                                                    // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function LowEntryExtendedStandardLibrary.LowEntryBitDataWriter.AddInteger
struct ULowEntryBitDataWriter_AddInteger_Params
{
	int                                                Value;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function LowEntryExtendedStandardLibrary.LowEntryBitDataWriter.AddFloatArray
struct ULowEntryBitDataWriter_AddFloatArray_Params
{
	TArray<float>                                      Value;                                                    // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function LowEntryExtendedStandardLibrary.LowEntryBitDataWriter.AddFloat
struct ULowEntryBitDataWriter_AddFloat_Params
{
	float                                              Value;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function LowEntryExtendedStandardLibrary.LowEntryBitDataWriter.AddDoubleBytesArray
struct ULowEntryBitDataWriter_AddDoubleBytesArray_Params
{
	TArray<class ULowEntryDouble*>                     Value;                                                    // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function LowEntryExtendedStandardLibrary.LowEntryBitDataWriter.AddDoubleBytes
struct ULowEntryBitDataWriter_AddDoubleBytes_Params
{
	class ULowEntryDouble*                             Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function LowEntryExtendedStandardLibrary.LowEntryBitDataWriter.AddByteMostSignificantBits
struct ULowEntryBitDataWriter_AddByteMostSignificantBits_Params
{
	unsigned char                                      Value;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	int                                                BitCount;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function LowEntryExtendedStandardLibrary.LowEntryBitDataWriter.AddByteLeastSignificantBits
struct ULowEntryBitDataWriter_AddByteLeastSignificantBits_Params
{
	unsigned char                                      Value;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	int                                                BitCount;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function LowEntryExtendedStandardLibrary.LowEntryBitDataWriter.AddByteArrayMostSignificantBits
struct ULowEntryBitDataWriter_AddByteArrayMostSignificantBits_Params
{
	TArray<unsigned char>                              Value;                                                    // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	int                                                BitCount;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function LowEntryExtendedStandardLibrary.LowEntryBitDataWriter.AddByteArrayLeastSignificantBits
struct ULowEntryBitDataWriter_AddByteArrayLeastSignificantBits_Params
{
	TArray<unsigned char>                              Value;                                                    // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	int                                                BitCount;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function LowEntryExtendedStandardLibrary.LowEntryBitDataWriter.AddByteArray
struct ULowEntryBitDataWriter_AddByteArray_Params
{
	TArray<unsigned char>                              Value;                                                    // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function LowEntryExtendedStandardLibrary.LowEntryBitDataWriter.AddByte
struct ULowEntryBitDataWriter_AddByte_Params
{
	unsigned char                                      Value;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function LowEntryExtendedStandardLibrary.LowEntryBitDataWriter.AddBooleanArray
struct ULowEntryBitDataWriter_AddBooleanArray_Params
{
	TArray<bool>                                       Value;                                                    // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function LowEntryExtendedStandardLibrary.LowEntryBitDataWriter.AddBoolean
struct ULowEntryBitDataWriter_AddBoolean_Params
{
	bool                                               Value;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function LowEntryExtendedStandardLibrary.LowEntryBitDataWriter.AddBitArray
struct ULowEntryBitDataWriter_AddBitArray_Params
{
	TArray<bool>                                       Value;                                                    // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function LowEntryExtendedStandardLibrary.LowEntryBitDataWriter.AddBit
struct ULowEntryBitDataWriter_AddBit_Params
{
	bool                                               Value;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function LowEntryExtendedStandardLibrary.LowEntryByteDataReader.SetPosition
struct ULowEntryByteDataReader_SetPosition_Params
{
	int                                                Position_;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function LowEntryExtendedStandardLibrary.LowEntryByteDataReader.Reset
struct ULowEntryByteDataReader_Reset_Params
{
};

// Function LowEntryExtendedStandardLibrary.LowEntryByteDataReader.Remaining
struct ULowEntryByteDataReader_Remaining_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function LowEntryExtendedStandardLibrary.LowEntryByteDataReader.GetStringUtf8Array
struct ULowEntryByteDataReader_GetStringUtf8Array_Params
{
	TArray<struct FString>                             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function LowEntryExtendedStandardLibrary.LowEntryByteDataReader.GetStringUtf8
struct ULowEntryByteDataReader_GetStringUtf8_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function LowEntryExtendedStandardLibrary.LowEntryByteDataReader.GetPositiveInteger3Array
struct ULowEntryByteDataReader_GetPositiveInteger3Array_Params
{
	TArray<int>                                        ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function LowEntryExtendedStandardLibrary.LowEntryByteDataReader.GetPositiveInteger3
struct ULowEntryByteDataReader_GetPositiveInteger3_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function LowEntryExtendedStandardLibrary.LowEntryByteDataReader.GetPositiveInteger2Array
struct ULowEntryByteDataReader_GetPositiveInteger2Array_Params
{
	TArray<int>                                        ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function LowEntryExtendedStandardLibrary.LowEntryByteDataReader.GetPositiveInteger2
struct ULowEntryByteDataReader_GetPositiveInteger2_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function LowEntryExtendedStandardLibrary.LowEntryByteDataReader.GetPositiveInteger1Array
struct ULowEntryByteDataReader_GetPositiveInteger1Array_Params
{
	TArray<int>                                        ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function LowEntryExtendedStandardLibrary.LowEntryByteDataReader.GetPositiveInteger1
struct ULowEntryByteDataReader_GetPositiveInteger1_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function LowEntryExtendedStandardLibrary.LowEntryByteDataReader.GetPosition
struct ULowEntryByteDataReader_GetPosition_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function LowEntryExtendedStandardLibrary.LowEntryByteDataReader.GetLongBytesArray
struct ULowEntryByteDataReader_GetLongBytesArray_Params
{
	TArray<class ULowEntryLong*>                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function LowEntryExtendedStandardLibrary.LowEntryByteDataReader.GetLongBytes
struct ULowEntryByteDataReader_GetLongBytes_Params
{
	class ULowEntryLong*                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function LowEntryExtendedStandardLibrary.LowEntryByteDataReader.GetIntegerArray
struct ULowEntryByteDataReader_GetIntegerArray_Params
{
	TArray<int>                                        ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function LowEntryExtendedStandardLibrary.LowEntryByteDataReader.GetInteger
struct ULowEntryByteDataReader_GetInteger_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function LowEntryExtendedStandardLibrary.LowEntryByteDataReader.GetFloatArray
struct ULowEntryByteDataReader_GetFloatArray_Params
{
	TArray<float>                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function LowEntryExtendedStandardLibrary.LowEntryByteDataReader.GetFloat
struct ULowEntryByteDataReader_GetFloat_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function LowEntryExtendedStandardLibrary.LowEntryByteDataReader.GetDoubleBytesArray
struct ULowEntryByteDataReader_GetDoubleBytesArray_Params
{
	TArray<class ULowEntryDouble*>                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function LowEntryExtendedStandardLibrary.LowEntryByteDataReader.GetDoubleBytes
struct ULowEntryByteDataReader_GetDoubleBytes_Params
{
	class ULowEntryDouble*                             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function LowEntryExtendedStandardLibrary.LowEntryByteDataReader.GetClone
struct ULowEntryByteDataReader_GetClone_Params
{
	class ULowEntryByteDataReader*                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function LowEntryExtendedStandardLibrary.LowEntryByteDataReader.GetByteArray
struct ULowEntryByteDataReader_GetByteArray_Params
{
	TArray<unsigned char>                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function LowEntryExtendedStandardLibrary.LowEntryByteDataReader.GetByte
struct ULowEntryByteDataReader_GetByte_Params
{
	unsigned char                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function LowEntryExtendedStandardLibrary.LowEntryByteDataReader.GetBooleanArray
struct ULowEntryByteDataReader_GetBooleanArray_Params
{
	TArray<bool>                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function LowEntryExtendedStandardLibrary.LowEntryByteDataReader.GetBoolean
struct ULowEntryByteDataReader_GetBoolean_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function LowEntryExtendedStandardLibrary.LowEntryByteDataReader.Empty
struct ULowEntryByteDataReader_Empty_Params
{
};

// Function LowEntryExtendedStandardLibrary.LowEntryByteDataWriter.AddStringUtf8Array
struct ULowEntryByteDataWriter_AddStringUtf8Array_Params
{
	TArray<struct FString>                             Value;                                                    // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function LowEntryExtendedStandardLibrary.LowEntryByteDataWriter.AddStringUtf8
struct ULowEntryByteDataWriter_AddStringUtf8_Params
{
	struct FString                                     Value;                                                    // (Parm, ZeroConstructor)
};

// Function LowEntryExtendedStandardLibrary.LowEntryByteDataWriter.AddPositiveInteger3Array
struct ULowEntryByteDataWriter_AddPositiveInteger3Array_Params
{
	TArray<int>                                        Value;                                                    // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function LowEntryExtendedStandardLibrary.LowEntryByteDataWriter.AddPositiveInteger3
struct ULowEntryByteDataWriter_AddPositiveInteger3_Params
{
	int                                                Value;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function LowEntryExtendedStandardLibrary.LowEntryByteDataWriter.AddPositiveInteger2Array
struct ULowEntryByteDataWriter_AddPositiveInteger2Array_Params
{
	TArray<int>                                        Value;                                                    // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function LowEntryExtendedStandardLibrary.LowEntryByteDataWriter.AddPositiveInteger2
struct ULowEntryByteDataWriter_AddPositiveInteger2_Params
{
	int                                                Value;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function LowEntryExtendedStandardLibrary.LowEntryByteDataWriter.AddPositiveInteger1Array
struct ULowEntryByteDataWriter_AddPositiveInteger1Array_Params
{
	TArray<int>                                        Value;                                                    // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function LowEntryExtendedStandardLibrary.LowEntryByteDataWriter.AddPositiveInteger1
struct ULowEntryByteDataWriter_AddPositiveInteger1_Params
{
	int                                                Value;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function LowEntryExtendedStandardLibrary.LowEntryByteDataWriter.AddLongBytesArray
struct ULowEntryByteDataWriter_AddLongBytesArray_Params
{
	TArray<class ULowEntryLong*>                       Value;                                                    // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function LowEntryExtendedStandardLibrary.LowEntryByteDataWriter.AddLongBytes
struct ULowEntryByteDataWriter_AddLongBytes_Params
{
	class ULowEntryLong*                               Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function LowEntryExtendedStandardLibrary.LowEntryByteDataWriter.AddIntegerArray
struct ULowEntryByteDataWriter_AddIntegerArray_Params
{
	TArray<int>                                        Value;                                                    // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function LowEntryExtendedStandardLibrary.LowEntryByteDataWriter.AddInteger
struct ULowEntryByteDataWriter_AddInteger_Params
{
	int                                                Value;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function LowEntryExtendedStandardLibrary.LowEntryByteDataWriter.AddFloatArray
struct ULowEntryByteDataWriter_AddFloatArray_Params
{
	TArray<float>                                      Value;                                                    // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function LowEntryExtendedStandardLibrary.LowEntryByteDataWriter.AddFloat
struct ULowEntryByteDataWriter_AddFloat_Params
{
	float                                              Value;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function LowEntryExtendedStandardLibrary.LowEntryByteDataWriter.AddDoubleBytesArray
struct ULowEntryByteDataWriter_AddDoubleBytesArray_Params
{
	TArray<class ULowEntryDouble*>                     Value;                                                    // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function LowEntryExtendedStandardLibrary.LowEntryByteDataWriter.AddDoubleBytes
struct ULowEntryByteDataWriter_AddDoubleBytes_Params
{
	class ULowEntryDouble*                             Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function LowEntryExtendedStandardLibrary.LowEntryByteDataWriter.AddByteArray
struct ULowEntryByteDataWriter_AddByteArray_Params
{
	TArray<unsigned char>                              Value;                                                    // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function LowEntryExtendedStandardLibrary.LowEntryByteDataWriter.AddByte
struct ULowEntryByteDataWriter_AddByte_Params
{
	unsigned char                                      Value;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function LowEntryExtendedStandardLibrary.LowEntryByteDataWriter.AddBooleanArray
struct ULowEntryByteDataWriter_AddBooleanArray_Params
{
	TArray<bool>                                       Value;                                                    // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function LowEntryExtendedStandardLibrary.LowEntryByteDataWriter.AddBoolean
struct ULowEntryByteDataWriter_AddBoolean_Params
{
	bool                                               Value;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function LowEntryExtendedStandardLibrary.LowEntryDouble.SetBytes
struct ULowEntryDouble_SetBytes_Params
{
	TArray<unsigned char>                              ByteArray;                                                // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Length;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function LowEntryExtendedStandardLibrary.LowEntryDouble.LongBytes_LessThan
struct ULowEntryDouble_LongBytes_LessThan_Params
{
	class ULowEntryLong*                               Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function LowEntryExtendedStandardLibrary.LowEntryDouble.LongBytes_GreaterThan
struct ULowEntryDouble_LongBytes_GreaterThan_Params
{
	class ULowEntryLong*                               Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function LowEntryExtendedStandardLibrary.LowEntryDouble.Integer_LessThan
struct ULowEntryDouble_Integer_LessThan_Params
{
	int                                                Value;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function LowEntryExtendedStandardLibrary.LowEntryDouble.Integer_GreaterThan
struct ULowEntryDouble_Integer_GreaterThan_Params
{
	int                                                Value;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function LowEntryExtendedStandardLibrary.LowEntryDouble.GetBytes
struct ULowEntryDouble_GetBytes_Params
{
	TArray<unsigned char>                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function LowEntryExtendedStandardLibrary.LowEntryDouble.Float_Subtract
struct ULowEntryDouble_Float_Subtract_Params
{
	float                                              Value;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function LowEntryExtendedStandardLibrary.LowEntryDouble.Float_LessThan
struct ULowEntryDouble_Float_LessThan_Params
{
	float                                              Value;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function LowEntryExtendedStandardLibrary.LowEntryDouble.Float_GreaterThan
struct ULowEntryDouble_Float_GreaterThan_Params
{
	float                                              Value;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function LowEntryExtendedStandardLibrary.LowEntryDouble.Float_Equals
struct ULowEntryDouble_Float_Equals_Params
{
	float                                              Value;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function LowEntryExtendedStandardLibrary.LowEntryDouble.Float_Add
struct ULowEntryDouble_Float_Add_Params
{
	float                                              Value;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function LowEntryExtendedStandardLibrary.LowEntryDouble.DoubleBytes_Subtract
struct ULowEntryDouble_DoubleBytes_Subtract_Params
{
	class ULowEntryDouble*                             Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function LowEntryExtendedStandardLibrary.LowEntryDouble.DoubleBytes_LessThan
struct ULowEntryDouble_DoubleBytes_LessThan_Params
{
	class ULowEntryDouble*                             Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function LowEntryExtendedStandardLibrary.LowEntryDouble.DoubleBytes_GreaterThan
struct ULowEntryDouble_DoubleBytes_GreaterThan_Params
{
	class ULowEntryDouble*                             Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function LowEntryExtendedStandardLibrary.LowEntryDouble.DoubleBytes_Equals
struct ULowEntryDouble_DoubleBytes_Equals_Params
{
	class ULowEntryDouble*                             Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function LowEntryExtendedStandardLibrary.LowEntryDouble.DoubleBytes_Add
struct ULowEntryDouble_DoubleBytes_Add_Params
{
	class ULowEntryDouble*                             Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function LowEntryExtendedStandardLibrary.LowEntryDouble.CreateClone
struct ULowEntryDouble_CreateClone_Params
{
	class ULowEntryDouble*                             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function LowEntryExtendedStandardLibrary.LowEntryDouble.CastToString
struct ULowEntryDouble_CastToString_Params
{
	int                                                MinFractionalDigits;                                      // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function LowEntryExtendedStandardLibrary.LowEntryDouble.CastToLongBytes
struct ULowEntryDouble_CastToLongBytes_Params
{
	class ULowEntryLong*                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.XboxOnePlatform
struct ULowEntryExtendedStandardLibrary_XboxOnePlatform_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.WithEditor
struct ULowEntryExtendedStandardLibrary_WithEditor_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.WindowsRtPlatform
struct ULowEntryExtendedStandardLibrary_WindowsRtPlatform_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.WindowsRtArmPlatform
struct ULowEntryExtendedStandardLibrary_WindowsRtArmPlatform_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.WindowsPlatform
struct ULowEntryExtendedStandardLibrary_WindowsPlatform_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.WindowsNewlineCharacter
struct ULowEntryExtendedStandardLibrary_WindowsNewlineCharacter_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.Windows64Platform
struct ULowEntryExtendedStandardLibrary_Windows64Platform_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.Windows32Platform
struct ULowEntryExtendedStandardLibrary_Windows32Platform_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.TickSeconds
struct ULowEntryExtendedStandardLibrary_TickSeconds_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLatentActionInfo                           LatentInfo;                                               // (Parm)
	int                                                Ticks;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              SecondsInterval;                                          // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Tick;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.TickFrames
struct ULowEntryExtendedStandardLibrary_TickFrames_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLatentActionInfo                           LatentInfo;                                               // (Parm)
	int                                                Ticks;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	int                                                FramesInterval;                                           // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Tick;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.TextureUpdateResource
struct ULowEntryExtendedStandardLibrary_TextureUpdateResource_Params
{
	class UTexture*                                    Texture;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.TextureRenderTarget2DToPixels
struct ULowEntryExtendedStandardLibrary_TextureRenderTarget2DToPixels_Params
{
	class UTextureRenderTarget2D*                      TextureRenderTarget2D;                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Width;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                Height;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	TArray<struct FColor>                              Pixels;                                                   // (Parm, OutParm, ZeroConstructor)
};

// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.TextureRenderTarget2DToBytes
struct ULowEntryExtendedStandardLibrary_TextureRenderTarget2DToBytes_Params
{
	class UTextureRenderTarget2D*                      TextureRenderTarget2D;                                    // (Parm, ZeroConstructor, IsPlainOldData)
	ELowEntryImageFormat                               ImageFormat;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	TArray<unsigned char>                              ByteArray;                                                // (Parm, OutParm, ZeroConstructor)
	int                                                CompressionQuality;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.Texture2DToPixels
struct ULowEntryExtendedStandardLibrary_Texture2DToPixels_Params
{
	class UTexture2D*                                  Texture2D;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Width;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                Height;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	TArray<struct FColor>                              Pixels;                                                   // (Parm, OutParm, ZeroConstructor)
};

// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.Texture2DToBytes
struct ULowEntryExtendedStandardLibrary_Texture2DToBytes_Params
{
	class UTexture2D*                                  Texture2D;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	ELowEntryImageFormat                               ImageFormat;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	TArray<unsigned char>                              ByteArray;                                                // (Parm, OutParm, ZeroConstructor)
	int                                                CompressionQuality;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.TestBuild
struct ULowEntryExtendedStandardLibrary_TestBuild_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.TabCharacter
struct ULowEntryExtendedStandardLibrary_TabCharacter_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.SwitchPlatform
struct ULowEntryExtendedStandardLibrary_SwitchPlatform_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.StringToBytesUtf8
struct ULowEntryExtendedStandardLibrary_StringToBytesUtf8_Params
{
	struct FString                                     String;                                                   // (Parm, ZeroConstructor)
	TArray<unsigned char>                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.SplitBytes
struct ULowEntryExtendedStandardLibrary_SplitBytes_Params
{
	TArray<unsigned char>                              ByteArray;                                                // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	int                                                LengthA;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	TArray<unsigned char>                              A;                                                        // (Parm, OutParm, ZeroConstructor)
	TArray<unsigned char>                              B;                                                        // (Parm, OutParm, ZeroConstructor)
};

// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.SoundClass_SetVolume
struct ULowEntryExtendedStandardLibrary_SoundClass_SetVolume_Params
{
	class USoundClass*                                 SoundClass;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Volume;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.SoundClass_SetPitch
struct ULowEntryExtendedStandardLibrary_SoundClass_SetPitch_Params
{
	class USoundClass*                                 SoundClass;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Pitch;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.SoundClass_GetVolume
struct ULowEntryExtendedStandardLibrary_SoundClass_GetVolume_Params
{
	class USoundClass*                                 SoundClass;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.SoundClass_GetPitch
struct ULowEntryExtendedStandardLibrary_SoundClass_GetPitch_Params
{
	class USoundClass*                                 SoundClass;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.SortTimespanArrayDirectly
struct ULowEntryExtendedStandardLibrary_SortTimespanArrayDirectly_Params
{
	TArray<struct FTimespan>                           TimespanArray;                                            // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool                                               Reversed;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.SortTimespanArray
struct ULowEntryExtendedStandardLibrary_SortTimespanArray_Params
{
	TArray<struct FTimespan>                           TimespanArray;                                            // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool                                               Reversed;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FTimespan>                           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.SortStringArrayDirectly
struct ULowEntryExtendedStandardLibrary_SortStringArrayDirectly_Params
{
	TArray<struct FString>                             StringArray;                                              // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool                                               Reversed;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.SortStringArray
struct ULowEntryExtendedStandardLibrary_SortStringArray_Params
{
	TArray<struct FString>                             StringArray;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool                                               Reversed;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FString>                             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.SortObjectArrayDirectly
struct ULowEntryExtendedStandardLibrary_SortObjectArrayDirectly_Params
{
	TArray<class UObject*>                             ObjectArray;                                              // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	struct FScriptDelegate                             Comparator;                                               // (Parm, ZeroConstructor)
	bool                                               Reversed;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.SortObjectArray
struct ULowEntryExtendedStandardLibrary_SortObjectArray_Params
{
	TArray<class UObject*>                             ObjectArray;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	struct FScriptDelegate                             Comparator;                                               // (Parm, ZeroConstructor)
	bool                                               Reversed;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	TArray<class UObject*>                             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.SortIntegerArrayDirectly
struct ULowEntryExtendedStandardLibrary_SortIntegerArrayDirectly_Params
{
	TArray<int>                                        IntegerArray;                                             // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool                                               Reversed;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.SortIntegerArray
struct ULowEntryExtendedStandardLibrary_SortIntegerArray_Params
{
	TArray<int>                                        IntegerArray;                                             // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool                                               Reversed;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	TArray<int>                                        ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.SortFloatArrayDirectly
struct ULowEntryExtendedStandardLibrary_SortFloatArrayDirectly_Params
{
	TArray<float>                                      FloatArray;                                               // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool                                               Reversed;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.SortFloatArray
struct ULowEntryExtendedStandardLibrary_SortFloatArray_Params
{
	TArray<float>                                      FloatArray;                                               // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool                                               Reversed;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	TArray<float>                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.SortDateTimeArrayDirectly
struct ULowEntryExtendedStandardLibrary_SortDateTimeArrayDirectly_Params
{
	TArray<struct FDateTime>                           DateTimeArray;                                            // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool                                               Reversed;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.SortDateTimeArray
struct ULowEntryExtendedStandardLibrary_SortDateTimeArray_Params
{
	TArray<struct FDateTime>                           DateTimeArray;                                            // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool                                               Reversed;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FDateTime>                           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.SortByteArrayDirectly
struct ULowEntryExtendedStandardLibrary_SortByteArrayDirectly_Params
{
	TArray<unsigned char>                              ByteArray;                                                // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool                                               Reversed;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.SortByteArray
struct ULowEntryExtendedStandardLibrary_SortByteArray_Params
{
	TArray<unsigned char>                              ByteArray;                                                // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool                                               Reversed;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	TArray<unsigned char>                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.SimpleKismetSystemLibraryPrintString
struct ULowEntryExtendedStandardLibrary_SimpleKismetSystemLibraryPrintString_Params
{
	struct FString                                     inString;                                                 // (Parm, ZeroConstructor)
};

// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.ShippingBuild
struct ULowEntryExtendedStandardLibrary_ShippingBuild_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.Sha512
struct ULowEntryExtendedStandardLibrary_Sha512_Params
{
	TArray<unsigned char>                              ByteArray;                                                // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Length;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<unsigned char>                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.Sha256
struct ULowEntryExtendedStandardLibrary_Sha256_Params
{
	TArray<unsigned char>                              ByteArray;                                                // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Length;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<unsigned char>                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.Sha1
struct ULowEntryExtendedStandardLibrary_Sha1_Params
{
	TArray<unsigned char>                              ByteArray;                                                // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Length;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<unsigned char>                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.SetWorldRenderingEnabled
struct ULowEntryExtendedStandardLibrary_SetWorldRenderingEnabled_Params
{
	bool                                               Enabled;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.SetWindowSize
struct ULowEntryExtendedStandardLibrary_SetWindowSize_Params
{
	int                                                Width;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Height;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.SetWindowPosition
struct ULowEntryExtendedStandardLibrary_SetWindowPosition_Params
{
	int                                                X;                                                        // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Y;                                                        // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.SetWindowPositiomInPercentagesCentered
struct ULowEntryExtendedStandardLibrary_SetWindowPositiomInPercentagesCentered_Params
{
	float                                              X;                                                        // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Y;                                                        // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.SetWindowMode
struct ULowEntryExtendedStandardLibrary_SetWindowMode_Params
{
	bool                                               Fullscreen;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsFullscreenWindowed;                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.SetSplitScreenType_TwoPlayers
struct ULowEntryExtendedStandardLibrary_SetSplitScreenType_TwoPlayers_Params
{
	ELowEntrySplitScreenTypeTwoPlayers                 Type;                                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.SetSplitScreenType_ThreePlayers
struct ULowEntryExtendedStandardLibrary_SetSplitScreenType_ThreePlayers_Params
{
	ELowEntrySplitScreenTypeThreePlayers               Type;                                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.SetSplitScreenEnabled
struct ULowEntryExtendedStandardLibrary_SetSplitScreenEnabled_Params
{
	bool                                               Enabled;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.SetMousePositionInPercentages
struct ULowEntryExtendedStandardLibrary_SetMousePositionInPercentages_Params
{
	float                                              X;                                                        // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Y;                                                        // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.SetMousePosition
struct ULowEntryExtendedStandardLibrary_SetMousePosition_Params
{
	int                                                X;                                                        // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Y;                                                        // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.SetMouseLockedToViewport
struct ULowEntryExtendedStandardLibrary_SetMouseLockedToViewport_Params
{
	bool                                               locked;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.SetGenericTeamId
struct ULowEntryExtendedStandardLibrary_SetGenericTeamId_Params
{
	class AActor*                                      Target;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      TeamID;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.ServerChangeMap
struct ULowEntryExtendedStandardLibrary_ServerChangeMap_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     Map;                                                      // (Parm, ZeroConstructor)
	struct FString                                     Args;                                                     // (Parm, ZeroConstructor)
	class APlayerController*                           SpecificPlayer;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.SceneCaptureComponent2DToPixels
struct ULowEntryExtendedStandardLibrary_SceneCaptureComponent2DToPixels_Params
{
	class USceneCaptureComponent2D*                    SceneCaptureComponent2D;                                  // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                Width;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                Height;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	TArray<struct FColor>                              Pixels;                                                   // (Parm, OutParm, ZeroConstructor)
};

// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.SceneCaptureComponent2DToBytes
struct ULowEntryExtendedStandardLibrary_SceneCaptureComponent2DToBytes_Params
{
	class USceneCaptureComponent2D*                    SceneCaptureComponent2D;                                  // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	ELowEntryImageFormat                               ImageFormat;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	TArray<unsigned char>                              ByteArray;                                                // (Parm, OutParm, ZeroConstructor)
	int                                                CompressionQuality;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.SceneCaptureComponent2D_SetFov
struct ULowEntryExtendedStandardLibrary_SceneCaptureComponent2D_SetFov_Params
{
	class USceneCaptureComponent2D*                    SceneCaptureComponent2D;                                  // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              FOV;                                                      // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.SceneCaptureComponent2D_GetFov
struct ULowEntryExtendedStandardLibrary_SceneCaptureComponent2D_GetFov_Params
{
	class USceneCaptureComponent2D*                    SceneCaptureComponent2D;                                  // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              FOV;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.SceneCapture2DToPixels
struct ULowEntryExtendedStandardLibrary_SceneCapture2DToPixels_Params
{
	class ASceneCapture2D*                             SceneCapture2D;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Width;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                Height;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	TArray<struct FColor>                              Pixels;                                                   // (Parm, OutParm, ZeroConstructor)
};

// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.SceneCapture2DToBytes
struct ULowEntryExtendedStandardLibrary_SceneCapture2DToBytes_Params
{
	class ASceneCapture2D*                             SceneCapture2D;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	ELowEntryImageFormat                               ImageFormat;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	TArray<unsigned char>                              ByteArray;                                                // (Parm, OutParm, ZeroConstructor)
	int                                                CompressionQuality;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.SceneCapture2D_SetFov
struct ULowEntryExtendedStandardLibrary_SceneCapture2D_SetFov_Params
{
	class ASceneCapture2D*                             SceneCapture2D;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              FOV;                                                      // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.SceneCapture2D_GetFov
struct ULowEntryExtendedStandardLibrary_SceneCapture2D_GetFov_Params
{
	class ASceneCapture2D*                             SceneCapture2D;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              FOV;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.RoundDecimals
struct ULowEntryExtendedStandardLibrary_RoundDecimals_Params
{
	float                                              Number;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Decimals;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.RetriggerableRandomDelayFrames
struct ULowEntryExtendedStandardLibrary_RetriggerableRandomDelayFrames_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                MinFrames;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                MaxFrames;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLatentActionInfo                           LatentInfo;                                               // (Parm)
};

// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.RetriggerableRandomDelay
struct ULowEntryExtendedStandardLibrary_RetriggerableRandomDelay_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              MinDuration;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              MaxDuration;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLatentActionInfo                           LatentInfo;                                               // (Parm)
};

// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.RetriggerableDelayFrames
struct ULowEntryExtendedStandardLibrary_RetriggerableDelayFrames_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Frames;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLatentActionInfo                           LatentInfo;                                               // (Parm)
};

// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.ReplaceCharactersExcept
struct ULowEntryExtendedStandardLibrary_ReplaceCharactersExcept_Params
{
	struct FString                                     String;                                                   // (Parm, ZeroConstructor)
	struct FString                                     ReplacementCharacter;                                     // (Parm, ZeroConstructor)
	bool                                               KeepLowercaseAZ;                                          // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               KeepUppercaseAZ;                                          // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               KeepNumbers;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     OtherCharactersToKeep;                                    // (Parm, ZeroConstructor)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.RemoveCharactersExcept
struct ULowEntryExtendedStandardLibrary_RemoveCharactersExcept_Params
{
	struct FString                                     String;                                                   // (Parm, ZeroConstructor)
	bool                                               KeepLowercaseAZ;                                          // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               KeepUppercaseAZ;                                          // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               KeepNumbers;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     OtherCharactersToKeep;                                    // (Parm, ZeroConstructor)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.RegexReplace
struct ULowEntryExtendedStandardLibrary_RegexReplace_Params
{
	struct FString                                     String;                                                   // (Parm, ZeroConstructor)
	struct FString                                     Pattern;                                                  // (Parm, ZeroConstructor)
	struct FString                                     Replacement;                                              // (Parm, ZeroConstructor)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.RegexMatch
struct ULowEntryExtendedStandardLibrary_RegexMatch_Params
{
	struct FString                                     String;                                                   // (Parm, ZeroConstructor)
	struct FString                                     Pattern;                                                  // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.RegexGetMatches
struct ULowEntryExtendedStandardLibrary_RegexGetMatches_Params
{
	struct FString                                     String;                                                   // (Parm, ZeroConstructor)
	struct FString                                     Pattern;                                                  // (Parm, ZeroConstructor)
	TArray<struct FLowEntryRegexMatch>                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.RegexCount
struct ULowEntryExtendedStandardLibrary_RegexCount_Params
{
	struct FString                                     String;                                                   // (Parm, ZeroConstructor)
	struct FString                                     Pattern;                                                  // (Parm, ZeroConstructor)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.RandomDelayFrames
struct ULowEntryExtendedStandardLibrary_RandomDelayFrames_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                MinFrames;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                MaxFrames;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLatentActionInfo                           LatentInfo;                                               // (Parm)
};

// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.RandomDelay
struct ULowEntryExtendedStandardLibrary_RandomDelay_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              MinDuration;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              MaxDuration;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLatentActionInfo                           LatentInfo;                                               // (Parm)
};

// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.QueueExecutions
struct ULowEntryExtendedStandardLibrary_QueueExecutions_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class ULowEntryExecutionQueue*                     Queue;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FLatentActionInfo                           LatentInfo;                                               // (Parm)
};

// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.Ps4Platform
struct ULowEntryExtendedStandardLibrary_Ps4Platform_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.PlayerControllerGetLocalPlayer
struct ULowEntryExtendedStandardLibrary_PlayerControllerGetLocalPlayer_Params
{
	class APlayerController*                           PlayerController;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Success;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class ULocalPlayer*                                LocalPlayer;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.PixelsToTexture2D
struct ULowEntryExtendedStandardLibrary_PixelsToTexture2D_Params
{
	int                                                Width;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Height;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FColor>                              Pixels;                                                   // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	class UTexture2D*                                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.PixelsToExistingTexture2D
struct ULowEntryExtendedStandardLibrary_PixelsToExistingTexture2D_Params
{
	bool                                               ReusedGivenTexture2D;                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  Texture2D;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Width;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Height;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FColor>                              Pixels;                                                   // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	class UTexture2D*                                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.PixelsToBytes
struct ULowEntryExtendedStandardLibrary_PixelsToBytes_Params
{
	int                                                Width;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Height;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FColor>                              Pixels;                                                   // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	ELowEntryImageFormat                               ImageFormat;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	TArray<unsigned char>                              ByteArray;                                                // (Parm, OutParm, ZeroConstructor)
	int                                                CompressionQuality;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.Pearson
struct ULowEntryExtendedStandardLibrary_Pearson_Params
{
	TArray<unsigned char>                              ByteArray;                                                // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	int                                                HashLength;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Length;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<unsigned char>                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.ParseStringIntoLongBytes
struct ULowEntryExtendedStandardLibrary_ParseStringIntoLongBytes_Params
{
	struct FString                                     String;                                                   // (Parm, ZeroConstructor)
	class ULowEntryLong*                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.ParseStringIntoDoubleBytes
struct ULowEntryExtendedStandardLibrary_ParseStringIntoDoubleBytes_Params
{
	struct FString                                     String;                                                   // (Parm, ZeroConstructor)
	class ULowEntryDouble*                             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.ParsedHashcashIsValid
struct ULowEntryExtendedStandardLibrary_ParsedHashcashIsValid_Params
{
	class ULowEntryParsedHashcash*                     Target;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.NextQueueExecution
struct ULowEntryExtendedStandardLibrary_NextQueueExecution_Params
{
	class ULowEntryExecutionQueue*                     Queue;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.NewlineCharacter
struct ULowEntryExtendedStandardLibrary_NewlineCharacter_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.MinString
struct ULowEntryExtendedStandardLibrary_MinString_Params
{
	struct FString                                     A;                                                        // (Parm, ZeroConstructor)
	struct FString                                     B;                                                        // (Parm, ZeroConstructor)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.MinOfTimespanArray
struct ULowEntryExtendedStandardLibrary_MinOfTimespanArray_Params
{
	TArray<struct FTimespan>                           TimespanArray;                                            // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	int                                                IndexOfMinValue;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FTimespan                                   MinValue;                                                 // (Parm, OutParm, ZeroConstructor)
};

// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.MinOfStringArray
struct ULowEntryExtendedStandardLibrary_MinOfStringArray_Params
{
	TArray<struct FString>                             StringArray;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	int                                                IndexOfMinValue;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FString                                     MinValue;                                                 // (Parm, OutParm, ZeroConstructor)
};

// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.MinOfDateTimeArray
struct ULowEntryExtendedStandardLibrary_MinOfDateTimeArray_Params
{
	TArray<struct FDateTime>                           DateTimeArray;                                            // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	int                                                IndexOfMinValue;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FDateTime                                   MinValue;                                                 // (Parm, OutParm, ZeroConstructor)
};

// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.MergeEncapsulatedByteArrays
struct ULowEntryExtendedStandardLibrary_MergeEncapsulatedByteArrays_Params
{
	TArray<class ULowEntryByteArray*>                  ByteArrays;                                               // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<unsigned char>                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.MergeBytes
struct ULowEntryExtendedStandardLibrary_MergeBytes_Params
{
	TArray<unsigned char>                              A;                                                        // (Parm, ZeroConstructor)
	TArray<unsigned char>                              B;                                                        // (Parm, ZeroConstructor)
	TArray<unsigned char>                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.Md5
struct ULowEntryExtendedStandardLibrary_Md5_Params
{
	TArray<unsigned char>                              ByteArray;                                                // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Length;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<unsigned char>                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.MaxString
struct ULowEntryExtendedStandardLibrary_MaxString_Params
{
	struct FString                                     A;                                                        // (Parm, ZeroConstructor)
	struct FString                                     B;                                                        // (Parm, ZeroConstructor)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.MaxOfTimespanArray
struct ULowEntryExtendedStandardLibrary_MaxOfTimespanArray_Params
{
	TArray<struct FTimespan>                           TimespanArray;                                            // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	int                                                IndexOfMaxValue;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FTimespan                                   MaxValue;                                                 // (Parm, OutParm, ZeroConstructor)
};

// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.MaxOfStringArray
struct ULowEntryExtendedStandardLibrary_MaxOfStringArray_Params
{
	TArray<struct FString>                             StringArray;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	int                                                IndexOfMaxValue;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FString                                     MaxValue;                                                 // (Parm, OutParm, ZeroConstructor)
};

// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.MaxOfDateTimeArray
struct ULowEntryExtendedStandardLibrary_MaxOfDateTimeArray_Params
{
	TArray<struct FDateTime>                           DateTimeArray;                                            // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	int                                                IndexOfMaxValue;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FDateTime                                   MaxValue;                                                 // (Parm, OutParm, ZeroConstructor)
};

// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.MacPlatform
struct ULowEntryExtendedStandardLibrary_MacPlatform_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.Long_CreateZero
struct ULowEntryExtendedStandardLibrary_Long_CreateZero_Params
{
	class ULowEntryLong*                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.Long_Create
struct ULowEntryExtendedStandardLibrary_Long_Create_Params
{
	TArray<unsigned char>                              ByteArray;                                                // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Length;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class ULowEntryLong*                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.LoadVideo
struct ULowEntryExtendedStandardLibrary_LoadVideo_Params
{
	class UMediaSoundComponent*                        MediaSoundComponent;                                      // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FString                                     URL;                                                      // (Parm, ZeroConstructor)
	bool                                               Success;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class UMediaPlayer*                                MediaPlayer;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class UMediaTexture*                               MediaTexture;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               PlayOnOpen;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Loop;                                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.LinuxPlatform
struct ULowEntryExtendedStandardLibrary_LinuxPlatform_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.LessStringString
struct ULowEntryExtendedStandardLibrary_LessStringString_Params
{
	struct FString                                     A;                                                        // (Parm, ZeroConstructor)
	struct FString                                     B;                                                        // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.LessIntegerFloat
struct ULowEntryExtendedStandardLibrary_LessIntegerFloat_Params
{
	int                                                A;                                                        // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              B;                                                        // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.LessIntegerByte
struct ULowEntryExtendedStandardLibrary_LessIntegerByte_Params
{
	int                                                A;                                                        // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      B;                                                        // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.LessFloatInteger
struct ULowEntryExtendedStandardLibrary_LessFloatInteger_Params
{
	float                                              A;                                                        // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	int                                                B;                                                        // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.LessFloatByte
struct ULowEntryExtendedStandardLibrary_LessFloatByte_Params
{
	float                                              A;                                                        // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      B;                                                        // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.LessEqualStringString
struct ULowEntryExtendedStandardLibrary_LessEqualStringString_Params
{
	struct FString                                     A;                                                        // (Parm, ZeroConstructor)
	struct FString                                     B;                                                        // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.LessEqualIntegerFloat
struct ULowEntryExtendedStandardLibrary_LessEqualIntegerFloat_Params
{
	int                                                A;                                                        // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              B;                                                        // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.LessEqualIntegerByte
struct ULowEntryExtendedStandardLibrary_LessEqualIntegerByte_Params
{
	int                                                A;                                                        // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      B;                                                        // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.LessEqualFloatInteger
struct ULowEntryExtendedStandardLibrary_LessEqualFloatInteger_Params
{
	float                                              A;                                                        // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	int                                                B;                                                        // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.LessEqualFloatByte
struct ULowEntryExtendedStandardLibrary_LessEqualFloatByte_Params
{
	float                                              A;                                                        // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      B;                                                        // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.LessEqualByteInteger
struct ULowEntryExtendedStandardLibrary_LessEqualByteInteger_Params
{
	unsigned char                                      A;                                                        // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	int                                                B;                                                        // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.LessEqualByteFloat
struct ULowEntryExtendedStandardLibrary_LessEqualByteFloat_Params
{
	unsigned char                                      A;                                                        // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              B;                                                        // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.LessByteInteger
struct ULowEntryExtendedStandardLibrary_LessByteInteger_Params
{
	unsigned char                                      A;                                                        // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	int                                                B;                                                        // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.LessByteFloat
struct ULowEntryExtendedStandardLibrary_LessByteFloat_Params
{
	unsigned char                                      A;                                                        // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              B;                                                        // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.LatentAction_Create_String
struct ULowEntryExtendedStandardLibrary_LatentAction_Create_String_Params
{
	class ULowEntryLatentActionString*                 LatentAction;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.LatentAction_Create_Object
struct ULowEntryExtendedStandardLibrary_LatentAction_Create_Object_Params
{
	class ULowEntryLatentActionObject*                 LatentAction;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.LatentAction_Create_None
struct ULowEntryExtendedStandardLibrary_LatentAction_Create_None_Params
{
	class ULowEntryLatentActionNone*                   LatentAction;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.LatentAction_Create_Integer
struct ULowEntryExtendedStandardLibrary_LatentAction_Create_Integer_Params
{
	class ULowEntryLatentActionInteger*                LatentAction;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.LatentAction_Create_Float
struct ULowEntryExtendedStandardLibrary_LatentAction_Create_Float_Params
{
	class ULowEntryLatentActionFloat*                  LatentAction;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.LatentAction_Create_Boolean
struct ULowEntryExtendedStandardLibrary_LatentAction_Create_Boolean_Params
{
	class ULowEntryLatentActionBoolean*                LatentAction;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.JoinGame
struct ULowEntryExtendedStandardLibrary_JoinGame_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ServerAddress;                                            // (Parm, ZeroConstructor)
	struct FString                                     Args;                                                     // (Parm, ZeroConstructor)
	class APlayerController*                           SpecificPlayer;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.IsWorldRenderingEnabled
struct ULowEntryExtendedStandardLibrary_IsWorldRenderingEnabled_Params
{
	bool                                               Success;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               Enabled;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.IsBitSet
struct ULowEntryExtendedStandardLibrary_IsBitSet_Params
{
	unsigned char                                      B;                                                        // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Bit;                                                      // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.IsAndroidDaydreamApplication
struct ULowEntryExtendedStandardLibrary_IsAndroidDaydreamApplication_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.IosPlatform
struct ULowEntryExtendedStandardLibrary_IosPlatform_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.IntegerToBytes
struct ULowEntryExtendedStandardLibrary_IntegerToBytes_Params
{
	int                                                Value;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	TArray<unsigned char>                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.Html5Platform
struct ULowEntryExtendedStandardLibrary_Html5Platform_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.HostGame
struct ULowEntryExtendedStandardLibrary_HostGame_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     Map;                                                      // (Parm, ZeroConstructor)
	struct FString                                     Args;                                                     // (Parm, ZeroConstructor)
	class APlayerController*                           SpecificPlayer;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.HMAC
struct ULowEntryExtendedStandardLibrary_HMAC_Params
{
	TArray<unsigned char>                              ByteArray;                                                // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<unsigned char>                              Key;                                                      // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	ELowEntryHmacAlgorithm                             Algorithm;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Length;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<unsigned char>                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.HexToBytes
struct ULowEntryExtendedStandardLibrary_HexToBytes_Params
{
	struct FString                                     Hex;                                                      // (Parm, ZeroConstructor)
	TArray<unsigned char>                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.HashcashParseArray
struct ULowEntryExtendedStandardLibrary_HashcashParseArray_Params
{
	TArray<struct FString>                             Hashes;                                                   // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<class ULowEntryParsedHashcash*>             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.HashcashParse
struct ULowEntryExtendedStandardLibrary_HashcashParse_Params
{
	struct FString                                     Hash;                                                     // (Parm, ZeroConstructor)
	class ULowEntryParsedHashcash*                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.HashcashCustomCreationDate
struct ULowEntryExtendedStandardLibrary_HashcashCustomCreationDate_Params
{
	struct FString                                     Resource;                                                 // (Parm, ZeroConstructor)
	struct FDateTime                                   UtcDate;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	int                                                Bits;                                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.HashcashArrayCustomCreationDate
struct ULowEntryExtendedStandardLibrary_HashcashArrayCustomCreationDate_Params
{
	TArray<struct FString>                             Resources;                                                // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	struct FDateTime                                   UtcDate;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	int                                                Bits;                                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FString>                             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.HashcashArray
struct ULowEntryExtendedStandardLibrary_HashcashArray_Params
{
	TArray<struct FString>                             Resources;                                                // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	int                                                Bits;                                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FString>                             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.Hashcash
struct ULowEntryExtendedStandardLibrary_Hashcash_Params
{
	struct FString                                     Resource;                                                 // (Parm, ZeroConstructor)
	int                                                Bits;                                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.GreaterStringString
struct ULowEntryExtendedStandardLibrary_GreaterStringString_Params
{
	struct FString                                     A;                                                        // (Parm, ZeroConstructor)
	struct FString                                     B;                                                        // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.GreaterIntegerFloat
struct ULowEntryExtendedStandardLibrary_GreaterIntegerFloat_Params
{
	int                                                A;                                                        // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              B;                                                        // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.GreaterIntegerByte
struct ULowEntryExtendedStandardLibrary_GreaterIntegerByte_Params
{
	int                                                A;                                                        // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      B;                                                        // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.GreaterFloatInteger
struct ULowEntryExtendedStandardLibrary_GreaterFloatInteger_Params
{
	float                                              A;                                                        // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	int                                                B;                                                        // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.GreaterFloatByte
struct ULowEntryExtendedStandardLibrary_GreaterFloatByte_Params
{
	float                                              A;                                                        // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      B;                                                        // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.GreaterEqualStringString
struct ULowEntryExtendedStandardLibrary_GreaterEqualStringString_Params
{
	struct FString                                     A;                                                        // (Parm, ZeroConstructor)
	struct FString                                     B;                                                        // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.GreaterEqualIntegerFloat
struct ULowEntryExtendedStandardLibrary_GreaterEqualIntegerFloat_Params
{
	int                                                A;                                                        // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              B;                                                        // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.GreaterEqualIntegerByte
struct ULowEntryExtendedStandardLibrary_GreaterEqualIntegerByte_Params
{
	int                                                A;                                                        // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      B;                                                        // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.GreaterEqualFloatInteger
struct ULowEntryExtendedStandardLibrary_GreaterEqualFloatInteger_Params
{
	float                                              A;                                                        // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	int                                                B;                                                        // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.GreaterEqualFloatByte
struct ULowEntryExtendedStandardLibrary_GreaterEqualFloatByte_Params
{
	float                                              A;                                                        // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      B;                                                        // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.GreaterEqualByteInteger
struct ULowEntryExtendedStandardLibrary_GreaterEqualByteInteger_Params
{
	unsigned char                                      A;                                                        // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	int                                                B;                                                        // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.GreaterEqualByteFloat
struct ULowEntryExtendedStandardLibrary_GreaterEqualByteFloat_Params
{
	unsigned char                                      A;                                                        // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              B;                                                        // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.GreaterByteInteger
struct ULowEntryExtendedStandardLibrary_GreaterByteInteger_Params
{
	unsigned char                                      A;                                                        // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	int                                                B;                                                        // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.GreaterByteFloat
struct ULowEntryExtendedStandardLibrary_GreaterByteFloat_Params
{
	unsigned char                                      A;                                                        // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              B;                                                        // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.GetWindowSize
struct ULowEntryExtendedStandardLibrary_GetWindowSize_Params
{
	bool                                               Success;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                Width;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                Height;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.GetWindowPosition
struct ULowEntryExtendedStandardLibrary_GetWindowPosition_Params
{
	bool                                               Success;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                X;                                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                Y;                                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.GetWindowPositiomInPercentagesCentered
struct ULowEntryExtendedStandardLibrary_GetWindowPositiomInPercentagesCentered_Params
{
	bool                                               Success;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              X;                                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              Y;                                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.GetWindowMode
struct ULowEntryExtendedStandardLibrary_GetWindowMode_Params
{
	bool                                               Success;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               Fullscreen;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               IsFullscreenWindowed;                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.GetWindowBounds
struct ULowEntryExtendedStandardLibrary_GetWindowBounds_Params
{
	bool                                               Success;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                X;                                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                Y;                                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                Width;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                Height;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.GetUserFocusedWidgetType
struct ULowEntryExtendedStandardLibrary_GetUserFocusedWidgetType_Params
{
	int                                                UserIndex;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.GetSplitScreenType
struct ULowEntryExtendedStandardLibrary_GetSplitScreenType_Params
{
	ELowEntrySplitScreenType                           Type;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.GetPrimaryMonitorWorkArea
struct ULowEntryExtendedStandardLibrary_GetPrimaryMonitorWorkArea_Params
{
	int                                                X;                                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                Y;                                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                Width;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                Height;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.GetPrimaryMonitorResolution
struct ULowEntryExtendedStandardLibrary_GetPrimaryMonitorResolution_Params
{
	int                                                Width;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                Height;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.GetMousePositionInPercentages
struct ULowEntryExtendedStandardLibrary_GetMousePositionInPercentages_Params
{
	bool                                               Success;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              X;                                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              Y;                                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.GetMousePosition
struct ULowEntryExtendedStandardLibrary_GetMousePosition_Params
{
	bool                                               Success;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                X;                                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                Y;                                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.GetMaximumVolume
struct ULowEntryExtendedStandardLibrary_GetMaximumVolume_Params
{
	int                                                Volume;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               Success;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.GetLocalToAbsoluteScale
struct ULowEntryExtendedStandardLibrary_GetLocalToAbsoluteScale_Params
{
	struct FGeometry                                   Geometry;                                                 // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector2D                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.GetKeyboardFocusedWidgetType
struct ULowEntryExtendedStandardLibrary_GetKeyboardFocusedWidgetType_Params
{
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.GetGenericTeamId
struct ULowEntryExtendedStandardLibrary_GetGenericTeamId_Params
{
	class AActor*                                      Target;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      TeamID;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.GetCurrentVolumePercentage
struct ULowEntryExtendedStandardLibrary_GetCurrentVolumePercentage_Params
{
	float                                              Percentage;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               Success;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.GetCurrentVolume
struct ULowEntryExtendedStandardLibrary_GetCurrentVolume_Params
{
	int                                                Volume;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               Success;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.GetClassWithName
struct ULowEntryExtendedStandardLibrary_GetClassWithName_Params
{
	struct FString                                     ClassName;                                                // (Parm, ZeroConstructor)
	class UClass*                                      Class_;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               Success;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.GetByteWithBitSet
struct ULowEntryExtendedStandardLibrary_GetByteWithBitSet_Params
{
	unsigned char                                      Byte;                                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Bit;                                                      // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Value;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.GetBatteryTemperature
struct ULowEntryExtendedStandardLibrary_GetBatteryTemperature_Params
{
	float                                              Celsius;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               Success;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.GetBatteryState
struct ULowEntryExtendedStandardLibrary_GetBatteryState_Params
{
	ELowEntryBatteryState                              State;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               Success;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.GetBatteryCharge
struct ULowEntryExtendedStandardLibrary_GetBatteryCharge_Params
{
	int                                                Percentage;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               Success;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.GetAndroidVolume
struct ULowEntryExtendedStandardLibrary_GetAndroidVolume_Params
{
	int                                                Volume;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.GetAndroidVersion
struct ULowEntryExtendedStandardLibrary_GetAndroidVersion_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.GetAndroidOsLanguage
struct ULowEntryExtendedStandardLibrary_GetAndroidOsLanguage_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.GetAndroidNumberOfCores
struct ULowEntryExtendedStandardLibrary_GetAndroidNumberOfCores_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.GetAndroidGpuFamily
struct ULowEntryExtendedStandardLibrary_GetAndroidGpuFamily_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.GetAndroidGlVersion
struct ULowEntryExtendedStandardLibrary_GetAndroidGlVersion_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.GetAndroidDeviceModel
struct ULowEntryExtendedStandardLibrary_GetAndroidDeviceModel_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.GetAndroidDeviceMake
struct ULowEntryExtendedStandardLibrary_GetAndroidDeviceMake_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.GetAndroidDefaultLocale
struct ULowEntryExtendedStandardLibrary_GetAndroidDefaultLocale_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.GetAndroidBuildVersion
struct ULowEntryExtendedStandardLibrary_GetAndroidBuildVersion_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.GetAbsoluteToLocalScale
struct ULowEntryExtendedStandardLibrary_GetAbsoluteToLocalScale_Params
{
	struct FGeometry                                   Geometry;                                                 // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector2D                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.GetAbsoluteSize
struct ULowEntryExtendedStandardLibrary_GetAbsoluteSize_Params
{
	struct FGeometry                                   Geometry;                                                 // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector2D                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.GenerateRandomBytesRandomLength
struct ULowEntryExtendedStandardLibrary_GenerateRandomBytesRandomLength_Params
{
	int                                                MinLength;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                MaxLength;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<unsigned char>                              ByteArray;                                                // (Parm, OutParm, ZeroConstructor)
};

// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.GenerateRandomBytes
struct ULowEntryExtendedStandardLibrary_GenerateRandomBytes_Params
{
	int                                                Length;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	TArray<unsigned char>                              ByteArray;                                                // (Parm, OutParm, ZeroConstructor)
};

// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.FloorDecimals
struct ULowEntryExtendedStandardLibrary_FloorDecimals_Params
{
	float                                              Number;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Decimals;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.FloatToBytes
struct ULowEntryExtendedStandardLibrary_FloatToBytes_Params
{
	float                                              Value;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	TArray<unsigned char>                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.ExecToInteger
struct ULowEntryExtendedStandardLibrary_ExecToInteger_Params
{
	ELowEntryExtendedStandardLibrary0to9               Branch;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Value;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.ExecToByte
struct ULowEntryExtendedStandardLibrary_ExecToByte_Params
{
	ELowEntryExtendedStandardLibrary0to9               Branch;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      Value;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.ExecToBoolean
struct ULowEntryExtendedStandardLibrary_ExecToBoolean_Params
{
	ELowEntryExtendedStandardLibraryTrueOrFalse        Branch;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Value;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.EncapsulateByteArray
struct ULowEntryExtendedStandardLibrary_EncapsulateByteArray_Params
{
	TArray<unsigned char>                              ByteArray;                                                // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	class ULowEntryByteArray*                          ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.Double_CreateZero
struct ULowEntryExtendedStandardLibrary_Double_CreateZero_Params
{
	class ULowEntryDouble*                             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.Double_Create
struct ULowEntryExtendedStandardLibrary_Double_Create_Params
{
	TArray<unsigned char>                              ByteArray;                                                // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Length;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class ULowEntryDouble*                             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.Divide_Vector2dVector2d
struct ULowEntryExtendedStandardLibrary_Divide_Vector2dVector2d_Params
{
	struct FVector2D                                   A;                                                        // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FVector2D                                   B;                                                        // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FVector2D                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.DevelopmentBuild
struct ULowEntryExtendedStandardLibrary_DevelopmentBuild_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.DesktopPlatform
struct ULowEntryExtendedStandardLibrary_DesktopPlatform_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.DelayFrames
struct ULowEntryExtendedStandardLibrary_DelayFrames_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Frames;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLatentActionInfo                           LatentInfo;                                               // (Parm)
};

// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.DebugBuild
struct ULowEntryExtendedStandardLibrary_DebugBuild_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.DateTime_ToUnixTimestamp
struct ULowEntryExtendedStandardLibrary_DateTime_ToUnixTimestamp_Params
{
	struct FDateTime                                   DateTime;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	class ULowEntryLong*                               Timestamp;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.DateTime_ToString
struct ULowEntryExtendedStandardLibrary_DateTime_ToString_Params
{
	struct FDateTime                                   DateTime;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	struct FString                                     String;                                                   // (Parm, OutParm, ZeroConstructor)
	struct FString                                     Format;                                                   // (Parm, ZeroConstructor)
};

// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.DateTime_ToIso8601
struct ULowEntryExtendedStandardLibrary_DateTime_ToIso8601_Params
{
	struct FDateTime                                   DateTime;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	struct FString                                     String;                                                   // (Parm, OutParm, ZeroConstructor)
};

// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.DateTime_FromUnixTimestamp
struct ULowEntryExtendedStandardLibrary_DateTime_FromUnixTimestamp_Params
{
	class ULowEntryLong*                               Timestamp;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FDateTime                                   DateTime;                                                 // (Parm, OutParm, ZeroConstructor)
};

// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.CreateString
struct ULowEntryExtendedStandardLibrary_CreateString_Params
{
	int                                                Length;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     Filler;                                                   // (Parm, ZeroConstructor)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.CreateObject
struct ULowEntryExtendedStandardLibrary_CreateObject_Params
{
	class UClass*                                      Class;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     Object;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.Crash
struct ULowEntryExtendedStandardLibrary_Crash_Params
{
};

// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.ConvertUtcDateToLocalDate
struct ULowEntryExtendedStandardLibrary_ConvertUtcDateToLocalDate_Params
{
	struct FDateTime                                   Utc;                                                      // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	struct FDateTime                                   Local;                                                    // (Parm, OutParm, ZeroConstructor)
};

// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.ConvertLocalDateToUtcDate
struct ULowEntryExtendedStandardLibrary_ConvertLocalDateToUtcDate_Params
{
	struct FDateTime                                   Local;                                                    // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	struct FDateTime                                   Utc;                                                      // (Parm, OutParm, ZeroConstructor)
};

// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.ClearUserFocus
struct ULowEntryExtendedStandardLibrary_ClearUserFocus_Params
{
	int                                                UserIndex;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.ClearKeyboardFocus
struct ULowEntryExtendedStandardLibrary_ClearKeyboardFocus_Params
{
};

// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.ClearAllUserFocus
struct ULowEntryExtendedStandardLibrary_ClearAllUserFocus_Params
{
};

// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.ChangeMap
struct ULowEntryExtendedStandardLibrary_ChangeMap_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     Map;                                                      // (Parm, ZeroConstructor)
	struct FString                                     Args;                                                     // (Parm, ZeroConstructor)
	class APlayerController*                           SpecificPlayer;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.CeilDecimals
struct ULowEntryExtendedStandardLibrary_CeilDecimals_Params
{
	float                                              Number;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Decimals;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.CaseSwitchObject
struct ULowEntryExtendedStandardLibrary_CaseSwitchObject_Params
{
	int                                                OnlyCheckFirstX;                                          // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     Value;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     _1__;                                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     _2__;                                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     _3__;                                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     _4__;                                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     _5__;                                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     _6__;                                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     _7__;                                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     _8__;                                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     _9__;                                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     _10__;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	ELowEntryExtendedStandardLibrary1to10other         Branch;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.CaseSwitchInteger
struct ULowEntryExtendedStandardLibrary_CaseSwitchInteger_Params
{
	int                                                OnlyCheckFirstX;                                          // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Value;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	int                                                _1__;                                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	int                                                _2__;                                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	int                                                _3__;                                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	int                                                _4__;                                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	int                                                _5__;                                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	int                                                _6__;                                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	int                                                _7__;                                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	int                                                _8__;                                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	int                                                _9__;                                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	int                                                _10__;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	ELowEntryExtendedStandardLibrary1to10other         Branch;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.CaseSwitchByte
struct ULowEntryExtendedStandardLibrary_CaseSwitchByte_Params
{
	int                                                OnlyCheckFirstX;                                          // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      Value;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      _1__;                                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      _2__;                                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      _3__;                                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      _4__;                                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      _5__;                                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      _6__;                                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      _7__;                                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      _8__;                                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      _9__;                                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      _10__;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	ELowEntryExtendedStandardLibrary1to10other         Branch;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.CarriageReturnCharacter
struct ULowEntryExtendedStandardLibrary_CarriageReturnCharacter_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.ByteToBytes
struct ULowEntryExtendedStandardLibrary_ByteToBytes_Params
{
	unsigned char                                      Value;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	TArray<unsigned char>                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.ByteToBoolean
struct ULowEntryExtendedStandardLibrary_ByteToBoolean_Params
{
	unsigned char                                      Byte;                                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.ByteToBits
struct ULowEntryExtendedStandardLibrary_ByteToBits_Params
{
	unsigned char                                      Byte;                                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Bit1;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               Bit2;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               Bit3;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               Bit4;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               Bit5;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               Bit6;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               Bit7;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               Bit8;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.BytesToStringUtf8
struct ULowEntryExtendedStandardLibrary_BytesToStringUtf8_Params
{
	TArray<unsigned char>                              ByteArray;                                                // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Length;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.BytesToPixels
struct ULowEntryExtendedStandardLibrary_BytesToPixels_Params
{
	TArray<unsigned char>                              ByteArray;                                                // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	ELowEntryImageFormat                               ImageFormat;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Width;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                Height;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	TArray<struct FColor>                              Pixels;                                                   // (Parm, OutParm, ZeroConstructor)
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Length;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.BytesToLongBytes
struct ULowEntryExtendedStandardLibrary_BytesToLongBytes_Params
{
	TArray<unsigned char>                              ByteArray;                                                // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Length;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class ULowEntryLong*                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.BytesToInteger
struct ULowEntryExtendedStandardLibrary_BytesToInteger_Params
{
	TArray<unsigned char>                              ByteArray;                                                // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Length;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.BytesToImage
struct ULowEntryExtendedStandardLibrary_BytesToImage_Params
{
	TArray<unsigned char>                              ByteArray;                                                // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	ELowEntryImageFormat                               ImageFormat;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Length;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.BytesToHex
struct ULowEntryExtendedStandardLibrary_BytesToHex_Params
{
	TArray<unsigned char>                              ByteArray;                                                // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool                                               AddSpaces;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Length;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.BytesToFloat
struct ULowEntryExtendedStandardLibrary_BytesToFloat_Params
{
	TArray<unsigned char>                              ByteArray;                                                // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Length;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.BytesToExistingImage
struct ULowEntryExtendedStandardLibrary_BytesToExistingImage_Params
{
	bool                                               ReusedGivenTexture2D;                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  Texture2D;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<unsigned char>                              ByteArray;                                                // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	ELowEntryImageFormat                               ImageFormat;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Length;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.BytesToDoubleBytes
struct ULowEntryExtendedStandardLibrary_BytesToDoubleBytes_Params
{
	TArray<unsigned char>                              ByteArray;                                                // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Length;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class ULowEntryDouble*                             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.BytesToByte
struct ULowEntryExtendedStandardLibrary_BytesToByte_Params
{
	TArray<unsigned char>                              ByteArray;                                                // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Length;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.BytesToBoolean
struct ULowEntryExtendedStandardLibrary_BytesToBoolean_Params
{
	TArray<unsigned char>                              ByteArray;                                                // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Length;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.BytesToBitString
struct ULowEntryExtendedStandardLibrary_BytesToBitString_Params
{
	TArray<unsigned char>                              ByteArray;                                                // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool                                               AddSpaces;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Length;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.BytesToBinary
struct ULowEntryExtendedStandardLibrary_BytesToBinary_Params
{
	TArray<unsigned char>                              ByteArray;                                                // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool                                               AddSpaces;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Length;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.BytesToBase64Url
struct ULowEntryExtendedStandardLibrary_BytesToBase64Url_Params
{
	TArray<unsigned char>                              ByteArray;                                                // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Length;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.BytesToBase64
struct ULowEntryExtendedStandardLibrary_BytesToBase64_Params
{
	TArray<unsigned char>                              ByteArray;                                                // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Length;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.BytesSubArray
struct ULowEntryExtendedStandardLibrary_BytesSubArray_Params
{
	TArray<unsigned char>                              ByteArray;                                                // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Length;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<unsigned char>                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.ByteDataWriter_GetBytes
struct ULowEntryExtendedStandardLibrary_ByteDataWriter_GetBytes_Params
{
	class ULowEntryByteDataWriter*                     ByteDataWriter;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<unsigned char>                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.ByteDataWriter_CreateFromEntryArrayPure
struct ULowEntryExtendedStandardLibrary_ByteDataWriter_CreateFromEntryArrayPure_Params
{
	TArray<class ULowEntryByteDataEntry*>              Array;                                                    // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	class ULowEntryByteDataWriter*                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.ByteDataWriter_CreateFromEntryArray
struct ULowEntryExtendedStandardLibrary_ByteDataWriter_CreateFromEntryArray_Params
{
	TArray<class ULowEntryByteDataEntry*>              Array;                                                    // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	class ULowEntryByteDataWriter*                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.ByteDataReader_Create
struct ULowEntryExtendedStandardLibrary_ByteDataReader_Create_Params
{
	TArray<unsigned char>                              Bytes;                                                    // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Length;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class ULowEntryByteDataReader*                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.ByteDataEntry_CreateFromStringUtf8Array
struct ULowEntryExtendedStandardLibrary_ByteDataEntry_CreateFromStringUtf8Array_Params
{
	TArray<struct FString>                             Value;                                                    // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	class ULowEntryByteDataEntry*                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.ByteDataEntry_CreateFromStringUtf8
struct ULowEntryExtendedStandardLibrary_ByteDataEntry_CreateFromStringUtf8_Params
{
	struct FString                                     Value;                                                    // (Parm, ZeroConstructor)
	class ULowEntryByteDataEntry*                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.ByteDataEntry_CreateFromPositiveInteger3Array
struct ULowEntryExtendedStandardLibrary_ByteDataEntry_CreateFromPositiveInteger3Array_Params
{
	TArray<int>                                        Value;                                                    // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	class ULowEntryByteDataEntry*                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.ByteDataEntry_CreateFromPositiveInteger3
struct ULowEntryExtendedStandardLibrary_ByteDataEntry_CreateFromPositiveInteger3_Params
{
	int                                                Value;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class ULowEntryByteDataEntry*                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.ByteDataEntry_CreateFromPositiveInteger2Array
struct ULowEntryExtendedStandardLibrary_ByteDataEntry_CreateFromPositiveInteger2Array_Params
{
	TArray<int>                                        Value;                                                    // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	class ULowEntryByteDataEntry*                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.ByteDataEntry_CreateFromPositiveInteger2
struct ULowEntryExtendedStandardLibrary_ByteDataEntry_CreateFromPositiveInteger2_Params
{
	int                                                Value;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class ULowEntryByteDataEntry*                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.ByteDataEntry_CreateFromPositiveInteger1Array
struct ULowEntryExtendedStandardLibrary_ByteDataEntry_CreateFromPositiveInteger1Array_Params
{
	TArray<int>                                        Value;                                                    // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	class ULowEntryByteDataEntry*                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.ByteDataEntry_CreateFromPositiveInteger1
struct ULowEntryExtendedStandardLibrary_ByteDataEntry_CreateFromPositiveInteger1_Params
{
	int                                                Value;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class ULowEntryByteDataEntry*                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.ByteDataEntry_CreateFromLongBytesArray
struct ULowEntryExtendedStandardLibrary_ByteDataEntry_CreateFromLongBytesArray_Params
{
	TArray<class ULowEntryLong*>                       Value;                                                    // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	class ULowEntryByteDataEntry*                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.ByteDataEntry_CreateFromLongBytes
struct ULowEntryExtendedStandardLibrary_ByteDataEntry_CreateFromLongBytes_Params
{
	class ULowEntryLong*                               Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class ULowEntryByteDataEntry*                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.ByteDataEntry_CreateFromIntegerArray
struct ULowEntryExtendedStandardLibrary_ByteDataEntry_CreateFromIntegerArray_Params
{
	TArray<int>                                        Value;                                                    // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	class ULowEntryByteDataEntry*                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.ByteDataEntry_CreateFromInteger
struct ULowEntryExtendedStandardLibrary_ByteDataEntry_CreateFromInteger_Params
{
	int                                                Value;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class ULowEntryByteDataEntry*                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.ByteDataEntry_CreateFromFloatArray
struct ULowEntryExtendedStandardLibrary_ByteDataEntry_CreateFromFloatArray_Params
{
	TArray<float>                                      Value;                                                    // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	class ULowEntryByteDataEntry*                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.ByteDataEntry_CreateFromFloat
struct ULowEntryExtendedStandardLibrary_ByteDataEntry_CreateFromFloat_Params
{
	float                                              Value;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class ULowEntryByteDataEntry*                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.ByteDataEntry_CreateFromDoubleBytesArray
struct ULowEntryExtendedStandardLibrary_ByteDataEntry_CreateFromDoubleBytesArray_Params
{
	TArray<class ULowEntryDouble*>                     Value;                                                    // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	class ULowEntryByteDataEntry*                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.ByteDataEntry_CreateFromDoubleBytes
struct ULowEntryExtendedStandardLibrary_ByteDataEntry_CreateFromDoubleBytes_Params
{
	class ULowEntryDouble*                             Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class ULowEntryByteDataEntry*                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.ByteDataEntry_CreateFromByteArray
struct ULowEntryExtendedStandardLibrary_ByteDataEntry_CreateFromByteArray_Params
{
	TArray<unsigned char>                              Value;                                                    // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	class ULowEntryByteDataEntry*                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.ByteDataEntry_CreateFromByte
struct ULowEntryExtendedStandardLibrary_ByteDataEntry_CreateFromByte_Params
{
	unsigned char                                      Value;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class ULowEntryByteDataEntry*                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.ByteDataEntry_CreateFromBooleanArray
struct ULowEntryExtendedStandardLibrary_ByteDataEntry_CreateFromBooleanArray_Params
{
	TArray<bool>                                       Value;                                                    // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	class ULowEntryByteDataEntry*                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.ByteDataEntry_CreateFromBoolean
struct ULowEntryExtendedStandardLibrary_ByteDataEntry_CreateFromBoolean_Params
{
	bool                                               Value;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class ULowEntryByteDataEntry*                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.BooleanToBytes
struct ULowEntryExtendedStandardLibrary_BooleanToBytes_Params
{
	bool                                               Value;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	TArray<unsigned char>                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.BooleanToByte
struct ULowEntryExtendedStandardLibrary_BooleanToByte_Params
{
	bool                                               Value;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.BitStringToBytes
struct ULowEntryExtendedStandardLibrary_BitStringToBytes_Params
{
	struct FString                                     Bits;                                                     // (Parm, ZeroConstructor)
	TArray<unsigned char>                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.BitsToByte
struct ULowEntryExtendedStandardLibrary_BitsToByte_Params
{
	bool                                               Bit1;                                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Bit2;                                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Bit3;                                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Bit4;                                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Bit5;                                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Bit6;                                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Bit7;                                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Bit8;                                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      Byte;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.BitDataWriter_GetBytes
struct ULowEntryExtendedStandardLibrary_BitDataWriter_GetBytes_Params
{
	class ULowEntryBitDataWriter*                      BitDataWriter;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<unsigned char>                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.BitDataWriter_CreateFromEntryArrayPure
struct ULowEntryExtendedStandardLibrary_BitDataWriter_CreateFromEntryArrayPure_Params
{
	TArray<class ULowEntryBitDataEntry*>               Array;                                                    // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	class ULowEntryBitDataWriter*                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.BitDataWriter_CreateFromEntryArray
struct ULowEntryExtendedStandardLibrary_BitDataWriter_CreateFromEntryArray_Params
{
	TArray<class ULowEntryBitDataEntry*>               Array;                                                    // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	class ULowEntryBitDataWriter*                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.BitDataReader_Create
struct ULowEntryExtendedStandardLibrary_BitDataReader_Create_Params
{
	TArray<unsigned char>                              Bytes;                                                    // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Length;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class ULowEntryBitDataReader*                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.BitDataEntry_CreateFromStringUtf8Array
struct ULowEntryExtendedStandardLibrary_BitDataEntry_CreateFromStringUtf8Array_Params
{
	TArray<struct FString>                             Value;                                                    // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	class ULowEntryBitDataEntry*                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.BitDataEntry_CreateFromStringUtf8
struct ULowEntryExtendedStandardLibrary_BitDataEntry_CreateFromStringUtf8_Params
{
	struct FString                                     Value;                                                    // (Parm, ZeroConstructor)
	class ULowEntryBitDataEntry*                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.BitDataEntry_CreateFromPositiveInteger3Array
struct ULowEntryExtendedStandardLibrary_BitDataEntry_CreateFromPositiveInteger3Array_Params
{
	TArray<int>                                        Value;                                                    // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	class ULowEntryBitDataEntry*                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.BitDataEntry_CreateFromPositiveInteger3
struct ULowEntryExtendedStandardLibrary_BitDataEntry_CreateFromPositiveInteger3_Params
{
	int                                                Value;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class ULowEntryBitDataEntry*                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.BitDataEntry_CreateFromPositiveInteger2Array
struct ULowEntryExtendedStandardLibrary_BitDataEntry_CreateFromPositiveInteger2Array_Params
{
	TArray<int>                                        Value;                                                    // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	class ULowEntryBitDataEntry*                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.BitDataEntry_CreateFromPositiveInteger2
struct ULowEntryExtendedStandardLibrary_BitDataEntry_CreateFromPositiveInteger2_Params
{
	int                                                Value;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class ULowEntryBitDataEntry*                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.BitDataEntry_CreateFromPositiveInteger1Array
struct ULowEntryExtendedStandardLibrary_BitDataEntry_CreateFromPositiveInteger1Array_Params
{
	TArray<int>                                        Value;                                                    // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	class ULowEntryBitDataEntry*                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.BitDataEntry_CreateFromPositiveInteger1
struct ULowEntryExtendedStandardLibrary_BitDataEntry_CreateFromPositiveInteger1_Params
{
	int                                                Value;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class ULowEntryBitDataEntry*                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.BitDataEntry_CreateFromLongBytesArray
struct ULowEntryExtendedStandardLibrary_BitDataEntry_CreateFromLongBytesArray_Params
{
	TArray<class ULowEntryLong*>                       Value;                                                    // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	class ULowEntryBitDataEntry*                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.BitDataEntry_CreateFromLongBytes
struct ULowEntryExtendedStandardLibrary_BitDataEntry_CreateFromLongBytes_Params
{
	class ULowEntryLong*                               Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class ULowEntryBitDataEntry*                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.BitDataEntry_CreateFromIntegerMostSignificantBits
struct ULowEntryExtendedStandardLibrary_BitDataEntry_CreateFromIntegerMostSignificantBits_Params
{
	int                                                Value;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	int                                                BitCount;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class ULowEntryBitDataEntry*                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.BitDataEntry_CreateFromIntegerLeastSignificantBits
struct ULowEntryExtendedStandardLibrary_BitDataEntry_CreateFromIntegerLeastSignificantBits_Params
{
	int                                                Value;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	int                                                BitCount;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class ULowEntryBitDataEntry*                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.BitDataEntry_CreateFromIntegerArrayMostSignificantBits
struct ULowEntryExtendedStandardLibrary_BitDataEntry_CreateFromIntegerArrayMostSignificantBits_Params
{
	TArray<int>                                        Value;                                                    // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	int                                                BitCount;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class ULowEntryBitDataEntry*                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.BitDataEntry_CreateFromIntegerArrayLeastSignificantBits
struct ULowEntryExtendedStandardLibrary_BitDataEntry_CreateFromIntegerArrayLeastSignificantBits_Params
{
	TArray<int>                                        Value;                                                    // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	int                                                BitCount;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class ULowEntryBitDataEntry*                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.BitDataEntry_CreateFromIntegerArray
struct ULowEntryExtendedStandardLibrary_BitDataEntry_CreateFromIntegerArray_Params
{
	TArray<int>                                        Value;                                                    // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	class ULowEntryBitDataEntry*                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.BitDataEntry_CreateFromInteger
struct ULowEntryExtendedStandardLibrary_BitDataEntry_CreateFromInteger_Params
{
	int                                                Value;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class ULowEntryBitDataEntry*                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.BitDataEntry_CreateFromFloatArray
struct ULowEntryExtendedStandardLibrary_BitDataEntry_CreateFromFloatArray_Params
{
	TArray<float>                                      Value;                                                    // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	class ULowEntryBitDataEntry*                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.BitDataEntry_CreateFromFloat
struct ULowEntryExtendedStandardLibrary_BitDataEntry_CreateFromFloat_Params
{
	float                                              Value;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class ULowEntryBitDataEntry*                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.BitDataEntry_CreateFromDoubleBytesArray
struct ULowEntryExtendedStandardLibrary_BitDataEntry_CreateFromDoubleBytesArray_Params
{
	TArray<class ULowEntryDouble*>                     Value;                                                    // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	class ULowEntryBitDataEntry*                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.BitDataEntry_CreateFromDoubleBytes
struct ULowEntryExtendedStandardLibrary_BitDataEntry_CreateFromDoubleBytes_Params
{
	class ULowEntryDouble*                             Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class ULowEntryBitDataEntry*                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.BitDataEntry_CreateFromByteMostSignificantBits
struct ULowEntryExtendedStandardLibrary_BitDataEntry_CreateFromByteMostSignificantBits_Params
{
	unsigned char                                      Value;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	int                                                BitCount;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class ULowEntryBitDataEntry*                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.BitDataEntry_CreateFromByteLeastSignificantBits
struct ULowEntryExtendedStandardLibrary_BitDataEntry_CreateFromByteLeastSignificantBits_Params
{
	unsigned char                                      Value;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	int                                                BitCount;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class ULowEntryBitDataEntry*                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.BitDataEntry_CreateFromByteArrayMostSignificantBits
struct ULowEntryExtendedStandardLibrary_BitDataEntry_CreateFromByteArrayMostSignificantBits_Params
{
	TArray<unsigned char>                              Value;                                                    // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	int                                                BitCount;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class ULowEntryBitDataEntry*                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.BitDataEntry_CreateFromByteArrayLeastSignificantBits
struct ULowEntryExtendedStandardLibrary_BitDataEntry_CreateFromByteArrayLeastSignificantBits_Params
{
	TArray<unsigned char>                              Value;                                                    // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	int                                                BitCount;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class ULowEntryBitDataEntry*                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.BitDataEntry_CreateFromByteArray
struct ULowEntryExtendedStandardLibrary_BitDataEntry_CreateFromByteArray_Params
{
	TArray<unsigned char>                              Value;                                                    // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	class ULowEntryBitDataEntry*                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.BitDataEntry_CreateFromByte
struct ULowEntryExtendedStandardLibrary_BitDataEntry_CreateFromByte_Params
{
	unsigned char                                      Value;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class ULowEntryBitDataEntry*                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.BitDataEntry_CreateFromBooleanArray
struct ULowEntryExtendedStandardLibrary_BitDataEntry_CreateFromBooleanArray_Params
{
	TArray<bool>                                       Value;                                                    // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	class ULowEntryBitDataEntry*                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.BitDataEntry_CreateFromBoolean
struct ULowEntryExtendedStandardLibrary_BitDataEntry_CreateFromBoolean_Params
{
	bool                                               Value;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class ULowEntryBitDataEntry*                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.BitDataEntry_CreateFromBitArray
struct ULowEntryExtendedStandardLibrary_BitDataEntry_CreateFromBitArray_Params
{
	TArray<bool>                                       Value;                                                    // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	class ULowEntryBitDataEntry*                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.BitDataEntry_CreateFromBit
struct ULowEntryExtendedStandardLibrary_BitDataEntry_CreateFromBit_Params
{
	bool                                               Value;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class ULowEntryBitDataEntry*                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.BinaryToBytes
struct ULowEntryExtendedStandardLibrary_BinaryToBytes_Params
{
	struct FString                                     Binary;                                                   // (Parm, ZeroConstructor)
	TArray<unsigned char>                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.BCrypt
struct ULowEntryExtendedStandardLibrary_BCrypt_Params
{
	TArray<unsigned char>                              ByteArray;                                                // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<unsigned char>                              Salt;                                                     // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	int                                                Strength;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Length;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<unsigned char>                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.Base64UrlToBytes
struct ULowEntryExtendedStandardLibrary_Base64UrlToBytes_Params
{
	struct FString                                     Base64Url;                                                // (Parm, ZeroConstructor)
	TArray<unsigned char>                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.Base64UrlToBase64
struct ULowEntryExtendedStandardLibrary_Base64UrlToBase64_Params
{
	struct FString                                     Base64Url;                                                // (Parm, ZeroConstructor)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.Base64ToBytes
struct ULowEntryExtendedStandardLibrary_Base64ToBytes_Params
{
	struct FString                                     Base64;                                                   // (Parm, ZeroConstructor)
	TArray<unsigned char>                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.Base64ToBase64Url
struct ULowEntryExtendedStandardLibrary_Base64ToBase64Url_Params
{
	struct FString                                     Base64;                                                   // (Parm, ZeroConstructor)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.AreBytesEqual
struct ULowEntryExtendedStandardLibrary_AreBytesEqual_Params
{
	TArray<unsigned char>                              A;                                                        // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<unsigned char>                              B;                                                        // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	int                                                IndexA;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                LengthA;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                IndexB;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                LengthB;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.AreAndroidHeadphonesPluggedIn
struct ULowEntryExtendedStandardLibrary_AreAndroidHeadphonesPluggedIn_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.AndroidPlatform
struct ULowEntryExtendedStandardLibrary_AndroidPlatform_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function LowEntryExtendedStandardLibrary.LowEntryLatentActionBoolean.WaitTillDone
struct ULowEntryLatentActionBoolean_WaitTillDone_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLatentActionInfo                           LatentInfo;                                               // (Parm)
	bool                                               Result_;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function LowEntryExtendedStandardLibrary.LowEntryLatentActionBoolean.IsDone
struct ULowEntryLatentActionBoolean_IsDone_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function LowEntryExtendedStandardLibrary.LowEntryLatentActionBoolean.GetResult
struct ULowEntryLatentActionBoolean_GetResult_Params
{
	bool                                               Result_;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function LowEntryExtendedStandardLibrary.LowEntryLatentActionBoolean.Done
struct ULowEntryLatentActionBoolean_Done_Params
{
	bool                                               Result_;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function LowEntryExtendedStandardLibrary.LowEntryLatentActionFloat.WaitTillDone
struct ULowEntryLatentActionFloat_WaitTillDone_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLatentActionInfo                           LatentInfo;                                               // (Parm)
	float                                              Result_;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function LowEntryExtendedStandardLibrary.LowEntryLatentActionFloat.IsDone
struct ULowEntryLatentActionFloat_IsDone_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function LowEntryExtendedStandardLibrary.LowEntryLatentActionFloat.GetResult
struct ULowEntryLatentActionFloat_GetResult_Params
{
	float                                              Result_;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function LowEntryExtendedStandardLibrary.LowEntryLatentActionFloat.Done
struct ULowEntryLatentActionFloat_Done_Params
{
	float                                              Result_;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function LowEntryExtendedStandardLibrary.LowEntryLatentActionInteger.WaitTillDone
struct ULowEntryLatentActionInteger_WaitTillDone_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLatentActionInfo                           LatentInfo;                                               // (Parm)
	int                                                Result_;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function LowEntryExtendedStandardLibrary.LowEntryLatentActionInteger.IsDone
struct ULowEntryLatentActionInteger_IsDone_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function LowEntryExtendedStandardLibrary.LowEntryLatentActionInteger.GetResult
struct ULowEntryLatentActionInteger_GetResult_Params
{
	int                                                Result_;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function LowEntryExtendedStandardLibrary.LowEntryLatentActionInteger.Done
struct ULowEntryLatentActionInteger_Done_Params
{
	int                                                Result_;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function LowEntryExtendedStandardLibrary.LowEntryLatentActionNone.WaitTillDone
struct ULowEntryLatentActionNone_WaitTillDone_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLatentActionInfo                           LatentInfo;                                               // (Parm)
};

// Function LowEntryExtendedStandardLibrary.LowEntryLatentActionNone.IsDone
struct ULowEntryLatentActionNone_IsDone_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function LowEntryExtendedStandardLibrary.LowEntryLatentActionNone.Done
struct ULowEntryLatentActionNone_Done_Params
{
};

// Function LowEntryExtendedStandardLibrary.LowEntryLatentActionObject.WaitTillDone
struct ULowEntryLatentActionObject_WaitTillDone_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLatentActionInfo                           LatentInfo;                                               // (Parm)
	class UObject*                                     Result_;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function LowEntryExtendedStandardLibrary.LowEntryLatentActionObject.IsDone
struct ULowEntryLatentActionObject_IsDone_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function LowEntryExtendedStandardLibrary.LowEntryLatentActionObject.GetResult
struct ULowEntryLatentActionObject_GetResult_Params
{
	class UObject*                                     Result_;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function LowEntryExtendedStandardLibrary.LowEntryLatentActionObject.Done
struct ULowEntryLatentActionObject_Done_Params
{
	class UObject*                                     Result_;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function LowEntryExtendedStandardLibrary.LowEntryLatentActionString.WaitTillDone
struct ULowEntryLatentActionString_WaitTillDone_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLatentActionInfo                           LatentInfo;                                               // (Parm)
	struct FString                                     Result_;                                                  // (Parm, OutParm, ZeroConstructor)
};

// Function LowEntryExtendedStandardLibrary.LowEntryLatentActionString.IsDone
struct ULowEntryLatentActionString_IsDone_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function LowEntryExtendedStandardLibrary.LowEntryLatentActionString.GetResult
struct ULowEntryLatentActionString_GetResult_Params
{
	struct FString                                     Result_;                                                  // (Parm, OutParm, ZeroConstructor)
};

// Function LowEntryExtendedStandardLibrary.LowEntryLatentActionString.Done
struct ULowEntryLatentActionString_Done_Params
{
	struct FString                                     Result_;                                                  // (Parm, ZeroConstructor)
};

// Function LowEntryExtendedStandardLibrary.LowEntryLong.SetBytes
struct ULowEntryLong_SetBytes_Params
{
	TArray<unsigned char>                              ByteArray;                                                // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Length;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function LowEntryExtendedStandardLibrary.LowEntryLong.LongBytes_Subtract
struct ULowEntryLong_LongBytes_Subtract_Params
{
	class ULowEntryLong*                               Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function LowEntryExtendedStandardLibrary.LowEntryLong.LongBytes_LessThan
struct ULowEntryLong_LongBytes_LessThan_Params
{
	class ULowEntryLong*                               Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function LowEntryExtendedStandardLibrary.LowEntryLong.LongBytes_GreaterThan
struct ULowEntryLong_LongBytes_GreaterThan_Params
{
	class ULowEntryLong*                               Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function LowEntryExtendedStandardLibrary.LowEntryLong.LongBytes_Equals
struct ULowEntryLong_LongBytes_Equals_Params
{
	class ULowEntryLong*                               Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function LowEntryExtendedStandardLibrary.LowEntryLong.LongBytes_Add
struct ULowEntryLong_LongBytes_Add_Params
{
	class ULowEntryLong*                               Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function LowEntryExtendedStandardLibrary.LowEntryLong.Integer_Subtract
struct ULowEntryLong_Integer_Subtract_Params
{
	int                                                Value;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function LowEntryExtendedStandardLibrary.LowEntryLong.Integer_LessThan
struct ULowEntryLong_Integer_LessThan_Params
{
	int                                                Value;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function LowEntryExtendedStandardLibrary.LowEntryLong.Integer_GreaterThan
struct ULowEntryLong_Integer_GreaterThan_Params
{
	int                                                Value;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function LowEntryExtendedStandardLibrary.LowEntryLong.Integer_Equals
struct ULowEntryLong_Integer_Equals_Params
{
	int                                                Value;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function LowEntryExtendedStandardLibrary.LowEntryLong.Integer_Add
struct ULowEntryLong_Integer_Add_Params
{
	int                                                Value;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function LowEntryExtendedStandardLibrary.LowEntryLong.GetBytes
struct ULowEntryLong_GetBytes_Params
{
	TArray<unsigned char>                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function LowEntryExtendedStandardLibrary.LowEntryLong.Float_LessThan
struct ULowEntryLong_Float_LessThan_Params
{
	float                                              Value;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function LowEntryExtendedStandardLibrary.LowEntryLong.Float_GreaterThan
struct ULowEntryLong_Float_GreaterThan_Params
{
	float                                              Value;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function LowEntryExtendedStandardLibrary.LowEntryLong.DoubleBytes_LessThan
struct ULowEntryLong_DoubleBytes_LessThan_Params
{
	class ULowEntryDouble*                             Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function LowEntryExtendedStandardLibrary.LowEntryLong.DoubleBytes_GreaterThan
struct ULowEntryLong_DoubleBytes_GreaterThan_Params
{
	class ULowEntryDouble*                             Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function LowEntryExtendedStandardLibrary.LowEntryLong.CreateClone
struct ULowEntryLong_CreateClone_Params
{
	class ULowEntryLong*                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function LowEntryExtendedStandardLibrary.LowEntryLong.CastToString
struct ULowEntryLong_CastToString_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function LowEntryExtendedStandardLibrary.LowEntryLong.CastToDoubleBytes
struct ULowEntryLong_CastToDoubleBytes_Params
{
	class ULowEntryDouble*                             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function LowEntryExtendedStandardLibrary.LowEntryParsedHashcash.ToString
struct ULowEntryParsedHashcash_ToString_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function LowEntryExtendedStandardLibrary.LowEntryParsedHashcash.GetResource
struct ULowEntryParsedHashcash_GetResource_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function LowEntryExtendedStandardLibrary.LowEntryParsedHashcash.GetDate
struct ULowEntryParsedHashcash_GetDate_Params
{
	struct FDateTime                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function LowEntryExtendedStandardLibrary.LowEntryParsedHashcash.GetBits
struct ULowEntryParsedHashcash_GetBits_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
