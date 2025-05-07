#pragma once
#include "CoreMinimal.h"
#include "OnZoomLevelReachedDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnZoomLevelReachedDelegate, int32, Level, float, sliderValue, int32, levelDelta);

