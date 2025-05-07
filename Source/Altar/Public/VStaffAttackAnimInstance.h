#pragma once
#include "CoreMinimal.h"
#include "StaffAttackData.h"
#include "VBaseStaffAttackAnimInstance.h"
#include "VStaffAttackAnimInstance.generated.h"

UCLASS(Blueprintable, NonTransient)
class ALTAR_API UVStaffAttackAnimInstance : public UVBaseStaffAttackAnimInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStaffAttackData AnimSet;
    
public:
    UVStaffAttackAnimInstance();

};

