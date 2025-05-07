#include "VPhysicsControllableState.h"

FVPhysicsControllableState::FVPhysicsControllableState() {
    this->bIsStateValid = false;
    this->bIsSimulatingPhysics = false;
    this->AttachParentFormID = 0;
    this->Timestamp = 0.00f;
}

