#pragma once
#include "CoreMinimal.h"
#include "AdvancedLookAt_Clamp.generated.h"

USTRUCT(BlueprintType)
struct ANIMATIONNODERUNTIME_API FAdvancedLookAt_Clamp {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PitchMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PitchMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float YawMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float YawMax;
    
    FAdvancedLookAt_Clamp();
};

