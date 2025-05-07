#pragma once
#include "CoreMinimal.h"
#include "OnSwitcherChangedDelegate.generated.h"

class UWidget;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnSwitcherChanged, UWidget*, NewWidget, int32, NewIndex);

