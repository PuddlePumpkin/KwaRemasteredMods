#pragma once
#include "CoreMinimal.h"
#include "VBaseCharacterAnimInstanceProxy.h"
#include "VBlockCharacterAnimInstanceProxy.generated.h"

USTRUCT(BlueprintType)
struct FVBlockCharacterAnimInstanceProxy : public FVBaseCharacterAnimInstanceProxy {
    GENERATED_BODY()
public:
    ALTAR_API FVBlockCharacterAnimInstanceProxy();
};

