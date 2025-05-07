#pragma once
#include "CoreMinimal.h"
#include "VBuoyancySettings.generated.h"

USTRUCT(BlueprintType)
struct FVBuoyancySettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDoesGeneratePontoonsAtRuntime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bNeedsOrientationAdjustment;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GeneratedPontoonSizeScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BuoyancyCoefficient;
    
    ALTAR_API FVBuoyancySettings();
};

