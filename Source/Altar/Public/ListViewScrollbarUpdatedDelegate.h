#pragma once
#include "CoreMinimal.h"
#include "ListViewScrollbarUpdatedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FListViewScrollbarUpdated, float, MinScrollbarValue, float, MaxScrollbarValue, float, CurrentScrollbarValue, float, ThumbFractionSize);

