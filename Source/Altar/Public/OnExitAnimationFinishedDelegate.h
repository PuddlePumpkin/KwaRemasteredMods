#pragma once
#include "CoreMinimal.h"
#include "OnExitAnimationFinishedDelegate.generated.h"

class IVOnboardingPageInterface;
class UVOnboardingPageInterface;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnExitAnimationFinished, TScriptInterface<IVOnboardingPageInterface>, Caller);

