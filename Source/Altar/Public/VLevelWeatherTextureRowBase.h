#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "EVWeatherTexture.h"
#include "VLevelWeatherTextureRowBase.generated.h"

USTRUCT(BlueprintType)
struct ALTAR_API FVLevelWeatherTextureRowBase : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EVWeatherTexture WeatherTexture;
    
    FVLevelWeatherTextureRowBase();
};

