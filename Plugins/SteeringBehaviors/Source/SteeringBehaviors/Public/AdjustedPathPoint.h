#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EAvoidanceNavigationPathPointType.h"
#include "AdjustedPathPoint.generated.h"

USTRUCT(BlueprintType)
struct FAdjustedPathPoint {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector Location;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double NextPathPointDistance2D;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAvoidanceNavigationPathPointType PathPointType;
    
    STEERINGBEHAVIORS_API FAdjustedPathPoint();
};

