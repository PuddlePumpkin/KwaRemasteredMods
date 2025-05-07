#include "bhkConstraintMotorCInfo.h"

UbhkConstraintMotorCInfo::UbhkConstraintMotorCInfo() {
    this->Type = hkMotorType::MOTOR_NONE;
    this->PositionMotor = NULL;
    this->VelocityMotor = NULL;
    this->SpringDamperMotor = NULL;
}


