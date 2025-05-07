#pragma once
#include "CoreMinimal.h"
#include "OnGhostStateChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnGhostStateChanged, bool, NewGhostState);

