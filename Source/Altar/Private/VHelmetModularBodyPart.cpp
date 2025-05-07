#include "VHelmetModularBodyPart.h"

AVHelmetModularBodyPart::AVHelmetModularBodyPart(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ShouldHideHair = true;
    this->ShouldHideHead = false;
    this->HeadMorphLimitsData = NULL;
}


