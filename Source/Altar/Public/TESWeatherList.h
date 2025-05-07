#pragma once
#include "CoreMinimal.h"
#include "WeatherEntry.h"
#include "TESWeatherList.generated.h"

USTRUCT(BlueprintType)
struct ALTAR_API FTESWeatherList {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FWeatherEntry> WeatherEntries;
    
    FTESWeatherList();
};

