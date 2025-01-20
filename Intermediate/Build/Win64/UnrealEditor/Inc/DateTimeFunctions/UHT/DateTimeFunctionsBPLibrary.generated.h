// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DateTimeFunctionsBPLibrary.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class FormatsOptions : uint8;
enum class SecondsFormatsOptions : uint8;
struct FDateTime;
#ifdef DATETIMEFUNCTIONS_DateTimeFunctionsBPLibrary_generated_h
#error "DateTimeFunctionsBPLibrary.generated.h already included, missing '#pragma once' in DateTimeFunctionsBPLibrary.h"
#endif
#define DATETIMEFUNCTIONS_DateTimeFunctionsBPLibrary_generated_h

#define FID_UpdatedDateTimeFunction_HostProject_Plugins_DateTimeFunctions_Source_DateTimeFunctions_Public_DateTimeFunctionsBPLibrary_h_27_SPARSE_DATA
#define FID_UpdatedDateTimeFunction_HostProject_Plugins_DateTimeFunctions_Source_DateTimeFunctions_Public_DateTimeFunctionsBPLibrary_h_27_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetMonthFullName); \
	DECLARE_FUNCTION(execGetMonthShortName); \
	DECLARE_FUNCTION(execHoursToSeconds); \
	DECLARE_FUNCTION(execFormatSeconds); \
	DECLARE_FUNCTION(execFormatDate); \
	DECLARE_FUNCTION(execSelectTimezone); \
	DECLARE_FUNCTION(execSubDate); \
	DECLARE_FUNCTION(execGetTimeSinceEpoch);


#define FID_UpdatedDateTimeFunction_HostProject_Plugins_DateTimeFunctions_Source_DateTimeFunctions_Public_DateTimeFunctionsBPLibrary_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetMonthFullName); \
	DECLARE_FUNCTION(execGetMonthShortName); \
	DECLARE_FUNCTION(execHoursToSeconds); \
	DECLARE_FUNCTION(execFormatSeconds); \
	DECLARE_FUNCTION(execFormatDate); \
	DECLARE_FUNCTION(execSelectTimezone); \
	DECLARE_FUNCTION(execSubDate); \
	DECLARE_FUNCTION(execGetTimeSinceEpoch);


#define FID_UpdatedDateTimeFunction_HostProject_Plugins_DateTimeFunctions_Source_DateTimeFunctions_Public_DateTimeFunctionsBPLibrary_h_27_ACCESSORS
#define FID_UpdatedDateTimeFunction_HostProject_Plugins_DateTimeFunctions_Source_DateTimeFunctions_Public_DateTimeFunctionsBPLibrary_h_27_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDateTimeFunctionsBPLibrary(); \
	friend struct Z_Construct_UClass_UDateTimeFunctionsBPLibrary_Statics; \
