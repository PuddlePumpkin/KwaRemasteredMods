#pragma once
#include "CoreMinimal.h"
#include "CommonInputTypeEnum.h"
#include "VNavigableActivatableWidgetBase.h"
#include "VAltarMenu.generated.h"

class IVEnhancedInputNavigable;
class UVEnhancedInputNavigable;
class UVViewModelBase;

UCLASS(Blueprintable, EditInlineNew)
class ALTAR_API UVAltarMenu : public UVNavigableActivatableWidgetBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool FocusDefaultWidgetXbox;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TScriptInterface<IVEnhancedInputNavigable> WidgetToFocusOnControllerDesactivate;
    
public:
    UVAltarMenu();

    UFUNCTION(BlueprintCallable)
    void SetWidgetToFocusOnControllerDesactivate(const TScriptInterface<IVEnhancedInputNavigable>& Value);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetViewModelReference(UVViewModelBase* ViewModelRef);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSynchronizeProperties();
    
    UFUNCTION(BlueprintCallable)
    void OnInputMethodChanged();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TScriptInterface<IVEnhancedInputNavigable> GetWidgetToFocusOnControllerDesactivate() const;
    
private:
    UFUNCTION(BlueprintCallable)
    void ForceSynchronizeProperties();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnInputMethodChanged(const ECommonInputType& InputType) const;
    
};

