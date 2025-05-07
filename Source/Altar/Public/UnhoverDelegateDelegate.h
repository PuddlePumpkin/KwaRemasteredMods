#pragma once
#include "CoreMinimal.h"
#include "Input/Events.h"
#include "UnhoverDelegateDelegate.generated.h"

class UUserWidget;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FUnhoverDelegate, UUserWidget*, Target, const FPointerEvent&, InMouseEvent);

