#include "VPhysicsControlSettings.h"

FVPhysicsControlSettings::FVPhysicsControlSettings() {
    this->bIsGrabbable = false;
    this->bIsTelekinesisTargetable = false;
    this->bIsAnchored = false;
    this->PhysicsSimulationBehaviour = EVPhysicsSimulationBehaviour::ALWAYS;
    this->PhysicsLoadingBehaviour = EVPhysicsLoadingBehaviour::IGNORE_LOAD;
    this->bDoesRepositionOnLoad = false;
    this->bDoesReattachOnLoad = false;
    this->bDoesRestoreAttachmentAfterSimulation = false;
    this->bDoesUseCCD = false;
    this->bDoesPlayCollisionSound = false;
    this->DefaultSelfSurfaceType = EVDefaultSurfaceType::Armor;
    this->bCanSnapToEnvironment = false;
}

