#pragma once
#include "CoreMinimal.h"
#include "EFurnitureFlags.generated.h"

UENUM()
enum class EFurnitureFlags : uint8 {
    CanSit = 1,
    CanSleep,
};

