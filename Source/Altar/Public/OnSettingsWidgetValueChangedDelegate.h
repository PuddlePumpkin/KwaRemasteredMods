#pragma once
#include "CoreMinimal.h"
#include "OnSettingsWidgetValueChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnSettingsWidgetValueChanged, float, NewValue);

