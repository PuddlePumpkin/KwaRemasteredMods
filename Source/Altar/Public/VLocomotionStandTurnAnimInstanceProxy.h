#pragma once
#include "CoreMinimal.h"
#include "VLocomotionCharacterAnimInstanceProxy.h"
#include "VLocomotionStandTurnAnimInstanceProxy.generated.h"

USTRUCT(BlueprintType)
struct FVLocomotionStandTurnAnimInstanceProxy : public FVLocomotionCharacterAnimInstanceProxy {
    GENERATED_BODY()
public:
    ALTAR_API FVLocomotionStandTurnAnimInstanceProxy();
};

