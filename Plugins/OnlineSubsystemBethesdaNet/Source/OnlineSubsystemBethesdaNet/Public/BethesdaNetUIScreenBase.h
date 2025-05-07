#pragma once
#include "CoreMinimal.h"
#include "Layout/Geometry.h"
#include "Input/Events.h"
#include "Components/SlateWrapperTypes.h"
#include "Blueprint/UserWidget.h"
#include "BethesdaNetUIScreenBase.generated.h"

class USlateWidgetStyleAsset;
class UWidget;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class ONLINESUBSYSTEMBETHESDANET_API UBethesdaNetUIScreenBase : public UUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USlateWidgetStyleAsset* ScreenStyleAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UWidget> InitialFocusWidget;
    
    UBethesdaNetUIScreenBase();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnScreenRemoved();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnScreenLoseFocus();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnScreenGainFocus();
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintNativeEvent)
    FEventReply OnScreenConfirm(FGeometry MyGeometry, const FKeyEvent& InKeyEvent);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintNativeEvent)
    FEventReply OnScreenCancel(FGeometry MyGeometry, const FKeyEvent& InKeyEvent);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnScreenAdded();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HandleExclusiveRightStickInput(float Value);
    
};

