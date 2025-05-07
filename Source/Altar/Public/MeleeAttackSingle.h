#pragma once
#include "CoreMinimal.h"
#include "MeleeAttackSingle.generated.h"

class UAnimMontage;
class UAnimSequence;

USTRUCT(BlueprintType)
struct FMeleeAttackSingle {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequence* AttackRight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequence* AttackLeft;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* PowerAttack;
    
    ALTAR_API FMeleeAttackSingle();
};

