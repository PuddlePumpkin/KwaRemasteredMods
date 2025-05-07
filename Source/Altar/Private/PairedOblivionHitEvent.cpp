#include "PairedOblivionHitEvent.h"

FPairedOblivionHitEvent::FPairedOblivionHitEvent() {
    //this->Attacker = NULL;
    //this->Target = NULL;
    this->HealthDamage = 0.00f;
    this->FatigueDamage = 0.00f;
    this->BlockedPercentage = 0.00f;
    this->bIsBowAttack = false;
    this->bIsSpellAttack = false;
    this->bDoesTargetBlockHit = false;
    this->bDoesTargetPerformBlockAttack = false;
    this->bIsTargetStaggered = false;
    this->bIsTargetKnockedDown = false;
    this->bDoesAttackerRecoil = false;
    this->bIsTargetAliveAfterAttack = false;
    this->bIsSneakAttack = false;
    this->KnockbackForce = 0.00f;
}

