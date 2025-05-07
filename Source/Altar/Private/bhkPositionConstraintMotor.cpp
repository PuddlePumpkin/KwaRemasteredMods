#include "bhkPositionConstraintMotor.h"

UbhkPositionConstraintMotor::UbhkPositionConstraintMotor() {
    this->MinForce = 0.00f;
    this->MaxForce = 0.00f;
    this->Tau = 0.00f;
    this->Damping = 0.00f;
    this->ProportionalRecoveryVelocity = 0.00f;
    this->ConstantRecoveryVelocity = 0.00f;
    this->MotorEnabled = false;
}


