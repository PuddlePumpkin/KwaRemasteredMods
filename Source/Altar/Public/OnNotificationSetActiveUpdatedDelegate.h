#pragma once
#include "CoreMinimal.h"
#include "OnNotificationSetActiveUpdatedDelegate.generated.h"

class UVAltarNotificationBaseWidget;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnNotificationSetActiveUpdated, UVAltarNotificationBaseWidget*, NotificationWidget);

