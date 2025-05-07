#pragma once
#include "CoreMinimal.h"
#include "Layout/Geometry.h"
#include "Input/Events.h"
#include "MouseEventDelegateDelegate.generated.h"

class UUserWidget;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FMouseEventDelegate, UUserWidget*, Target, const FGeometry&, InGeometry, const FPointerEvent&, InMouseEvent);

