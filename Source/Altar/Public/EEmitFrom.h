#pragma once
#include "CoreMinimal.h"
#include "EEmitFrom.generated.h"

UENUM()
enum class EEmitFrom : uint32 {
    EMIT_FROM_VERTICES,
    EMIT_FROM_FACE_CENTER,
    EMIT_FROM_EDGE_CENTER,
    EMIT_FROM_FACE_SURFACE,
    EMIT_FROM_EDGE_SURFACE,
};

