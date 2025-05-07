#pragma once
#include "CoreMinimal.h"
#include "OnChangeNavigationIndexDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnChangeNavigationIndex, int32, Index);

