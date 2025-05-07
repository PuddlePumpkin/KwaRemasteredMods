#pragma once
#include "CoreMinimal.h"
#include "Engine/TimerHandle.h"
#include "VNavigableActivatableWidgetBase.h"
#include "VNavigableSlider.generated.h"

class UAnalogSlider;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class VCOMMONUIENHANCEDINPUTNAVIGATION_API UVNavigableSlider : public UVNavigableActivatableWidgetBase {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnValueChangedDelegate, float, CommitedValue);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnValueChangedDelegate OnValueChanged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsWaiting;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAnalogSlider* Slider;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTimerHandle IncreaseValueLoopTimerHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTimerHandle DecreaseValueLoopTimerHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ValueModificationOnNavigationRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinNavigationRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MultiplicatorOnNavigationRate;
    
public:
    UVNavigableSlider();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetSliderValueAsPercentage(float Value) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UAnalogSlider* GetSlider() const;
    
};

