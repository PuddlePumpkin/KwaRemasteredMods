#pragma once
#include "CoreMinimal.h"
#include "VBaseCharacterAnimInstanceProxy.h"
#include "VEnhancedInAirCharacterAnimInstanceProxy.generated.h"

USTRUCT(BlueprintType)
struct FVEnhancedInAirCharacterAnimInstanceProxy : public FVBaseCharacterAnimInstanceProxy {
    GENERATED_BODY()
public:
    ALTAR_API FVEnhancedInAirCharacterAnimInstanceProxy();
};

