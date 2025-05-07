#pragma once
#include "CoreMinimal.h"
#include "VAltarMenu.h"
#include "VTutorialMenu.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class ALTAR_API UVTutorialMenu : public UVAltarMenu {
    GENERATED_BODY()
public:
    UVTutorialMenu();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnFadeStarted();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnFadeEnded();
    
};

