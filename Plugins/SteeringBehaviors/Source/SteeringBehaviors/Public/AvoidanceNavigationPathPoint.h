#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EAvoidanceNavigationPathPointType.h"
#include "AvoidanceNavigationPathPoint.generated.h"

USTRUCT(BlueprintType)
struct FAvoidanceNavigationPathPoint {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector PathPointLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAvoidanceNavigationPathPointType PathPointType;
    
    STEERINGBEHAVIORS_API FAvoidanceNavigationPathPoint();
};

