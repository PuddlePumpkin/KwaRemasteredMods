#include "NiParticleSystem.h"

UNiParticleSystem::UNiParticleSystem() {
    this->FarBegin = 0;
    this->FarEnd = 0;
    this->NearBegin = 0;
    this->NearEnd = 0;
    this->DataNiParticleSystem = NULL;
    this->WorldSpace = false;
    this->NumModifiers = 0;
}


