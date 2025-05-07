#pragma once
#include "CoreMinimal.h"
#include "VBaseCharacterAnimInstanceProxy.h"
#include "VMainCharacterAnimInstanceProxy.generated.h"

USTRUCT(BlueprintType)
struct FVMainCharacterAnimInstanceProxy : public FVBaseCharacterAnimInstanceProxy {
    GENERATED_BODY()
public:
    ALTAR_API FVMainCharacterAnimInstanceProxy();
};

