#pragma once
#include "CoreMinimal.h"
#include "EBSXFlags.generated.h"

UENUM(BlueprintType)
enum class EBSXFlags : uint8 {
    NONE,
    ANIMATED,
    HAVOK,
    RAGDOLL = 4,
    COMPLEX = 8,
    FLAME = 16,
    EDITORMARKER = 32,
};

