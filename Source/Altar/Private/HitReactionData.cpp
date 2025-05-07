#include "HitReactionData.h"

FHitReactionData::FHitReactionData() {
    this->HitReactForceLight = 0.00f;
    this->HitReactForceHeavy = 0.00f;
    this->HitReactForceProjectile = 0.00f;
    this->HitReactForceSpell = 0.00f;
    this->ReactDuration = 0.00f;
    this->RecoverDuration = 0.00f;
    this->bUseGravity = false;
}

