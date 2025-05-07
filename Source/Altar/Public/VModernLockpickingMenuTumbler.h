#pragma once
#include "CoreMinimal.h"
#include "CommonUserWidget.h"
#include "ModernLockpickMenuTumblerProperties.h"
#include "VModernLockpickingMenuTumbler.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class ALTAR_API UVModernLockpickingMenuTumbler : public UCommonUserWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FModernLockpickMenuTumblerProperties Properties;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsSolved;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsTumbling;
    
public:
    UVModernLockpickingMenuTumbler();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateAnimation(const float DeltaTime);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetIsTumbling(const bool Value);
    
    UFUNCTION(BlueprintCallable)
    void SetIsSolved(const bool Value);
    
    UFUNCTION(BlueprintCallable)
    void SetInitialMovement(const FModernLockpickMenuTumblerProperties& Value);
    
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
    FModernLockpickMenuTumblerProperties GetInitialMovement() const;
    
    UFUNCTION(BlueprintCallable)
    void ForceTumblerDown();
    
    UFUNCTION(BlueprintCallable)
    bool AttemptSolve();
    
};

