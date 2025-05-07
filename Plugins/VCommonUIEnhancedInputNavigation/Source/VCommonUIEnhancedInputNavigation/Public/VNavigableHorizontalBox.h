#pragma once
#include "CoreMinimal.h"
#include "VNavigableActivatableWidgetBase.h"
#include "VNavigableHorizontalBox.generated.h"

class IVEnhancedInputNavigable;
class UVEnhancedInputNavigable;
class UCommonUserWidget;
class UHorizontalBox;
class UPanelSlot;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class VCOMMONUIENHANCEDINPUTNAVIGATION_API UVNavigableHorizontalBox : public UVNavigableActivatableWidgetBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDoNavigationLoop;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHorizontalBox* HorizontalBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldFocusLastFocusedItemOnFocus;
    
public:
    UVNavigableHorizontalBox();

protected:
    UFUNCTION(BlueprintCallable)
    void OnChildHovered(const TScriptInterface<IVEnhancedInputNavigable>& HoveredWidget);
    
public:
    UFUNCTION(BlueprintCallable)
    void NavigateToPrevElement();
    
    UFUNCTION(BlueprintCallable)
    void NavigateToNextElement();
    
    UFUNCTION(BlueprintCallable)
    void NavigateToIndex(int32 NewIndex);
    
    UFUNCTION(BlueprintCallable)
    void NavigateToElement(UCommonUserWidget* ItemToNavigateTo);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetSize() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UHorizontalBox* GetHorizontalBox();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetFocusElementIndex() const;
    
    UFUNCTION(BlueprintCallable)
    void ClearChildren();
    
    UFUNCTION(BlueprintCallable)
    UPanelSlot* AddChild(UCommonUserWidget* ChildToAdd);
    
};

