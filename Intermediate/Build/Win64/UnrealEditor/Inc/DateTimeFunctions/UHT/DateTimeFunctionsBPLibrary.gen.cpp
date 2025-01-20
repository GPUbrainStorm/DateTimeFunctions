// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DateTimeFunctions/Public/DateTimeFunctionsBPLibrary.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDateTimeFunctionsBPLibrary() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FDateTime();
	DATETIMEFUNCTIONS_API UClass* Z_Construct_UClass_UDateTimeCountdown();
	DATETIMEFUNCTIONS_API UClass* Z_Construct_UClass_UDateTimeCountdown_NoRegister();
	DATETIMEFUNCTIONS_API UClass* Z_Construct_UClass_UDateTimeFunctionsBPLibrary();
	DATETIMEFUNCTIONS_API UClass* Z_Construct_UClass_UDateTimeFunctionsBPLibrary_NoRegister();
	DATETIMEFUNCTIONS_API UEnum* Z_Construct_UEnum_DateTimeFunctions_FormatsOptions();
	DATETIMEFUNCTIONS_API UEnum* Z_Construct_UEnum_DateTimeFunctions_SecondsFormatsOptions();
	DATETIMEFUNCTIONS_API UFunction* Z_Construct_UDelegateFunction_DateTimeFunctions_OnCountdownTick__DelegateSignature();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_DateTimeFunctions();
