#pragma once
#include "CoreMinimal.h"
#include "OnSettingsChangedDelegate.generated.h"

class UVModernSettingWidget;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnSettingsChanged, UVModernSettingWidget*, ChangedSettings);

