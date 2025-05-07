#include "bhkSpringDamperConstraintMotor.h"

UbhkSpringDamperConstraintMotor::UbhkSpringDamperConstraintMotor() {
    this->MinForce = 0.00f;
    this->MaxForce = 0.00f;
    this->SpringConstant = 0.00f;
    this->SpringDamping = 0.00f;
    this->MotorEnabled = false;
}


