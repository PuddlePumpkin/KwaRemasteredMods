#pragma once
#include "CoreMinimal.h"
#include "PushContentToLayerAsyncDelegateDelegate.generated.h"

class UCommonActivatableWidget;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FPushContentToLayerAsyncDelegate, UCommonActivatableWidget*, UserWidget);

