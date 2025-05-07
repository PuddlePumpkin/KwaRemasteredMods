#pragma once
#include "CoreMinimal.h"
#include "EHUDVisibility.h"
#include "VAltarMenu.h"
#include "VModernHudMain.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class ALTAR_API UVModernHudMain : public UVAltarMenu {
    GENERATED_BODY()
public:
    UVModernHudMain();

protected:
    UFUNCTION(BlueprintCallable)
    void OnHUDVisibilityChanged(EHUDVisibility Flag, bool bVisible);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnForcePlayerMenuPageUpdated(int32 Index);
    
};

