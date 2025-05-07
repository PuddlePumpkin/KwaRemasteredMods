#pragma once
#include "CoreMinimal.h"
#include "BethesdaNetNewGameSessionCallProxyDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FBethesdaNetNewGameSessionCallProxyDelegate, int32, LocalUserNum, bool, bWasSuccessful);

