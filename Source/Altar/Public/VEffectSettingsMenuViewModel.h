#pragma once
#include "CoreMinimal.h"
#include "ELegacyEffectEntryType.h"
#include "EMordernLockLevel.h"
#include "LegacyEffectCost.h"
#include "LegacyEffectProperties.h"
#include "LegacyScrollbarValueProperties.h"
#include "VViewModelBase.h"
#include "VEffectSettingsMenuViewModel.generated.h"

UCLASS(Blueprintable)
class ALTAR_API UVEffectSettingsMenuViewModel : public UVViewModelBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLegacyEffectProperties EffectProperties;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLegacyEffectCost EffectCost;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsEnchantmentMenu;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ELegacyEffectEntryType FirstButtonType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText FirstButtonText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsDeleteVisible;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsRangeVisible;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsMagnitudeVisible;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsAreaVisible;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsDurationVisible;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsLockLevelVisible;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MagnitudeSelectedValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLegacyScrollbarValueProperties MagnitudeScrollbarProperties;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AreaSelectedValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLegacyScrollbarValueProperties AreaScrollbarProperties;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DurationSelectedValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLegacyScrollbarValueProperties DurationScrollbarProperties;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText RangeText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMordernLockLevel Locklevel;
    
public:
    UVEffectSettingsMenuViewModel();

    UFUNCTION(BlueprintCallable)
    void SetRangeText(const FText& NewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetMagnitudeSelectedValue(float NewSelectedValue);
    
    UFUNCTION(BlueprintCallable)
    void SetMagnitudeScrollbarProperties(const FLegacyScrollbarValueProperties& NewScrollbarProperties);
    
    UFUNCTION(BlueprintCallable)
    void SetLocklevel(const EMordernLockLevel& NewLockValue);
    
    UFUNCTION(BlueprintCallable)
    void SetIsRangeVisible(bool bNewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetIsMagnitudeVisible(bool bNewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetIsLockLevelVisible(bool bNewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetIsEnchantmentMenu(bool bNewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetIsDurationVisible(bool bNewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetIsDeleteVisible(bool bNewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetIsAreaVisible(bool bNewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetFirstButtonType(ELegacyEffectEntryType NewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetFirstButtonText(const FText& NewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetEffectProperties(const FLegacyEffectProperties& NewProperties);
    
    UFUNCTION(BlueprintCallable)
    void SetEffectCost(const FLegacyEffectCost& NewCost);
    
    UFUNCTION(BlueprintCallable)
    void SetDurationSelectedValue(float NewSelectedValue);
    
    UFUNCTION(BlueprintCallable)
    void SetDurationScrollbarProperties(const FLegacyScrollbarValueProperties& NewScrollbarProperties);
    
    UFUNCTION(BlueprintCallable)
    void SetAreaSelectedValue(float NewSelectedValue);
    
    UFUNCTION(BlueprintCallable)
    void SetAreaScrollbarProperties(const FLegacyScrollbarValueProperties& NewScrollbarProperties);
    
    UFUNCTION(BlueprintCallable)
    void RegisterSendClickedSkill();
    
    UFUNCTION(BlueprintCallable)
    void RegisterSendClickedScrollbar(float NewValue, ELegacyEffectEntryType NewScrollbarType);
    
    UFUNCTION(BlueprintCallable)
    void RegisterSendClickedRange();
    
    UFUNCTION(BlueprintCallable)
    void RegisterSendClickedOk();
    
    UFUNCTION(BlueprintCallable)
    void RegisterSendClickedLockLevel();
    
    UFUNCTION(BlueprintCallable)
    void RegisterSendClickedDelete();
    
    UFUNCTION(BlueprintCallable)
    void RegisterSendClickedCancel();
    
    UFUNCTION(BlueprintCallable)
    void RegisterSendClickedAttribute();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetRangeText() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMagnitudeSelectedValue() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FLegacyScrollbarValueProperties GetMagnitudeScrollbarProperties() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EMordernLockLevel GetLocklevel() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsRangeVisible() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsMagnitudeVisible() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsLockLevelVisible() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsEnchantmentMenu() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsDurationVisible() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsDeleteVisible() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsAreaVisible() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ELegacyEffectEntryType GetFirstButtonType() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetFirstButtonText() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FLegacyEffectProperties GetEffectProperties() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FLegacyEffectCost GetEffectCost() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetDurationSelectedValue() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FLegacyScrollbarValueProperties GetDurationScrollbarProperties() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetAreaSelectedValue() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FLegacyScrollbarValueProperties GetAreaScrollbarProperties() const;
    
};

