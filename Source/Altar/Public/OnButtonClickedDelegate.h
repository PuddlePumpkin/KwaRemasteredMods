#pragma once
#include "CoreMinimal.h"
#include "OnButtonClickedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnButtonClicked, int32, InButtonIndex);

