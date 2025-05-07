#pragma once
#include "CoreMinimal.h"
#include "CommonInputTypeEnum.h"
#include "InputCoreTypes.h"
#include "Framework/Commands/InputChord.h"
#include "OnIsSelectingKeyChangedDelegate.h"
#include "OnKeySelectedDelegate.h"
#include "OnListenStateChangedDelegate.h"
#include "VNavigableActivatableWidgetBase.h"
#include "VNavigableInputKeySelector.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class VCOMMONUIENHANCEDINPUTNAVIGATION_API UVNavigableInputKeySelector : public UVNavigableActivatableWidgetBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnIsSelectingKeyChanged OnIsSelectingKeyChangedHandle;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnKeySelected OnKeySelectedHandle;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnListenStateChanged OnListenStateChangedHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKey> BannedKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKey> CancelKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECommonInputType BindingType;
    
    UVNavigableInputKeySelector();

    UFUNCTION(BlueprintCallable)
    void UpdateSelectedKey(const FInputChord& InSelectedKey);
    
protected:
    UFUNCTION(BlueprintCallable)
    void SetIsListening(bool NewState);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetCurrentKey(const FInputChord& Value);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnKeySelected(const FInputChord& NewInputChord);
    
    UFUNCTION(BlueprintCallable)
    void OnKeyChanged();
    
    UFUNCTION(BlueprintCallable)
    void OnInputMethodChanged(ECommonInputType NewInputType);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCorrectInputType() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsListening() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FInputChord GetCurrentKey() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPOnListenStateChanged(bool NewState);
    
};

