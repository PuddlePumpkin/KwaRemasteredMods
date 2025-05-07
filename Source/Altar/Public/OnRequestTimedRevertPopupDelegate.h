#pragma once
#include "CoreMinimal.h"
#include "OnRequestTimedRevertPopupDelegate.generated.h"

class UVModernSettingWidget;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnRequestTimedRevertPopup, UVModernSettingWidget*, ChangedSettings);

