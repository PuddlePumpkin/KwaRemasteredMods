#pragma once
#include "CoreMinimal.h"
#include "LegacyLVOnScrollOffsetOfEndUpdatedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FLegacyLVOnScrollOffsetOfEndUpdated, float, ScrollOffsetOfEnd);

