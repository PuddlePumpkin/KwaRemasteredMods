#pragma once
#include "CoreMinimal.h"
#include "HintData.h"
#include "OnHintsArrayUpdateddDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnHintsArrayUpdateddDelegate, const TArray<FHintData>&, NewHintsArray);

