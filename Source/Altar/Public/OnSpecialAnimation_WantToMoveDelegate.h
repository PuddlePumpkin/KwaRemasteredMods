#pragma once
#include "CoreMinimal.h"
#include "OnSpecialAnimation_WantToMoveDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnSpecialAnimation_WantToMove, bool, ShouldBeMoving);

