#pragma once
#include "CoreMinimal.h"
#include "BSShaderType.generated.h"

UENUM()
enum class BSShaderType : uint32 {
    SHADER_TALL_GRASS,
    SHADER_DEFAULT,
    SHADER_SKY = 10,
    SHADER_SKIN = 14,
    SHADER_WATER = 17,
    SHADER_LIGHTING30 = 29,
    SHADER_TILE = 32,
    SHADER_NOLIGHTING,
};

