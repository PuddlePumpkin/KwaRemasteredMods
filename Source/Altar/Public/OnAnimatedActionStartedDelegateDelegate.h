#pragma once
#include "CoreMinimal.h"
#include "OnAnimatedActionStartedDelegateDelegate.generated.h"

class UVPawnAnimatedAction;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnAnimatedActionStartedDelegate, UVPawnAnimatedAction*, Action);

