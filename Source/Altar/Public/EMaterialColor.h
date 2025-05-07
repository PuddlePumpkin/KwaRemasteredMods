#pragma once
#include "CoreMinimal.h"
#include "EMaterialColor.generated.h"

UENUM()
enum class EMaterialColor : uint16 {
    TC_AMBIENT,
    TC_DIFFUSE,
    TC_SPECULAR,
    TC_SELF_ILLUM,
};

