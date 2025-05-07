#pragma once
#include "CoreMinimal.h"
#include "LegacySpellPurchaseMenuItemProperties.h"
#include "VAltarMenu.h"
#include "VLegacySpellPurchaseMenu.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class ALTAR_API UVLegacySpellPurchaseMenu : public UVAltarMenu {
    GENERATED_BODY()
public:
    UVLegacySpellPurchaseMenu();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSpellsUpdated(const TArray<FLegacySpellPurchaseMenuItemProperties>& Value);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPlayerMoneyUpdated(const int32 Value);
    
};

