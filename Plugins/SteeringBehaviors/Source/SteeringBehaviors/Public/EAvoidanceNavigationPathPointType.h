#pragma once
#include "CoreMinimal.h"
#include "EAvoidanceNavigationPathPointType.generated.h"

UENUM(BlueprintType)
enum class EAvoidanceNavigationPathPointType : uint8 {
    StartPathPoint,
    IntermediatePathPoint,
    ParallelPathPoint,
    AvoidancePathPoint,
    NavigationPathPoint,
};

