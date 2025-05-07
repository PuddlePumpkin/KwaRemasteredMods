#pragma once
#include "CoreMinimal.h"
#include "InputCoreTypes.h"
#include "ModernRebindSettingTableRow.h"
#include "OnChangeNavigationIndexDelegate.h"
#include "VAltarWidget.h"
#include "VModernRebindSettingWidget.generated.h"

class UVAltarNavigableInputKeySelector;
class UVNavigableInputKeySelector;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class ALTAR_API UVModernRebindSettingWidget : public UVAltarWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnChangeNavigationIndex OnChangeNavigationIndexDelegate;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVNavigableInputKeySelector* LastFocussedWidget;
    
public:
    UVModernRebindSettingWidget();

    UFUNCTION(BlueprintCallable)
    void SetRebindData(const FModernRebindSettingTableRow& Value);
    
    UFUNCTION(BlueprintCallable)
    void SetNavigationIndex(int32 Value);
    
    UFUNCTION(BlueprintCallable)
    void SetCurrentWidgetIndex(int32 NewValue);
    
    UFUNCTION(BlueprintCallable)
    void SaveRebind();
    
    UFUNCTION(BlueprintCallable)
    void RevertBindingToDefault(bool bSpreadChange);
    
    UFUNCTION(BlueprintCallable)
    void RevertBindingSavedState();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnUpdateWidgetBinding(const FKey& NewPrimaryKeyboard, const FKey& NewSecondaryKeyboard, const FKey& NewPrimaryGamepad);
    
    UFUNCTION(BlueprintCallable)
    void OnSelectorListenStateChanged(UVNavigableInputKeySelector* Target, bool NewState);
    
    UFUNCTION(BlueprintCallable)
    void OnSelectorFocussed(UVNavigableInputKeySelector* FocussedSelector, int32 SelectorIndex);
    
public:
    UFUNCTION(BlueprintCallable)
    void OnRefreshWidgetRequested();
    
    UFUNCTION(BlueprintCallable)
    void Init(const FModernRebindSettingTableRow& Value);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FModernRebindSettingTableRow GetRebindData() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetNavigationIndex() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCurrentWidgetIndex() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UVAltarNavigableInputKeySelector*> GetAllSelector();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool DoesHaveAEmptyPrimaryBinding() const;
    
    UFUNCTION(BlueprintCallable)
    void Deinitialize();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ChangeErrorState(bool bErrorState);
    
};

