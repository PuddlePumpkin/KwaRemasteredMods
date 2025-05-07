#include "VRingModularBodyPart.h"

AVRingModularBodyPart::AVRingModularBodyPart(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ThirdPersonRightRingSocketName = TEXT("ring_02_r");
    this->ThirdPersonLeftRingSocketName = TEXT("ring_02_l");
    this->FirstPersonRightRingSocketName = TEXT("ring_02_r");
    this->FirstPersonLeftRingSocketName = TEXT("ring_02_l");
}


