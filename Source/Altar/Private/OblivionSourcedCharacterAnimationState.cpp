#include "OblivionSourcedCharacterAnimationState.h"

FOblivionSourcedCharacterAnimationState::FOblivionSourcedCharacterAnimationState() {
    this->UpperBodyAnimGroup = EOblivionAnimGroup::IDLE;
    this->LowerBodyAnimGroup = EOblivionAnimGroup::IDLE;
    this->LeftArmAnimGroup = EOblivionAnimGroup::IDLE;
    this->RightArmAnimGroup = EOblivionAnimGroup::IDLE;
    this->LeftHandAnimGroup = EOblivionAnimGroup::IDLE;
    this->SpecialIdleAnimGroup = EOblivionAnimGroup::IDLE;
    this->MovementType = 0;
    this->MovementDirection = 0;
    this->AnimAction = 0;
    this->UpperBodySequenceIdx = 0;
    this->LowerBodySequenceIdx = 0;
    this->LeftArmSequenceIdx = 0;
    this->RightArmSequenceIdx = 0;
}

