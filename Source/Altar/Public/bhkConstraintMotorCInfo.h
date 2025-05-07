#pragma once
#include "CoreMinimal.h"
#include "NifType.h"
#include "hkMotorType.h"
#include "bhkConstraintMotorCInfo.generated.h"

class UbhkPositionConstraintMotor;
class UbhkSpringDamperConstraintMotor;
class UbhkVelocityConstraintMotor;

UCLASS(Blueprintable)
class ALTAR_API UbhkConstraintMotorCInfo : public UNifType {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    hkMotorType Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UbhkPositionConstraintMotor* PositionMotor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UbhkVelocityConstraintMotor* VelocityMotor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UbhkSpringDamperConstraintMotor* SpringDamperMotor;
    
    UbhkConstraintMotorCInfo();

};

