#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "VVelocityAndFallTimerMovementData.generated.h"

USTRUCT(BlueprintType)
struct ALTAR_API FVVelocityAndFallTimerMovementData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector SavedVelocity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SavedFallTimer;
    
    FVVelocityAndFallTimerMovementData();
};

