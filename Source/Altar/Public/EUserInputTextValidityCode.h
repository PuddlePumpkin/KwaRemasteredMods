#pragma once
#include "CoreMinimal.h"
#include "EUserInputTextValidityCode.generated.h"

UENUM(BlueprintType)
enum class EUserInputTextValidityCode : uint8 {
    Valid,
    ContainsDigit,
    ContainsSpecialCharacter,
    IsEmpty,
    ContainsOnlyWhiteSpace,
    TooLong,
    None,
};

