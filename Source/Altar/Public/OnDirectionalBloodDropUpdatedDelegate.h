#pragma once
#include "CoreMinimal.h"
#include "EVHUDBloodDropScreenPosition.h"
#include "OnDirectionalBloodDropUpdatedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnDirectionalBloodDropUpdated, EVHUDBloodDropScreenPosition, ScreenPos, float, EdgePos, float, DamagePercent);

