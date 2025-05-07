#pragma once
#include "CoreMinimal.h"
#include "EHUDVisibility.h"
#include "VAltarMenu.h"
#include "VModernHudPrimaryLayout.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class ALTAR_API UVModernHudPrimaryLayout : public UVAltarMenu {
    GENERATED_BODY()
public:
    UVModernHudPrimaryLayout();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnHUDVisibilityChanged(EHUDVisibility Flag, bool bVisible);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnHUDGlobalVisibilityChanged(bool bVisible);
    
};

