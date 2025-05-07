#include "NiPSysMeshEmitter.h"

UNiPSysMeshEmitter::UNiPSysMeshEmitter() {
    this->NumEmitterMeshes = 0;
    this->InitialVelocityType = EVelocityType::VELOCITY_USE_NORMALS;
    this->EmissionType = EEmitFrom::EMIT_FROM_VERTICES;
}


