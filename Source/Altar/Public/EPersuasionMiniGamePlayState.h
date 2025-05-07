#pragma once
#include "CoreMinimal.h"
#include "EPersuasionMiniGamePlayState.generated.h"

UENUM(BlueprintType)
enum class EPersuasionMiniGamePlayState : uint8 {
    CanPlay,
    CannotPlay,
    Playing,
};

