#pragma once
#include "CoreMinimal.h"
#include "EBHKConstraintType.generated.h"

UENUM()
enum class EBHKConstraintType : uint32 {
    BALL_AND_SOCKET,
    HINGE,
    LIMITED_HINGE,
    PRISMATIC = 6,
    RAGDOLL,
    STIFF_SPRING,
};

