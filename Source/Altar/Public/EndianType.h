#pragma once
#include "CoreMinimal.h"
#include "EndianType.generated.h"

UENUM(BlueprintType)
enum class EndianType : uint8 {
    ENDIAN_BIG,
    ENDIAN_LITTLE,
};

