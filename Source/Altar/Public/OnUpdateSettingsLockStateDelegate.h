#pragma once
#include "CoreMinimal.h"
#include "OnUpdateSettingsLockStateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnUpdateSettingsLockState, bool, NewLockState);

