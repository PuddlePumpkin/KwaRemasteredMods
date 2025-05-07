#pragma once
#include "CoreMinimal.h"
#include "VBaseCharacterAnimInstanceProxy.h"
#include "VHumanoidHeadCharacterAnimInstanceProxy.generated.h"

USTRUCT(BlueprintType)
struct FVHumanoidHeadCharacterAnimInstanceProxy : public FVBaseCharacterAnimInstanceProxy {
    GENERATED_BODY()
public:
    ALTAR_API FVHumanoidHeadCharacterAnimInstanceProxy();
};

