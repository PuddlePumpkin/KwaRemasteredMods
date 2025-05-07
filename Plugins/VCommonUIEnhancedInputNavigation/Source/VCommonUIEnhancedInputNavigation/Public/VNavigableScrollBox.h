#pragma once
#include "CoreMinimal.h"
#include "VNavigableActivatableWidgetBase.h"
#include "VNavigableScrollBox.generated.h"

class IVEnhancedInputNavigable;
class UVEnhancedInputNavigable;
class UCommonUserWidget;
class UPanelSlot;
class UScrollBox;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class VCOMMONUIENHANCEDINPUTNAVIGATION_API UVNavigableScrollBox : public UVNavigableActivatableWidgetBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Multiplicator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BasedDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinDelay;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDoNavigationLoop;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UScrollBox* ScrollBox;
    
public:
    UVNavigableScrollBox();

protected:
    UFUNCTION(BlueprintCallable)
    void SetFocusedElementIndex(int32 NewIndex);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnChildHoveredBP(const TScriptInterface<IVEnhancedInputNavigable>& HoveredWidget);
    
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
    UScrollBox* GetScrollBox();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetFocusElementIndex() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UCommonUserWidget* GetFocusedElement() const;
    
    UFUNCTION(BlueprintCallable)
    void ClearChildren();
    
    UFUNCTION(BlueprintCallable)
    UPanelSlot* AddChild(UCommonUserWidget* ChildToAdd);
    
};

