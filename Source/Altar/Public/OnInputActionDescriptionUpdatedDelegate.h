#pragma once
#include "CoreMinimal.h"
#include "FooterInputActionDescription.h"
#include "OnInputActionDescriptionUpdatedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnInputActionDescriptionUpdated, const FFooterInputActionDescription&, NewInputActionDescription);

