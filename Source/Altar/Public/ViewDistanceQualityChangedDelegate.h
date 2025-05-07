#pragma once
#include "CoreMinimal.h"
#include "ViewDistanceQualityChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FViewDistanceQualityChanged, int32, NewValue);

