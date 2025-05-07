#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "EOblivionCombatMoveset.h"
#include "OblivionSourcedCharacterAnimationState.h"
#include "VOblivionCharacterAnimInstance.generated.h"

class UVAnimationPairingComponent;
class UVCharacterStatePairingComponent;

UCLASS(Blueprintable, NonTransient)
class ALTAR_API UVOblivionCharacterAnimInstance : public UAnimInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AttackChainingPeriod;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVAnimationPairingComponent* LinkedAnimationPairingComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVCharacterStatePairingComponent* LinkedCombatPairingComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BackwardForwardMovementAxis;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LeftRightMovementAxis;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsRunning;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsCrouching;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EOblivionCombatMoveset CombatMoveset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ChainedAttackCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeSinceLastAttack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsBlocking;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPosePairingForced;
    
public:
    UVOblivionCharacterAnimInstance();

    UFUNCTION(BlueprintCallable)
    void SetForcePosePairing(bool ForcePosePairing);
    
    UFUNCTION(BlueprintCallable)
    void SetCombatMoveset(EOblivionCombatMoveset Moveset);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnUnequipStarted();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnLanded();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnJumpStarted();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnEquipStarted();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnCastSpellTouch();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnCastSpellSelf();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnCastSpellRanged();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnAttackStarted();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnAnimationStateChange(FOblivionSourcedCharacterAnimationState OldState, FOblivionSourcedCharacterAnimationState NewState);
    
};

