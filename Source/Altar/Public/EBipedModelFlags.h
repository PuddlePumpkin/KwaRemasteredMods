#pragma once
#include "CoreMinimal.h"
#include "EBipedModelFlags.generated.h"

UENUM()
enum class EBipedModelFlags : uint8 {
    NonPlayable = 64,
    Heavy = 128,
};

