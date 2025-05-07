#pragma once
#include "CoreMinimal.h"
#include "OnSelectorListenStateChangedDelegate.generated.h"

class UVNavigableInputKeySelector;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnSelectorListenStateChanged, UVNavigableInputKeySelector*, Target, bool, NewState);

