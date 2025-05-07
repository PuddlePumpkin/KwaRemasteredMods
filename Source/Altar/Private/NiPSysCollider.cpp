#include "NiPSysCollider.h"

UNiPSysCollider::UNiPSysCollider() {
    this->Bounce = 0.00f;
    this->SpawnOnCollide = false;
    this->DieOnCollide = false;
    this->SpawnModifier = NULL;
    this->Parent = NULL;
    this->NextCollider = NULL;
    this->ColliderObject = NULL;
}


