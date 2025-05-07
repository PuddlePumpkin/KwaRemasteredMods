#pragma once
#include "CoreMinimal.h"
#include "OnDynamicAnimationChangeDelegate.generated.h"

class UAnimSequence;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnDynamicAnimationChange, UAnimSequence*, AnimationAsset);

