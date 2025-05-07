#pragma once
#include "CoreMinimal.h"
#include "ECharacterFadeState.generated.h"

UENUM()
enum class ECharacterFadeState : int32 {
    FadeNone,
    FadeIn,
    FadeOut,
};

