#pragma once
#include "CoreMinimal.h"
#include "VBaseCharacterAnimInstanceProxy.h"
#include "VBlinkCharacterAnimInstanceProxy.generated.h"

USTRUCT(BlueprintType)
struct FVBlinkCharacterAnimInstanceProxy : public FVBaseCharacterAnimInstanceProxy {
    GENERATED_BODY()
public:
    ALTAR_API FVBlinkCharacterAnimInstanceProxy();
};

