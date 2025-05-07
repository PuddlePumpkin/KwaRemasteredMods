#pragma once
#include "CoreMinimal.h"
#include "VAltarWidget.h"
#include "VLevelUpSecondaryAttributeWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class ALTAR_API UVLevelUpSecondaryAttributeWidget : public UVAltarWidget {
    GENERATED_BODY()
public:
    UVLevelUpSecondaryAttributeWidget();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnIncrementBonus();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnDecrementBonus();
    
};

