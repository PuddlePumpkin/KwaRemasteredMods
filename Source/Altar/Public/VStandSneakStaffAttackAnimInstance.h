#pragma once
#include "CoreMinimal.h"
#include "StandSneakStaffAttackData.h"
#include "VBaseStaffAttackAnimInstance.h"
#include "VStandSneakStaffAttackAnimInstance.generated.h"

UCLASS(Blueprintable, NonTransient)
class ALTAR_API UVStandSneakStaffAttackAnimInstance : public UVBaseStaffAttackAnimInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStandSneakStaffAttackData AnimSet;
    
public:
    UVStandSneakStaffAttackAnimInstance();

};

