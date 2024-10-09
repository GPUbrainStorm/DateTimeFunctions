// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once
#include "TimerManager.h"
#include "Engine/World.h"
#include "Modules/ModuleManager.h"

class FDateTimeFunctionsModule : public IModuleInterface
{
public:

	/** IModuleInterface implementation */
	virtual void StartupModule() override;
	virtual void ShutdownModule() override;
};

UENUM(BlueprintType)
enum class FormatsOptions : uint8
{
	OptionA UMETA(DisplayName = "DD/MM/YYYY"),
	OptionB UMETA(DisplayName = "MM/DD/YYYY"),
	OptionC UMETA(DisplayName = "Mon,DD YYYY"),
	OptionD UMETA(DisplayName = "DD Mon YYYY"),
	OptionE UMETA(DisplayName = "DD Month 2024"),
	OptionF UMETA(DisplayName = "YYYY-MM-DD"),
};