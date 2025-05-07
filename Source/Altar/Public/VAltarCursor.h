#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "VAltarCursor.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class ALTAR_API UVAltarCursor : public UUserWidget {
    GENERATED_BODY()
public:
    UVAltarCursor();

    UFUNCTION(BlueprintCallable)
    static void SetCursorVisibility(bool bVisible);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnUpdateCursorVisibility(bool bVisible);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnUpdateCursorSize(float Delta);
    
};

