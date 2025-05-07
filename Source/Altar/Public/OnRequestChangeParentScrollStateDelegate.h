#pragma once
#include "CoreMinimal.h"
#include "OnRequestChangeParentScrollStateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnRequestChangeParentScrollState, bool, NewState);

