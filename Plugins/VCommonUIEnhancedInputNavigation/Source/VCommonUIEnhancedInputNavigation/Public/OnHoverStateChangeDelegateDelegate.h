#pragma once
#include "CoreMinimal.h"
#include "OnHoverStateChangeDelegateDelegate.generated.h"

class IVEnhancedInputNavigable;
class UVEnhancedInputNavigable;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnHoverStateChangeDelegate, TScriptInterface<IVEnhancedInputNavigable>, HoveredWidget);

