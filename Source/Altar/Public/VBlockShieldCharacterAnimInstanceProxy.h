#pragma once
#include "CoreMinimal.h"
#include "VBlockCharacterAnimInstanceProxy.h"
#include "VBlockShieldCharacterAnimInstanceProxy.generated.h"

USTRUCT(BlueprintType)
struct FVBlockShieldCharacterAnimInstanceProxy : public FVBlockCharacterAnimInstanceProxy {
    GENERATED_BODY()
public:
    ALTAR_API FVBlockShieldCharacterAnimInstanceProxy();
};

