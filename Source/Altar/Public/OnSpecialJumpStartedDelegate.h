#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "OnSpecialJumpStartedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnSpecialJumpStarted, FVector, SpecialJumpVelocity);

