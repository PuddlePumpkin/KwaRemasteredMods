#pragma once
#include "CoreMinimal.h"
#include "OnPageExitDelegate.generated.h"

class IVOnboardingPageInterface;
class UVOnboardingPageInterface;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnPageExit, TScriptInterface<IVOnboardingPageInterface>, Page, int32, PageIndex);

