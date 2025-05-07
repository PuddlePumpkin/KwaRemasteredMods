#include "NiParticlesData.h"

UNiParticlesData::UNiParticlesData() {
    this->ParticleRadius = 0.00f;
    this->HasRadii = false;
    this->NumActive = 0;
    this->HasSizes = false;
    this->HasRotations = false;
    this->HasRotationAngles = false;
    this->HasRotationAxes = false;
    this->HasTextureIndices = false;
    this->NumSubtextureOffsetsUint = 0;
    this->NumSubtextureOffsetsByte = 0;
    this->AspectRatio = 0.00f;
    this->AspectFlags = (EAspectFlags)0;
    this->SpeedToAspectAspect2 = 0.00f;
    this->SpeedToAspectSpeed1 = 0.00f;
    this->SpeedToAspectSpeed2 = 0.00f;
}


