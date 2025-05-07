#pragma once
#include "CoreMinimal.h"
#include "OblivionSourcedCharacterAnimationState.h"
#include "OnAnimationStateChangeDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnAnimationStateChangeDelegate, FOblivionSourcedCharacterAnimationState, Old, FOblivionSourcedCharacterAnimationState, New);

