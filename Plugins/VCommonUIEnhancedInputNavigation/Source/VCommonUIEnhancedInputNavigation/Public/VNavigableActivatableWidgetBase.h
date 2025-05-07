#pragma once
#include "CoreMinimal.h"
#include "CommonActivatableWidget.h"
#include "EVNavigationDirection.h"
#include "VEnhancedInputNavigable.h"
#include "VGenericInputActionData.h"
#include "VNavigableActivatableWidgetBase.generated.h"

class UCommonUserWidget;
class UVUINavigationGlobalSubsystem;
class UWidget;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class VCOMMONUIENHANCEDINPUTNAVIGATION_API UVNavigableActivatableWidgetBase : public UCommonActivatableWidget, public IVEnhancedInputNavigable {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TMap<EVNavigationDirection, UCommonUserWidget*> WidgetForNavigation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldFocusOnHover;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldHandleTriggeringInputAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldGiveNavigationInputToParentOnBorder;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidget* NavigableParent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UVUINavigationGlobalSubsystem> UINavigationSubsystem;
    
public:
    UVNavigableActivatableWidgetBase();

    UFUNCTION(BlueprintCallable)
    void UnBindAllSpecificInputAction();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsFocussed() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnUnhovered();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnTirggeringActionCommited();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnNavigateUp();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnNavigateRight();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnNavigateLeft();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnNavigateDown();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnHovered();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnBackActionCommited();
    
public:
    UFUNCTION(BlueprintCallable)
    void BindInputAction(const FVGenericInputActionData& InputActionData);
    

    // Fix for true pure virtual functions not being implemented
};

