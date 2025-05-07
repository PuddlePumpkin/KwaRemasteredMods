#pragma once
#include "CoreMinimal.h"
#include "CommonButtonBase.h"
#include "EVNavigationDirection.h"
#include "NavigableButtonBaseClickedDelegate.h"
#include "VEnhancedInputNavigable.h"
#include "VNavigableButton.generated.h"

class UCommonUserWidget;
class UVUINavigationGlobalSubsystem;
class UWidget;

UCLASS(Blueprintable, EditInlineNew)
class VCOMMONUIENHANCEDINPUTNAVIGATION_API UVNavigableButton : public UCommonButtonBase, public IVEnhancedInputNavigable {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNavigableButtonBaseClicked OnHoldCanceledEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UVUINavigationGlobalSubsystem> UINavigationSubsystem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TMap<EVNavigationDirection, UCommonUserWidget*> WidgetForNavigation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidget* NavigableParent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool HasControllerSpecificBehavior;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ShouldFocusOnHover;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ShouldApplyFocusEffectOnHover;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText ButtonText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsFocused;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsControllerActive;
    
public:
    UVNavigableButton();

    UFUNCTION(BlueprintCallable)
    void SetShouldApplyFocusEffectOnHover(bool NewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetIsFocused(const bool Value);
    
    UFUNCTION(BlueprintCallable)
    void SetIsControllerActive(const bool Value);
    
    UFUNCTION(BlueprintCallable)
    void SetButtonText(const FText& Value);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSynchronizeProperties();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnControllerActiveUpdated(const bool Value);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnButtonTextUpdated(const FText& Value);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetShouldApplyFocusEffectOnHover() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsFocused() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsControllerActive() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetHasControllerSpecificBehavior() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetButtonText() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnNavigateUp();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnNavigateRight();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnNavigateLeft();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnNavigateDown();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnHoldCanceled();
    

    // Fix for true pure virtual functions not being implemented
};

