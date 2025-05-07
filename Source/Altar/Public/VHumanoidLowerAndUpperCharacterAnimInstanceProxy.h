#pragma once
#include "CoreMinimal.h"
#include "VBaseCharacterAnimInstanceProxy.h"
#include "VHumanoidLowerAndUpperCharacterAnimInstanceProxy.generated.h"

USTRUCT(BlueprintType)
struct FVHumanoidLowerAndUpperCharacterAnimInstanceProxy : public FVBaseCharacterAnimInstanceProxy {
    GENERATED_BODY()
public:
    ALTAR_API FVHumanoidLowerAndUpperCharacterAnimInstanceProxy();
};

