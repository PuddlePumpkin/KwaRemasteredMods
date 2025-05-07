#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "VNavigableSlider.h"
#include "VAltarNavigableSlider.generated.h"

class UButton;
class UTextBlock;
class UWidget;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class ALTAR_API UVAltarNavigableSlider : public UVNavigableSlider {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidget* Handle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* ValueLabel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UButton* DecreaseButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UButton* IncreaseButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D SliderClampValues;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SliderStepSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SliderStartupValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bLabelEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor LabelColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaximumFractionalDigits;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsButtonInputContinuous;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsCapturingMouseWheelInput;
    
    UVAltarNavigableSlider();

protected:
    UFUNCTION(BlueprintCallable)
    void StartControllerValueIncrease();
    
    UFUNCTION(BlueprintCallable)
    void StartControllerValueDecrease();
    
    UFUNCTION(BlueprintCallable)
    void SetValue(float Value);
    
    UFUNCTION(BlueprintCallable)
    void OnIncreaseButtonReleased();
    
    UFUNCTION(BlueprintCallable)
    void OnIncreaseButtonPressed();
    
    UFUNCTION(BlueprintCallable)
    void OnDecreaseButtonReleased();
    
    UFUNCTION(BlueprintCallable)
    void OnDecreaseButtonPressed();
    
    UFUNCTION(BlueprintCallable)
    void InitializeSlider(float MinValue, float MaxValue, float StepSize, float StartupValue);
    
    UFUNCTION(BlueprintCallable)
    void IncreaseValue();
    
    UFUNCTION(BlueprintCallable)
    void HandleOnValueChanged(float NewValue);
    
    UFUNCTION(BlueprintCallable)
    void EndControllerValueIncrease();
    
    UFUNCTION(BlueprintCallable)
    void EndControllerValueDecrease();
    
    UFUNCTION(BlueprintCallable)
    void DecreaseValue();
    
};

