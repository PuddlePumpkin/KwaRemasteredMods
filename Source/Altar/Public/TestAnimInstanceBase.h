#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Animation/AnimInstance.h"
#include "AnimCharacterAttackStartInfo.h"
#include "AttackMovesetItem.h"
#include "EAttackActionType.h"
#include "MeleeAttackDamageEvent.h"
#include "OnDamageSectionEndDelegateDelegate.h"
#include "OnDamageSectionStartDelegateDelegate.h"
#include "OnJumpStartedDelegateDelegate.h"
#include "TestAnimInstanceBase.generated.h"

class UAnimSequence;

UCLASS(Blueprintable, NonTransient)
class ALTAR_API UTestAnimInstanceBase : public UAnimInstance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnJumpStartedDelegate OnJumpStarted;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnDamageSectionStartDelegate OnDamageSectionStart;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnDamageSectionEndDelegate OnDamageSectionEnd;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FullJogSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequence* JumpAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HitReactionPhysicsBlendDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HitReactionPhysicsImpulseMagnitude;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> HitReactionIgnoredBones;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D CurrentTargetSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsFalling;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D CurrentEffectiveSpeed;
    
public:
    UTestAnimInstanceBase();

protected:
    UFUNCTION(BlueprintCallable)
    void StartPhysicsBlendFromBone(FName BoneName, float Duration, FVector StartImpulse);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SignalFallStarted();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SignalFallEnded();
    
    UFUNCTION(BlueprintCallable)
    void SetTargetRightSpeed(float TargetSpeed);
    
    UFUNCTION(BlueprintCallable)
    void SetTargetForwardSpeed(float TargetSpeed);
    
    UFUNCTION(BlueprintCallable)
    void ResetAttackChain();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ProcessDamageReaction(float Damage, const FMeleeAttackDamageEvent& DamageEvent);
    
    UFUNCTION(BlueprintCallable)
    void PlayJumpAnimation();
    
    UFUNCTION(BlueprintCallable)
    void DisallowNextAttack();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    TArray<FAttackMovesetItem> ChooseNextAttackMoveset(EAttackActionType AttackActionType, FAnimCharacterAttackStartInfo AttackStartInfo);
    
public:
    UFUNCTION(BlueprintCallable)
    bool AttemptAttackAnimation(EAttackActionType AttackActionType, FAnimCharacterAttackStartInfo AttackStartInfo);
    
    UFUNCTION(BlueprintCallable)
    void AllowNextAttack();
    
};

