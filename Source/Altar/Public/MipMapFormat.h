#pragma once
#include "CoreMinimal.h"
#include "MipMapFormat.generated.h"

UENUM()
enum class MipMapFormat : uint32 {
    MIP_FMT_NO,
    MIP_FMT_YES,
    MIP_FMT_DEFAULT,
};

