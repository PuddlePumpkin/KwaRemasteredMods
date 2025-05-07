#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "ELegacyHudReticleIcon.h"
#include "EModernReticleWeaponBehavior.h"
#include "LegacyReticleEnemyHealthProperties.h"
#include "LegacyReticleSneakingProperties.h"
#include "OnAimingCrosshairTriggeredDelegate.h"
//#include "OnHitCrosshairTriggeredDelegate.h"
//#include "PairedOblivionHitEvent.h"
#include "VViewModelBase.h"
#include "VHUDReticleViewModel.generated.h"

UCLASS(Blueprintable)
class ALTAR_API UVHUDReticleViewModel : public UVViewModelBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ELegacyHudReticleIcon ReticleIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsStealing;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText NPCName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLegacyReticleEnemyHealthProperties EnemyHealthProperties;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLegacyReticleSneakingProperties SneakingProperties;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SneakDetectionLevel;
    
    //UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    //FOnHitCrosshairTriggered OnHitCrosshairTriggered;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnAimingCrosshairTriggered OnAimingCrosshairTriggered;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EModernReticleWeaponBehavior ReticleWeaponBehavior;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsMenuMode;
    
public:
    UVHUDReticleViewModel();

    //UFUNCTION(BlueprintCallable)
    //void TriggerHitCrosshairAnimation(const FPairedOblivionHitEvent& HitEvent);
    
    UFUNCTION(BlueprintCallable)
    void SetWeaponTag(FGameplayTag NewWeaponTag);
    
    UFUNCTION(BlueprintCallable)
    void SetSneakingProperties(const FLegacyReticleSneakingProperties& NewSneakingProperties);
    
    UFUNCTION(BlueprintCallable)
    void SetSneakDetectionLevel(const float Detection);
    
    UFUNCTION(BlueprintCallable)
    void SetReticleWeaponBehavior(EModernReticleWeaponBehavior newReticleWeaponBehavior);
    
    UFUNCTION(BlueprintCallable)
    void SetReticleIcon(ELegacyHudReticleIcon NewReticleIcon);
    
    UFUNCTION(BlueprintCallable)
    void SetNPCName(const FText& NewNpcName);
    
    UFUNCTION(BlueprintCallable)
    void SetIsStealing(bool bNewIsStealing);
    
    UFUNCTION(BlueprintCallable)
    void SetIsMenuMode(bool bNewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetEnemyHealthProperties(const FLegacyReticleEnemyHealthProperties& NewEnemyHealthProperties);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGameplayTag GetWeaponTag() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetSneakingProperties() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetSneakingLevel() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetSneakDetectionLevel() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EModernReticleWeaponBehavior GetReticleWeaponBehavior() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ELegacyHudReticleIcon GetReticleIcon() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetNPCName() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsStealing() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsMenuMode() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FLegacyReticleEnemyHealthProperties GetEnemyHealthProperties() const;
    
};

