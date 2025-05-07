#pragma once
#include "CoreMinimal.h"
#include "hkMoppCodeBuildType.generated.h"

UENUM()
enum class hkMoppCodeBuildType : int8 {
    BUILT_WITH_CHUNK_SUBDIVISION,
    BUILT_WITHOUT_CHUNK_SUBDIVISION,
    BUILD_NOT_SET,
};

