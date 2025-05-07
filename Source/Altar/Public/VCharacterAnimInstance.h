#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "ECharacterAttackMove.h"
#include "ECharacterType.h"
#include "EOblivionAnimSection.h"
#include "OblivionSourcedCharacterAnimationState.h"
#include "VCharacterAnimInstance.generated.h"

class UAnimSequence;
class UAnimSequenceBase;
class UAnimationAsset;
class UVAnimationPairingComponent;
class UVCharacterStatePairingComponent;
class UVWeaponsPairingComponent;

UCLASS(Blueprintable, NonTransient)
class ALTAR_API UVCharacterAnimInstance : public UAnimInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVAnimationPairingComponent* LinkedAnimationPairingComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVCharacterStatePairingComponent* LinkedCharacterStatePairingComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVWeaponsPairingComponent* LinkedWeaponsPairingComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECharacterType CharacterType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float VerticalAxis;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HorizontalAxis;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TurningAxis;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsReleaseBowShoot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bBowAttack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bBowAttackFollowUp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SequenceIdx;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bFreezeAttack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOblivionFrameSkip;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsPowerAttack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsOnDynamicIdle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsOnSpecialIdle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldBeMoving;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CurrentSpecialIdleBlendTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsSpecialIdleBlend;
    
public:
    UVCharacterAnimInstance();

private:
    UFUNCTION(BlueprintCallable)
    void UpdateInternalStateMachine(FOblivionSourcedCharacterAnimationState OldState, FOblivionSourcedCharacterAnimationState NewState);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnUnequipStarted();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnStaggered();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSpecialIdleAnimationStart(UAnimSequenceBase* Animation);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnSpecialIdleAnimation_WantToMove(bool ShouldBeMoving);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnRecoil();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnEquipStarted();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnDynamicIdleAnimationChange(UAnimSequence* Animation);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnDodgeRight();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnDodgeLeft();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnDodgeForward();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnDodgeBackward();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnCastSpellTouch(uint8 Arm);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnCastSpellSelf(uint8 Arm);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnCastSpellRanged(uint8 Arm);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnBlockHit();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnBlockAttack();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnAttackStarted(ECharacterAttackMove AttackMove);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnAnimationStateChanged(FOblivionSourcedCharacterAnimationState OldState, FOblivionSourcedCharacterAnimationState NewState);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnAnimationSkip(EOblivionAnimSection Section);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetBlendTimeFromSequence(UAnimationAsset* AnimSequence);
    
};

