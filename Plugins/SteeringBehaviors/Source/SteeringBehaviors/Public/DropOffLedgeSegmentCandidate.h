#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "DropOffLedgeSegmentCandidate.generated.h"

USTRUCT(BlueprintType)
struct FDropOffLedgeSegmentCandidate {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector Location;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double Distance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PathPointIndex;
    
    STEERINGBEHAVIORS_API FDropOffLedgeSegmentCandidate();
};

