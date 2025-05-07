#pragma once
#include "CoreMinimal.h"
#include "EPathFollowingStyle.generated.h"

UENUM(BlueprintType)
enum class EPathFollowingStyle : uint8 {
    FollowClosely,
    FollowLoosely,
};

