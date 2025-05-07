#pragma once
#include "CoreMinimal.h"
#include "EMenuMode.generated.h"

UENUM(BlueprintType)
enum class EMenuMode : uint8 {
    MENU_MODE_DISABLED,
    MENU_MODE_OFF,
    MENU_MODE_ON,
    MENU_MODE_ENTERING,
    MENU_MODE_LEAVING,
    MENU_MODE_FIRST_PASS,
};

