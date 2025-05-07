#pragma once
#include "CoreMinimal.h"
#include "WeatherEntry.generated.h"

class UTESWeather;

USTRUCT(BlueprintType)
struct ALTAR_API FWeatherEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTESWeather* Weather;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Chance;
    
    FWeatherEntry();
};

