#pragma once
#include "CoreMinimal.h"
#include "WeatherSlice.generated.h"

class UAkAudioEvent;

USTRUCT(BlueprintType)
struct ALTAR_API FWeatherSlice {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* PlayEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* StopEvent;
    
    FWeatherSlice();
};

