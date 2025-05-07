#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "OnNewLayerFocusedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnNewLayerFocused, const FGameplayTag&, LayerTag);

