#pragma once
#include "CoreMinimal.h"
#include "OnHoldInputTriggerDelegate.generated.h"

class UInputAction;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnHoldInputTrigger, UInputAction*, TriggerInputAction);

