#pragma once
#include "CoreMinimal.h"
#include "BNetLinkAccountResult.h"
#include "BethesdaNetLinkAccountDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FBethesdaNetLinkAccountDelegate, int32, LocalUserNum, BNetLinkAccountResult, Result, const FText&, Error);

