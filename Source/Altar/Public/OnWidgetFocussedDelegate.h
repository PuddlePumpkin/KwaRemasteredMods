#pragma once
#include "CoreMinimal.h"
#include "OnWidgetFocussedDelegate.generated.h"

class UVNavigableInputKeySelector;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnWidgetFocussed, UVNavigableInputKeySelector*, Widget, int32, SelectorIndex);

