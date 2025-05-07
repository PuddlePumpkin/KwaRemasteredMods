#pragma once
#include "CoreMinimal.h"
#include "EDialogueEmotion.generated.h"

UENUM(BlueprintType)
enum class EDialogueEmotion : uint8 {
    Neutral,
    Anger,
    Disgust,
    Fear,
    Sad,
    Happy,
    Surprise,
    DIALOGUE_EMOTION_COUNT,
};

