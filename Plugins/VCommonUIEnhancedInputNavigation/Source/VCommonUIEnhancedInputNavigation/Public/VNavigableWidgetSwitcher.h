#pragma once
#include "CoreMinimal.h"
#include "OnSwitcherChangedDelegate.h"
#include "VNavigableActivatableWidgetBase.h"
#include "VNavigableWidgetSwitcher.generated.h"

class UPanelSlot;
class UWidget;
class UWidgetSwitcher;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class VCOMMONUIENHANCEDINPUTNAVIGATION_API UVNavigableWidgetSwitcher : public UVNavigableActivatableWidgetBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSwitcherChanged OnSwitcherChangedDelegate;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidgetSwitcher* Switcher;
    
public:
    UVNavigableWidgetSwitcher();

    UFUNCTION(BlueprintCallable)
    void NavigateToWidget(UWidget* NewWidget);
    
    UFUNCTION(BlueprintCallable)
    void NavigateToIndex(int32 NewIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UWidgetSwitcher* GetSwitcher() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UWidget* GetCurrentWidget() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCurrentIndex() const;
    
    UFUNCTION(BlueprintCallable)
    void DisplayWidget(UWidget* NewWidget);
    
    UFUNCTION(BlueprintCallable)
    void DisplayIndex(int32 NewIndex);
    
    UFUNCTION(BlueprintCallable)
    void ClearChildren();
    
    UFUNCTION(BlueprintCallable)
    UPanelSlot* AddChild(UWidget* ChildToAdd);
    
};

