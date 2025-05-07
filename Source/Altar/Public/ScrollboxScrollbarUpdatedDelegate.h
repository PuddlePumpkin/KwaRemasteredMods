#pragma once
#include "CoreMinimal.h"
#include "ScrollboxScrollbarUpdatedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FScrollboxScrollbarUpdated, float, MinScrollbarValue, float, MaxScrollbarValue, float, CurrentScrollbarValue, float, ThumbFractionSize);

