#pragma once
#include "CoreMinimal.h"
#include "VLocomotion.generated.h"

class UBlendSpace;

USTRUCT(BlueprintType)
struct FVLocomotion {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBlendSpace* BlendSpace_Moving;
    
    ALTAR_API FVLocomotion();
};

