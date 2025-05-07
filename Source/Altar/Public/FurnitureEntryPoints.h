#pragma once
#include "CoreMinimal.h"
#include "FurnitureEntryPoints.generated.h"

UENUM()
enum class FurnitureEntryPoints : uint8 {
    Front = 1,
    Behind,
    Right = 4,
    Left = 8,
    Up = 16,
};

