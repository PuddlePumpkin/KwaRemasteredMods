#include "VStatusEffectTarget.h"

AVStatusEffectTarget::AVStatusEffectTarget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bIsVFXLocatedOnSkeletalMesh = false;
    this->VFXLocationStaticMesh = NULL;
    this->VFXLocationSkeletalMesh = NULL;
}


