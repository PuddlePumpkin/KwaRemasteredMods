#pragma once
#include "CoreMinimal.h"
#include "VBaseCharacterAnimInstanceProxy.h"
#include "VSimpleInAirCharacterAnimInstanceProxy.generated.h"

USTRUCT(BlueprintType)
struct FVSimpleInAirCharacterAnimInstanceProxy : public FVBaseCharacterAnimInstanceProxy {
    GENERATED_BODY()
public:
    ALTAR_API FVSimpleInAirCharacterAnimInstanceProxy();
};

