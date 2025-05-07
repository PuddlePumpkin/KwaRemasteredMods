#pragma once
#include "CoreMinimal.h"
#include "EBookFlags.generated.h"

UENUM()
enum class EBookFlags : uint8 {
    Scroll = 1,
    CantTake,
};

