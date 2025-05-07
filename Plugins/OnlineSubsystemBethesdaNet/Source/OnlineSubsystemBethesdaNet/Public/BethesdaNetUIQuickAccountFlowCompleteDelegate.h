#pragma once
#include "CoreMinimal.h"
#include "EBNetUIQuickAccountFlow.h"
#include "BethesdaNetUIQuickAccountFlowCompleteDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FBethesdaNetUIQuickAccountFlowComplete, int32, LocalUserNum, EBNetUIQuickAccountFlow, Result, const FText&, Error);

