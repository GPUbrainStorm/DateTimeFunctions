// Copyright Epic Games, Inc. All Rights Reserved.

#include "DateTimeFunctionsBPLibrary.h"
#include "DateTimeFunctions.h"
#include "Misc/DateTime.h"
#include "Misc/Timespan.h"
#include "TimerManager.h"
#include "Engine/World.h"

UDateTimeFunctionsBPLibrary::UDateTimeFunctionsBPLibrary(const FObjectInitializer& ObjectInitializer)
: Super(ObjectInitializer)
{

}

double UDateTimeFunctionsBPLibrary::GetTimeSinceEpoch()
{
	FDateTime now = FDateTime::UtcNow();
	FDateTime epoch(1970, 1, 1);
	FTimespan timeSinceEpoch = now - epoch;
	return timeSinceEpoch.GetTotalSeconds();
}

double UDateTimeFunctionsBPLibrary::SubDate(FDateTime FirstDate, FDateTime SecondDate) {
	FTimespan timeDiff = FirstDate - SecondDate;
	return timeDiff.GetTotalSeconds();
}

FDateTime UDateTimeFunctionsBPLibrary::SelectTimezone(int Hour_GMT_Diff, int SubHour_GMT_Diff) {
	return FDateTime::UtcNow() + FTimespan(0, Hour_GMT_Diff, SubHour_GMT_Diff,0);
}

FString GetMonthShortName(int MonthNumber)
{
	const FString MonthNames[] = {
		"Jan", "Feb", "Mar", "Apr",
		"May", "Jun", "Jul", "Aug",
		"Sep", "Oct", "Nov", "Dec"
	};

	if (MonthNumber >= 1 && MonthNumber <= 12)
	{
		return MonthNames[MonthNumber - 1];
	}

	return "Invalid Month";
}

FString GetMonthFullName(int MonthNumber)
{
	const FString MonthNames[] = {
		"January", "February", "March", "April",
		"May", "June", "July", "August",
		"September", "October", "November", "December"
	};

	if (MonthNumber >= 1 && MonthNumber <= 12)
	{
		return MonthNames[MonthNumber - 1];
	}

	return "Invalid Month";
}

FString UDateTimeFunctionsBPLibrary::FormatDate(FormatsOptions Options, FDateTime Date) {
	int32 mString = Date.GetMonth();
	FString DayNumber = FString::FromInt(Date.GetDay());
	FString MonthNumber = FString::FromInt(Date.GetMonth());
	FString YearNumber = FString::FromInt(Date.GetYear());
	if (Date.GetDay() < 10) {
		DayNumber = "0" + DayNumber;
	}
	if (Date.GetMonth() < 10) {
		MonthNumber = "0" + MonthNumber;
	}
	switch (Options) {
	case FormatsOptions::OptionA:
		return Date.ToString(TEXT("%d/%m/%Y"));
	case FormatsOptions::OptionB:
		return Date.ToString(TEXT("%m/%d/%Y"));
	case FormatsOptions::OptionC:
		MonthNumber = GetMonthShortName(mString);
		return FString::Printf(TEXT("%s, %d %d"), *MonthNumber, Date.GetDay(), Date.GetYear());
	case FormatsOptions::OptionD:
		MonthNumber = GetMonthShortName(mString);
		return FString::Printf(TEXT("%d %s %d"), Date.GetDay(), *MonthNumber , Date.GetYear());
	case FormatsOptions::OptionE:
		MonthNumber = GetMonthFullName(mString);
		return FString::Printf(TEXT("%d %s %d"), Date.GetDay(), *MonthNumber, Date.GetYear());
	case FormatsOptions::OptionF:
		return Date.ToString(TEXT("%Y-%m-%d"));
	}
	return FString();
}

void UDateTimeCountdown::StartCountdown(int32 StartTime)
{
	CountdownTime = StartTime;
	GetWorld()->GetTimerManager().SetTimer(CountdownTimerHandle, this, &UDateTimeCountdown::CountdownTick, 1.0f, true);
}

void UDateTimeCountdown::CountdownTick()
{
	OnCountdownTick.Broadcast(CountdownTime);
	CountdownTime--;
	if (CountdownTime <= 0)
	{
		GetWorld()->GetTimerManager().ClearTimer(CountdownTimerHandle);
	}
}