#pragma once
#include "CoreMinimal.h"
#include "ETransformMember.generated.h"

UENUM()
enum class ETransformMember : uint32 {
    TT_TRANSLATE_U,
    TT_TRANSLATE_V,
    TT_ROTATE,
    TT_SCALE_U,
    TT_SCALE_V,
};

