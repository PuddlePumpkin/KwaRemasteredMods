#pragma once
#include "CoreMinimal.h"
#include "ModernScrollbarOnValueUpdatedDelegate.h"
#include "ModernScrollbarProperties.h"
#include "VAltarWidget.h"
#include "VModernScrollbar.generated.h"

class UAnalogSlider;
class UWidget;

UCLASS(Blueprintable, EditInlineNew)
class ALTAR_API UVModernScrollbar : public UVAltarWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FModernScrollbarOnValueUpdated OnScrollbarValueChanged;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FModernScrollbarProperties ScrollbarProperties;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidget* Handle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAnalogSlider* Slider;
    
public:
    UVModernScrollbar();

private:
    UFUNCTION(BlueprintCallable)
    void UpdateValueFromSlider(float Value);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetValue(float NewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetProperties(const FModernScrollbarProperties& NewProperties);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnValueUpdated(float Value);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPropertiesChanged(const FModernScrollbarProperties& Values);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UAnalogSlider* GetSlider() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FModernScrollbarProperties GetProperties() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UWidget* GetHandle() const;
    
};

