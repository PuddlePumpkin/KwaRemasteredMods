#pragma once
#include "CoreMinimal.h"
#include "Layout/Geometry.h"
#include "Input/Events.h"
#include "HoverDelegateDelegate.generated.h"

class UUserWidget;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FHoverDelegate, UUserWidget*, Target, const FGeometry&, InGeometry, const FPointerEvent&, InMouseEvent);

