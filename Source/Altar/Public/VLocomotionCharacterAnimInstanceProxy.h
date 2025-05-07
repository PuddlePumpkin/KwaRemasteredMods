#pragma once
#include "CoreMinimal.h"
#include "VBaseCharacterAnimInstanceProxy.h"
#include "VLocomotionCharacterAnimInstanceProxy.generated.h"

USTRUCT(BlueprintType)
struct FVLocomotionCharacterAnimInstanceProxy : public FVBaseCharacterAnimInstanceProxy {
    GENERATED_BODY()
public:
    ALTAR_API FVLocomotionCharacterAnimInstanceProxy();
};

