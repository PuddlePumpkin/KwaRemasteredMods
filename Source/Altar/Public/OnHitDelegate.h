#pragma once
#include "CoreMinimal.h"
#include "PairedOblivionHitEvent.h"
#include "OnHitDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnHit, const FPairedOblivionHitEvent&, HitEvent);

