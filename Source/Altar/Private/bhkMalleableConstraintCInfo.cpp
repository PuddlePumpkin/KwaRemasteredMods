#include "bhkMalleableConstraintCInfo.h"

UbhkMalleableConstraintCInfo::UbhkMalleableConstraintCInfo() {
    this->Type = EBHKConstraintType::BALL_AND_SOCKET;
    this->ConstraintInfo = NULL;
    this->BallAndSocket = NULL;
    this->Hinge = NULL;
    this->LimitedHinge = NULL;
    this->Prismatic = NULL;
    this->Ragdoll = NULL;
    this->StiffSpring = NULL;
    this->Tau = 0.00f;
    this->Damping = 0.00f;
    this->Strength = 0.00f;
}


