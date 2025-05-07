#pragma once
#include "CoreMinimal.h"
#include "VNavigableScrollBox.h"
#include "VAltarNavigableScrollBox.generated.h"

class UVModernScrollbar;
class UWidget;

UCLASS(Blueprintable, EditInlineNew)
class ALTAR_API UVAltarNavigableScrollBox : public UVNavigableScrollBox {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVModernScrollbar* AssociatedScrollbar;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidget* NoScrollbarWidget;
    
public:
    UVAltarNavigableScrollBox();

protected:
    UFUNCTION(BlueprintCallable)
    void UpdateLockState(bool bNewLockState);
    
    UFUNCTION(BlueprintCallable)
    void OnUserScrolled(float NewValue);
    
    UFUNCTION(BlueprintCallable)
    void OnScrollBoxValuesChanged(float MinScrollbarValue, float MaxScrollbarValue, float CurrentScrollbarValue, float ThumbFractionSize);
    
    UFUNCTION(BlueprintCallable)
    void OnScrollbarValueChanged(float NewValue);
    
};

