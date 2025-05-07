#pragma once
#include "CoreMinimal.h"
#include "Input/CommonBoundActionButton.h"
#include "InputCoreTypes.h"
#include "VAltarBoundActionButton.generated.h"

class UCommonTextBlock;
class UInputAction;
class UInputMappingContext;
class UMaterialInterface;

UCLASS(Blueprintable, EditInlineNew)
class ALTAR_API UVAltarBoundActionButton : public UCommonBoundActionButton {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* KeyboardMat;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FKey, FText> LocalizedKeys;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HoldTreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UInputAction* BoundInputAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UInputMappingContext* MappingContext;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText CachedInputActionDescription;
    
public:
    UVAltarBoundActionButton();

    UFUNCTION(BlueprintCallable)
    void SetInputAction(UInputAction* NewBinding, FText OverrideActionText, UInputMappingContext* NewMappingContext);
    
    UFUNCTION(BlueprintCallable)
    void SetDescriptionText(const FText& NewText);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HoldTriggerStart();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HoldTriggerCancel();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UCommonTextBlock* GetText() const;
    
    UFUNCTION(BlueprintCallable)
    FText GetInputActionKeyText(UInputAction* InInputAction, UInputMappingContext* InInputMappingContext);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetHoldTreshold() const;
    
    UFUNCTION(BlueprintCallable)
    FText GetHintKeyText(FKey InKey);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UInputAction* GetBoundInputAction() const;
    
};

