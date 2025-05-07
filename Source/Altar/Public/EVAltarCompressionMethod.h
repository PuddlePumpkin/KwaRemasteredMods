#pragma once
#include "CoreMinimal.h"
#include "EVAltarCompressionMethod.generated.h"

UENUM()
enum class EVAltarCompressionMethod : uint32 {
    None,
    Zlib = 257,
    Gzip,
    LZ4,
    Oodle = 261,
};

