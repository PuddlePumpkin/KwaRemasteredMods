#pragma once
#include "CoreMinimal.h"
#include "LegacyScrollbarTextProperties.h"
#include "LegacyScrollbarValueProperties.h"
#include "VAltarWidget.h"
#include "VLegacyScrollbar.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class ALTAR_API UVLegacyScrollbar : public UVAltarWidget {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnValueUpdated, float, Value);
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnValueUpdated OnScrollbarValueChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnValueUpdated OnValueSubmitted;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CurrentValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SliderLength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLegacyScrollbarValueProperties ValueProperties;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLegacyScrollbarTextProperties TextProperties;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool FocusBackgroundEnabled;
    
public:
    UVLegacyScrollbar();

protected:
    UFUNCTION(BlueprintCallable)
    void UpdateValueFromSlider(float Value);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetValueProperties(const FLegacyScrollbarValueProperties& Value);
    
    UFUNCTION(BlueprintCallable)
    void SetValue(float Value);
    
    UFUNCTION(BlueprintCallable)
    void SetTextProperties(const FLegacyScrollbarTextProperties& Value);
    
    UFUNCTION(BlueprintCallable)
    void SetSliderLength(float Value);
    
    UFUNCTION(BlueprintCallable)
    void SetFocusBackgroundEnabled(const bool Value);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnValueUpdated(float Value);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnMarkerPositionUpdated();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FLegacyScrollbarValueProperties GetValueProperties() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetValueAsPercentage() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetValue() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FLegacyScrollbarTextProperties GetTextProperties() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetSliderLength() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetFocusBackgroundEnabled() const;
    
};

