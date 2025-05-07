#pragma once
#include "CoreMinimal.h"
#include "OnPageEnterDelegate.generated.h"

class IVOnboardingPageInterface;
class UVOnboardingPageInterface;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnPageEnter, TScriptInterface<IVOnboardingPageInterface>, Page, int32, PageIndex);

