#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimInstanceProxy.h"
#include "VBaseCharacterAnimInstanceProxy.generated.h"

USTRUCT(BlueprintType)
struct FVBaseCharacterAnimInstanceProxy : public FAnimInstanceProxy {
    GENERATED_BODY()
public:
    ALTAR_API FVBaseCharacterAnimInstanceProxy();
};

