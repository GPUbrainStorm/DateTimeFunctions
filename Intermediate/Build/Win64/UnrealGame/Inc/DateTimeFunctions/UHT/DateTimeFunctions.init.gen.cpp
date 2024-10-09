// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDateTimeFunctions_init() {}
	DATETIMEFUNCTIONS_API UFunction* Z_Construct_UDelegateFunction_DateTimeFunctions_OnCountdownTick__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_DateTimeFunctions;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_DateTimeFunctions()
	{
		if (!Z_Registration_Info_UPackage__Script_DateTimeFunctions.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_DateTimeFunctions_OnCountdownTick__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/DateTimeFunctions",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x147873DF,
				0x82C77FE9,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_DateTimeFunctions.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_DateTimeFunctions.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_DateTimeFunctions(Z_Construct_UPackage__Script_DateTimeFunctions, TEXT("/Script/DateTimeFunctions"), Z_Registration_Info_UPackage__Script_DateTimeFunctions, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x147873DF, 0x82C77FE9));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
