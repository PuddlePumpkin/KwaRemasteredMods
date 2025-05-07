#pragma once
#include "CoreMinimal.h"
#include "BNetEulaStepResult.h"
#include "BethesdaNetEulaProcessDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_FiveParams(FBethesdaNetEulaProcessDelegate, int32, LocalUserNum, int32, EulaDocId, BNetEulaStepResult, Result, const FText&, Error, bool, bIsPrivacyPolicy);

