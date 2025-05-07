#pragma once
#include "CoreMinimal.h"
#include "OnToggleWidgetVisibilityDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnToggleWidgetVisibility, bool, bIsHidden);

