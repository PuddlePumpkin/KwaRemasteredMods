#pragma once
#include "CoreMinimal.h"
#include "OnRequestSaveLoadPopupDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnRequestSaveLoadPopup, const FText&, PopupText, int32, ModIndex);

