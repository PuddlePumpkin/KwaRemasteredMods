#pragma once
#include "CoreMinimal.h"
#include "VBaseCharacterAnimInstanceProxy.h"
#include "VSpecialIdleAndDockCharacterAnimInstanceProxy.generated.h"

USTRUCT(BlueprintType)
struct FVSpecialIdleAndDockCharacterAnimInstanceProxy : public FVBaseCharacterAnimInstanceProxy {
    GENERATED_BODY()
public:
    ALTAR_API FVSpecialIdleAndDockCharacterAnimInstanceProxy();
};

