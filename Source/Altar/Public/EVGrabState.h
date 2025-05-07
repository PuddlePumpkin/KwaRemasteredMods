#pragma once
#include "CoreMinimal.h"
#include "EVGrabState.generated.h"

UENUM(BlueprintType)
enum class EVGrabState : uint8 {
    None,
    HandGrabbed,
    TelekinesisGrabbed,
};

