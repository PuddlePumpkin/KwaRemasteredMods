#pragma once
#include "CoreMinimal.h"
#include "FVExtendedConditionType.generated.h"

UENUM(BlueprintType)
enum class FVExtendedConditionType : uint8 {
    EXT_COND_AND,
    EXT_COND_OR,
    EXT_COND_REPLACE,
};

