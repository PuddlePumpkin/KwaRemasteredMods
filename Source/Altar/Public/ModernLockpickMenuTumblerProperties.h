#pragma once
#include "CoreMinimal.h"
#include "ModernLockpickMenuTumblerProperties.generated.h"

USTRUCT(BlueprintType)
struct FModernLockpickMenuTumblerProperties {
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
    
    ALTAR_API FModernLockpickMenuTumblerProperties();
};

