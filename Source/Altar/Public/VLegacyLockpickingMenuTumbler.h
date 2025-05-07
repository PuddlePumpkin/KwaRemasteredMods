#pragma once
#include "CoreMinimal.h"
#include "LegacyLockpickMenuTumblerProperties.h"
#include "VAltarWidget.h"
#include "VLegacyLockpickingMenuTumbler.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class ALTAR_API UVLegacyLockpickingMenuTumbler : public UVAltarWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLegacyLockpickMenuTumblerProperties Properties;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsSolved;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsTumbling;
    
public:
    UVLegacyLockpickingMenuTumbler();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateAnimation(const float DeltaTime);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetIsTumbling(const bool Value);
    
    UFUNCTION(BlueprintCallable)
    void SetIsSolved(const bool Value);
    
    UFUNCTION(BlueprintCallable)
    void SetInitialMovement(const FLegacyLockpickMenuTumblerProperties& Value);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayOnFallEffects();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayIsSolvedEffects();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayInitialMovementEffects();
    
    UFUNCTION(BlueprintCallable)
    float GetNextAnimationTime(const float DeltaTime);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsTumbling() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsSolved() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FLegacyLockpickMenuTumblerProperties GetInitialMovement() const;
    
    UFUNCTION(BlueprintCallable)
    bool AttemptSolve();
    
};

