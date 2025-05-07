#pragma once
#include "CoreMinimal.h"
#include "OnAnimatedActionEndedDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnAnimatedActionEndedDelegate, bool, bIsCancelled);

