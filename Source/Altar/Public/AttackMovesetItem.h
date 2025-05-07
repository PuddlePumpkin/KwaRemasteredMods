#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "AttackMovesetItem.generated.h"

class UAnimSequence;

USTRUCT(BlueprintType)
struct FAttackMovesetItem : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequence* AnimationSequence;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SpeedModifier;
    
    ALTAR_API FAttackMovesetItem();
};

