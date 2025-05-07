#include "VWaterVolume.h"

AVWaterVolume::AVWaterVolume(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bWaterVolume = true;
    this->bPhysicsOnContact = true;
}


