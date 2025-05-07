#pragma once
#include "CoreMinimal.h"
#include "AvoidanceTemporaryIgnoredActor.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FAvoidanceTemporaryIgnoredActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* Actor;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double ActivationTime;
    
    STEERINGBEHAVIORS_API FAvoidanceTemporaryIgnoredActor();
};

