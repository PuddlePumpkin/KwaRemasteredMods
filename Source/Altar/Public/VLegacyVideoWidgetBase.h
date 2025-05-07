#pragma once
#include "CoreMinimal.h"
#include "FLegacyVideoSettingsEnum.h"
#include "VAltarWidget.h"
#include "VLegacyVideoWidgetBase.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class ALTAR_API UVLegacyVideoWidgetBase : public UVAltarWidget {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FLegacyVideoUintUpdated, FLegacyVideoSettingsEnum, Setting, uint8, Value);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FLegacyVideoFloatUpdated, FLegacyVideoSettingsEnum, Setting, float, Value);
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLegacyVideoUintUpdated OnUintUpdated;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLegacyVideoFloatUpdated OnFloatUpdated;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Label;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLegacyVideoSettingsEnum SettingName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FText> Options;
    
public:
    UVLegacyVideoWidgetBase();

protected:
    UFUNCTION(BlueprintCallable)
    void TriggerOnUintUpdated(FLegacyVideoSettingsEnum Setting, uint8 Value);
    
    UFUNCTION(BlueprintCallable)
    void TriggerOnFloatUpdated(FLegacyVideoSettingsEnum Setting, float Value);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetUintValue(const uint8 Value);
    
    UFUNCTION(BlueprintCallable)
    void SetSettingName(const FLegacyVideoSettingsEnum Value);
    
    UFUNCTION(BlueprintCallable)
    void SetOptions(const TArray<FText>& Value);
    
    UFUNCTION(BlueprintCallable)
    void SetLabel(const FText& Value);
    
    UFUNCTION(BlueprintCallable)
    void SetFloatValue(const float Value);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnUintValueUpdatedInternal(const uint8 Value);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnOptionsUpdatedInternal(const TArray<FText>& Value);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnLabelUpdatedInternal(const FText& Value);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnFloatValueUpdatedInternal(const float Value);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FLegacyVideoSettingsEnum GetSettingName();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FText> GetOptions();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetLabel() const;
    
};

