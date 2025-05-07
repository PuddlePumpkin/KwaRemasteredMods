#pragma once
#include "CoreMinimal.h"
#include "OnExpandedStateChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnExpandedStateChanged, bool, bNewExpanded);

