#pragma once
#include "CoreMinimal.h"
#include "CommonInputTypeEnum.h"
#include "NavigationButton.h"
#include "VAltarButton.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class ALTAR_API UVAltarButton : public UNavigationButton {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText ButtonText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ControllerActive;
    
public:
    UVAltarButton();

    UFUNCTION(BlueprintCallable)
    void SetControllerActive(const bool Value);
    
    UFUNCTION(BlueprintCallable)
    void SetButtonText(const FText& Value);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSynchronizeProperties();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnControllerActiveUpdated(const bool Value);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnButtonTextUpdated(const FText& Value);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetControllerButtonIconCropX() const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetControllerActive() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetButtonText() const;
    
protected:
    UFUNCTION(BlueprintCallable)
    void ForceSynchronizeProperties();
    
    UFUNCTION(BlueprintCallable)
    void ChangeInputMethod(ECommonInputType InputType);
    
};

