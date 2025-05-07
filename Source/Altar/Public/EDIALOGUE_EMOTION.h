#pragma once
#include "CoreMinimal.h"
#include "EDIALOGUE_EMOTION.generated.h"

UENUM(BlueprintType)
enum class EDIALOGUE_EMOTION : uint8 {
    DE_NEUTRAL,
    DE_ANGER,
    DE_DISGUST,
    DE_FEAR,
    DE_SAD,
    DE_HAPPY,
    DE_SURPRISE,
    DIALOGUE_EMOTION_COUNT,
};

