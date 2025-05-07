#include "ProceduralInstance.h"

FProceduralInstance::FProceduralInstance() {
    this->Spawner = NULL;
    this->SpawnIndex = 0;
    this->InstanceType = EProceduralInstanceType_InstancedMesh;
    this->StaticMesh = NULL;
    this->OverrideMaterial = NULL;
    this->ActorClass = NULL;
    this->DecalMaterial = NULL;
    this->LightClass = NULL;
    this->Intensity = 0.00f;
    this->AttenuationRadius = 0.00f;
    this->bIsSelectable = false;
    this->CustomNavigableGeometry = EHasCustomNavigableGeometry::No;
    this->bAllowObjectOnTop = false;
    this->InstanceActor = NULL;
    this->Instancer = NULL;
    this->InstanceIndex = 0;
}

