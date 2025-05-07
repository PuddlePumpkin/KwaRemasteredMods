#pragma once
#include "CoreMinimal.h"
#include "OnRunDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnRun, bool, Outcome);

