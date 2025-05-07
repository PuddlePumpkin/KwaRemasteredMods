#pragma once
#include "CoreMinimal.h"
#include "EOblivionAnimSection.generated.h"

UENUM(BlueprintType)
enum class EOblivionAnimSection : uint8 {
    ANIM_SECTION_NONE,
    ANIM_SECTION_LOWER_BODY,
    ANIM_SECTION_LEFT_ARM,
    ANIM_SECTION_LEFT_HAND,
    ANIM_SECTION_RIGHT_ARM,
    ANIM_SECTION_SPECIAL_IDLE,
    ANIM_SECTION_WHOLE_BODY,
    ANIM_SECTION_UPPER_BODY,
    ANIM_SECTION_TOTAL_COUNT,
};

