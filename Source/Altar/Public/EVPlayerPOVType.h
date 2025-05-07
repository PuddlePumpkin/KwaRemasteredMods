#pragma once
#include "CoreMinimal.h"
#include "EVPlayerPOVType.generated.h"

UENUM(BlueprintType)
enum class EVPlayerPOVType : uint8 {
    FirstPerson,
    ThirdPersonClose,
    ThirdPersonFar,
    Customization,
};

