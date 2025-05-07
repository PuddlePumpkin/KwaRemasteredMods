#pragma once
#include "CoreMinimal.h"
#include "VBaseCharacterAnimInstanceProxy.h"
#include "VTorchCharacterAnimInstanceProxy.generated.h"

USTRUCT(BlueprintType)
struct FVTorchCharacterAnimInstanceProxy : public FVBaseCharacterAnimInstanceProxy {
    GENERATED_BODY()
public:
    ALTAR_API FVTorchCharacterAnimInstanceProxy();
};

