#pragma once
#include "CoreMinimal.h"
#include "EPropertyApplication.generated.h"

UENUM(BlueprintType)
enum class EPropertyApplication : uint8 {
    Override,
    Addition,
    Multiplication,
};

