#pragma once
#include "CoreMinimal.h"
#include "OnBroadcastListenChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnBroadcastListenChanged, bool, bListenState);

