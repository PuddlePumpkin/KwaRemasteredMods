#pragma once
#include "CoreMinimal.h"
#include "VNavigableActivatableWidgetBase.h"
#include "VAltarWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class ALTAR_API UVAltarWidget : public UVNavigableActivatableWidgetBase {
    GENERATED_BODY()
public:
    UVAltarWidget();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSynchronizeProperties();
    
private:
    UFUNCTION(BlueprintCallable)
    void ForceSynchronizeProperties();
    
};

