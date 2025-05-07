#pragma once
#include "CoreMinimal.h"
#include "OnEnterAnimationFinishedDelegate.generated.h"

class IVOnboardingPageInterface;
class UVOnboardingPageInterface;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnEnterAnimationFinished, TScriptInterface<IVOnboardingPageInterface>, Caller);

