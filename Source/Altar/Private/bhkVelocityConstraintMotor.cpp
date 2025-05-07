#include "bhkVelocityConstraintMotor.h"

UbhkVelocityConstraintMotor::UbhkVelocityConstraintMotor() {
    this->MinForce = 0.00f;
    this->MaxForce = 0.00f;
    this->Tau = 0.00f;
    this->TargetVelocity = 0.00f;
    this->UseVelocityTarget = false;
    this->MotorEnabled = false;
}


