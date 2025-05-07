#include "VAIControllerCombatData.h"

FVAIControllerCombatData::FVAIControllerCombatData() {
    this->fAcceptanceRadius = 0.00f;
    this->TargetActor = NULL;
    this->Strategy = EVOblivionStrategy::HANDTOHAND;
    this->Maneuver = EVOblivionManeuver::ENGAGE;
    this->CombatState = EVOblivionCombatState::ATTACK;
    this->bCanReachTarget = false;
}

