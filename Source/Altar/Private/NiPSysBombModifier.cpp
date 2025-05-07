#include "NiPSysBombModifier.h"

UNiPSysBombModifier::UNiPSysBombModifier() {
    this->BombObject = NULL;
    this->Decay = 0.00f;
    this->DeltaV = 0.00f;
    this->DecayType = EDecayType::DECAY_NONE;
    this->SymmetryType = ESymmetryType::SPHERICAL_SYMMETRY;
}


