#pragma once
#include "CoreMinimal.h"
#include "SteeringBehaviorContextConfiguration.generated.h"

USTRUCT(BlueprintType)
struct STEERINGBEHAVIORS_API FSteeringBehaviorContextConfiguration {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseInterestMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseDangerMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseMaxSpeedNormalizedMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseRotationMap;
    
    FSteeringBehaviorContextConfiguration();
};

