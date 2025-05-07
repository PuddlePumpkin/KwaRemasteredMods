#pragma once
#include "CoreMinimal.h"
#include "LocomotionAnimationData.generated.h"

class UBlendSpace;

USTRUCT(BlueprintType)
struct FLocomotionAnimationData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBlendSpace* BlendspaceMoving;
    
    ALTAR_API FLocomotionAnimationData();
};

