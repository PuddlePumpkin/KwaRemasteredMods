#pragma once
#include "CoreMinimal.h"
#include "VAltarMenu.h"
#include "VLegacyPlayerSubMenuBase.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class ALTAR_API UVLegacyPlayerSubMenuBase : public UVAltarMenu {
    GENERATED_BODY()
public:
    UVLegacyPlayerSubMenuBase();

    UFUNCTION(BlueprintCallable)
    bool RouteBackEvent();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void FadeInOutMenu(bool bIsVisible, bool bFromLeft, bool bInstant);
    
};

