#pragma once
#include "CoreMinimal.h"
#include "VAltarMenu.h"
#include "VLoadingScreen.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class ALTAR_API UVLoadingScreen : public UVAltarMenu {
    GENERATED_BODY()
public:
    UVLoadingScreen();

    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void OnRemoveLoadingScreenEnded() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BeginRemoveLoadingScreen();
    
};

