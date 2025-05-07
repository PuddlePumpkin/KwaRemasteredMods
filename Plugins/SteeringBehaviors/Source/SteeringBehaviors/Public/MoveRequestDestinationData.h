#pragma once
#include "CoreMinimal.h"
#include "AITypes.h"
#include "MoveRequestDestinationData.generated.h"

class AAIController;

USTRUCT(BlueprintType)
struct STEERINGBEHAVIORS_API FMoveRequestDestinationData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AAIController* AIController;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAIRequestID MoveRequestId;
    
    FMoveRequestDestinationData();
};

