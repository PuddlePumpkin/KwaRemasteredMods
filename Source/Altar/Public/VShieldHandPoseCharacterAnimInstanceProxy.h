#pragma once
#include "CoreMinimal.h"
#include "VBaseCharacterAnimInstanceProxy.h"
#include "VShieldHandPoseCharacterAnimInstanceProxy.generated.h"

USTRUCT(BlueprintType)
struct FVShieldHandPoseCharacterAnimInstanceProxy : public FVBaseCharacterAnimInstanceProxy {
    GENERATED_BODY()
public:
    ALTAR_API FVShieldHandPoseCharacterAnimInstanceProxy();
};

