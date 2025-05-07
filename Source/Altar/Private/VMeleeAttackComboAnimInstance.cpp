#include "VMeleeAttackComboAnimInstance.h"

UVMeleeAttackComboAnimInstance::UVMeleeAttackComboAnimInstance() {
    this->CurrentAttackAnimSequence = NULL;
    this->bCanEnterAttack1 = false;
    this->bCanEnterAttack2 = false;
    this->bCanEnterAttack3 = false;
    this->bCanEnterAttack4 = false;
    this->bIsPlayingPowerAttackMontage = false;
}


