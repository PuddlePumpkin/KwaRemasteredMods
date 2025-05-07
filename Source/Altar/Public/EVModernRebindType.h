#pragma once
#include "CoreMinimal.h"
#include "EVModernRebindType.generated.h"

UENUM(BlueprintType)
enum class EVModernRebindType : uint8 {
    Separator,
    Keyboard,
    Gamepad,
};

