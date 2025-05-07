#pragma once
#include "CoreMinimal.h"
#include "VAltarMenu.h"
#include "VLegacyMainMenu.generated.h"

class UWorld;

UCLASS(Blueprintable, EditInlineNew)
class ALTAR_API UVLegacyMainMenu : public UVAltarMenu {
    GENERATED_BODY()
public:
    UVLegacyMainMenu();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetDebugMode(bool bInNewDebug);
    
    UFUNCTION(BlueprintCallable)
    UWorld* GetCurrentWorld();
    
};

