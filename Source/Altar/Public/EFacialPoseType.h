#pragma once
#include "CoreMinimal.h"
#include "EFacialPoseType.generated.h"

UENUM(BlueprintType)
enum class EFacialPoseType : uint8 {
    Attack,
    HitReaction,
};

