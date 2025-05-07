#pragma once
#include "CoreMinimal.h"
#include "EVAnimGroupSection.generated.h"

UENUM(BlueprintType)
enum class EVAnimGroupSection : uint8 {
    AGS_NONE,
    AGS_LOWER_BODY,
    AGS_LEFT_ARM,
    AGS_LEFT_HAND,
    AGS_RIGHT_ARM,
    AGS_SPECIAL_IDLE,
    ANIM_GROUP_SECTION_COUNT,
};

