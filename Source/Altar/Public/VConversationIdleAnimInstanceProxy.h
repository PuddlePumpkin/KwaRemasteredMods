#pragma once
#include "CoreMinimal.h"
#include "VBaseCharacterAnimInstanceProxy.h"
#include "VConversationIdleAnimInstanceProxy.generated.h"

USTRUCT(BlueprintType)
struct FVConversationIdleAnimInstanceProxy : public FVBaseCharacterAnimInstanceProxy {
    GENERATED_BODY()
public:
    ALTAR_API FVConversationIdleAnimInstanceProxy();
};

