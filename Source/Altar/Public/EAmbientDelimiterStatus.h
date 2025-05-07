#pragma once
#include "CoreMinimal.h"
#include "EAmbientDelimiterStatus.generated.h"

UENUM(BlueprintType)
enum class EAmbientDelimiterStatus : uint8 {
    None,
    Left,
    Right,
};

