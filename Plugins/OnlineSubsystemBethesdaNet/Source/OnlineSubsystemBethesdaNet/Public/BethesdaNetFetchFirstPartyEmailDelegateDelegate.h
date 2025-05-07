#pragma once
#include "CoreMinimal.h"
#include "BethesdaNetFetchFirstPartyEmailDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FBethesdaNetFetchFirstPartyEmailDelegate, int32, LocalUserNum, bool, bSuccess, const FText&, EmailAddress);