// End Cross Module References
	DEFINE_FUNCTION(UDateTimeFunctionsBPLibrary::execGetMonthFullName)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_MonthNumber);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UDateTimeFunctionsBPLibrary::GetMonthFullName(Z_Param_MonthNumber);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDateTimeFunctionsBPLibrary::execGetMonthShortName)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_MonthNumber);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UDateTimeFunctionsBPLibrary::GetMonthShortName(Z_Param_MonthNumber);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDateTimeFunctionsBPLibrary::execHoursToSeconds)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Hours);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=UDateTimeFunctionsBPLibrary::HoursToSeconds(Z_Param_Hours);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDateTimeFunctionsBPLibrary::execFormatSeconds)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Seconds);
		P_GET_ENUM(SecondsFormatsOptions,Z_Param_Format);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UDateTimeFunctionsBPLibrary::FormatSeconds(Z_Param_Seconds,SecondsFormatsOptions(Z_Param_Format));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDateTimeFunctionsBPLibrary::execFormatDate)
	{
		P_GET_ENUM(FormatsOptions,Z_Param_Options);
		P_GET_STRUCT(FDateTime,Z_Param_Date);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UDateTimeFunctionsBPLibrary::FormatDate(FormatsOptions(Z_Param_Options),Z_Param_Date);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDateTimeFunctionsBPLibrary::execSelectTimezone)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Hour_GMT_Diff);
		P_GET_PROPERTY(FIntProperty,Z_Param_Minutes_GMT_Diff);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FDateTime*)Z_Param__Result=UDateTimeFunctionsBPLibrary::SelectTimezone(Z_Param_Hour_GMT_Diff,Z_Param_Minutes_GMT_Diff);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDateTimeFunctionsBPLibrary::execSubDate)
	{
		P_GET_STRUCT(FDateTime,Z_Param_FirstDate);
		P_GET_STRUCT(FDateTime,Z_Param_SecondDate);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(double*)Z_Param__Result=UDateTimeFunctionsBPLibrary::SubDate(Z_Param_FirstDate,Z_Param_SecondDate);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDateTimeFunctionsBPLibrary::execGetTimeSinceEpoch)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(double*)Z_Param__Result=UDateTimeFunctionsBPLibrary::GetTimeSinceEpoch();
		P_NATIVE_END;
	}
	void UDateTimeFunctionsBPLibrary::StaticRegisterNativesUDateTimeFunctionsBPLibrary()
	{
		UClass* Class = UDateTimeFunctionsBPLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "FormatDate", &UDateTimeFunctionsBPLibrary::execFormatDate },
			{ "FormatSeconds", &UDateTimeFunctionsBPLibrary::execFormatSeconds },
			{ "GetMonthFullName", &UDateTimeFunctionsBPLibrary::execGetMonthFullName },
			{ "GetMonthShortName", &UDateTimeFunctionsBPLibrary::execGetMonthShortName },
			{ "GetTimeSinceEpoch", &UDateTimeFunctionsBPLibrary::execGetTimeSinceEpoch },
			{ "HoursToSeconds", &UDateTimeFunctionsBPLibrary::execHoursToSeconds },
			{ "SelectTimezone", &UDateTimeFunctionsBPLibrary::execSelectTimezone },
			{ "SubDate", &UDateTimeFunctionsBPLibrary::execSubDate },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UDateTimeFunctionsBPLibrary_FormatDate_Statics
	{
		struct DateTimeFunctionsBPLibrary_eventFormatDate_Parms
		{
			FormatsOptions Options;
			FDateTime Date;
			FString ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_Options_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Options;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Date;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UDateTimeFunctionsBPLibrary_FormatDate_Statics::NewProp_Options_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UDateTimeFunctionsBPLibrary_FormatDate_Statics::NewProp_Options = { "Options", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DateTimeFunctionsBPLibrary_eventFormatDate_Parms, Options), Z_Construct_UEnum_DateTimeFunctions_FormatsOptions, METADATA_PARAMS(nullptr, 0) }; // 2621321629
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDateTimeFunctionsBPLibrary_FormatDate_Statics::NewProp_Date = { "Date", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DateTimeFunctionsBPLibrary_eventFormatDate_Parms, Date), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UDateTimeFunctionsBPLibrary_FormatDate_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DateTimeFunctionsBPLibrary_eventFormatDate_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDateTimeFunctionsBPLibrary_FormatDate_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDateTimeFunctionsBPLibrary_FormatDate_Statics::NewProp_Options_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDateTimeFunctionsBPLibrary_FormatDate_Statics::NewProp_Options,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDateTimeFunctionsBPLibrary_FormatDate_Statics::NewProp_Date,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDateTimeFunctionsBPLibrary_FormatDate_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDateTimeFunctionsBPLibrary_FormatDate_Statics::Function_MetaDataParams[] = {
		{ "Category", "DateTimeFunctions|Format" },
		{ "DisplayName", "Format Date" },
		{ "Keywords", "Format Date" },
		{ "ModuleRelativePath", "Public/DateTimeFunctionsBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDateTimeFunctionsBPLibrary_FormatDate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDateTimeFunctionsBPLibrary, nullptr, "FormatDate", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDateTimeFunctionsBPLibrary_FormatDate_Statics::DateTimeFunctionsBPLibrary_eventFormatDate_Parms), Z_Construct_UFunction_UDateTimeFunctionsBPLibrary_FormatDate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDateTimeFunctionsBPLibrary_FormatDate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDateTimeFunctionsBPLibrary_FormatDate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDateTimeFunctionsBPLibrary_FormatDate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDateTimeFunctionsBPLibrary_FormatDate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDateTimeFunctionsBPLibrary_FormatDate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDateTimeFunctionsBPLibrary_FormatSeconds_Statics
	{
		struct DateTimeFunctionsBPLibrary_eventFormatSeconds_Parms
		{
			int32 Seconds;
			SecondsFormatsOptions Format;
			FString ReturnValue;
		};
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_Seconds;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Format_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Format;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UDateTimeFunctionsBPLibrary_FormatSeconds_Statics::NewProp_Seconds = { "Seconds", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DateTimeFunctionsBPLibrary_eventFormatSeconds_Parms, Seconds), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UDateTimeFunctionsBPLibrary_FormatSeconds_Statics::NewProp_Format_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UDateTimeFunctionsBPLibrary_FormatSeconds_Statics::NewProp_Format = { "Format", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DateTimeFunctionsBPLibrary_eventFormatSeconds_Parms, Format), Z_Construct_UEnum_DateTimeFunctions_SecondsFormatsOptions, METADATA_PARAMS(nullptr, 0) }; // 2444595235
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UDateTimeFunctionsBPLibrary_FormatSeconds_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DateTimeFunctionsBPLibrary_eventFormatSeconds_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDateTimeFunctionsBPLibrary_FormatSeconds_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDateTimeFunctionsBPLibrary_FormatSeconds_Statics::NewProp_Seconds,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDateTimeFunctionsBPLibrary_FormatSeconds_Statics::NewProp_Format_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDateTimeFunctionsBPLibrary_FormatSeconds_Statics::NewProp_Format,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDateTimeFunctionsBPLibrary_FormatSeconds_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDateTimeFunctionsBPLibrary_FormatSeconds_Statics::Function_MetaDataParams[] = {
		{ "Category", "DateTimeFunctions|Format" },
		{ "DisplayName", "Format Seconds" },
		{ "Keywords", "SecondsToClock" },
		{ "ModuleRelativePath", "Public/DateTimeFunctionsBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDateTimeFunctionsBPLibrary_FormatSeconds_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDateTimeFunctionsBPLibrary, nullptr, "FormatSeconds", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDateTimeFunctionsBPLibrary_FormatSeconds_Statics::DateTimeFunctionsBPLibrary_eventFormatSeconds_Parms), Z_Construct_UFunction_UDateTimeFunctionsBPLibrary_FormatSeconds_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDateTimeFunctionsBPLibrary_FormatSeconds_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDateTimeFunctionsBPLibrary_FormatSeconds_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDateTimeFunctionsBPLibrary_FormatSeconds_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDateTimeFunctionsBPLibrary_FormatSeconds()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDateTimeFunctionsBPLibrary_FormatSeconds_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDateTimeFunctionsBPLibrary_GetMonthFullName_Statics
	{
		struct DateTimeFunctionsBPLibrary_eventGetMonthFullName_Parms
		{
			int32 MonthNumber;
			FString ReturnValue;
		};
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_MonthNumber;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UDateTimeFunctionsBPLibrary_GetMonthFullName_Statics::NewProp_MonthNumber = { "MonthNumber", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DateTimeFunctionsBPLibrary_eventGetMonthFullName_Parms, MonthNumber), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UDateTimeFunctionsBPLibrary_GetMonthFullName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DateTimeFunctionsBPLibrary_eventGetMonthFullName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDateTimeFunctionsBPLibrary_GetMonthFullName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDateTimeFunctionsBPLibrary_GetMonthFullName_Statics::NewProp_MonthNumber,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDateTimeFunctionsBPLibrary_GetMonthFullName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDateTimeFunctionsBPLibrary_GetMonthFullName_Statics::Function_MetaDataParams[] = {
		{ "Category", "DateTimeFunctions|Format" },
		{ "DisplayName", "Get Month Full Name" },
		{ "Keywords", "Month Full Name" },
		{ "ModuleRelativePath", "Public/DateTimeFunctionsBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDateTimeFunctionsBPLibrary_GetMonthFullName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDateTimeFunctionsBPLibrary, nullptr, "GetMonthFullName", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDateTimeFunctionsBPLibrary_GetMonthFullName_Statics::DateTimeFunctionsBPLibrary_eventGetMonthFullName_Parms), Z_Construct_UFunction_UDateTimeFunctionsBPLibrary_GetMonthFullName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDateTimeFunctionsBPLibrary_GetMonthFullName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDateTimeFunctionsBPLibrary_GetMonthFullName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDateTimeFunctionsBPLibrary_GetMonthFullName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDateTimeFunctionsBPLibrary_GetMonthFullName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDateTimeFunctionsBPLibrary_GetMonthFullName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDateTimeFunctionsBPLibrary_GetMonthShortName_Statics
	{
		struct DateTimeFunctionsBPLibrary_eventGetMonthShortName_Parms
		{
			int32 MonthNumber;
			FString ReturnValue;
		};
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_MonthNumber;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UDateTimeFunctionsBPLibrary_GetMonthShortName_Statics::NewProp_MonthNumber = { "MonthNumber", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DateTimeFunctionsBPLibrary_eventGetMonthShortName_Parms, MonthNumber), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UDateTimeFunctionsBPLibrary_GetMonthShortName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DateTimeFunctionsBPLibrary_eventGetMonthShortName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDateTimeFunctionsBPLibrary_GetMonthShortName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDateTimeFunctionsBPLibrary_GetMonthShortName_Statics::NewProp_MonthNumber,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDateTimeFunctionsBPLibrary_GetMonthShortName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDateTimeFunctionsBPLibrary_GetMonthShortName_Statics::Function_MetaDataParams[] = {
		{ "Category", "DateTimeFunctions|Format" },
		{ "DisplayName", "Get Month Short Name" },
		{ "Keywords", "Month Short Name" },
		{ "ModuleRelativePath", "Public/DateTimeFunctionsBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDateTimeFunctionsBPLibrary_GetMonthShortName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDateTimeFunctionsBPLibrary, nullptr, "GetMonthShortName", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDateTimeFunctionsBPLibrary_GetMonthShortName_Statics::DateTimeFunctionsBPLibrary_eventGetMonthShortName_Parms), Z_Construct_UFunction_UDateTimeFunctionsBPLibrary_GetMonthShortName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDateTimeFunctionsBPLibrary_GetMonthShortName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDateTimeFunctionsBPLibrary_GetMonthShortName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDateTimeFunctionsBPLibrary_GetMonthShortName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDateTimeFunctionsBPLibrary_GetMonthShortName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDateTimeFunctionsBPLibrary_GetMonthShortName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDateTimeFunctionsBPLibrary_GetTimeSinceEpoch_Statics
	{
		struct DateTimeFunctionsBPLibrary_eventGetTimeSinceEpoch_Parms
		{
			double ReturnValue;
		};
		static const UECodeGen_Private::FDoublePropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_UDateTimeFunctionsBPLibrary_GetTimeSinceEpoch_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DateTimeFunctionsBPLibrary_eventGetTimeSinceEpoch_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDateTimeFunctionsBPLibrary_GetTimeSinceEpoch_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDateTimeFunctionsBPLibrary_GetTimeSinceEpoch_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDateTimeFunctionsBPLibrary_GetTimeSinceEpoch_Statics::Function_MetaDataParams[] = {
		{ "Category", "DateTimeFunctions|Operations" },
		{ "DisplayName", "Unix Timestamp" },
		{ "Keywords", "Python gettime function" },
		{ "ModuleRelativePath", "Public/DateTimeFunctionsBPLibrary.h" },
		{ "ToolTip", "Use To Text(Float) node to remove fractions if needed." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDateTimeFunctionsBPLibrary_GetTimeSinceEpoch_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDateTimeFunctionsBPLibrary, nullptr, "GetTimeSinceEpoch", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDateTimeFunctionsBPLibrary_GetTimeSinceEpoch_Statics::DateTimeFunctionsBPLibrary_eventGetTimeSinceEpoch_Parms), Z_Construct_UFunction_UDateTimeFunctionsBPLibrary_GetTimeSinceEpoch_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDateTimeFunctionsBPLibrary_GetTimeSinceEpoch_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDateTimeFunctionsBPLibrary_GetTimeSinceEpoch_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDateTimeFunctionsBPLibrary_GetTimeSinceEpoch_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDateTimeFunctionsBPLibrary_GetTimeSinceEpoch()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDateTimeFunctionsBPLibrary_GetTimeSinceEpoch_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDateTimeFunctionsBPLibrary_HoursToSeconds_Statics
	{
		struct DateTimeFunctionsBPLibrary_eventHoursToSeconds_Parms
		{
			float Hours;
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Hours;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDateTimeFunctionsBPLibrary_HoursToSeconds_Statics::NewProp_Hours = { "Hours", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DateTimeFunctionsBPLibrary_eventHoursToSeconds_Parms, Hours), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDateTimeFunctionsBPLibrary_HoursToSeconds_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DateTimeFunctionsBPLibrary_eventHoursToSeconds_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDateTimeFunctionsBPLibrary_HoursToSeconds_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDateTimeFunctionsBPLibrary_HoursToSeconds_Statics::NewProp_Hours,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDateTimeFunctionsBPLibrary_HoursToSeconds_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDateTimeFunctionsBPLibrary_HoursToSeconds_Statics::Function_MetaDataParams[] = {
		{ "Category", "DateTimeFunctions|Format" },
		{ "DisplayName", "Hours To Seconds" },
		{ "Keywords", "Hours To Seconds" },
		{ "ModuleRelativePath", "Public/DateTimeFunctionsBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDateTimeFunctionsBPLibrary_HoursToSeconds_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDateTimeFunctionsBPLibrary, nullptr, "HoursToSeconds", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDateTimeFunctionsBPLibrary_HoursToSeconds_Statics::DateTimeFunctionsBPLibrary_eventHoursToSeconds_Parms), Z_Construct_UFunction_UDateTimeFunctionsBPLibrary_HoursToSeconds_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDateTimeFunctionsBPLibrary_HoursToSeconds_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDateTimeFunctionsBPLibrary_HoursToSeconds_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDateTimeFunctionsBPLibrary_HoursToSeconds_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDateTimeFunctionsBPLibrary_HoursToSeconds()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDateTimeFunctionsBPLibrary_HoursToSeconds_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDateTimeFunctionsBPLibrary_SelectTimezone_Statics
	{
		struct DateTimeFunctionsBPLibrary_eventSelectTimezone_Parms
		{
			int32 Hour_GMT_Diff;
			int32 Minutes_GMT_Diff;
			FDateTime ReturnValue;
		};
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_Hour_GMT_Diff;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_Minutes_GMT_Diff;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UDateTimeFunctionsBPLibrary_SelectTimezone_Statics::NewProp_Hour_GMT_Diff = { "Hour_GMT_Diff", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DateTimeFunctionsBPLibrary_eventSelectTimezone_Parms, Hour_GMT_Diff), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UDateTimeFunctionsBPLibrary_SelectTimezone_Statics::NewProp_Minutes_GMT_Diff = { "Minutes_GMT_Diff", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DateTimeFunctionsBPLibrary_eventSelectTimezone_Parms, Minutes_GMT_Diff), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDateTimeFunctionsBPLibrary_SelectTimezone_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DateTimeFunctionsBPLibrary_eventSelectTimezone_Parms, ReturnValue), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDateTimeFunctionsBPLibrary_SelectTimezone_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDateTimeFunctionsBPLibrary_SelectTimezone_Statics::NewProp_Hour_GMT_Diff,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDateTimeFunctionsBPLibrary_SelectTimezone_Statics::NewProp_Minutes_GMT_Diff,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDateTimeFunctionsBPLibrary_SelectTimezone_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDateTimeFunctionsBPLibrary_SelectTimezone_Statics::Function_MetaDataParams[] = {
		{ "Category", "DateTimeFunctions|Operations" },
		{ "DisplayName", "Get Date Time in selected TimeZone" },
		{ "Keywords", "Timezone" },
		{ "ModuleRelativePath", "Public/DateTimeFunctionsBPLibrary.h" },
		{ "ToolTip", "Examlpe: -8.5 GMT time will be -8 in Hours and -30 in mins\nIf the goal is the user's machine timezone, you can use now() function." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDateTimeFunctionsBPLibrary_SelectTimezone_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDateTimeFunctionsBPLibrary, nullptr, "SelectTimezone", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDateTimeFunctionsBPLibrary_SelectTimezone_Statics::DateTimeFunctionsBPLibrary_eventSelectTimezone_Parms), Z_Construct_UFunction_UDateTimeFunctionsBPLibrary_SelectTimezone_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDateTimeFunctionsBPLibrary_SelectTimezone_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDateTimeFunctionsBPLibrary_SelectTimezone_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDateTimeFunctionsBPLibrary_SelectTimezone_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDateTimeFunctionsBPLibrary_SelectTimezone()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDateTimeFunctionsBPLibrary_SelectTimezone_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDateTimeFunctionsBPLibrary_SubDate_Statics
	{
		struct DateTimeFunctionsBPLibrary_eventSubDate_Parms
		{
			FDateTime FirstDate;
			FDateTime SecondDate;
			double ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_FirstDate;
		static const UECodeGen_Private::FStructPropertyParams NewProp_SecondDate;
		static const UECodeGen_Private::FDoublePropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDateTimeFunctionsBPLibrary_SubDate_Statics::NewProp_FirstDate = { "FirstDate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DateTimeFunctionsBPLibrary_eventSubDate_Parms, FirstDate), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDateTimeFunctionsBPLibrary_SubDate_Statics::NewProp_SecondDate = { "SecondDate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DateTimeFunctionsBPLibrary_eventSubDate_Parms, SecondDate), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_UDateTimeFunctionsBPLibrary_SubDate_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DateTimeFunctionsBPLibrary_eventSubDate_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDateTimeFunctionsBPLibrary_SubDate_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDateTimeFunctionsBPLibrary_SubDate_Statics::NewProp_FirstDate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDateTimeFunctionsBPLibrary_SubDate_Statics::NewProp_SecondDate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDateTimeFunctionsBPLibrary_SubDate_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDateTimeFunctionsBPLibrary_SubDate_Statics::Function_MetaDataParams[] = {
		{ "Category", "DateTimeFunctions|Operations" },
		{ "DisplayName", "Subtract Dates" },
		{ "Keywords", "Allow time date subtract" },
		{ "ModuleRelativePath", "Public/DateTimeFunctionsBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDateTimeFunctionsBPLibrary_SubDate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDateTimeFunctionsBPLibrary, nullptr, "SubDate", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDateTimeFunctionsBPLibrary_SubDate_Statics::DateTimeFunctionsBPLibrary_eventSubDate_Parms), Z_Construct_UFunction_UDateTimeFunctionsBPLibrary_SubDate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDateTimeFunctionsBPLibrary_SubDate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDateTimeFunctionsBPLibrary_SubDate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDateTimeFunctionsBPLibrary_SubDate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDateTimeFunctionsBPLibrary_SubDate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDateTimeFunctionsBPLibrary_SubDate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDateTimeFunctionsBPLibrary);
	UClass* Z_Construct_UClass_UDateTimeFunctionsBPLibrary_NoRegister()
	{
		return UDateTimeFunctionsBPLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UDateTimeFunctionsBPLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDateTimeFunctionsBPLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_DateTimeFunctions,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UDateTimeFunctionsBPLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UDateTimeFunctionsBPLibrary_FormatDate, "FormatDate" }, // 3729298964
		{ &Z_Construct_UFunction_UDateTimeFunctionsBPLibrary_FormatSeconds, "FormatSeconds" }, // 2198010199
		{ &Z_Construct_UFunction_UDateTimeFunctionsBPLibrary_GetMonthFullName, "GetMonthFullName" }, // 3409780055
		{ &Z_Construct_UFunction_UDateTimeFunctionsBPLibrary_GetMonthShortName, "GetMonthShortName" }, // 3835549062
		{ &Z_Construct_UFunction_UDateTimeFunctionsBPLibrary_GetTimeSinceEpoch, "GetTimeSinceEpoch" }, // 3056006128
		{ &Z_Construct_UFunction_UDateTimeFunctionsBPLibrary_HoursToSeconds, "HoursToSeconds" }, // 2980691502
		{ &Z_Construct_UFunction_UDateTimeFunctionsBPLibrary_SelectTimezone, "SelectTimezone" }, // 627680513
		{ &Z_Construct_UFunction_UDateTimeFunctionsBPLibrary_SubDate, "SubDate" }, // 2324609042
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDateTimeFunctionsBPLibrary_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/* \n*\x09""Function library class.\n*\x09""Each function in it is expected to be static and represents blueprint node that can be called in any blueprint.\n*\n*\x09When declaring function you can define metadata for the node. Key function specifiers will be BlueprintPure and BlueprintCallable.\n*\x09""BlueprintPure - means the function does not affect the owning object in any way and thus creates a node without Exec pins.\n*\x09""BlueprintCallable - makes a function which can be executed in Blueprints - Thus it has Exec pins.\n*\x09""DisplayName - full name of the node, shown when you mouse over the node and in the blueprint drop down menu.\n*\x09\x09\x09\x09Its lets you name the node using characters not allowed in C++ function names.\n*\x09""CompactNodeTitle - the word(s) that appear on the node.\n*\x09Keywords -\x09the list of keywords that helps you to find node when you search for it using Blueprint drop-down menu. \n*\x09\x09\x09\x09Good example is \"Print String\" node which you can find also by using keyword \"log\".\n*\x09""Category -\x09the category your node will be under in the Blueprint drop-down menu.\n*\n*\x09""For more info on custom blueprint nodes visit documentation:\n*\x09https://wiki.unrealengine.com/Custom_Blueprint_Node_Creation\n*/" },
		{ "IncludePath", "DateTimeFunctionsBPLibrary.h" },
		{ "ModuleRelativePath", "Public/DateTimeFunctionsBPLibrary.h" },
		{ "ToolTip", "*      Function library class.\n*      Each function in it is expected to be static and represents blueprint node that can be called in any blueprint.\n*\n*      When declaring function you can define metadata for the node. Key function specifiers will be BlueprintPure and BlueprintCallable.\n*      BlueprintPure - means the function does not affect the owning object in any way and thus creates a node without Exec pins.\n*      BlueprintCallable - makes a function which can be executed in Blueprints - Thus it has Exec pins.\n*      DisplayName - full name of the node, shown when you mouse over the node and in the blueprint drop down menu.\n*                              Its lets you name the node using characters not allowed in C++ function names.\n*      CompactNodeTitle - the word(s) that appear on the node.\n*      Keywords -      the list of keywords that helps you to find node when you search for it using Blueprint drop-down menu.\n*                              Good example is \"Print String\" node which you can find also by using keyword \"log\".\n*      Category -      the category your node will be under in the Blueprint drop-down menu.\n*\n*      For more info on custom blueprint nodes visit documentation:\n*      https://wiki.unrealengine.com/Custom_Blueprint_Node_Creation" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDateTimeFunctionsBPLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDateTimeFunctionsBPLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDateTimeFunctionsBPLibrary_Statics::ClassParams = {
		&UDateTimeFunctionsBPLibrary::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDateTimeFunctionsBPLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDateTimeFunctionsBPLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDateTimeFunctionsBPLibrary()
	{
		if (!Z_Registration_Info_UClass_UDateTimeFunctionsBPLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDateTimeFunctionsBPLibrary.OuterSingleton, Z_Construct_UClass_UDateTimeFunctionsBPLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDateTimeFunctionsBPLibrary.OuterSingleton;
	}
	template<> DATETIMEFUNCTIONS_API UClass* StaticClass<UDateTimeFunctionsBPLibrary>()
	{
		return UDateTimeFunctionsBPLibrary::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDateTimeFunctionsBPLibrary);
	UDateTimeFunctionsBPLibrary::~UDateTimeFunctionsBPLibrary() {}
	struct Z_Construct_UDelegateFunction_DateTimeFunctions_OnCountdownTick__DelegateSignature_Statics
	{
		struct _Script_DateTimeFunctions_eventOnCountdownTick_Parms
		{
			int32 CurrentTime;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_CurrentTime;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_DateTimeFunctions_OnCountdownTick__DelegateSignature_Statics::NewProp_CurrentTime = { "CurrentTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_DateTimeFunctions_eventOnCountdownTick_Parms, CurrentTime), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_DateTimeFunctions_OnCountdownTick__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_DateTimeFunctions_OnCountdownTick__DelegateSignature_Statics::NewProp_CurrentTime,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_DateTimeFunctions_OnCountdownTick__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DateTimeFunctionsBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_DateTimeFunctions_OnCountdownTick__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_DateTimeFunctions, nullptr, "OnCountdownTick__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_DateTimeFunctions_OnCountdownTick__DelegateSignature_Statics::_Script_DateTimeFunctions_eventOnCountdownTick_Parms), Z_Construct_UDelegateFunction_DateTimeFunctions_OnCountdownTick__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_DateTimeFunctions_OnCountdownTick__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_DateTimeFunctions_OnCountdownTick__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_DateTimeFunctions_OnCountdownTick__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_DateTimeFunctions_OnCountdownTick__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_DateTimeFunctions_OnCountdownTick__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnCountdownTick_DelegateWrapper(const FMulticastScriptDelegate& OnCountdownTick, int32 CurrentTime)
{
	struct _Script_DateTimeFunctions_eventOnCountdownTick_Parms
	{
		int32 CurrentTime;
	};
	_Script_DateTimeFunctions_eventOnCountdownTick_Parms Parms;
	Parms.CurrentTime=CurrentTime;
	OnCountdownTick.ProcessMulticastDelegate<UObject>(&Parms);
}
	DEFINE_FUNCTION(UDateTimeCountdown::execStartCountdown)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_StartTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StartCountdown(Z_Param_StartTime);
		P_NATIVE_END;
	}
	void UDateTimeCountdown::StaticRegisterNativesUDateTimeCountdown()
	{
		UClass* Class = UDateTimeCountdown::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "StartCountdown", &UDateTimeCountdown::execStartCountdown },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UDateTimeCountdown_StartCountdown_Statics
	{
		struct DateTimeCountdown_eventStartCountdown_Parms
		{
			int32 StartTime;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_StartTime;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDateTimeCountdown_StartCountdown_Statics::NewProp_StartTime = { "StartTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DateTimeCountdown_eventStartCountdown_Parms, StartTime), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDateTimeCountdown_StartCountdown_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDateTimeCountdown_StartCountdown_Statics::NewProp_StartTime,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDateTimeCountdown_StartCountdown_Statics::Function_MetaDataParams[] = {
		{ "Category", "DateTimeFunctions" },
		{ "ModuleRelativePath", "Public/DateTimeFunctionsBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDateTimeCountdown_StartCountdown_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDateTimeCountdown, nullptr, "StartCountdown", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDateTimeCountdown_StartCountdown_Statics::DateTimeCountdown_eventStartCountdown_Parms), Z_Construct_UFunction_UDateTimeCountdown_StartCountdown_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDateTimeCountdown_StartCountdown_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDateTimeCountdown_StartCountdown_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDateTimeCountdown_StartCountdown_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDateTimeCountdown_StartCountdown()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDateTimeCountdown_StartCountdown_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDateTimeCountdown);
	UClass* Z_Construct_UClass_UDateTimeCountdown_NoRegister()
	{
		return UDateTimeCountdown::StaticClass();
	}
	struct Z_Construct_UClass_UDateTimeCountdown_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CountdownTime_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_CountdownTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnCountdownTick_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCountdownTick;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDateTimeCountdown_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_DateTimeFunctions,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UDateTimeCountdown_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UDateTimeCountdown_StartCountdown, "StartCountdown" }, // 2409842678
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDateTimeCountdown_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "DateTimeFunctionsBPLibrary.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/DateTimeFunctionsBPLibrary.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDateTimeCountdown_Statics::NewProp_CountdownTime_MetaData[] = {
		{ "Category", "DateTimeFunctions" },
		{ "ModuleRelativePath", "Public/DateTimeFunctionsBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UDateTimeCountdown_Statics::NewProp_CountdownTime = { "CountdownTime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDateTimeCountdown, CountdownTime), METADATA_PARAMS(Z_Construct_UClass_UDateTimeCountdown_Statics::NewProp_CountdownTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDateTimeCountdown_Statics::NewProp_CountdownTime_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDateTimeCountdown_Statics::NewProp_OnCountdownTick_MetaData[] = {
		{ "Category", "DateTimeFunctions" },
		{ "ModuleRelativePath", "Public/DateTimeFunctionsBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UDateTimeCountdown_Statics::NewProp_OnCountdownTick = { "OnCountdownTick", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDateTimeCountdown, OnCountdownTick), Z_Construct_UDelegateFunction_DateTimeFunctions_OnCountdownTick__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UDateTimeCountdown_Statics::NewProp_OnCountdownTick_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDateTimeCountdown_Statics::NewProp_OnCountdownTick_MetaData)) }; // 4128470175
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDateTimeCountdown_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDateTimeCountdown_Statics::NewProp_CountdownTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDateTimeCountdown_Statics::NewProp_OnCountdownTick,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDateTimeCountdown_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDateTimeCountdown>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDateTimeCountdown_Statics::ClassParams = {
		&UDateTimeCountdown::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UDateTimeCountdown_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UDateTimeCountdown_Statics::PropPointers),
		0,
		0x008000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDateTimeCountdown_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDateTimeCountdown_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDateTimeCountdown()
	{
		if (!Z_Registration_Info_UClass_UDateTimeCountdown.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDateTimeCountdown.OuterSingleton, Z_Construct_UClass_UDateTimeCountdown_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDateTimeCountdown.OuterSingleton;
	}
	template<> DATETIMEFUNCTIONS_API UClass* StaticClass<UDateTimeCountdown>()
	{
		return UDateTimeCountdown::StaticClass();
	}
	UDateTimeCountdown::UDateTimeCountdown(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDateTimeCountdown);
	UDateTimeCountdown::~UDateTimeCountdown() {}
	struct Z_CompiledInDeferFile_FID_UpdatedDateTimeFunction_HostProject_Plugins_DateTimeFunctions_Source_DateTimeFunctions_Public_DateTimeFunctionsBPLibrary_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UpdatedDateTimeFunction_HostProject_Plugins_DateTimeFunctions_Source_DateTimeFunctions_Public_DateTimeFunctionsBPLibrary_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDateTimeFunctionsBPLibrary, UDateTimeFunctionsBPLibrary::StaticClass, TEXT("UDateTimeFunctionsBPLibrary"), &Z_Registration_Info_UClass_UDateTimeFunctionsBPLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDateTimeFunctionsBPLibrary), 233424369U) },
		{ Z_Construct_UClass_UDateTimeCountdown, UDateTimeCountdown::StaticClass, TEXT("UDateTimeCountdown"), &Z_Registration_Info_UClass_UDateTimeCountdown, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDateTimeCountdown), 443332780U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UpdatedDateTimeFunction_HostProject_Plugins_DateTimeFunctions_Source_DateTimeFunctions_Public_DateTimeFunctionsBPLibrary_h_1061635056(TEXT("/Script/DateTimeFunctions"),
		Z_CompiledInDeferFile_FID_UpdatedDateTimeFunction_HostProject_Plugins_DateTimeFunctions_Source_DateTimeFunctions_Public_DateTimeFunctionsBPLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UpdatedDateTimeFunction_HostProject_Plugins_DateTimeFunctions_Source_DateTimeFunctions_Public_DateTimeFunctionsBPLibrary_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
