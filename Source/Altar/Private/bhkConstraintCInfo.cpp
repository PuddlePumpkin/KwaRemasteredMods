#include "bhkConstraintCInfo.h"

UbhkConstraintCInfo::UbhkConstraintCInfo() {
    this->NumEntities = 0;
    this->EntityA = NULL;
    this->EntityB = NULL;
    this->Priority = ConstraintPriority::PRIORITY_INVALID;
}


