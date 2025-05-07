#pragma once
#include "CoreMinimal.h"
#include "SourceVertexMode.generated.h"

UENUM()
enum class SourceVertexMode : uint32 {
    VERT_MODE_SRC_IGNORE,
    VERT_MODE_SRC_EMISSIVE,
    VERT_MODE_SRC_AMB_DIF,
};

