#pragma once
#include "CoreMinimal.h"
#include "PairedOblivionHitEvent.h"
#include "OnHitCrosshairTriggeredDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnHitCrosshairTriggered, FPairedOblivionHitEvent, HitEvent);

