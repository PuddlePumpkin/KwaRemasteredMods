#pragma once
#include "CoreMinimal.h"
#include "OnSettingFocussedDelegate.generated.h"

class UVModernSettingWidget;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnSettingFocussed, UVModernSettingWidget*, FocussedSettings);

