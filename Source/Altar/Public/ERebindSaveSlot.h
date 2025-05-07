#pragma once
#include "CoreMinimal.h"
#include "ERebindSaveSlot.generated.h"

UENUM(BlueprintType)
enum class ERebindSaveSlot : uint8 {
    PrimaryKeyboard,
    SecondaryKeyboard,
    PrimaryGamepad,
};

