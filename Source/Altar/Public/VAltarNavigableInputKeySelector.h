#pragma once
#include "CoreMinimal.h"
#include "InputCoreTypes.h"
#include "Styling/SlateBrush.h"
#include "Components/SlateWrapperTypes.h"
#include "VNavigableInputKeySelector.h"
#include "OnWidgetFocussedDelegate.h"
#include "VAltarNavigableInputKeySelector.generated.h"

class UWidget;

UCLASS(Blueprintable, EditInlineNew)
class ALTAR_API UVAltarNavigableInputKeySelector : public UVNavigableInputKeySelector {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FKey, FText> LocalizedKeys;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnWidgetFocussed OnWidgetFocussedDelegate;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SelectorIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidget* DefaultBackgroundOverlay;
    
public:
    UVAltarNavigableInputKeySelector();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ResfreshInputDisplay();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void RequestRefreshLabelVisibility(ESlateVisibility NewVisibility);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void RequestRefreshLabelText(const FText& NewText);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void RequestRefreshIconImageVisibility(ESlateVisibility NewVisibility);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void RequestRefreshIconImageBrush(const FSlateBrush& NewBrush);
    
    UFUNCTION(BlueprintCallable)
    FText GetHintKeyText(FKey InKey);
    
    UFUNCTION(BlueprintCallable)
    void AddNewlyReboundKeyToInputSystem(const FKey& NewlyReboundKey);
    
};

