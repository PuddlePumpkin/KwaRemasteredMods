#pragma once
#include "CoreMinimal.h"
#include "EVActorValues.h"
#include "OnActorValueChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_FiveParams(FOnActorValueChanged, EVActorValues, ActorValue, float, PreviousBaseValue, float, PreviousModifiedValue, float, NewBaseValue, float, NewModifiedValue);

