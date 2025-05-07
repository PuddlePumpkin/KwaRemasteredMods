#pragma once
#include "CoreMinimal.h"
#include "MeleeAttackComboAnimationData.h"
#include "VPrepareAttackAnimInstance.h"
#include "VMeleeAttackComboAnimInstance.generated.h"

class UAnimSequence;

UCLASS(Blueprintable, NonTransient)
class ALTAR_API UVMeleeAttackComboAnimInstance : public UVPrepareAttackAnimInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMeleeAttackComboAnimationData LayerData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequence* CurrentAttackAnimSequence;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanEnterAttack1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanEnterAttack2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanEnterAttack3;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanEnterAttack4;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsPlayingPowerAttackMontage;
    
public:
    UVMeleeAttackComboAnimInstance();

};

