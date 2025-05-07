#pragma once
#include "CoreMinimal.h"
#include "BNetLoggingPlatform.generated.h"

UENUM(BlueprintType)
enum class BNetLoggingPlatform : uint8 {
    Invalid,
    Windows,
    MicrosoftStore = 7,
    PlayStation4,
    Steam = 10,
    Xbox = 17,
    Scarlett = 19,
    PlayStation5,
    Epic,
};

