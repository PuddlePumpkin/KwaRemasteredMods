#pragma once
#include "CoreMinimal.h"
#include "TransformMethod.generated.h"

UENUM()
enum class TransformMethod : uint32 {
    Maya_Deprecated,
    Max,
    Maya,
};

