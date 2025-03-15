// Copyright Epic Games, Inc. All Rights Reserved.
#pragma once

#include "TimerManager.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "DateTimeFunctionsBPLibrary.generated.h"

/* 
*	Function library class.
*	Each function in it is expected to be static and represents blueprint node that can be called in any blueprint.
*
*	When declaring function you can define metadata for the node. Key function specifiers will be BlueprintPure and BlueprintCallable.
*	BlueprintPure - means the function does not affect the owning object in any way and thus creates a node without Exec pins.
*	BlueprintCallable - makes a function which can be executed in Blueprints - Thus it has Exec pins.
*	DisplayName - full name of the node, shown when you mouse over the node and in the blueprint drop down menu.
*				Its lets you name the node using characters not allowed in C++ function names.
*	CompactNodeTitle - the word(s) that appear on the node.
*	Keywords -	the list of keywords that helps you to find node when you search for it using Blueprint drop-down menu. 
*				Good example is "Print String" node which you can find also by using keyword "log".
*	Category -	the category your node will be under in the Blueprint drop-down menu.
*
*	For more info on custom blueprint nodes visit documentation:
*	https://wiki.unrealengine.com/Custom_Blueprint_Node_Creation
*/
UCLASS()
class UDateTimeFunctionsBPLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_UCLASS_BODY()

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Unix Timestamp", Keywords = "Python gettime function", ToolTip = "Use To Text(Float) node to remove fractions if needed."), Category = "DateTimeFunctions|Operations")
	static double GetTimeSinceEpoch();

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Subtract Dates", Keywords = "Allow time date subtract"), Category = "DateTimeFunctions|Operations")
	static double SubDate(FDateTime FirstDate, FDateTime SecondDate);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Get Date Time in selected TimeZone", Keywords = "Timezone", ToolTip = "Examlpe: -8.5 GMT time will be -8 in Hours and -30 in mins\nIf the goal is the user's machine timezone, you can use now() function."), Category = "DateTimeFunctions|Operations")
	static FDateTime SelectTimezone(int Hour_GMT_Diff, int Minutes_GMT_Diff);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Format Date", Keywords = "Format Date"), Category = "DateTimeFunctions|Format")
	static FString FormatDate(FormatsOptions Options, FDateTime Date);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Format Seconds", Keywords = "SecondsToClock"), Category = "DateTimeFunctions|Format")
	static FString FormatSeconds(int Seconds, SecondsFormatsOptions Format);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Hours To Seconds", Keywords = "Hours To Seconds"), Category = "DateTimeFunctions|Format")
	static float HoursToSeconds(float Hours);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Get Month Short Name", Keywords = "Month Short Name"), Category = "DateTimeFunctions|Format")
	static FString GetMonthShortName(int MonthNumber);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Get Month Full Name", Keywords = "Month Full Name"), Category = "DateTimeFunctions|Format")
	static FString GetMonthFullName(int MonthNumber);
};

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnCountdownTick, int32, CurrentTime);

UCLASS(Blueprintable)
class UDateTimeCountdown : public UObject
{
	GENERATED_BODY()

public:
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "DateTimeFunctions")
	int32 CountdownTime;

	UPROPERTY(BlueprintAssignable, Category = "DateTimeFunctions")
	FOnCountdownTick OnCountdownTick;

	FTimerHandle CountdownTimerHandle;

	UFUNCTION(BlueprintCallable, Category = "DateTimeFunctions")
	void StartCountdown(int32 StartTime);

protected:
	void CountdownTick();
};
