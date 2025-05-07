#pragma once
#include "CoreMinimal.h"
#include "LegacyLockpickMenuTumblerProperties.generated.h"

USTRUCT(BlueprintType)
struct FLegacyLockpickMenuTumblerProperties {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StartVelocity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Gravity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PauseTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxAnimationTime;
    
    ALTAR_API FLegacyLockpickMenuTumblerProperties();
};

