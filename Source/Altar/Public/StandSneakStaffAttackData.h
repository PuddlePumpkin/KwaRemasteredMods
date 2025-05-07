#pragma once
#include "CoreMinimal.h"
#include "StandSneakStaffAttackData.generated.h"

class UAnimSequenceBase;

USTRUCT(BlueprintType)
struct FStandSneakStaffAttackData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequenceBase* Attack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequenceBase* SneakAttack;
    
    ALTAR_API FStandSneakStaffAttackData();
};

