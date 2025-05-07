#pragma once
#include "CoreMinimal.h"
#include "EBNetUIManagementFlow.h"
#include "BethesdaNetUIUserManagementFlowCompleteDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FBethesdaNetUIUserManagementFlowComplete, int32, LocalUserNum, EBNetUIManagementFlow, Result, const FText&, Error);

