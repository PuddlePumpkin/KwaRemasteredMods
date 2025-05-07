#pragma once
#include "CoreMinimal.h"
#include "OnListenStateChangedDelegate.generated.h"

class UVNavigableInputKeySelector;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnListenStateChanged, UVNavigableInputKeySelector*, Target, bool, NewState);

