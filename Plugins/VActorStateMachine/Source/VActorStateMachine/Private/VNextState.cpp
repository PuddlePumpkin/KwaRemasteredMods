#include "VNextState.h"

FVNextState::FVNextState() {
    this->TargetState = NULL;
    this->ExtendedConditionType = FVExtendedConditionType::EXT_COND_AND;
    this->TargetStateInstance = NULL;
}

