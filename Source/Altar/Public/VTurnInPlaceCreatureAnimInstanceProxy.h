#pragma once
#include "CoreMinimal.h"
#include "VBaseCharacterAnimInstanceProxy.h"
#include "VTurnInPlaceCreatureAnimInstanceProxy.generated.h"

USTRUCT(BlueprintType)
struct FVTurnInPlaceCreatureAnimInstanceProxy : public FVBaseCharacterAnimInstanceProxy {
    GENERATED_BODY()
public:
    ALTAR_API FVTurnInPlaceCreatureAnimInstanceProxy();
};

