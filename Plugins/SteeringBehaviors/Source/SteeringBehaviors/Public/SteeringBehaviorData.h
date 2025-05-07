#pragma once
#include "CoreMinimal.h"
#include "SteeringBehaviorData.generated.h"

class USteeringBehavior;

USTRUCT(BlueprintType)
struct STEERINGBEHAVIORS_API FSteeringBehaviorData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USteeringBehavior* SteeringBehavior;
    
    FSteeringBehaviorData();
};

