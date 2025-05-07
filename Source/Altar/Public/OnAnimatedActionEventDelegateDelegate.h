#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "OnAnimatedActionEventDelegateDelegate.generated.h"

class UAnimNotifyActionEventInfo;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnAnimatedActionEventDelegate, FGameplayTag, EventTag, const UAnimNotifyActionEventInfo*, EventSource);

