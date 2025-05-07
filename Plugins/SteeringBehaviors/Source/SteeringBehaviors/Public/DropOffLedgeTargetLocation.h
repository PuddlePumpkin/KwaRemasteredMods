#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "DropOffLedgeTargetLocation.generated.h"

USTRUCT(BlueprintType)
struct STEERINGBEHAVIORS_API FDropOffLedgeTargetLocation {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector Location;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double PathTimestamp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsMoveRequestDestination;
    
    FDropOffLedgeTargetLocation();
};

