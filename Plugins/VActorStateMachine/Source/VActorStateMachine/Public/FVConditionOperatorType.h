#pragma once
#include "CoreMinimal.h"
#include "FVConditionOperatorType.generated.h"

UENUM(BlueprintType)
enum class FVConditionOperatorType : uint8 {
    COND_OP_AND,
    COND_OP_OR,
};

