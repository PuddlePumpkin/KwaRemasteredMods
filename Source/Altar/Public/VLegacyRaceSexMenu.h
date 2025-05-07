#pragma once
#include "CoreMinimal.h"
#include "VAltarMenu.h"
#include "VLegacyRaceSexMenu.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class ALTAR_API UVLegacyRaceSexMenu : public UVAltarMenu {
    GENERATED_BODY()
public:
    UVLegacyRaceSexMenu();

    UFUNCTION(BlueprintCallable)
    void PostFadeAction();
    
};

