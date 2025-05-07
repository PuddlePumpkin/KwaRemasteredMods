#pragma once
#include "CoreMinimal.h"
#include "EReaction.generated.h"

UENUM(BlueprintType)
enum class EReaction : uint8 {
    None,
    Love,
    Like,
    Dislike,
    Hate,
};

