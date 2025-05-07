#pragma once
#include "CoreMinimal.h"
#include "EHUDVisibility.h"
#include "VAltarMenu.h"
#include "VLegacyHudPrimaryLayout.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class ALTAR_API UVLegacyHudPrimaryLayout : public UVAltarMenu {
    GENERATED_BODY()
public:
    UVLegacyHudPrimaryLayout();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnHUDVisibilityChanged(EHUDVisibility Flag, bool bVisible);
    
};

