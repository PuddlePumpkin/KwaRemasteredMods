#pragma once
#include "CoreMinimal.h"
#include "OnRebindChangedDelegate.generated.h"

class UVModernRebindSettingWidget;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnRebindChanged, UVModernRebindSettingWidget*, ChangedRebind);

