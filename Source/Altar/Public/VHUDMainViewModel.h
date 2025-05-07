#pragma once
#include "CoreMinimal.h"
#include "CompassIconMarker.h"
#include "HostileData.h"
#include "LegacyMapMenuQuestProperties.h"
#include "ModernApparelData.h"
#include "ModernSkillProgression.h"
#include "OnDirectionalBloodDropUpdatedDelegate.h"
#include "OnFatigueBarBlinkTriggeredDelegate.h"
#include "OnMagickaBarBlinkTriggeredDelegate.h"
#include "VViewModelBase.h"
#include "WeaponChargeParams.h"
#include "VHUDMainViewModel.generated.h"

class UTexture2D;

UCLASS(Blueprintable)
class ALTAR_API UVHUDMainViewModel : public UVViewModelBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HealthBarValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MagickaBarValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FatigueBarValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CurrentMagickaValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxMagickaValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CompassDirectionValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ThirdPersonCompassOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bLevelUpIconVisibility;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* WeaponIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 WeaponStatus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* SpellIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WeaponHealth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WeaponAmmo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText RegionText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsRegionNewlyDiscovered;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UTexture2D*> EffectsIcons;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<double> EffectsTimeLeft;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanBeCast;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsMenuMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCompassIconMarker> CompassIconMarkers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHostileData> HostileData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLegacyMapMenuQuestProperties ActiveQuest;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsOverencumbered;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsBrokenWeaponVisible;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsWeaponChargeVisible;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWeaponChargeParams WeaponChargeParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsHealthBarBlinking;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsTrespassing;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FModernApparelData ApparelData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FModernSkillProgression SkillProgression;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldDisplayBloodVignette;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FText> DiscoveredAreas;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnMagickaBarBlinkTriggered OnMagickaBarBlinkTriggered;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnFatigueBarBlinkTriggered OnFatigueBarBlinkTriggered;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnDirectionalBloodDropUpdated OnDirectionalBloodDropUpdated;
    
public:
    UVHUDMainViewModel();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ThisIsForPluginCompliance() const;
    
    UFUNCTION(BlueprintCallable)
    void SetIsMenuMode(bool bNewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetHostileData(const TArray<FHostileData>& InHostileData);
    
    UFUNCTION(BlueprintCallable)
    void SetCompassIconMarkers(const TArray<FCompassIconMarker>& IconMarkers);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetWeaponStatus() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UTexture2D* GetWeaponIcon() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetWeaponHealth() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetWeaponChargeVisibility() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FWeaponChargeParams GetWeaponChargeParams() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetWeaponAmmo() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetThirdPersonCompassOffset() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UTexture2D* GetSpellIcon() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FModernSkillProgression GetSkillProgression() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetShouldDisplayBloodVignette() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetRegionText() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetOverencumberedVisibility() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetNewlyDiscovered() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMaxMagickaValue() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMagickaBarValue() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetLevelUpIconVisibility() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsTrespassing() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsMenuMode() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsHealthBarBlinking() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FHostileData> GetHostileData() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetHealthBarValue() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetFatigueBarValue() const;
    
    UFUNCTION(BlueprintPure)
    TArray<double> GetEffectsTimeLeft() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UTexture2D*> GetEffectsIcons() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCurrentMagickaValue() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FCompassIconMarker> GetCompassIconMarkers() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCompassDirectionValue() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetCanBeCast() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetBrokenWeaponVisibility() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FModernApparelData GetApparelData() const;
    
    UFUNCTION(BlueprintCallable)
    float ComputeRelativeMarkerXPosition(const FCompassIconMarker& CompassIconMarker, float Heading);
    
    UFUNCTION(BlueprintCallable)
    float ComputeCompassMarkerXPosition(const FCompassIconMarker& CompassIconMarker, float Heading, float Ratio);
    
    UFUNCTION(BlueprintCallable)
    bool CheckForNewArea(const FText& AreaName);
    
};

