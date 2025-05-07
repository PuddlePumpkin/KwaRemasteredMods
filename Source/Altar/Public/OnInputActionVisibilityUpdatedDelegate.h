#pragma once
#include "CoreMinimal.h"
#include "FooterInputActionVisibility.h"
#include "OnInputActionVisibilityUpdatedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnInputActionVisibilityUpdated, const FFooterInputActionVisibility&, NewInputActionVisibility);

