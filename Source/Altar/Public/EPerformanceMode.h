#pragma once
#include "CoreMinimal.h"
#include "EPerformanceMode.generated.h"

UENUM(BlueprintType)
enum class EPerformanceMode : uint8 {
    PERFORMANCEMODE_DEFAULT,
    PERFORMANCEMODE_QUALITY,
    PERFORMANCEMODE_PERFORMANCE,
};

