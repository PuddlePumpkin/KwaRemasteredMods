#pragma once
#include "CoreMinimal.h"
#include "PawnAvoidancePersistence.generated.h"

USTRUCT(BlueprintType)
struct FPawnAvoidancePersistence {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double ObstacleDetectionTime;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double AvoidDecisionTime;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double GiveWayStartTime;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double AvoidancePathSelectionTime;
    
    STEERINGBEHAVIORS_API FPawnAvoidancePersistence();
};

