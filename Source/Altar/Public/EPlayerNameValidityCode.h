#pragma once
#include "CoreMinimal.h"
#include "EPlayerNameValidityCode.generated.h"

UENUM(BlueprintType)
enum class EPlayerNameValidityCode : uint8 {
    Valid,
    ContainsDigit,
    ContainsSpecialCharacter,
    IsEmpty,
    ContainsOnlyWhiteSpace,
    TooLong,
};

