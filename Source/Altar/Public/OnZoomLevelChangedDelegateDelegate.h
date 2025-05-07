#pragma once
#include "CoreMinimal.h"
#include "OnZoomLevelChangedDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnZoomLevelChangedDelegate, float, sliderValue);

