// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DateTimeFunctions/Public/DateTimeFunctions.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDateTimeFunctions() {}
// Cross Module References
	DATETIMEFUNCTIONS_API UEnum* Z_Construct_UEnum_DateTimeFunctions_FormatsOptions();
	UPackage* Z_Construct_UPackage__Script_DateTimeFunctions();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_FormatsOptions;
	static UEnum* FormatsOptions_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_FormatsOptions.OuterSingleton)
		{
			Z_Registration_Info_UEnum_FormatsOptions.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_DateTimeFunctions_FormatsOptions, (UObject*)Z_Construct_UPackage__Script_DateTimeFunctions(), TEXT("FormatsOptions"));
		}
		return Z_Registration_Info_UEnum_FormatsOptions.OuterSingleton;
	}
	template<> DATETIMEFUNCTIONS_API UEnum* StaticEnum<FormatsOptions>()
	{
		return FormatsOptions_StaticEnum();
	}
	struct Z_Construct_UEnum_DateTimeFunctions_FormatsOptions_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_DateTimeFunctions_FormatsOptions_Statics::Enumerators[] = {
		{ "FormatsOptions::OptionA", (int64)FormatsOptions::OptionA },
		{ "FormatsOptions::OptionB", (int64)FormatsOptions::OptionB },
		{ "FormatsOptions::OptionC", (int64)FormatsOptions::OptionC },
		{ "FormatsOptions::OptionD", (int64)FormatsOptions::OptionD },
		{ "FormatsOptions::OptionE", (int64)FormatsOptions::OptionE },
		{ "FormatsOptions::OptionF", (int64)FormatsOptions::OptionF },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_DateTimeFunctions_FormatsOptions_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/DateTimeFunctions.h" },
		{ "OptionA.DisplayName", "DD/MM/YYYY" },
		{ "OptionA.Name", "FormatsOptions::OptionA" },
		{ "OptionB.DisplayName", "MM/DD/YYYY" },
		{ "OptionB.Name", "FormatsOptions::OptionB" },
		{ "OptionC.DisplayName", "Mon,DD YYYY" },
		{ "OptionC.Name", "FormatsOptions::OptionC" },
		{ "OptionD.DisplayName", "DD Mon YYYY" },
		{ "OptionD.Name", "FormatsOptions::OptionD" },
		{ "OptionE.DisplayName", "DD Month 2024" },
		{ "OptionE.Name", "FormatsOptions::OptionE" },
		{ "OptionF.DisplayName", "YYYY-MM-DD" },
		{ "OptionF.Name", "FormatsOptions::OptionF" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_DateTimeFunctions_FormatsOptions_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_DateTimeFunctions,
		nullptr,
		"FormatsOptions",
		"FormatsOptions",
		Z_Construct_UEnum_DateTimeFunctions_FormatsOptions_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_DateTimeFunctions_FormatsOptions_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_DateTimeFunctions_FormatsOptions_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_DateTimeFunctions_FormatsOptions_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_DateTimeFunctions_FormatsOptions()
	{
		if (!Z_Registration_Info_UEnum_FormatsOptions.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_FormatsOptions.InnerSingleton, Z_Construct_UEnum_DateTimeFunctions_FormatsOptions_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_FormatsOptions.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_DateTimeFunctions_HostProject_Plugins_DateTimeFunctions_Source_DateTimeFunctions_Public_DateTimeFunctions_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_DateTimeFunctions_HostProject_Plugins_DateTimeFunctions_Source_DateTimeFunctions_Public_DateTimeFunctions_h_Statics::EnumInfo[] = {
		{ FormatsOptions_StaticEnum, TEXT("FormatsOptions"), &Z_Registration_Info_UEnum_FormatsOptions, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2177615428U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_DateTimeFunctions_HostProject_Plugins_DateTimeFunctions_Source_DateTimeFunctions_Public_DateTimeFunctions_h_1635568055(TEXT("/Script/DateTimeFunctions"),
		nullptr, 0,
		nullptr, 0,
		Z_CompiledInDeferFile_FID_DateTimeFunctions_HostProject_Plugins_DateTimeFunctions_Source_DateTimeFunctions_Public_DateTimeFunctions_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_DateTimeFunctions_HostProject_Plugins_DateTimeFunctions_Source_DateTimeFunctions_Public_DateTimeFunctions_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
