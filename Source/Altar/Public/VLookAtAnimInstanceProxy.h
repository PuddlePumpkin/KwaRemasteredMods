#pragma once
#include "CoreMinimal.h"
#include "VBaseCharacterAnimInstanceProxy.h"
#include "VLookAtAnimInstanceProxy.generated.h"

USTRUCT(BlueprintType)
struct FVLookAtAnimInstanceProxy : public FVBaseCharacterAnimInstanceProxy {
    GENERATED_BODY()
public:
    ALTAR_API FVLookAtAnimInstanceProxy();
};

