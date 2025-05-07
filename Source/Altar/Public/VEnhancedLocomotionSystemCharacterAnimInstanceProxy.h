#pragma once
#include "CoreMinimal.h"
#include "VBaseCharacterAnimInstanceProxy.h"
#include "VEnhancedLocomotionSystemCharacterAnimInstanceProxy.generated.h"

USTRUCT(BlueprintType)
struct FVEnhancedLocomotionSystemCharacterAnimInstanceProxy : public FVBaseCharacterAnimInstanceProxy {
    GENERATED_BODY()
public:
    ALTAR_API FVEnhancedLocomotionSystemCharacterAnimInstanceProxy();
};

