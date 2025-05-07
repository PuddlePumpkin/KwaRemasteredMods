#pragma once
#include "CoreMinimal.h"
#include "StaffAttackData.generated.h"

class UAnimSequenceBase;

USTRUCT(BlueprintType)
struct FStaffAttackData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequenceBase* Attack;
    
    ALTAR_API FStaffAttackData();
};

