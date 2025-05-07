#pragma once
#include "CoreMinimal.h"
#include "EVFadeTransitionType.generated.h"

UENUM()
enum class EVFadeTransitionType : int32 {
    Interior,
    Seamless,
    FastTransiton,
};

