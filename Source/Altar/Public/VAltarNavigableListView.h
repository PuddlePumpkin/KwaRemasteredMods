#pragma once
#include "CoreMinimal.h"
#include "VNavigableListView.h"
#include "VAltarNavigableListView.generated.h"

class UVModernScrollbar;

UCLASS(Blueprintable, EditInlineNew)
class ALTAR_API UVAltarNavigableListView : public UVNavigableListView {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVModernScrollbar* AssociatedScrollbar;
    
public:
    UVAltarNavigableListView();

protected:
    UFUNCTION(BlueprintCallable)
    void OnScrollbarValueChanged(float NewValue);
    
    UFUNCTION(BlueprintCallable)
    void OnListViewValuesChanged(float MinScrollbarValue, float MaxScrollbarValue, float CurrentScrollbarValue, float ThumbFractionSize);
    
    UFUNCTION(BlueprintCallable)
    void OnListViewScrolled(float ItemOffset, float DistanceRemaining);
    
};

