#pragma once
#include "CoreMinimal.h"
#include "ModernRaceSexMenuColorProperties.h"
#include "OnColorPickerChangedDelegate.generated.h"

class UUserWidget;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnColorPickerChanged, bool, bShouldShow, UUserWidget*, Caller, const FModernRaceSexMenuColorProperties&, Properties);

