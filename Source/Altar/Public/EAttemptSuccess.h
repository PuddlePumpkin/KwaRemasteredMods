#pragma once
#include "CoreMinimal.h"
#include "EAttemptSuccess.generated.h"

UENUM(BlueprintType)
enum class EAttemptSuccess : uint8 {
    NoAttempt,
    WasNotSuccessful,
    WasSuccessful,
};

