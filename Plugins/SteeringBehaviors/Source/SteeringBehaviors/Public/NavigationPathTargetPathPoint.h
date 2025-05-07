#pragma once
#include "CoreMinimal.h"
#include "NavigationPathTargetPathPoint.generated.h"

USTRUCT(BlueprintType)
struct FNavigationPathTargetPathPoint {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PathPointIndex;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double PathTimestamp;
    
    STEERINGBEHAVIORS_API FNavigationPathTargetPathPoint();
};

