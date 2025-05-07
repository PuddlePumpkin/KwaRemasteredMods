#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "ECharacterCombatIdles.h"
#include "VInventoryCharacterAnimInstance.generated.h"

class UVAnimationPairingComponent;

UCLASS(Blueprintable, NonTransient)
class ALTAR_API UVInventoryCharacterAnimInstance : public UAnimInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVAnimationPairingComponent* LinkedAnimationPairingComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bTorchVisible;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShieldVisible;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECharacterCombatIdles CombatPose;
    
public:
    UVInventoryCharacterAnimInstance();

    UFUNCTION(BlueprintCallable)
    void SetCombatPose();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnEquippedWeaponChanged(int32 WeaponType, bool bHasShield, bool bHasTorch);
    
};

