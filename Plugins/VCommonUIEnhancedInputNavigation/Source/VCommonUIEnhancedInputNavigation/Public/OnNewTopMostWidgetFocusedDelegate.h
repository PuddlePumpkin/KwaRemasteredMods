#pragma once
#include "CoreMinimal.h"
#include "OnNewTopMostWidgetFocusedDelegate.generated.h"

class IVEnhancedInputNavigable;
class UVEnhancedInputNavigable;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnNewTopMostWidgetFocused, const TScriptInterface<IVEnhancedInputNavigable>&, NewTopMostFocusedWidget);

