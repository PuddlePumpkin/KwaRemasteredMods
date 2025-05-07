#pragma once
#include "CoreMinimal.h"
#include "FeetIKInterpolationSettings.generated.h"

USTRUCT(BlueprintType)
struct ANIMATIONNODERUNTIME_API FFeetIKInterpolationSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SpringInterpolationStrength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SpringInterpolationCriticalDamping;
    
    FFeetIKInterpolationSettings();
};

