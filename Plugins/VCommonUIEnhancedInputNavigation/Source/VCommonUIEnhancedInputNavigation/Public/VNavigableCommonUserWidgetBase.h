#pragma once
#include "CoreMinimal.h"
#include "CommonUserWidget.h"
#include "EVNavigationDirection.h"
#include "VEnhancedInputNavigable.h"
#include "VNavigableCommonUserWidgetBase.generated.h"

class UVUINavigationGlobalSubsystem;
class UWidget;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class VCOMMONUIENHANCEDINPUTNAVIGATION_API UVNavigableCommonUserWidgetBase : public UCommonUserWidget, public IVEnhancedInputNavigable {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TMap<EVNavigationDirection, UCommonUserWidget*> WidgetForNavigation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldFocusOnHover;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ShouldHandleTriggeringInputAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidget* NavigableParent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UVUINavigationGlobalSubsystem> UINavigationSubsystem;
    
public:
    UVNavigableCommonUserWidgetBase();

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
    

    // Fix for true pure virtual functions not being implemented
};

