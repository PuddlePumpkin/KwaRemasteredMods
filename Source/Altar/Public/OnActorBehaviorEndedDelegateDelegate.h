#pragma once
#include "CoreMinimal.h"
#include "OnActorBehaviorEndedDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnActorBehaviorEndedDelegate, bool, bInterrupted);

