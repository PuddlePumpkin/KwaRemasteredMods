#pragma once
#include "CoreMinimal.h"
#include "VBaseCharacterAnimInstanceProxy.h"
#include "VEnhancedLocomotionCharacterAnimInstanceProxy.generated.h"

USTRUCT(BlueprintType)
struct FVEnhancedLocomotionCharacterAnimInstanceProxy : public FVBaseCharacterAnimInstanceProxy {
    GENERATED_BODY()
public:
    ALTAR_API FVEnhancedLocomotionCharacterAnimInstanceProxy();
};

