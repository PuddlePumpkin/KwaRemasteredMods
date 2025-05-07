#pragma once
#include "CoreMinimal.h"
#include "OnAimingCrosshairTriggeredDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnAimingCrosshairTriggered, bool, bIsDrawing);

