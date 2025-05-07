#pragma once
#include "CoreMinimal.h"
#include "BNetQuickAccountResult.h"
#include "BethesdaNetQuickAccountDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FBethesdaNetQuickAccountDelegate, int32, LocalUserNum, BNetQuickAccountResult, Result, const FText&, Error);

