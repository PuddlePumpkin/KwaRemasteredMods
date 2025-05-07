#pragma once
#include "CoreMinimal.h"
#include "StandSwimMeleeAttackSimple.generated.h"

class UAnimMontage;
class UAnimSequence;

USTRUCT(BlueprintType)
struct FStandSwimMeleeAttackSimple {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequence* AttackRight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequence* AttackLeft;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* PowerAttack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequence* SwimAttackRight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequence* SwimAttackLeft;
    
    ALTAR_API FStandSwimMeleeAttackSimple();
};

