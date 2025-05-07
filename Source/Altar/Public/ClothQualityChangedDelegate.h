#pragma once
#include "CoreMinimal.h"
#include "ClothQualityChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FClothQualityChanged, int32, NewValue);

