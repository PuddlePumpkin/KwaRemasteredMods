#pragma once
#include "CoreMinimal.h"
#include "VLocomotionCharacterAnimInstanceProxy.h"
#include "VLocomotionHorseAnimInstanceProxy.generated.h"

USTRUCT(BlueprintType)
struct FVLocomotionHorseAnimInstanceProxy : public FVLocomotionCharacterAnimInstanceProxy {
    GENERATED_BODY()
public:
    ALTAR_API FVLocomotionHorseAnimInstanceProxy();
};

