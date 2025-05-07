#pragma once
#include "CoreMinimal.h"
#include "OnSpecialAnimationStartDelegate.generated.h"

class UAnimSequenceBase;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnSpecialAnimationStart, UAnimSequenceBase*, AnimationAsset);

