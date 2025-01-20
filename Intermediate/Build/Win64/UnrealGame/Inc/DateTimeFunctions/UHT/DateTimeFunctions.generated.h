// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DateTimeFunctions.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DATETIMEFUNCTIONS_DateTimeFunctions_generated_h
#error "DateTimeFunctions.generated.h already included, missing '#pragma once' in DateTimeFunctions.h"
#endif
#define DATETIMEFUNCTIONS_DateTimeFunctions_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UpdatedDateTimeFunction_HostProject_Plugins_DateTimeFunctions_Source_DateTimeFunctions_Public_DateTimeFunctions_h


#define FOREACH_ENUM_FORMATSOPTIONS(op) \
	op(FormatsOptions::OptionA) \
	op(FormatsOptions::OptionB) \
	op(FormatsOptions::OptionC) \
	op(FormatsOptions::OptionD) \
	op(FormatsOptions::OptionE) \
	op(FormatsOptions::OptionF) 

enum class FormatsOptions : uint8;
template<> struct TIsUEnumClass<FormatsOptions> { enum { Value = true }; };
template<> DATETIMEFUNCTIONS_API UEnum* StaticEnum<FormatsOptions>();

#define FOREACH_ENUM_SECONDSFORMATSOPTIONS(op) \
	op(SecondsFormatsOptions::OptionA) \
	op(SecondsFormatsOptions::OptionB) \
	op(SecondsFormatsOptions::OptionC) 

enum class SecondsFormatsOptions : uint8;
template<> struct TIsUEnumClass<SecondsFormatsOptions> { enum { Value = true }; };
template<> DATETIMEFUNCTIONS_API UEnum* StaticEnum<SecondsFormatsOptions>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