public: \
	DECLARE_CLASS(UDateTimeFunctionsBPLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DateTimeFunctions"), NO_API) \
	DECLARE_SERIALIZER(UDateTimeFunctionsBPLibrary)


#define FID_UpdatedDateTimeFunction_HostProject_Plugins_DateTimeFunctions_Source_DateTimeFunctions_Public_DateTimeFunctionsBPLibrary_h_27_INCLASS \
private: \
	static void StaticRegisterNativesUDateTimeFunctionsBPLibrary(); \
	friend struct Z_Construct_UClass_UDateTimeFunctionsBPLibrary_Statics; \
public: \
	DECLARE_CLASS(UDateTimeFunctionsBPLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DateTimeFunctions"), NO_API) \
	DECLARE_SERIALIZER(UDateTimeFunctionsBPLibrary)


#define FID_UpdatedDateTimeFunction_HostProject_Plugins_DateTimeFunctions_Source_DateTimeFunctions_Public_DateTimeFunctionsBPLibrary_h_27_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDateTimeFunctionsBPLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDateTimeFunctionsBPLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDateTimeFunctionsBPLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDateTimeFunctionsBPLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDateTimeFunctionsBPLibrary(UDateTimeFunctionsBPLibrary&&); \
	NO_API UDateTimeFunctionsBPLibrary(const UDateTimeFunctionsBPLibrary&); \
public: \
	NO_API virtual ~UDateTimeFunctionsBPLibrary();


#define FID_UpdatedDateTimeFunction_HostProject_Plugins_DateTimeFunctions_Source_DateTimeFunctions_Public_DateTimeFunctionsBPLibrary_h_27_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDateTimeFunctionsBPLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDateTimeFunctionsBPLibrary(UDateTimeFunctionsBPLibrary&&); \
	NO_API UDateTimeFunctionsBPLibrary(const UDateTimeFunctionsBPLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDateTimeFunctionsBPLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDateTimeFunctionsBPLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDateTimeFunctionsBPLibrary) \
	NO_API virtual ~UDateTimeFunctionsBPLibrary();


#define FID_UpdatedDateTimeFunction_HostProject_Plugins_DateTimeFunctions_Source_DateTimeFunctions_Public_DateTimeFunctionsBPLibrary_h_24_PROLOG
#define FID_UpdatedDateTimeFunction_HostProject_Plugins_DateTimeFunctions_Source_DateTimeFunctions_Public_DateTimeFunctionsBPLibrary_h_27_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UpdatedDateTimeFunction_HostProject_Plugins_DateTimeFunctions_Source_DateTimeFunctions_Public_DateTimeFunctionsBPLibrary_h_27_SPARSE_DATA \
	FID_UpdatedDateTimeFunction_HostProject_Plugins_DateTimeFunctions_Source_DateTimeFunctions_Public_DateTimeFunctionsBPLibrary_h_27_RPC_WRAPPERS \
	FID_UpdatedDateTimeFunction_HostProject_Plugins_DateTimeFunctions_Source_DateTimeFunctions_Public_DateTimeFunctionsBPLibrary_h_27_ACCESSORS \
	FID_UpdatedDateTimeFunction_HostProject_Plugins_DateTimeFunctions_Source_DateTimeFunctions_Public_DateTimeFunctionsBPLibrary_h_27_INCLASS \
	FID_UpdatedDateTimeFunction_HostProject_Plugins_DateTimeFunctions_Source_DateTimeFunctions_Public_DateTimeFunctionsBPLibrary_h_27_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_UpdatedDateTimeFunction_HostProject_Plugins_DateTimeFunctions_Source_DateTimeFunctions_Public_DateTimeFunctionsBPLibrary_h_27_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UpdatedDateTimeFunction_HostProject_Plugins_DateTimeFunctions_Source_DateTimeFunctions_Public_DateTimeFunctionsBPLibrary_h_27_SPARSE_DATA \
	FID_UpdatedDateTimeFunction_HostProject_Plugins_DateTimeFunctions_Source_DateTimeFunctions_Public_DateTimeFunctionsBPLibrary_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UpdatedDateTimeFunction_HostProject_Plugins_DateTimeFunctions_Source_DateTimeFunctions_Public_DateTimeFunctionsBPLibrary_h_27_ACCESSORS \
	FID_UpdatedDateTimeFunction_HostProject_Plugins_DateTimeFunctions_Source_DateTimeFunctions_Public_DateTimeFunctionsBPLibrary_h_27_INCLASS_NO_PURE_DECLS \
	FID_UpdatedDateTimeFunction_HostProject_Plugins_DateTimeFunctions_Source_DateTimeFunctions_Public_DateTimeFunctionsBPLibrary_h_27_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class DateTimeFunctionsBPLibrary."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DATETIMEFUNCTIONS_API UClass* StaticClass<class UDateTimeFunctionsBPLibrary>();

#define FID_UpdatedDateTimeFunction_HostProject_Plugins_DateTimeFunctions_Source_DateTimeFunctions_Public_DateTimeFunctionsBPLibrary_h_54_DELEGATE \
DATETIMEFUNCTIONS_API void FOnCountdownTick_DelegateWrapper(const FMulticastScriptDelegate& OnCountdownTick, int32 CurrentTime);


#define FID_UpdatedDateTimeFunction_HostProject_Plugins_DateTimeFunctions_Source_DateTimeFunctions_Public_DateTimeFunctionsBPLibrary_h_59_SPARSE_DATA
#define FID_UpdatedDateTimeFunction_HostProject_Plugins_DateTimeFunctions_Source_DateTimeFunctions_Public_DateTimeFunctionsBPLibrary_h_59_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execStartCountdown);


#define FID_UpdatedDateTimeFunction_HostProject_Plugins_DateTimeFunctions_Source_DateTimeFunctions_Public_DateTimeFunctionsBPLibrary_h_59_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execStartCountdown);


#define FID_UpdatedDateTimeFunction_HostProject_Plugins_DateTimeFunctions_Source_DateTimeFunctions_Public_DateTimeFunctionsBPLibrary_h_59_ACCESSORS
#define FID_UpdatedDateTimeFunction_HostProject_Plugins_DateTimeFunctions_Source_DateTimeFunctions_Public_DateTimeFunctionsBPLibrary_h_59_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDateTimeCountdown(); \
	friend struct Z_Construct_UClass_UDateTimeCountdown_Statics; \
public: \
	DECLARE_CLASS(UDateTimeCountdown, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DateTimeFunctions"), NO_API) \
	DECLARE_SERIALIZER(UDateTimeCountdown)


#define FID_UpdatedDateTimeFunction_HostProject_Plugins_DateTimeFunctions_Source_DateTimeFunctions_Public_DateTimeFunctionsBPLibrary_h_59_INCLASS \
private: \
	static void StaticRegisterNativesUDateTimeCountdown(); \
	friend struct Z_Construct_UClass_UDateTimeCountdown_Statics; \
public: \
	DECLARE_CLASS(UDateTimeCountdown, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DateTimeFunctions"), NO_API) \
	DECLARE_SERIALIZER(UDateTimeCountdown)


#define FID_UpdatedDateTimeFunction_HostProject_Plugins_DateTimeFunctions_Source_DateTimeFunctions_Public_DateTimeFunctionsBPLibrary_h_59_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDateTimeCountdown(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDateTimeCountdown) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDateTimeCountdown); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDateTimeCountdown); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDateTimeCountdown(UDateTimeCountdown&&); \
	NO_API UDateTimeCountdown(const UDateTimeCountdown&); \
public: \
	NO_API virtual ~UDateTimeCountdown();


#define FID_UpdatedDateTimeFunction_HostProject_Plugins_DateTimeFunctions_Source_DateTimeFunctions_Public_DateTimeFunctionsBPLibrary_h_59_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDateTimeCountdown(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDateTimeCountdown(UDateTimeCountdown&&); \
	NO_API UDateTimeCountdown(const UDateTimeCountdown&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDateTimeCountdown); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDateTimeCountdown); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDateTimeCountdown) \
	NO_API virtual ~UDateTimeCountdown();


#define FID_UpdatedDateTimeFunction_HostProject_Plugins_DateTimeFunctions_Source_DateTimeFunctions_Public_DateTimeFunctionsBPLibrary_h_56_PROLOG
#define FID_UpdatedDateTimeFunction_HostProject_Plugins_DateTimeFunctions_Source_DateTimeFunctions_Public_DateTimeFunctionsBPLibrary_h_59_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UpdatedDateTimeFunction_HostProject_Plugins_DateTimeFunctions_Source_DateTimeFunctions_Public_DateTimeFunctionsBPLibrary_h_59_SPARSE_DATA \
	FID_UpdatedDateTimeFunction_HostProject_Plugins_DateTimeFunctions_Source_DateTimeFunctions_Public_DateTimeFunctionsBPLibrary_h_59_RPC_WRAPPERS \
	FID_UpdatedDateTimeFunction_HostProject_Plugins_DateTimeFunctions_Source_DateTimeFunctions_Public_DateTimeFunctionsBPLibrary_h_59_ACCESSORS \
	FID_UpdatedDateTimeFunction_HostProject_Plugins_DateTimeFunctions_Source_DateTimeFunctions_Public_DateTimeFunctionsBPLibrary_h_59_INCLASS \
	FID_UpdatedDateTimeFunction_HostProject_Plugins_DateTimeFunctions_Source_DateTimeFunctions_Public_DateTimeFunctionsBPLibrary_h_59_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_UpdatedDateTimeFunction_HostProject_Plugins_DateTimeFunctions_Source_DateTimeFunctions_Public_DateTimeFunctionsBPLibrary_h_59_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UpdatedDateTimeFunction_HostProject_Plugins_DateTimeFunctions_Source_DateTimeFunctions_Public_DateTimeFunctionsBPLibrary_h_59_SPARSE_DATA \
	FID_UpdatedDateTimeFunction_HostProject_Plugins_DateTimeFunctions_Source_DateTimeFunctions_Public_DateTimeFunctionsBPLibrary_h_59_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UpdatedDateTimeFunction_HostProject_Plugins_DateTimeFunctions_Source_DateTimeFunctions_Public_DateTimeFunctionsBPLibrary_h_59_ACCESSORS \
	FID_UpdatedDateTimeFunction_HostProject_Plugins_DateTimeFunctions_Source_DateTimeFunctions_Public_DateTimeFunctionsBPLibrary_h_59_INCLASS_NO_PURE_DECLS \
	FID_UpdatedDateTimeFunction_HostProject_Plugins_DateTimeFunctions_Source_DateTimeFunctions_Public_DateTimeFunctionsBPLibrary_h_59_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DATETIMEFUNCTIONS_API UClass* StaticClass<class UDateTimeCountdown>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UpdatedDateTimeFunction_HostProject_Plugins_DateTimeFunctions_Source_DateTimeFunctions_Public_DateTimeFunctionsBPLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
